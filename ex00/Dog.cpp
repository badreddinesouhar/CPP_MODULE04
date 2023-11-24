/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:28:36 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 10:17:13 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constractour" << std::endl;
    type = "dog";
}

Dog::~Dog() {
    std::cout << "Dog deconstractor" << std::endl;    
}

Dog::Dog(const Dog& dog) {
    if (this->type != dog.type)
        this->type = dog.type;
}

bool Dog::operator!=(const Dog &dog) {
    if (this->type != dog.type)
        return true;
    return false;
}

Dog& Dog::operator=(const Dog &dog) {
    if(*this != dog) {
        this->type = dog.type;
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Da Dog " << type << " made a sound" << std::endl;
}