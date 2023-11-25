/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:07 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 09:12:45 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cure.hpp"

Cure::Cure() : _type("cure") {
    std::cout << this->_type << "has been constracted" << std::endl;
}
 
Cure& Cure::clone() {

}

void Cure::use(ICharacter& ) {
    
}

Cure::~Cure() {
    std::cout << this->_type << "has been destroyed" << std::endl;
}