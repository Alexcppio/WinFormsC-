#include "ReadFileHeader.h"

FileReader::FileReader(std::string source)
{
    setlocale(0, "");
    std::wifstream ifs(source);
    std::wstring myString;
    if (!ifs) {
        std::cerr << "File is failed to open." << std::endl;
        std::cin.get();
    }
    else {
        for (int i = 0; std::getline(ifs, myString); ++i) {
            vec.push_back(UnicodeToAnsi(myString));
        }
    }
};

std::string FileReader::UnicodeToAnsi(const std::wstring& wstr)
{
    int size_needed = WideCharToMultiByte(CP_ACP, 0, &wstr[0], -1, NULL, 0, NULL, NULL);
    std::string strTo(size_needed, 0);
    WideCharToMultiByte(CP_ACP, 0, &wstr[0], (int)wstr.size(), &strTo[0], size_needed, NULL, NULL);
    return strTo;
}

std::vector<std::string> FileReader::GetText()
{
    return vec;
}
