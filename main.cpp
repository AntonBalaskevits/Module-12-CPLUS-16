#include <iostream>
#include <string>
#include "KPeriodic.h"

int main()
{
	std::string text = "abcdabcdabcdabcd"; // default string
	std::string newText; // for input of new string 
	int k = 0; // variable for isKPeriodic input value
	int choice = 0; // just for switch choices
	bool on = true; // usual variable for main while loop
	int KP = 0; // stores a return value of func isKPeriodic() 
	            // that is used to check how many times repeated pattern occures

	std::cout << "      Welcome to KPeriodic:)" << std::endl;
	std::cout << "\n";
	std::cout << "current string : " << text << std::endl;

	while (on)
	{
		std::cout << "        menu          " << std::endl;
		std::cout << "use current string (1)" << std::endl;
		std::cout << "type in new string (2)" << std::endl;
		std::cout << "or quit            (3)" << std::endl;
		std::cout << "enter your choice  : ";
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			std::cout << "enter value of k = ";
			std::cin >> k;
			KP = isKPeriodic(text, k);
			if (KP != 0)
			{
				std::cout << "k = " << k << " is periodic!" << std::endl;
				std::cout << "pattern accurs : " << KP << " times" << std::endl;
			}
			else
			{
				std::cout << "there is no pattern found!" << std::endl;
			}
			break;
		case 2:
			std::cout << "new string       : ";
			std::cin >> newText;
			std::cout << "enter value of k = ";
			std::cin >> k;
			KP = isKPeriodic(newText, k);
			if (KP != 0)
			{
				std::cout << "k = " << k << " is periodic!" << std::endl;
				std::cout << "pattern accurs : " << KP << " times" << std::endl;
			}
			else
			{
				std::cout << "there is no pattern found!" << std::endl;
			}
			break;
		case 3:
			on = false;
			break;
		default:
			std::cout << "illegal input. Please try again." << std::endl;
			on = true;
			break;
		}
	}
	std::cout << "program ended. Thanks, see u next time:)" << std::endl;
	return 0;
}