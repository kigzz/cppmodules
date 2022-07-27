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