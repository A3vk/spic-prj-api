#ifndef SPRITERENDERER_H_
#define SPRITERENDERER_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Color.hpp"
#include <string>

#if __has_include("Sprite_extra_includes.hpp")
    #include "Sprite_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief A component representing a sprite (small image)
     */
    class DLL_EXPORT Sprite : public Component {
    public:
        Sprite(const std::string& sprite, Color color, int sortingLayer, int orderInLayer);

        std::string GetSpriteUrl();

        Color GetColor();
        void SetColor(Color newColor);

        bool ShouldFlipX();
        void SetFlipX(bool flag);

        bool ShouldFlipY();
        void SetFlipY(bool flag);

        int GetSortingLayer();
        void SetSortingLayer(int newLayer);

        int GetOrderInLayer();
        void SetOrderInLayer(int newOrder);

    private:
    #if __has_include("Sprite_private.hpp")
        #include "Sprite_private.hpp"
    #endif
    };

}

#endif // SPRITERENDERER_H_
