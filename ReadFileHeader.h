#ifndef FILEREADER_H
#define FILEREADER_H
#include "Headlines.h"

class FileReader
{
public:
	FileReader(std::string source);
	std::vector<std::string> GetText();
	std::string UnicodeToAnsi(const std::wstring& wstr);
private:
	std::vector<std::string> vec;
};

#endif FILEREADER_H