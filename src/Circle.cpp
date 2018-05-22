#include "Circle.h"

//Commited to Github May 21 2018

//--------------------------------------------------------------
Circle::Circle() {
    location = ofPoint(ofRandomWidth(), ofRandomHeight());
    velocity = ofPoint(ofRandom(-1,1), ofRandom(-1,1));
    
    radius = ofRandom(5, 15);
    color = ofColor(ofRandom(255),ofRandom(255),ofRandom(255));
    heading = ofRandom(TWO_PI);
    angle = TWO_PI/36;
 

    

}
//---------------------------------------------
void Circle::setup(ofVec2f _location, ofVec2f _velocity, float _radius, ofColor _color){
    location = _location;
    velocity = _velocity;
    radius = _radius;
    color = _color;
    
    
}

//--------------------------------------------------------------



//--------------------------------------------------------------
void Circle::draw(){
    ofSetColor(color);
    ofDrawCircle(location, radius);

}

//--------------------------------------------------------------
void Circle::move() {
   // velocity.x += velocity.x *cos(heading);
   // velocity.y += velocity.y * sin(heading);
    
    
      location = location + velocity;
    
    
}
//------------------------------------------
void Circle::constrain() {
    
    
    if (location.x>=ofGetWidth()-radius || location.x<=0+radius){
        velocity.x = velocity.x * -1;
    }
    if (location.y>=ofGetHeight()-radius || location.y<=0+radius){
        velocity.y = velocity.y * -1;
    }
    
    
}
//-------------------------------------
void Circle::change() {
    
    
}
//------------------------------

