/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:23 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 07:40:25 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    type = "cat";
    std::cout << "Cat constractour" << std::endl;
}

Cat::Cat(std::string name) {
    type = name;
    std::cout << "cat inisializer" << std::endl;
}

Cat::Cat(const Cat& cat) {
    this->type = cat.getType();
}

Cat& Cat::operator=(const Cat& cat) {
    this->type = cat.getType();
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat destrctour" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Di Cat " << type << " made a Sound" << std::endl;
}