#include <iostream>
#include "KPeriodic.h"

bool isPrefixEven(int len, int k) // checks if string lenght can be divided -
{                                 // by value of k whit out leftover
	if (len % k == 0)             // if there is no leftover returns true
		return true;
	else
		return false;
}

int isKPeriodic(const std::string& txt, int k)
{
	bool e = isPrefixEven(txt.size(), k);
	int times = 0; // counter, counts how many times pattern occures
	int occurrence = 0; // temp counter for if(occurrence == k) to count times

	if (e)
	{
		int* tempArr = new int[k]; // temporarily stores subpattern 

		for (int i = 0; i < k; i++)
		{
			tempArr[i] = txt[i];
		}

		int y = k; // index used in nested loop
		int cycle = (txt.size() - k) / k; // to calculate how many outer cycle should run to check the pattern

		for (int i = 0; i < cycle; i++)
		{
			for (int t = 0; t < k; t++)
			{
				if (tempArr[t] == txt[y])
				{
					occurrence++;
					if (occurrence == k)
					{
						times++; // counts how many times pattern subpattern occures
					}
				}
				y++;
			}

			occurrence = 0; // reset here, to check if there is more occurrences of subpattern
			y--; // reset of index for txt array, "main string"
			y++;
		}
		delete[] tempArr;
		return times;
	}
	else
	{
		std::cout << "there is a leftover after division of string length by (k)" << std::endl;
		return 0;
	}

}
