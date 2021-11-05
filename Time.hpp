#ifndef TIME_H_
#define TIME_H_

#include "Time_extra_includes.hpp"

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
