#include "IdGenerator.h"


IdGenerator::IdGenerator() {
    this->id = -1;
}

IdGenerator* IdGenerator::getInstance()
{
    if (!instance)
        instance = new IdGenerator;
        
    return instance;
}

int IdGenerator::getId()
{
    this->id += 1;
    return this->id;
}
