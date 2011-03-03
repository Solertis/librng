#ifndef __LIB_RNG_JLKISS64_HEADER__
#define __LIB_RNG_JLKISS64_HEADER__
#pragma once

#include <stdint.h>
#include "rng.h"

class JLKISS64 : public RNG {
        public:
                JLKISS64();
                RNG split();
                void seed(RNG*);
                uint64_t get_uint64();
                uint32_t get_uint32();
                bool get_bool();
        private:
                void fill_buffer();
                uint64_t _x, _y;
                uint32_t _z1, _z2, _c1, _c2;
};

#endif