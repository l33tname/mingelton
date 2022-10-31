#pragma once

#include <string>

extern "C" void const* instance();
extern "C" std::string get();
extern "C" void set(std::string);

extern "C" void const* simple_instance();
extern "C" std::string simple_get();
extern "C" void simple_set(std::string);
