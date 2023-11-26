/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 13:04:38 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    _type = "ice";
    std::cout << _type << " is constracted" << std::endl;
}

Ice::Ice(const Ice& copy) {
    this->_type = copy.getType();
}

Ice& Ice::operator=(const Ice& ice) {
    this->_type = ice.getType();
    return (*this);
}

Ice::~Ice() {
    // std::cout << "ice is destroyed" << std::endl;
}

AMateria* Ice::clone() const {
    return (new Ice());
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl; 
}