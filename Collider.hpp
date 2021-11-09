#ifndef COLLIDER2D_H_
#define COLLIDER2D_H_

#include "Export.hpp"

#include <vector>
#include "Component.hpp"
#include "Vector2.hpp"

#if __has_include("Collider_extra_includes.hpp")
    #include "Collider_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief The base class for all colliders.
     */
    class DLL_EXPORT Collider : public Component {
    public:
        Collider(std::vector<int> collideLayers, Vector2<float> offset);
        Vector2 offset;
    private:
    #include "Collider_private.hpp"
    };

}

#endif // COLLIDER2D_H_
