/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zrebhi <zrebhi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:39:49 by zrebhi            #+#    #+#             */
/*   Updated: 2023/08/01 18:03:39 by zrebhi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Warlock {
private:
	std::string	_name;
	std::string	_title;
	
	Warlock();
	Warlock(const Warlock &src);
	Warlock	&operator=(const Warlock &rhs);

public:
	Warlock(const std::string &name, const std::string &title);
	~Warlock();
	
	const std::string	&getName() const;
	const std::string	&getTitle() const;
	
	void	setTitle(const std::string &title);

	void introduce() const;
};