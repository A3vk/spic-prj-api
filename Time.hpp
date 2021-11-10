#ifndef TIME_H_
#define TIME_H_

#if __has_include("Time_extra_includes.hpp")
    #include "Time_extra_includes.hpp"
#endif

namespace spic {

    namespace Time {
        long PreviousTime;
        float DeltaTime;
        double TimeScale;

        float GetFps();
        void CalculateDeltaTime();
    }

}

#endif // TIME_H_
