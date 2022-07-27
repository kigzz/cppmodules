/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpouchep <bpouchep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 03:08:34 by bpouchep          #+#    #+#             */
/*   Updated: 2022/07/27 03:08:35 by bpouchep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[]) {
	Harl *harl;

	harl = new Harl;
	for (int i = 1; i < argc; i++) {
		harl->complain(argv[i]);
	}
	delete harl;

	return 0;
}
