#include "RewriteUnicodeAnsi.h"

RewriteUnicodeAnsi::RewriteUnicodeAnsi()
{
	std::cout << "Enter the path to file: ";
	InputReader obj;
	FileReader obj2(obj.GetSymbols());
	WriteToFile obj3(ModifyName(obj.GetSymbols()), obj2.GetText());
}
std::string RewriteUnicodeAnsi::ModifyName(std::string source)
{
	return source.insert(0, "ANSI");
}