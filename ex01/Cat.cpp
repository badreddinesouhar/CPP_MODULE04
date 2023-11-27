/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 12:40:37 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor" << std::endl;
    type = "cat";
    b = new Brain();
}

Cat::Cat(std::string name) {
    type = name;
    std::cout << "cat constructor by name" << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat) {
    this->type = cat.type;
    // if (this->b)
    
    this->b = new Brain(*(cat.b));
    std::cout << "cat copy constructor is called" << std::endl;
}

Cat& Cat::operator=(const Cat& cat) {
    if (this->type != cat.type)
        this->type = cat.type;
    if (this->b)
        delete this->b;
    this->b = new Brain(*(cat.b));
    std::cout << "copy assignment operator is called" << std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destructor" << std::endl;
    delete b;
}

void Cat::makeSound() const {
    std::cout << "Di Cat " << type << " made a Sound" << std::endl;
}