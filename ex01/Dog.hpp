/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:16:14 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/27 12:50:09 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private:
        Brain *b;
    public:
        Dog();
        Dog(const Dog& dog);
        Dog& operator=(const Dog &dog);
        ~Dog();
        Brain *getBrain( void ) const;
        void makeSound() const ;
};

#endif
