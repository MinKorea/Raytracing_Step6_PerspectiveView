#pragma once

#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtx/string_cast.hpp>

namespace hlab
{
    class Object;

    class Hit
    {
    public:
        float d;          // distance of start position of ray to the hit position 
        glm::vec3 point;  // Position of hit
        glm::vec3 normal; // Normal vector of the position of hit 

        std::shared_ptr<Object> obj; // 나중에 물체의 재질 등을 가져오기 위한 포인터
    };
}