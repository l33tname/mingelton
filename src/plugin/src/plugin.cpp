#include "plugin.h"
#include <shared/ConcreteSingleton.h>
#include <shared/Simpleton.h>

void const* instance() {
    return &ConcreteSingleton::GetInstance();
}

std::string get() {
    return ConcreteSingleton::GetInstance().value;
}

void set(std::string newvalue) {
    ConcreteSingleton::GetInstance().value = newvalue;
}

void const* simple_instance() {
    return &Simpleton::GetInstance();
}

std::string simple_get() {
    return Simpleton::GetInstance().value;
}

void simple_set(std::string newvalue) {
    Simpleton::GetInstance().value = newvalue;
}
