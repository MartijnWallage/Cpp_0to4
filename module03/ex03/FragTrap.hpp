/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwallage <mwallage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:40:13 by mwallage          #+#    #+#             */
/*   Updated: 2024/03/18 17:51:27 by mwallage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
protected:
	unsigned int	_hitPoints;
	unsigned int	_attackDamage;
public:
		    FragTrap( void );
			FragTrap( std::string name );
    		~FragTrap();
    void	attack(const std::string& target);
    void	highFiveGuys();
};
