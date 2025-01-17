#ifndef BEHAVIOURSCRIPT_H_
#define BEHAVIOURSCRIPT_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Events.hpp"

#if __has_include("BehaviourScript_extra_includes.hpp")
    #include "BehaviourScript_extra_includes.hpp"
#endif

namespace spic {

    class DLL_EXPORT BehaviourScript : public Component {
        public:

            BehaviourScript();
            /**
             * @brief Called when creating the script
             */
            virtual void OnStart();

            /**
             * @brief Called each frame
             */
            virtual void OnUpdate();

            /**
             * @brief Sent when another object enters a trigger collider
             *        attached to this object (2D physics only).
             */
            virtual void OnCollisionEnter2D(const CollisionEvent& collision);

            /**
             * @brief Sent when another object leaves a trigger collider
             *        attached to this object (2D physics only).
             */
            virtual void OnCollisionExit2D(const CollisionEvent& collision);

            /**
             * @brief Sent when the cursor is moved over the GameObject this script is attached to
             */
            virtual void OnMouseMoved(const MouseEvent& event);

            /**
             * @brief Sent when the mouse is pressed on the GameObject this script is attached to
             */
            virtual void OnMousePressed(const MouseEvent& event);

            /**
             * @brief Sent when the mouse is released on the GameObject this script is attached to
             */
            virtual void OnMouseReleased(const MouseEvent& event);

            /**
             * @brief Sent when a key is pressed
             */
            virtual void OnKeyPressed(const KeyEvent& event);

            /**
             * @brief Sent when a key is released
             */
            virtual void OnKeyReleased(const KeyEvent& event);
    };

}

#endif // BEHAVIOURSCRIPT_H_
