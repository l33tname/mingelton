#pragma once
#include <string>

struct Simpleton {
    static Simpleton& GetInstance();
    std::string value{"simple"};

    Simpleton() = delete;
    Simpleton &operator=(Simpleton&&) = delete;
};
