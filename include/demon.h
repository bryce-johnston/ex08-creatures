
#ifndef EX08_CREATURES_DEMON_H
#define EX08_CREATURES_DEMON_H
#include "creature.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    class Demon: public Creature{
    protected:
        virtual int getDamage() const;
    };
}}}}
#endif //EX08_CREATURES_DEMON_H
