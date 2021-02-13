#include "WordsCounter.h"

WordsCounter::WordsCounter(std::string source)
{
	FileReader obj(source);
	std::cout << "Enter name: ";
	InputReader obj2;
	CountOccurrences(obj.GetText(), obj2.GetSymbols());
	ShowCount(obj2.GetSymbols());
}
void WordsCounter::CountOccurrences(std::vector<std::string> vec, std::string str)
{
	for (std::string item : vec)
	{
		int i = 0;
		for (i = item.find(" " + str, i++); i != std::string::npos; i = item.find(" " + str, i + 1))
		{
			++symbolsCount;
		}
	}
	for (std::string item : vec)
	{
		int i = 0;
		for (i = item.find("\n" + str, i++); i != std::string::npos; i = item.find("\n" + str, i + 1))
		{
			++symbolsCount;
		}
	}
}

void WordsCounter::ShowCount(std::string str)
{
	std::cout << "Number of occurences of \"" << str << "\" is: " << symbolsCount << "." << std::endl;
}