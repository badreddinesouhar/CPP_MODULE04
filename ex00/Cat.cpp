/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 09:59:59 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(std::string name) {
    type = name;
    std::cout << "cat constructor by name" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat) {
    std::cout << "copy constructor is called" << std::endl;
    this->type = cat.getType();
}

Cat& Cat::operator=(const Cat& cat) {
    this->type = cat.getType();
    std::cout << "copy assignment operator is called" << std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Di Cat " << type << " made a Sound" << std::endl;
}