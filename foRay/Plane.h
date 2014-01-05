//
//  Plane.h
//  SimpleRayTracer
//
//  Created by Kyle Halladay on 12/13/2013.
//  Copyright (c) 2013 Kyle Halladay. All rights reserved.
//

#ifndef __SimpleRayTracer__Plane__
#define __SimpleRayTracer__Plane__

#include "Traceable.h"

class Plane : public Traceable
{
public:
    vec3 center;
    vec3 n;
    
    Plane(vec3 position, vec3 normal, Material *mat) : center(position), n(normal)
    {
        material = mat;
    }
    
    bool intersect(Ray* r, RaycastHit* hit);

};

#endif /* defined(__SimpleRayTracer__Plane__) */