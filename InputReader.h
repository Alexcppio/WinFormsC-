#ifndef INPUTREADER_H
#define INPUTREADER_H
#include "Headlines.h"

class InputReader
{
public:
	InputReader();
	std::string GetSymbols();
private:
	std::string input = "";
};

#endif INPUTREADER_H
