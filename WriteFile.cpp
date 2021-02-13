#include "WriteFile.h"

WriteToFile::WriteToFile(std::string source, std::vector<std::string> vec)
{
    std::ofstream out;
    out.open(source);
    if (out.is_open())
    {
        for (std::string item : vec)
        {
            out << item << std::endl;
        }
    }
}