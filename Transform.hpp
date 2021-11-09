#ifndef TRANSFORM_H_
#define TRANSFORM_H_

#include "Export.hpp"

#include "Vector2.hpp"

#if __has_include("Transform_extra_includes.hpp")
    #include "Transform_extra_includes.hpp"
#endif

namespace spic {
    /**
     * @brief Instances of this class represent specific 2D transformations.
     */
    class DLL_EXPORT Transform {
    public:
        Transform(const Vector2<float>& pos, float rot, float scale);
        void LookAt(const Vector2<float>& pos);

        Vector2<float> Position;
        double Rotation;
        double Scale;
    private:
    #include "Transform_private.hpp"
    };
}

#endif // TRANSFORM_H_