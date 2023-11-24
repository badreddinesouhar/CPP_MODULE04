/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 10:22:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    
    public:
        Dog();
        Dog(const Dog& dog);
        Dog& operator=(const Dog &dog);
        bool operator!=(const Dog &dog);
        ~Dog();
        void makeSound() const ;
};

#endif
