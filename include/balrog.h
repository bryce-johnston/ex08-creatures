
#ifndef EX08_CREATURES_BALROG_H
#define EX08_CREATURES_BALROG_H

#include <cstdint>
#include <string>
#include "demon.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    class Balrog: public Demon{
        virtual int getDamage() const;
        virtual const std::string &getSpecies() const = 0;
    };
}}}}

#endif //EX08_CREATURES_BALROG_H
