#ifndef RIGIDBODY_H_
#define RIGIDBODY_H_

#include "Component.hpp"
#include "Vector2.hpp"
#include "RigidBody_extra_includes.hpp"

namespace spic {

    /**
     * @brief Enumeration for different rigid body types
     */
    enum class BodyType {
        staticBody,
        kinematicBody,
        dynamicBody
    };

    /**
     * @brief A component representing a rigid body.
     */
    class RigidBody : public Component {
        public:

            RigidBody(float mass, float gravityScale, BodyType bodyType);
            /**
             * @brief Apply force to this rigid body.
             * @param forceDirection A point, used as a vector to indicate direction
             *        and magnitude of the force to be applied.
             */
            void AddForce(const Vector2<float>& forceDirection);

            float GetMass();

            void SetMass(float newMass);

            float GetGravityScale();

            void SetGravityScale(float newScale);

            BodyType GetBodyType();

            void SetBodyType(BodyType newBodyType);

        private:
        #include "RigidBody_private.hpp"
    };

}

#endif // RIGIDBODY_H_
