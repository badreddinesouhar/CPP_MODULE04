/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 16:22:35 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 08:05:23 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int arraySize = 10;
    Animal* animalArray[arraySize];

    for (int i = 0; i < arraySize; ++i) {
        if (i < arraySize / 2) {
            animalArray[i] = new Dog();
        } else {
            animalArray[i] = new Cat();
        }
    }

    for (int i = 0; i < arraySize; ++i) {
        delete animalArray[i];
    }

    system("leaks Animal");
    return 0;
}
