//
// Created by david on 05-11-21.
//

#ifndef SPIC_PRJ_API_CROSSCOMPILE_H
#define SPIC_PRJ_API_CROSSCOMPILE_H

#if defined(_WIN32)          // Defined on Windows
    #define DLL_EXPORT __declspec(dllexport)
#elif defined(__linux__)     // Defined on Linux
    #define DLL_EXPORT
#else
    #error Platform not supported
#endif

#endif //SPIC_PRJ_API_CROSSCOMPILE_H
