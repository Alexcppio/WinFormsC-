#ifndef WORDSCOUNTER_H
#define WORDSCOUNTER_H
#include "Headlines.h"

class WordsCounter
{
public:
	WordsCounter(std::string source);
	void CountOccurrences(std::vector<std::string> vec, std::string str);
	void ShowCount(std::string str);
private:
	int symbolsCount = 0;
};

#endif WORDSCOUNTER_H
