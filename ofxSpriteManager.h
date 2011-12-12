#pragma once

#include "ofMain.h"
#include "ofxExtras.h"
#include "ofxSprite.h"

class ofxSpriteManager : public vector<ofxSprite*> {
public:

    //methods
    void update();
    void add(ofxSprite& sprite);
    
    //operators
    ofxSprite& operator[](string id);
    ofxSprite& operator[](int i) { return *at(i); }; 

};
