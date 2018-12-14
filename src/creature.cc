//
// Created by aknight on 8/5/18.
//

#include "creature.h"

#include <random>
#include <chrono>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {

    int Creature::getDamage() const {
        std::mt19937 generator(std::chrono::system_clock::now().time_since_epoch().count());
        std::uniform_int_distribution<int> damageDistribution(1, strength);
        return damageDistribution(generator);
    }
}}}}