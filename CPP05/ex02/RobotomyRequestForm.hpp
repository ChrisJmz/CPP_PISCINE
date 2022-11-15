/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjimenez <cjimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 16:23:34 by cjimenez          #+#    #+#             */
/*   Updated: 2022/11/15 16:25:46 by cjimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTMYREQUESTFORM_HPP
# define ROBOTMYREQUESTFORM_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include "Form.hpp"

class RobotmyRequestForm : public Form
{
    private:
        std::string _target;
    public:
        RobotmyRequestForm();
        RobotmyRequestForm(const RobotmyRequestForm &copy);
        RobotmyRequestForm(std::string target);
        ~RobotmyRequestForm();
        RobotmyRequestForm & operator=(const RobotmyRequestForm &assign);
        std::string getTarget() const;
        void executed() const;
};

#endif