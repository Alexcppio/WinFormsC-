#include "MessageBoxHeader.h"

MessageBoxCustom::MessageBoxCustom()
{
    MessageBoxStart();
}

void MessageBoxCustom::MessageBoxStart()
{
    Messages obj;
    double calcNumber = 0;

    for (size_t i = 0; i < obj.messageBoxes.size(); ++i)
    {
        calcNumber += CalcNums(obj.messageBoxes[0 + i]);
        if (i + 1 == obj.messageBoxes.size())
        {
            std::pair<std::wstring, std::wstring> finalPair;
            finalPair.second = obj.messageBoxes[0 + i].second;
            finalPair.first = L"Average number of symbols: " + std::to_wstring(calcNumber/ obj.messageBoxes.size());
            MessageBoxRun(finalPair);
        }
        else
        {
            MessageBoxRun(obj.messageBoxes[0 + i]);
        }
    }
}

void MessageBoxCustom::MessageBoxRun(std::pair<std::wstring, std::wstring> item)
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)item.second.c_str(),
        (LPCWSTR)item.first.c_str(),
        MB_OK
    );
    switch (msgboxID)
    {
    case MB_OK:

        break;
    }
}

double MessageBoxCustom::CalcNums(std::pair<std::wstring, std::wstring> item)
{
    return item.first.length() + item.second.length();
}