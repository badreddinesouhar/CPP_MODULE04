/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:30:20 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 00:16:22 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat();
    Cat(std::string name);
    Cat(const Cat& cat);
    bool operator!=(const Cat& cat);
    Cat& operator=(const Cat &cat);
    ~Cat();
    void makeSound() const ;
    std::string getType() const ;
};

#endif