#ifndef AUDIOSOURCE_H_
#define AUDIOSOURCE_H_

#include "Export.hpp"

#include "Component.hpp"
#include <string>

#if __has_include("AudioSource_extra_includes.hpp")
    #include "AudioSource_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Component which can play audio.
     */
    class DLL_EXPORT AudioSource : public Component {
        public:

            AudioSource(const std::string& url, bool playOnAwake, double volume);
            /**
             * @brief Call this method to start playing audio.
             * @param looping Automatically start over when done.
             */
            void Play(bool looping);

            /**
             * @brief Call this method to stop playing audio.
             */
            void Stop();

            /**
             * @brief Call this method to pause audio.
             */
            void Pause();

            /**
             * @brief Call this method to resume audio if paused.
             */
            void Resume();

            bool ShouldLoop();

            void SetPlayOnAwake(bool flag);

            bool GetPlayOnAwake() const;

            void SetVolume(double newVolume);

            double GetVolume() const;

            std::string GetUrl() const;

        private:
            #include "AudioSource_private.hpp"
    };
}

#endif // AUDIOSOURCE_H_
