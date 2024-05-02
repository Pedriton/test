// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CALCDLL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CALCDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef CALCDLL_EXPORTS
#define CALCDLL_API __declspec(dllexport)
#else
#define CALCDLL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class CALCDLL_API CCalcdll {
public:
	CCalcdll(void);
	// TODO: add your methods here.
};

extern CALCDLL_API int nCalcdll;

CALCDLL_API int fnCalcdll(void);
