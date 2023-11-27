/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:58:45 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 12:38:22 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "the Animal constrauctor has been called" << std::endl;
    type = "animal";
}

Animal::~Animal() {
    std::cout << "the Animal destructor has been called" << std::endl;
}

Animal::Animal(const Animal& animal) {
    this->type = animal.getType();
    std::cout << "Animal copy constractor has been called" << std::endl;
}

Animal& Animal::operator=(const Animal &animal) {
    this->type = animal.getType();
    std::cout << "animal copy assignment opertar is called" << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout << "animal made a sound" << std::endl;
}