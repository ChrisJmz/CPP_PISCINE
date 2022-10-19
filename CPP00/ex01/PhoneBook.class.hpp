/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:30:30 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/19 10:56:13 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook {
    
    private:
        Contact contact[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    Search(void);
        void    Add(void);
        void    List(int i);
        void    msg(void);
        void    display(void);
};

#endif
