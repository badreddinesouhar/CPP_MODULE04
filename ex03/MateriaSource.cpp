/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 09:02:09 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 11:00:03 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        inventory[i] = NULL;
    }
}

MateriaSource::~MateriaSource() {
    
}

void MateriaSource::learnMateria(AMateria* learn) {
    if (!learn)
        return;
    for (int i = 0; i < 4; i++) {
        if (inventory[i] == NULL) {
            inventory[i] = learn->clone();
            return;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (inventory[i] && inventory[i]->getType() == type) {
            return inventory[i]->clone(); // Assuming you have a clone function in AMateria
        }
    }
    return 0;
}
