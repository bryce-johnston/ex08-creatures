
#ifndef EX08_CREATURES_HUMAN_H
#define EX08_CREATURES_HUMAN_H

#include <cstdint>
#include <string>
#include "creature.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    class Human: public Creature{
        virtual const std::string &getSpecies() const = 0;
    };
}}}}

#endif //EX08_CREATURES_HUMAN_H
