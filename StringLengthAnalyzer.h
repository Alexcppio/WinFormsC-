#ifndef STRINGANALYZER_H
#define STRINGANALYZER_H
#include "Headlines.h"

class StringAnalyzer
{
public:
	StringAnalyzer(std::string source);
	void MaxStringLength(std::vector<std::string> vec);
	void MinStringLength(std::vector<std::string> vec);
	void AvgStringLength(std::vector<std::string> vec);
	void ShowMax();
	void ShowMin();
	void ShowAvg();
private:
	std::pair<unsigned int, std::string> max;
	std::pair<unsigned int, std::string> min;
	unsigned int avg = 0;
};

#endif STRINGANALYZER_H