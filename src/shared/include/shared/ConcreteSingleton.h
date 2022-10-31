#pragma once

#include <string>
#include "Singleton.h"


struct ConcreteSingleton : Singleton<ConcreteSingleton>
{
    std::string value{"default"};

  private:
    ConcreteSingleton() = default;
    friend Singleton<ConcreteSingleton>;
};
