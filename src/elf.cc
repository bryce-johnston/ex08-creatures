#include "elf.h"
#include <iostream>
#include <random>

namespace edu { namespace vcccd { namespace vc { namespace csv13 {
    int Elf::getDamage() const {
        int damage = Creature::getDamage();
        if((rand() % 10) == 0){
            std::cout << "Magical attack inflicts " << damage << "additional damage points!" << std::endl;
            damage = damage * 2;
        }
        return damage;
    }
    const std::string &Elf::getSpecies() const {
        return "Elf";
    }
}}}}