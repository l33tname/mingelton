#include "Simpleton.h"

Simpleton& Simpleton::GetInstance() {
    static Simpleton instance_{};
    return instance_;
}
