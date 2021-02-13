#ifndef RESUME_H
#define RESUME_H
#include "Headlines.h"

class MessageBoxCustom
{
public:

	struct Messages
	{
		std::vector<std::pair<std::wstring, std::wstring>> messageBoxes = {
			{ L"Title 1", L"Resume 1 text" },
			{ L"Title 2", L"Resume 2 text" },
			{ L"Title 3", L"Resume 3 text" }
		};
	};

	MessageBoxCustom();
private:
	void MessageBoxRun(std::pair<std::wstring, std::wstring> item);
	void MessageBoxStart();
	double CalcNums(std::pair<std::wstring, std::wstring> item);
private:
};

#endif RESUME_H