//
// Created by david on 05-11-21.
//

#ifndef SPIC_PRJ_API_CROSSCOMPILE_H
#define SPIC_PRJ_API_CROSSCOMPILE_H

#ifdef _WIN32          // Defined on Windows
    #define DLL_EXPORT __declspec(dllexport)
#elifdef __linux__     // Defined on Linux
    #define DLL_EXPORT
#else
    #error Platform not supported
#endif

#endif //SPIC_PRJ_API_CROSSCOMPILE_H
