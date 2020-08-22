#include "Zsender.h"

int main(int argc, char** argv) {
	//check config
	if (!checkConfig()) {
		cout << "ERROR: config file not configure. \nWant to configure now? [y/n]\t";
		char option;
		cin >> option;
		if (option == 'y' || option == 'Y') {
			makeConfig();
		}
		else
			cout << "ERROR: Config file required.\nExiting ...\n";
			cleanup();
		exit(0);
	}

	//overload loadup function to support command line comands
	if (argc == 1)
		loadup();
	else if (argc == 3 || argc == 4)
		cmdLineLoadUP(argv, argc);
	else {
		cout << "\nINCORRECT USAGE:\nOpening Helpbook ...\n\n";
		help();
	}
		
}