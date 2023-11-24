/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsouhar <bsouhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 10:30:01 by bsouhar           #+#    #+#             */
/*   Updated: 2023/11/24 11:17:22 by bsouhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
    private:

    public:
        Brain();
        Brain(const Brain& copy);
        Brain& operator=(const Brain& brain);
        ~Brain();
        std::string ideas[100];
};

#endif