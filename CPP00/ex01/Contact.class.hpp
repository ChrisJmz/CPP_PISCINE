/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:11:16 by cjimenez          #+#    #+#             */
/*   Updated: 2022/10/10 16:33:22 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
# include <locale>

class Contact {
    
    public:
        Contact (void);
        ~Contact (void);
        void setFirstName(std::string value);
        void setLastName(std::string value);
        void setNickname(std::string value);
        void setPhoneNumber(std::string value);
        void setDarkestSecret(std::string value);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getPhoneNumber(void);
        std::string getDarkestSecret(void);
    
    private:
        std::string _FirstName, _LastName, _Nickname, _PhoneNumber, _DarkestSecret;
        
};

#endif