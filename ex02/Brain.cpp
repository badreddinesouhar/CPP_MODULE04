/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:29:58 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/28 07:31:10 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    ideas = new std::string[100];
    for (int i = 0; i < 100; i++) {
        ideas[i] = "Brain idea";
    }
    std::cout << "Brain constructor has been called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor has been called" << std::endl;
    delete[] ideas;
}

Brain& Brain::operator=(const Brain& brain) {
    this->ideas = new std::string[100];
    for(int i = 0; i < 100; i++) {
        this->ideas[i] = brain.ideas[i];
    }
    return *this;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
}

std::string *Brain::getideas() {
    return (ideas);
}