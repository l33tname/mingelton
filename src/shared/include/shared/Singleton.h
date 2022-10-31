#pragma once
#include <memory>

template <typename T>
struct Singleton {

    using unique_ptr = std::unique_ptr<T>;

    static T& GetInstance() {
        if (not instance_)
            instance_.reset(new T{});
        return *instance_;
    }

    Singleton &operator=(Singleton&&) = delete;

  protected:
    Singleton() = default;

  private:
    static unique_ptr instance_;
};

#define DEFINE_SINGLETON_INSTANCE(x) \
    template <> Singleton<x>::unique_ptr Singleton<x>::instance_{}
