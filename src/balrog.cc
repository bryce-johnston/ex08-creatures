#include "balrog.h"
#include <iostream>
#include <random>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    int Balrog::getDamage() const{
        int damage = Demon::getDamage();
        int damage2 = (rand() % getStrength()) + 1;
        std::cout << "Balrog speed attack inflicts " << damage2 << "additional damage points!" << std::endl;
        damage = damage + damage2;
        return damage;
    }
    const std::string &Balrog::getSpecies() const {
        return "Balrog";
    }
}}}}