/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:44:57 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 14:44:58 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main() {
//	std::cout << "***** GRADE OK *****" << std::endl;
//	std::cout << std::endl;
//	try {
//		Bureaucrat zoro("Zoro", 150);
//		std::cout << "1: " << zoro << std::endl;
//		zoro.increment();
//		std::cout << "2: " << zoro << std::endl;
//		zoro.increment();
//		std::cout << "3: " << zoro << std::endl;
//		zoro.increment();
//		std::cout << "4: " << zoro << std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try {
//		Bureaucrat sanji("Sanji", 10);
//		std::cout << "1: " << sanji << std::endl;
//		sanji.increment(6);
//		std::cout << "2: " << sanji << std::endl;
//		sanji.increment();
//		std::cout << "3: " << sanji << std::endl;
//		sanji.increment();
//		std::cout << "4: " << sanji << std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//	std::cout << std::endl;
//
//	try {
//		Bureaucrat luffy("Luffy", 145);
//		std::cout << "1: " << luffy << std::endl;
//		luffy.decrement(5);
//		std::cout << "2: " << luffy << std::endl;
//		luffy.decrement();
//		std::cout << "3: " << luffy << std::endl;
//		luffy.decrement();
//		std::cout << "4: " << luffy << std::endl;
//		luffy.decrement();
//		std::cout << "5: " << luffy << std::endl;
//		luffy.decrement();
//		std::cout << "6: " << luffy << std::endl;
//		luffy.decrement();
//		std::cout << "7: " << luffy << std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//
//	std::cout << std::endl;
//	std::cout << "***** GRADE TOO HIGH / LOW *****" << std::endl;
//	std::cout << std::endl;
//
//	std::cout << "Try1: Bureaucrate Nami, grade 151" << std::endl;
//	try {
//		Bureaucrat nami("Nami", 151);
//		std::cout << "HELLO WORLD!!!" << std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}
//
//	std::cout << std::endl;
//	std::cout << "Try2: Bureaucrate Chopper, grade -1" << std::endl;
//
//	try {
//		Bureaucrat chopper("Chopper", -1);
//		std::cout << "HELLO WORLD!!!" << std::endl;
//	}
//	catch (std::exception& e) {
//		std::cout << e.what() << std::endl;
//	}

	std::cout << "\n========== FORM ==========\n" << std::endl;

	Bureaucrat* b150 = new Bureaucrat("b150", 150);
	Bureaucrat* b140 = new Bureaucrat("b140", 140);
	Bureaucrat* b100 = new Bureaucrat("b100", 100);
	Bureaucrat* b1 = new Bureaucrat("b1", 1);

	std::cout << std::endl;

	std::cout << *b150 << std::endl;
	std::cout << *b140 << std::endl;
	std::cout << *b100 << std::endl;
	std::cout << *b1 << std::endl;

	std::cout << std::endl;

	std::cout << "CREATE INTERN:" << std::endl;
	Intern* intern = new Intern();
	std::cout << std::endl;

	std::cout << "INTERN CREATES FORMS:" << std::endl;
	//ShrubberyCreationForm *garden = new ShrubberyCreationForm("garden");
	Form *garden;
	garden = intern->makeForm("shrubbery creation", "garden");
	std::cout << std::endl;

	//RobotomyRequestForm *neighbor = new RobotomyRequestForm("neighbor");
	Form *neighbor;
	neighbor = intern->makeForm("robotomy request", "neighbor");
	std::cout << std::endl;

	//PresidentialPardonForm *rick = new PresidentialPardonForm("rick");
	Form *rick;
	rick = intern->makeForm("presidential pardon", "rick");
	std::cout << std::endl;

	Form *budgets;
	budgets = intern->makeForm("budgets", "morty");
	std::cout << std::endl;

	std::cout << "DELETE INTERN:" << std::endl;
	delete intern;

	std::cout << std::endl;

	std::cout << "FORMS MEMEORY ADDRESS:" << std::endl;
	std::cout << "shrubbery creation: " << garden << std::endl;
	std::cout << "robotomy request: " << neighbor << std::endl;
	std::cout << "presidential pardon: " << rick << std::endl;
	std::cout << "budgets (not exists so intern doesn't create it): " << budgets << std::endl;

	std::cout << std::endl;

	std::cout << "PRINT FORMS:" << std::endl;
	std::cout << *garden << std::endl;
	std::cout << *neighbor << std::endl;
	std::cout << *rick << std::endl;

	std::cout << std::endl;

	// ShrubberyCreationForm

	try { // try to execute before sign
		b100->executeForm(*garden);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // try to sign with low level
		b150->signForm(*garden);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // sign
		b140->signForm(*garden);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *garden; // display update info
	try { // try to execute with low level
		b140->executeForm(*garden);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b100->executeForm(*garden);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// RobotomyRequestForm (execute main multiple times to check randomizer is working)
	try { // try to sign with low level
		b100->signForm(*neighbor);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { //  try execute not signed
		b1->executeForm(*neighbor);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {	// sign
		b1->signForm(*neighbor);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {	// sign x2
		b1->signForm(*neighbor);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*neighbor);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// PresidentialPardonForm
	try { // sign
		b1->signForm(*rick);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*rick);
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	std::cout << "PRINT FORMS:" << std::endl;
	std::cout << *garden;
	std::cout << *neighbor;
	std::cout << *rick;

	delete garden;
	delete neighbor;
	delete rick;

	std::cout << std::endl;

	delete b150;
	delete b140;
	delete b100;
	delete b1;

	return 0;
}