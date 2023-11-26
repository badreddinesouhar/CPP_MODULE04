/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:02:09 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 14:17:09 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
     for (int i = 0; i < 4; i++) {
        if(inventory[i])
            delete inventory[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
   for (int i = 0; i < 4; i++) {
        if(copy.inventory[i])
            this->inventory[i] = copy.inventory[i]->clone();
   } 
}

 MateriaSource& MateriaSource::operator=(const MateriaSource& materiasource) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
        if (materiasource.inventory[i])
            this->inventory[i] = materiasource.inventory[i]->clone();
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria* learn) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == NULL) {
            inventory[i] = learn->clone();
            return;
        }
    }
    delete learn;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] && inventory[i]->getType() == type) {
            return inventory[i]->clone();
        }
    }
    return 0;
}


