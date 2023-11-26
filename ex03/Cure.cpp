/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:07 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 13:04:11 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    _type = "cure";
    std::cout << _type << " has been constracted" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure.getType()){
    this->_type = cure.getType();
}

Cure& Cure::operator=(const Cure& copy) {
    this->_type = copy.getType();
    return (*this);
}

Cure::~Cure() {
    // std::cout << this->_type << " has been destroyed" << std::endl;
}

AMateria* Cure::clone() const {
    return (new Cure());
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}