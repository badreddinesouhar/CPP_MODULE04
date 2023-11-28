/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:29:58 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 12:57:11 by bsouhar          ###   ########.fr       */
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
    std::cout << "Brain copy assignement operator has been called" << std::endl;
    return *this;
}

Brain::Brain(const Brain& copy) {
    std::cout << "Brain copy constructor has been called" << std::endl;
    *this = copy;
}

std::string *Brain::getideas() {
    return (ideas);
}