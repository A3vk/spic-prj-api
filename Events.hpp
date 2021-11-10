#ifndef EVENT_H_
#define EVENT_H_

#include "Export.hpp"

#include "EventType.hpp"
#include "Vector2.hpp"
#include "Input.hpp"
#include "Collider.hpp"

#if __has_include("Events_extra_includes.hpp")
	#include "Events_extra_includes.hpp"
#endif

namespace spic {
	namespace Events {
		struct DLL_EXPORT Event {
			bool Handled;
			EventType EventType;
		};

		struct DLL_EXPORT MouseEvent : public Event {
			spic::Vector2<float> Position;
			spic::MouseButton Button;
			bool IsPressed;
		};

		struct DLL_EXPORT CollisionEvent : public Event {
			spic::Collider& Collider;
			spic::Collider& OtherCollider;
		};

		struct DLL_EXPORT KeyEvent : public Event {
			spic::KeyCode Key;
			bool IsPressed;
		};
	}
}

#endif // EVENT_H_