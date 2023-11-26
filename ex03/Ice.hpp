/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:11 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/26 12:58:43 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
    private:
        std::string _type;
    public:
       Ice();
       Ice(const Ice& copy);
       Ice& operator=(const Ice& ice);
       ~Ice();
       AMateria* clone() const;
       void use(ICharacter& target);
};

#endif