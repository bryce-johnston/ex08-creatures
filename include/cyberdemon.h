
#ifndef EX08_CREATURES_CYBERDEMON_H
#define EX08_CREATURES_CYBERDEMON_H

#include <cstdint>
#include <string>
#include "demon.h"

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
                class Cyberdemon: public Demon{
                    virtual int getDamage() const;
                    virtual const std::string &getSpecies() const = 0;
                };
            }}}}

#endif //EX08_CREATURES_CYBERDEMON_H
