#include "Zombie.hpp"

int main() {
	Zombie *batman = new Zombie("Bruce");
	batman->announce();
	randomChump("Robin zombie");
	delete batman;

	std::cout << std::endl;

	Zombie *jacky = newZombie("Jacky");
	jacky->announce();
	Zombie *chan = newZombie("Chan");
	chan->announce();
	jacky->announce();
	delete jacky;
	chan->announce();
	delete chan;

	std::cout << std::endl;

	randomChump("Rick zombie");

	return (0);

}