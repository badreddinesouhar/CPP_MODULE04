/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:22:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 08:09:45 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    const Animal* meta = new Animal();
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    
    meta->makeSound();

    delete i;
    delete j;
    delete meta;
    
    // the wrong cat test
    
    // const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* i = new WrongCat();

    // std::cout << i->getType() << " " << std::endl;

    // i->makeSound(); //will output the cat sound!
    // meta->makeSound();

    // delete meta;
    // delete i;
    system("leaks Animal");

    return 0;
}
