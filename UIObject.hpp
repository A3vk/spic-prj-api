#ifndef UIOBJECT_H_
#define UIOBJECT_H_

#include "Export.hpp"

#include "GameObject.hpp"

#if __has_include("UIObject_extra_includes.hpp")
    #include "UIObject_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Base class for a user interface object like Button or Text.
     */
    class DLL_EXPORT UIObject : public GameObject {
    public:
        UIObject(float width, float height, const std::string& name) : GameObject(name);

        float GetWidth();
        virtual SetWidth(float newWidth);

        float GetHeight();
        virtual SetHeight(float newHeight);
    private:
    #if __has_include("UIObject_private.hpp")
        #include "UIObject_private.hpp"
    #endif
    };

}

#endif // UIOBJECT_H_
