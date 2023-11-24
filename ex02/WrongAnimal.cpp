/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:25:06 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 10:16:11 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "the Wrong Animal constractor has been called" << std::endl;
    type = "wrong animal";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wronganimal) {
    if (this->type != wronganimal.type) {
        this->type = wronganimal.type;
    }
    return *this; 
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
    *this = copy;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "the wrong animal deconstractor" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "the wrong animal made a sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return type;
}