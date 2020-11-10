#include <iostream>
#include <string>
#include <memory>

//#define DTOR_TEST

#include "LinkedList.h"
#include "PrecondViolatedExcep.h"
#include "DiscList.h"
#include "Disc.h"
#include "Track.h"

int main() {

	char input;

	LinkedList<std::string> song;

	std::cin >> input;

	do {
		switch (input) {
		case 'A':
			std::cout << input << std::endl;
			song.isEmpty();
		case 'R':
			std::cout << input << std::endl;
			break;
		case 'P':
			std::cout << input << std::endl;
			break;
		case 'L':
			std::cout << input << std::endl;
			break;
		case 'Q':
			std::cout << input << std::endl;
			break;
		}
		return 0;
	} while (input != 'Q');
}
