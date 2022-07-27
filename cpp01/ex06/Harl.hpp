#ifndef CPPMODULES_HARL_HPP
#define CPPMODULES_HARL_HPP

#include <string>
#include <iostream>

class Harl {
public:
	Harl();
	~Harl();

	void complain(std::string level);

private:
	void debug();
	void info();
	void warning();
	void error();
};


#endif
