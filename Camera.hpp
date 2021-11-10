#ifndef CAMERA_H_
#define CAMERA_H_

#include "Export.hpp"

#include "GameObject.hpp"
#include "Color.hpp"
#include "Scene.hpp"

#if __has_include("Camera_extra_includes.hpp")
    #include "Camera_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Class representing a point of view towards the game scene.
     */
    class DLL_EXPORT Camera : public GameObject {
    public:
        Camera(Color backgroundColor, float aspectWidth, float aspectHeight, const std::string& name) : GameObject(name);
        
        Color GetBackgroundColor() const;

        void SetBackgroundColor(Color color);

        float GetAspectWidth() const;

        void SetAspectWidth(float aspectWidth);

        float GetAspectHeight() const;

        void SetAspectHeight(float aspectHeight);

        std::shared_ptr<Scene> GetScene() const;

        void SetScene(std::shared_ptr<Scene> scene);
    private:
    #if __has_include("Camera_private.hpp")
        #include "Camera_private.hpp"
    #endif
    };

}

#endif // CAMERA_H_
