#ifndef BOXCOLLIDER_H_
#define BOXCOLLIDER_H_

#include "Export.hpp"

#include "Collider.hpp"

#if __has_include("BoxCollider_extra_includes.hpp")
    #include "BoxCollider_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief A collider which represents a rectangular collision area.
     */
    class DLL_EXPORT BoxCollider : public Collider {
        public:

            BoxCollider(float width, float height, std::vector<int> collideLayers, Vector2<float> offset) : Collider(collideLayers, offset);
            /**
             * @brief The collider's width
             * @return The current width
             */
            float GetWidth() const;

            /**
             * @brief The collider's width
             * @param newWidth The desired width
             */
            void SetWidth(float newWidth);

            /**
             * @brief The collider's height
             * @return The current height
             */
            float GetHeight() const;

            /**
             * @brief The collider's height
             * @param newHeight The desired height
             */
            void SetHeight(float newHeight);

        private:
        #include "BoxCollider_private.hpp"
    };
}

#endif // BOXCOLLIDER_H_
