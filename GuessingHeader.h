#ifndef GUESSING_H
#define GUESSING_H
#include <windows.h>
#include <tchar.h>
#include <vector>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <algorithm>

#if defined(UNICODE)
#define _tstring wstring
#else
#define _tstring string
#endif

static int idCheck = 0;

struct GuessingMessages
{
	std::vector<std::pair<int, std::wstring>> messageBoxes = {
		{ 1, L"Choose number between 1 and 100.\nRemember it.\nPress OK to next step." },
		{ 2, L"Is this number is 000? If yes, press YES,\nElse press NO." },
		{ 3, L"Your number has been guessed.\nAmount of attempts is: 00.\n If you want to play again, press AGAIN.\nTo exit press Cancel." }
	};
};

class GuessingGUI
{
public:
	GuessingGUI();
private:
	void ShowStartMB();
	void StartMB(std::pair<int, std::wstring> item);
	int PlayMB(std::pair<int, std::wstring> item, int number);
	void ResultMB(std::pair<int, std::wstring> item, int number);
	std::wstring AddNumberMB(std::wstring str, int number, const std::wstring showedNumber);
private:
	const std::wstring showedNumber = L"000";
	const std::wstring showedAttempts = L"00";
};

class GuessingLogics
{
public:
	GuessingLogics();
	int generateNumber();
	int getGuessedNumber();
	void addRejectedNumber();
private:
	int lowerBound = 1;
	int upperBound = 100;
	std::vector<int> rejectedNumbers;
	int guessedNumber = 0;
private:
	bool checkNumber(int number, std::vector<int> rejectedNumbers);
};

#endif GUESSING_H