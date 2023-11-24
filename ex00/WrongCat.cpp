/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:25:12 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 10:24:39 by bsouhar          ###   ########.fr       */
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
    std::cout << "wrong cat copy assignemnt operator has been called" << std::endl;
    if(this->type != wrongcat.type) {
        this->type = wrongcat.type;
    }
    return *this;
}

WrongCat::WrongCat(const WrongCat& copy) {
    std::cout << "copy desctractor" <<std::endl;
    *this = copy;
}

void WrongCat::makeSound() const {
    std::cout << "the wrong cat made a sound" << std::endl;
}