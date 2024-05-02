// Calc_dll.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Calc_dll.h"


// This is an example of an exported variable
CALCDLL_API int nCalcdll=0;

// This is an example of an exported function.
CALCDLL_API int fnCalcdll(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CCalcdll::CCalcdll()
{
    return;
}
