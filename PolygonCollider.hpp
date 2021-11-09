#ifndef POLYGONCOLLIDER_H_
#define POLYGONCOLLIDER_H_

#include "Export.hpp"

#include <vector>
#include "Collider.hpp"

#if __has_include("PolygonCollider_extra_includes.hpp")
	#include "PolygonCollider_extra_includes.hpp"
#endif

namespace spic {
	class DLL_EXPORT PolygonCollider : public Collider {
	public:
		PolygonCollider(std::vector<Vector2<float>> points, std::vector<int> collideLayers, Vector2<float> offset) : Collider(collideLayers, offset);
		void AddPoint(Vector2<float> newPoint);
	private:
	#if __has_include("PolygonCollider_private.hpp")
		#include "PolygonCollider_private.hpp"
	#endif
	};
}

#endif // POLYGONCOLLIDER_H_