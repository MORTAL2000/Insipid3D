#include "Light.h"

Light::Light(glm::vec3 pos, glm::vec3 col, float intensity, uint8_t type, glm::vec3 dir, int worldLight)
:pos(pos), col(col), intensity(intensity), type(type), dir(dir), worldLight(worldLight)
{
	entParent = nullptr;
}