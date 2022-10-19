/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:11:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 15:59:38 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <locale>
#include <stdlib.h>
#include <iomanip>


class Contact {
    
    public:
        Contact (void);
        ~Contact (void);
        void    list(void) const;
        void    addContact(int i);
        void    affContact(void);
        void    clearContact(void);
        bool    isEmpty(void);
    private:
        int _Index;
        std::string _FirstName, _LastName, _Nickname, _PhoneNumber, _DarkestSecret;
};

#endif