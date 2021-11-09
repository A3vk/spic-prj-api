#ifndef SPRITESHEET_H_
#define SPRITESHEET_H_

#include <vector>
#include <memory>
#include "Vector2.hpp"

#if __has_include("SpriteSheet_extra_includes.hpp")
	#include "SpriteSheet_extra_includes.hpp"
#endif

namespace spic {
	class SpriteSheet {
	public:
		SpriteSheet(Vector2<int> frameSize, const std::string& url, int spriteCount);
		const Sprite& operator[](int i);
		int GetSpriteCount();
	private:
	#include "SpriteSheet_private.hpp"
	};
}

#endif // SPRITESHEET_H_