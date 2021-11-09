#ifndef PARTICLEEMITTER_H_
#define PARTICLEEMITTER_H_

#include "Export.hpp"

#include "Component.hpp"
#include "Particle.hpp"

#if __has_include("ParticleEmitter_extra_includes.hpp")
	#include "ParticleEmitter_extra_includes.hpp"
#endif

namespace spic {
	class DLL_EXPORT ParticleEmitter : public Component {
	public:
		ParticleEmitter(Particle particle);
		void Play();
		void Stop();
	private:
	#include "ParticleEmitter_private.hpp"
	};
}

#endif // PARTICLEEMITTER_H_