#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Vector2.hpp"
#include "Transform.hpp"
#include <string>
#include <vector>
#include <memory>

#if __has_include("GameObject_extra_includes.hpp")
    #include "GameObject_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Any object which should be represented on screen.
     */
    class DLL_EXPORT GameObject {
        public:
            /**
             * @brief Finds a GameObject by name and returns it.
             * @param name The name of the GameObject you want to find.
             * @return Pointer to GameObject, or nullptr if not found.
             */
            static std::shared_ptr<GameObject> Find(const std::string& name);

            /**
             * @brief Returns a vector of active GameObjects tagged tag. Returns empty
             *        vector if no GameObject was found.
             * @param tag The tag to find.
             * @return std::vector of GameObject pointers. No ownership.
             */
            static std::vector<std::shared_ptr<GameObject>> FindGameObjectsWithTag(const std::string& tag);

            /**
             * @brief Returns one active GameObject tagged tag. Returns nullptr if no GameObject was found.
             * @param tag The tag to find.
             * @return Pointer to GameObject, or nullptr if not found.
             */
            static std::shared_ptr<GameObject> FindWithTag(const std::string& tag);

            /**
             * @brief Returns the first active loaded object of Type type.
             */
            template<class T>
            static std::shared_ptr<T> FindObjectOfType(bool includeInactive = false);

            /**
             * @brief Gets a list of all loaded objects of Type type.
             */
            template<class T>
            static std::vector<std::shared_ptr<T>> FindObjectsOfType(bool includeInactive = false);

            /**
             * @brief Removes a GameObject from the administration.
             * @details TODO What happens if this GameObject is a parent to others? What happens
             *          to the Components it possesses?
             * @param obj The GameObject to be destroyed. Must be a valid pointer to existing Game Object.
             * @exception A std::runtime_exception is thrown when the pointer is not valid.
             */
            static void Destroy(std::shared_ptr<GameObject> obj);

            /**
             * @brief Removes a Component.
             * @details Will search for the Component among the GameObjects.
             * @param obj The Component to be removed.
             */
            static void Destroy(std::shared_ptr<Component> obj);

            /**
             * @brief Constructor.
             * @details The new GameObject will also be added to a statically
             *          available collection, the administration.  This makes the
             *          Find()-functions possible.
             * @param name The name for the game object.
             */
            GameObject(const std::string& name);

            virtual ~GameObject();

            /**
             * @brief Compare two GameObjects.
             * @param other The other object to compare this one with.
             * @return true if not equal, false otherwise.
             */
            bool operator!=(const GameObject& other);

            /**
             * @brief Compare two GameObjects
             * @param other The other object to compare this one with.
             * @return true if equal, false otherwise.
             */
            bool operator==(const GameObject& other);

            /**
             * @brief Add a Component of the specified type. Must be a valid
             *        subclass of Component. The GameObject assumes ownership of
             *        the Component.
             * @details This function places a pointer to the component in
             *          a suitable container.
             * @param component Reference to the component.
             */
            template<class T>
            void AddComponent(std::shared_ptr<Component> component);

            void RemoveComponent(std::shared_ptr<Component> component);

            /**
             * @brief Get the first component of the specified type. Must be
             *        a valid subclass of Component.
             * @return Pointer to Component instance.
             */
            template<class T>
            std::shared_ptr<T> GetComponent() const;

            /**
             * @brief Get the first component of the specified type from
             *        contained game objects. Must be
             *        a valid subclass of Component.
             * @return Pointer to Component instance.
             */
            template<class T>
            std::shared_ptr<T> GetComponentInChildren() const;

            /**
             * @brief Get the first component of the specified type from
             *        the parent game object. Must be
             *        a valid subclass of Component.
             * @return Pointer to Component instance.
             */
            template<class T>
            std::shared_ptr<T> GetComponentInParent() const;

            /**
             * @brief Get all components of the specified type. Must be
             *        a valid subclass of Component.
             * @return Vector with pointers to Component instances.
             */
            template<class T>
            std::vector<std::shared_ptr<T>> GetComponents() const;

            /**
             * @brief Get all components of the specified type from
             *        contained game objects. Must be
             *        a valid subclass of Component.
             * @return Vector with pointers to Component instances.
             */
            template<class T>
            std::vector<std::shared_ptr<T>> GetComponentsInChildren() const;

            /**
             * @brief Get all components op the specified type from
             *        the parent game object. Must be
             *        a valid subclass of Component.
             * @return Vector with pointers to Component instances.
             */
            template<class T>
            std::vector<std::shared_ptr<T>> GetComponentsInParent() const;

            /**
             * @brief Activates/Deactivates the GameObject, depending on the given true or false value.
             * @param active Desired value.
             */
            void SetActive(bool flag);

            /**
             * @brief Returns whether this game object is itself active.
             * @return true if active, false if not.
             */
            bool IsActiveSelf() const;

            /**
             * @brief Returns whether this game component is active, taking its parents
             *        into consideration as well.
             * @return true if game object and all of its parents are active,
             *        false otherwise.
             */
            bool IsActiveInWorld() const;

            void Move(const Vector2<float>&, double rot = 0);

            const Transform& GetAbsolutePosition();
            const Transform& GetRelativePosition();

            const std::string& GetName() const;

            const std::string& GetTag() const;
            void SetTag(const std::string& tag);

            const int GetLayer() const;
            void SetLayer(int layer);

        protected:
            std::string name;
            std::string tag;
            bool active;
            int layer;
            spic::Transform transform;
            std::vector<std::shared_ptr<Component>> components;
            std::shared_ptr<GameObject> parent;
            std::vector<std::shared_ptr<GameObject>> children;

        #if __has_include("GameObject_protected.hpp")
            #include "GameObject_protected.hpp"
        #endif

        private:
        #if __has_include("GameObject_private.hpp")
            #include "GameObject_private.hpp"
        #endif
    };
    #if __has_include("GameObject_templates.hpp")
        #include "GameObject_templates.hpp"
    #endif
}

#endif // GAMEOBJECT_H_
