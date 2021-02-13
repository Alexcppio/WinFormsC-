#include "StringLengthAnalyzer.h"

StringAnalyzer::StringAnalyzer(std::string source)
{
	FileReader obj(source);
	MaxStringLength(obj.GetText());
	MinStringLength(obj.GetText());
	AvgStringLength(obj.GetText());
	ShowMax();
	ShowMin();
	ShowAvg();
}
void StringAnalyzer::MaxStringLength(std::vector<std::string> vec)
{
	for (std::string item : vec)
	{
		if (item.size() > max.first) {
			max.first = item.size();
			max.second = item;
		}
	}
}
void StringAnalyzer::MinStringLength(std::vector<std::string> vec)
{
	min.first = MAXINT;
	for (std::string item : vec)
	{
		if (item.size() < min.first && item.size() != 0) {
			min.first = item.size();
			min.second = item;
		}
	}
}
void StringAnalyzer::AvgStringLength(std::vector<std::string> vec)
{
	for (std::string item : vec)
	{
		avg += item.size();
	}
	avg /= vec.size();
}
void StringAnalyzer::ShowMax()
{
	std::cout << "Max string length is: " << max.first << ".\n" << "String: " << max.second << std::endl;
}
void StringAnalyzer::ShowMin()
{
	std::cout << "Min string length is: " << min.first << ".\n" << "String: "<< min.second << std::endl;
}
void StringAnalyzer::ShowAvg()
{
	std::cout << "Avg string length is: " << avg << "." << std::endl;
}