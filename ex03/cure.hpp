/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:12:03 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/25 09:24:55 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"

class Cure {
    private:
        std::string type;
    public:
       Cure();
       ~Cure();
       Cure& clone();
       void use(ICharacter& );
};

#endif