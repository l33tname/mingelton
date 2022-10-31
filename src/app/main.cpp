#include <cassert>
#include <iostream>
#include <string>
#include <dlfcn.h>
#include <shared/ConcreteSingleton.h>
#include <shared/Simpleton.h>


int main() {
    using namespace std;

    auto* plugin_handle = dlopen("libplugin.so", RTLD_NOW|RTLD_GLOBAL);
    assert(plugin_handle);

    {
        cout << "ConcreteSingleton:\n";

        auto* instance = reinterpret_cast<void const*(*)()>(dlsym(plugin_handle, "instance"));
        auto* get = reinterpret_cast<std::string(*)()>(dlsym(plugin_handle, "get"));
        auto* set = reinterpret_cast<void(*)(std::string)>(dlsym(plugin_handle, "set"));

        cout << " app=" << &ConcreteSingleton::GetInstance() << " plugin=" << instance() << '\n';
        cout << " value=" << ConcreteSingleton::GetInstance().value << " get=" << get() << '\n';
        set("updated value");
        cout << " value=" << ConcreteSingleton::GetInstance().value << " get=" << get() << '\n';
    }

    {
        cout << "Simpleton:\n";

        auto* simple_instance = reinterpret_cast<void const*(*)()>(dlsym(plugin_handle, "simple_instance"));
        auto* simple_get = reinterpret_cast<std::string(*)()>(dlsym(plugin_handle, "simple_get"));
        auto* simple_set = reinterpret_cast<void(*)(std::string)>(dlsym(plugin_handle, "simple_set"));

        cout << " app=" << &Simpleton::GetInstance() << " plugin=" << simple_instance() << '\n';
        cout << " value=" << Simpleton::GetInstance().value << " get=" << simple_get() << '\n';
        simple_set("updated simple value");
        cout << " value=" << Simpleton::GetInstance().value << " get=" << simple_get() << '\n';
    }
}
