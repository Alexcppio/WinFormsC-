#include "GuessingHeader.h"

GuessingLogics::GuessingLogics()
{
	generateNumber();
}
int GuessingLogics::generateNumber()
{
	srand(time(NULL));
	do
	{
		guessedNumber = rand() % upperBound + lowerBound;
	} while (checkNumber(guessedNumber, rejectedNumbers));
	return guessedNumber;
}
bool GuessingLogics::checkNumber(int number, std::vector<int> rejectedNumbers)
{
	if (std::binary_search(rejectedNumbers.begin(), rejectedNumbers.end(), number))
	{
		return true;
	}
	else
	{
		return false;
	}
}
void GuessingLogics::addRejectedNumber()
{
	rejectedNumbers.push_back(guessedNumber);
	std::sort(rejectedNumbers.begin(), rejectedNumbers.end());
}
int GuessingLogics::getGuessedNumber()
{
	return guessedNumber;
}