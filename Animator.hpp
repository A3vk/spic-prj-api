#ifndef ANIMATOR_H_
#define ANIMATOR_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Sprite.hpp"
#include "SpriteSheet.hpp"

#if __has_include("Animator_extra_includes.hpp")
    #include "Animator_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief A component which can play animated sequences of sprites.
     */
    class DLL_EXPORT Animator : public Component {
        public:

            Animator(SpriteSheet sheet, int fps);
            /**
             * @brief Start playing the image sequence.
             * @param looping If true, will automatically start again when done.
             */
            void Play(bool looping);

            /**
             * @brief Stop playing the image sequence. Whatever sprite was displayed
             *        last will remain shown.
             */
            void Stop();

            int GetFps() const;

            void SetFps(int newFps);

        private:
        #if __has_include("Animator_private.hpp")
            #include "Animator_private.hpp"
        #endif
    };
}

#endif // ANIMATOR_H_
