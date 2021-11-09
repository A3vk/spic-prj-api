#ifndef EVENTTYPE_H_
#define EVENTTYPE_H_

#include "Export.hpp"

namespace spic {
	namespace Events {
		enum DLL_EXPORT EventType {
			None,
			WindowClose,
			WindowResize,
			KeyPressed,
			KeyDown,
			MouseButtonPressed,
			MouseButtonReleased,
			MouseMoved,
			MouseScrolled,
			Collision
		};
	}
}

#endif // EVENTTYPE_H_