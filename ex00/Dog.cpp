/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:28:36 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 10:00:06 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor" << std::endl;
    type = "dog";
}

Dog::~Dog() {
    std::cout << "Dog destructor" << std::endl;    
}

Dog::Dog(const Dog& dog) : Animal(dog) {
    std::cout << "copy constructor is called" << std::endl;
    this->type = dog.getType();
}

Dog& Dog::operator=(const Dog &dog) {
    this->type = dog.getType();
    std::cout << "copy assignment operator is called" << std::endl;
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Da Dog " << type << " made a sound" << std::endl;
}