#ifndef VECTOR2_H_
#define VECTOR2_H_

namespace spic {

    /**
     * @brief Struct representing both a 2D point and a 2D vector.
     */
    template<class T = float>
    struct Vector2 {
        T x;
        T y;

        Vector2<T> operator+ (Vector2<T> const& obj);
        Vector2<T> operator- (Vector2<T> const& obj);
        T operator* (Vector2<T> const& obj);

        static const Vector2& Up();
        static const Vector2& Right();
        static const Vector2& Down();
        static const Vector2& Left();
    };
}

#endif // VECTOR2_H_
