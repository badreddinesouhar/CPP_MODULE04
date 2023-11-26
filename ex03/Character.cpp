/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:02:27 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 14:06:29 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    _name = "character";
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
        starch[i] = NULL;
    } 
    // std::cout << "default constractor has been called" << std::endl;
}

Character::~Character() {
    for(int i = 0; i < 4; i++ ) {
        if(starch[i])
            delete starch[i];
    }
    for (int i = 0; i < 4; i++) {
        if(inventory[i])
            delete inventory[i];
    }
    // std::cout << _name << " is destroyed" << std::endl;
}

Character::Character(std::string name) {
    _name = name;
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
    std::cout << name << " is constracted" << std::endl;
}

std::string const &Character::getName() const {
    return _name;
}

Character::Character(const Character& copy) {
    this->_name = copy.getName();
}

Character& Character::operator=(const Character& character) {
    this->_name = character.getName();
    return (*this);
}

void Character::equip(AMateria *m) {
    if (!m)
        return;
    for (int i = 0; i < 4; i++) {
        if (!inventory[i]) {
            inventory[i] = m->clone();
            return;
        }
    }
    for(int i = 0; i < 4; i++ ) {
        if(starch[i])
            delete starch[i];
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        for (int i = 0; i < 4; i++) {
            if (starch[i] == NULL)
                starch[i] = inventory[idx];
        }
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4) {
        if (inventory[idx] != NULL)
            inventory[idx]->use(target);
    }
}
