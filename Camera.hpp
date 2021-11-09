#ifndef CAMERA_H_
#define CAMERA_H_

#include "GameObject.hpp"
#include "Color.hpp"
#include "Scene.hpp"
#include "Camera_extra_includes.hpp"

namespace spic {

    /**
     * @brief Class representing a point of view towards the game scene.
     */
    class Camera : public GameObject {
    public:
        Camera(Color backgroundColor, float aspectWidth, float aspectHeight, const std::string& name) : GameObject(name);
        
        Color GetBackgroundColor();

        void SetBackgroundColor(Color color);

        float GetAspectWidth();

        void SetAspectWidth(float aspectWidth);

        float GetAspectHeight();

        void SetAspectHeight(float aspectHeight);

        std::shared_ptr<Scene> GetScene();

        void SetScene(std::shared_ptr<Scene> scene);
    private:
    #include "Camera_private.hpp"
    };

}

#endif // CAMERA_H_
