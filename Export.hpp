#ifndef EXPORT_H
#define EXPORT_H

#if defined(_WIN32) || defined(_WIN64)          // Defined on Windows
	#ifdef EXPORT
		#define DLL_EXPORT __declspec(dllexport)
	#else
		#define DLL_EXPORT __declspec(dllimport)
	#endif
#elif defined(__linux__)     // Defined on Linux
	#define DLL_EXPORT
#else
	#error Platform not supported
#endif

#endif // EXPORT_H