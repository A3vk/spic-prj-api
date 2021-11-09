#ifndef PARTICLE_H_
#define PARTICLE_H_

#include "Export.hpp"

#include "Color.hpp"
#include "Vector2.hpp"

#if __has_include("Particle_extra_includes.hpp")
	#include "Particle_extra_includes.hpp"
#endif

namespace spic {
	struct DLL_EXPORT Particle {
		Vector2<float> Gravity;
		float RadialAcceleration;
		float RadialAccelerationVar;
		float Speed;
		float SpeedVar;
		int Angle;
		int AngleVar;
		float Life;
		float LifeVar;
		float StartSize;
		float StartSizeVar;
		float EndSize;
		float EndSizeVar;
		float EmissionRate;
		Color StartColor;
		Color EndColor;
		Vector2<float> EmissionArea;
	};
}

#endif // PARTICLE_H_