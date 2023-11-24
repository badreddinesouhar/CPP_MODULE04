/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:29:58 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 12:03:14 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constractor has been called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain deconstractor has been called" << std::endl;
}

Brain& Brain::operator=(const Brain& brain) {
    (void)brain;
    return *this;
}

Brain::Brain(const Brain& copy) {
    *this = copy;
}