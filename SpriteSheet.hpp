#ifndef SPRITESHEET_H_
#define SPRITESHEET_H_

#include <vector>
#include <memory>
#include "Vector2.hpp"
#include "SpriteSheet_extra_includes.hpp"

namespace spic {
	class SpriteSheet {
	public:
		SpriteSheet(Vector2 frameSize, const std::string& url, int spriteCount);
		const Sprite& operator[](int i);
		int GetSpriteCount();
	private:
	#include "SpriteSheet_private.hpp"
	};
}

#endif // SPRITESHEET_H_