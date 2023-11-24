/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 13:22:40 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constractour" << std::endl;
    type = "cat";
    b = new Brain();
}

Cat::Cat(std::string name) {
    type = name;
    std::cout << "cat inisializer" << std::endl;
}

Cat::Cat(const Cat& cat) {
    this->type = cat.type;
    this->b = new Brain(*(cat.b));
}

Cat& Cat::operator=(const Cat& cat) {
    if (this->type != cat.type)
        this->type = cat.type;
    if (b)
        delete b;
    this->b = new Brain(*(cat.b));
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destrctour" << std::endl;
    delete b;
}

void Cat::makeSound() const {
    std::cout << "Di Cat " << type << " made a Sound" << std::endl;
}