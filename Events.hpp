#ifndef EVENT_H_
#define EVENT_H_

#include "EventType.hpp"
#include "Vector2.hpp"
#include "Input.hpp"
#include "Collider.hpp"

#if __has_include("Events_extra_includes.hpp")
	#include "Events_extra_includes.hpp"
#endif

namespace spic {
	namespace Events {
		struct Event {
			bool Handled;
			EventType EventType;
		};

		struct MouseEvent : public Event {
			spic::Vector2<float> Position;
			spic::MouseButton Button;
			bool IsPressed;
		};

		struct CollisionEvent : public Event {
			spic::Collider& Collider;
			spic::Collider& OtherCollider;
		};

		struct KeyEvent : public Event {
			spic::KeyCode Key;
			bool IsPressed;
		};
	}
}

#endif // EVENT_H_