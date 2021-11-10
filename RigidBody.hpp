#ifndef RIGIDBODY_H_
#define RIGIDBODY_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Vector2.hpp"

#if __has_include("RigidBody_extra_includes.hpp")
    #include "RigidBody_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Enumeration for different rigid body types
     */
    enum DLL_EXPORT class BodyType {
        staticBody,
        kinematicBody,
        dynamicBody
    };

    /**
     * @brief A component representing a rigid body.
     */
    class DLL_EXPORT RigidBody : public Component {
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
        #if __has_include("RigidBody_private.hpp")
            #include "RigidBody_private.hpp"
        #endif
    };

}

#endif // RIGIDBODY_H_
