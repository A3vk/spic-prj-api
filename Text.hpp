#ifndef TEXT_H_
#define TEXT_H_

#include "Export.hpp"

#include "UIObject.hpp"
#include "Color.hpp"
#include <string>

#if __has_include("Text_extra_includes.hpp")
    #include "Text_extra_includes.hpp"
#endif

namespace spic {

    /**
     * @brief Enumeration for different text alignments.
     */
    enum class DLL_EXPORT Alignment {
        left,
        center,
        right
    };

    /**
     * @brief Class representing a piece of text which can be rendered.
     */
    class DLL_EXPORT Text : public UIObject {
    public:
        Text(const std::string& text, const std::string& font, int size, Alignment alignment, Color color, float width, float height, const std::string& name) : UIObject(width, height, name);
        
        std::string GetText;
        void SetText(const std::string& newText);

        std::string GetFont();
        void SetFont(const std::string& newFont);

        int GetFontSize();
        void SetFontSize(int newSize);

        Alignment GetAlignment();
        void SetAlignment(Alignment newAlignment);

        Color GetColor();
        void SetColor(Color newColor);

    private:
    #include "Text_private.hpp"
    };

}

#endif // TEXT_H_
