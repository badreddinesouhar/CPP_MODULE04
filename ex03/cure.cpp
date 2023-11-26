/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:07 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 11:49:44 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

Cure::Cure() : _type("cure") {
    _type = "cure";
    std::cout << this->_type << "has been constracted" << std::endl;
}

Cure::Cure(const Cure& cure) {
    this->_type = cure.getType();
}

Cure& Cure::operator=(const Cure& copy) {
    this->_type = copy.getType();
    return (*this);
}

Cure::~Cure() {
    std::cout << this->_type << "has been destroyed" << std::endl;
}

Cure* Cure::clone() const {
    Cure *inst = new Cure();
    return (inst);
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}