#ifndef PARTICLEEMITTER_H_
#define PARTICLEEMITTER_H_

#include "Component.hpp"
#include "Particle.hpp"

#if __has_include("ParticleEmitter_extra_includes.hpp")
	#include "ParticleEmitter_extra_includes.hpp"
#endif

namespace spic {
	class ParticleEmitter : public Component {
	public:
		ParticleEmitter(Particle particle);
		void Play();
		void Stop();
	private:
	#include "ParticleEmitter_private.hpp"
	};
}

#endif // PARTICLEEMITTER_H_