/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:22:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 14:17:27 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {

    Cat myCat;
    std::cout << "Cat type: " << myCat.getType() << std::endl;
    myCat.makeSound();
    
    Dog myDog;
    std::cout << "Dog type: " << myDog.getType() << std::endl;
    myDog.makeSound();

    // test form ex00
    
    // const Animal* meta = new Animal();    
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound();
    // meta->makeSound();
    // delete i;
    // delete j;
    // delete meta;
    
    // system("leaks Animal");
  
    return 0;
}
