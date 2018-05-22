#pragma once

#include "ofMain.h"






class Circle {

   public:
      Circle();
        // member variables
              ofPoint location;
              ofPoint velocity;
              float radius;
              ofColor color;
              
              //member functions
              void setup(ofVec2f _location, ofVec2f _velocity, float _radius, ofColor _color);
              void draw();
              void move();
              void constrain();
              void change();
              void behavior4();
    float x, y, heading, angle, speed;

		
};
