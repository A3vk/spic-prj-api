#ifndef RAY_H_
#define RAY_H_

#include "Export.hpp"

#include "Vector2.hpp"

namespace spic {
	struct DLL_EXPORT Ray {
		Vector2<float> Origin;
		Vector2<float> Direction;
	};
}

#endif // RAY_H_