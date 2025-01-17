#ifndef COMPONENT_H_
#define COMPONENT_H_

#include "Export.hpp"

#if __has_include("Component_extra_includes.hpp")
    #include "Component_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Base class for all components.
     */
    class DLL_EXPORT Component {
        public:

            Component();
            virtual ~Component();

            /**
             * @brief Getter for active status.
             * @return true if active, false otherwise.
             */
            bool Active() const { return active; }

            /**
             * @brief flag New active status.
             */
            void Active(bool flag) { active = flag; }

        private:
        #if __has_include("Component_private.hpp")
        #include "Component_private.hpp"
        #endif
    };

}

#endif // COMPONENT_H_
