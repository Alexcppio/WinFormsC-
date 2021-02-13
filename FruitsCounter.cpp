#include "FruitsCounter.h"

FruitsCounter::FruitsCounter()
{
	std::cout << "Enter the path to file: ";
	InputReader obj;
	FileReader obj2(obj.GetSymbols());
	std::cout << "Enter fruit name: ";
	WordsCounter obj4(obj.GetSymbols());
	obj4.CountOccurrences(obj2.GetText(), obj.GetSymbols());
	
	std::cout << "The amount of " << obj.GetSymbols() << " is: ";
	obj4.ShowCount(obj.GetSymbols());
}