#ifndef CIRCLECOLLIDER_H_
#define CIRCLECOLLIDER_H_

#include <vector>
#include "Collider.hpp"
#include "Vector2.hpp"
#include "CircleCollider_extra_includes.hpp"

namespace spic {

    /**
     * @brief A collider which represents a circular collision area.
     */
    class CircleCollider : public Collider {
        public:

            CircleCollider(float radius, std::vector<int> collideLayers, Vector2<float> offset) : Collider(collideLayers, offset);
            /**
             * @brief Get the collider's radius
             * @return The radius
             */
            float Radius() const;

            /**
             * @brief Set the collider's radius
             * @param newRadius The desired radius
             */
            void Radius(float newRadius);

        private:
        #include "CircleCollider_private.hpp"
    };

}

#endif // CIRCLECOLLIDER_H_
