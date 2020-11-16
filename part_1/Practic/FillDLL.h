#include <fstream>
#pragma once

#ifdef FILLDLL_EXPORTS
#define FILLDLL_API __declspec(dllexport)
#else
#define FILLDLL_API __declspec(dllimport)
#endif

extern "C" FILLDLL_API char fillstr(char*);

