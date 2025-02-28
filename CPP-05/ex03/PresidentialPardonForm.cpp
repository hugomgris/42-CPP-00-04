/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmunoz-g <hmunoz-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:58:55 by hmunoz-g          #+#    #+#             */
/*   Updated: 2025/02/24 17:41:51 by hmunoz-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

//Constructors and Destructor

PresidentialPardonForm::PresidentialPardonForm(const std::string &target): AForm("PresidentialPardonForm", 25, 5), _target(target){}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm(other), _target(other.getTarget()){}

PresidentialPardonForm::~PresidentialPardonForm(){}

//Operator overloads
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other){
	(void)other;
	return (*this);
}

//Getters and Setters
const std::string PresidentialPardonForm::getTarget() const{
	return (this->_target);
}

void PresidentialPardonForm::doExecute() const {
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

AForm *PresidentialPardonForm::createForm(AForm *form, const std::string &name, const std::string &target){
	if (form == NULL && name == "presidential pardon"){
		return (new PresidentialPardonForm(target));
	}
	return (form);
}

