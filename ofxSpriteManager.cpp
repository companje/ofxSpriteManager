#include "ofxSpriteManager.h"

void ofxSpriteManager::update() {
    for (int i=0; i<size(); i++) {
        at(i)->update();
    }
}

void ofxSpriteManager::add(ofxSprite& sprite) {
    push_back(&sprite);
}

ofxSprite& ofxSpriteManager::operator[](string id) {
    for (int i=0; i<size(); i++) {
        if (at(i)->id==id) return *at(i);
    }
    ofLogError("ofxSpriteManager[\""+id+"\"] not found");
    std::exit(1);
    return *at(0);
}