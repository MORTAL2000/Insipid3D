#pragma once

#include <glm/glm.hpp>
#include <btBulletDynamicsCommon.h>

struct Engine;
struct Entity;

struct Editor
{
	Editor(Engine* enginePtr);

	void tick();
	void render();
	Entity* pointSelectionLast = nullptr;
	Entity* pointSelection = nullptr;
	glm::vec3 pointSelectionAxis;
	float pointSelectionDistance = 0;

	Entity* selectedEntityLast = nullptr;
	Entity* selectedEntity = nullptr;
	float distanceToSelected = 0;
	glm::vec3 grabOffset;
	glm::vec3 grabPos;
	glm::vec3 grabPosOld;
	glm::vec3 grabVel;
	glm::vec3 oldPos;
	btQuaternion grabRotation;
	float grabWorldYaw;

	Engine* engine;
	bool inEditor;
};