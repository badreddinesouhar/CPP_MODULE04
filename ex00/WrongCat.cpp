/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:25:12 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 10:04:39 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "the wrong cat constractor has been called" << std::endl;
    type = "wrong cat";
}

WrongCat::~WrongCat() {
    std::cout << "the wrong cat deconstractor has been called " << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat) {
    if(this->type != wrongcat.type) {
        this->type = wrongcat.type;
    }
    return *this;
}

WrongCat::WrongCat(const WrongCat& copy) {
    *this = copy;
}

std::string WrongCat::getType() const {
    return type;
}

void WrongCat::makeSound() const {
    std::cout << "the " << type << " made a sound" << std::endl;
}