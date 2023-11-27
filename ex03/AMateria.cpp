/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:13:39 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 10:09:11 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
    std::cout << "AMateria abstract class is called" << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor" << std::endl;
}

std::string const &AMateria::getType() const {
    return _type;
}

AMateria::AMateria(const AMateria& copy) {
    this->_type = copy.getType();
}

AMateria& AMateria::operator=(const AMateria& amateria) {
    this->_type = amateria.getType();
    return (*this);    
}

AMateria::AMateria(std::string const & type) {
    _type = type;
}

void AMateria::use(ICharacter& target) {
    (void)target;
}