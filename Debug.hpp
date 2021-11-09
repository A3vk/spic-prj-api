#ifndef DEBUG_H_
#define DEBUG_H_

#include "Vector2.hpp"
#include "Color.hpp"
#include <string>
#include "Debug_extra_includes.hpp"

namespace spic {

    /**
     * @brief Some convenient debugging functions.
     */
    namespace Debug {

        /**
         * @brief Draws a colored line between specified start and end points.
         * @param start The starting point.
         * @param end The end point.
         * @param color The line color, defaults to white.
         */
        void DrawLine(const Vector2<float>& start, const Vector2<float>& end, const Color& color = Color::white());

        /**
         * @brief Logs a message to the Console.
         * @param message The message to write.
         */
        void Log(const std::string& message);

        /**
         * @brief A variant of Debug.Log that logs an error message to the console.
         * @param message The message to write.
         */
        void LogError(const std::string& error);

        /**
         * @brief A variant of Debug.Log that logs a warning message to the console.
         * @param message The message to write.
         */
        void LogWarning(const std::string& warning);

    }

}

#endif // DEBUG_H_
