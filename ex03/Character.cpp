/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:02:27 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/28 07:49:48 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    _name = "character";
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
        trash[i] = NULL;
    } 
    std::cout << "Character default constractor has been called" << _name << "is destroyed" << std::endl;
}

Character::~Character() {
    for (int i = 0; i < 4; i++) {
        if(inventory[i]) {
            std::cout << "ana invent " << i << std::endl;  
            delete inventory[i];
        }
    }
    for(int i = 0; i < 4; i++ ) {
        if(trash[i]) {
            std::cout << "ana trash " << i << std::endl;
            delete trash[i];
        }
    }
    std::cout << _name << " is destroyed" << std::endl;
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

Character::Character(Character const & copy) {
    _name = copy.getName();
    for(int i = 0; i < 4; i++) {
        if (copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
    }
}

Character& Character::operator=(const Character& character) {
    _name = character.getName();
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
        if (character.inventory[i])
            this->inventory[i] = character.inventory[i]->clone();
    }
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
        if(trash[i]) 
            delete trash[i];
    }
    delete m;
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        for (int i = 0; i < 4; i++) {
            if (trash[i] == NULL) {
                trash[i] = inventory[idx]->clone();
                break;
            }
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
