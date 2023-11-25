/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:28:36 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 08:11:26 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constractour" << std::endl;
    type = "dog";
    b = new Brain();
}

Dog::~Dog() {
    std::cout << "Dog deconstractor" << std::endl;
    delete this->b;
}

Dog::Dog(const Dog& dog) {
    this->type = dog.type;
    delete this->b;
    this->b = new Brain(*(dog.b));
}

Dog& Dog::operator=(const Dog &dog) {
    if (this->type != dog.type)
        this->type = dog.type;
    delete this->b;
    this->b = new Brain(*(dog.b));
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Da Dog " << type << " made a sound" << std::endl;
}