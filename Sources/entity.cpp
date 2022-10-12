#include "entity.h"

void Entity::death() { alive = false; }

bool Entity::getStatus() {return alive; }

Entity::~Entity() {}