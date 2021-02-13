#include "InputReader.h"

InputReader::InputReader()
{
	std::cin >> input;
}
std::string InputReader::GetSymbols()
{
	return input;
}