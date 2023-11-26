/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:03 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 09:44:48 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {
    private:
        std::string _type;
    public:
       Cure();
       Cure& operator=(const Cure& cure);
       Cure(const Cure& cure);
       ~Cure();
       Cure* clone() const;
       void use(ICharacter& target);
};

#endif