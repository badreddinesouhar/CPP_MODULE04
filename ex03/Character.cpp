/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:02:27 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 10:07:51 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
    
}

Character::~Character() {
    
}

Character::Character(std::string name) {
    _name = name;
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