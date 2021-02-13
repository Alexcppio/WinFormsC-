#ifndef HLINES_H
#define HLINES_H

#include <windows.h>
#include <tchar.h>
#include <string>
#include <vector>
#include <iterator>
#include <sstream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
#include <iostream>
#include <fstream>
#include "ReadFileHeader.h"
#include "InputReader.h"
#include "StringLengthAnalyzer.h"
#include "WordsCounter.h"
#include "RewriteUnicodeAnsi.h"
#include "WriteFile.h"
#include "FruitsCounter.h"

#if defined(UNICODE)
#define _tstring wstring
#else
#define _tstring string
#endif

#endif HLINES_H