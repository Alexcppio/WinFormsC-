#include "GuessingHeader.h"

GuessingGUI::GuessingGUI()
{
    ShowStartMB();
}
void GuessingGUI::ShowStartMB()
{
    GuessingMessages obj;
    GuessingLogics logic;
    while (idCheck != IDCANCEL)
    {
        int counter = 1;
        StartMB(obj.messageBoxes[0]);
        if (idCheck == IDCANCEL)
            break;
        while (PlayMB(obj.messageBoxes[1], logic.generateNumber()) == IDNO)
        {
            logic.addRejectedNumber();
            ++counter;
        }
        if (idCheck == IDCANCEL)
            break;
        ResultMB(obj.messageBoxes[2], counter);
        if (idCheck == IDCANCEL)
            break;
    };

}
void GuessingGUI::StartMB(std::pair<int, std::wstring> item)
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)item.second.c_str(),
        (LPCWSTR)L"Guessing Game",
        MB_OKCANCEL
    );
    switch (msgboxID)
    {
    case MB_OK:
        idCheck = MB_OK;
        break;
    case IDCANCEL:
        idCheck = IDCANCEL;
        break;
    }
}
int GuessingGUI::PlayMB(std::pair<int, std::wstring> item, int number)
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)AddNumberMB(item.second, number, showedNumber).c_str(),
        (LPCWSTR)L"Guessing Game",
        MB_YESNOCANCEL
    );
    switch (msgboxID)
    {
    case IDYES:
        idCheck = IDYES;
        break;
    case IDNO:
        idCheck = IDNO;
        break;
    case IDCANCEL:
        idCheck = IDCANCEL;
        break;
    }
    return msgboxID;
}
void GuessingGUI::ResultMB(std::pair<int, std::wstring> item, int number)
{
    int msgboxID = MessageBox(
        NULL,
        (LPCWSTR)AddNumberMB(item.second, number, showedAttempts).c_str(),
        (LPCWSTR)L"Guessing Game",
        MB_RETRYCANCEL
    );
    switch (msgboxID)
    {
    case IDRETRY:
        idCheck = IDRETRY;
        break;
    case IDCANCEL:
        idCheck = IDCANCEL;
        break;
    }
}
std::wstring GuessingGUI::AddNumberMB(std::wstring str, int number, const std::wstring num)
{
    return str.replace(str.find(num), 3, std::to_wstring(number));
}