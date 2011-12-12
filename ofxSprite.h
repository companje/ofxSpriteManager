#pragma once

#include "ofMain.h"
#include "ofxAssets.h"

class ofxSprite : public ofNode {
public:
    
    ofxSprite();
    void load(string filename, int numFrames=1, int start=0, string id="");
    
    void customDraw();

    void draw(float x, float y);
    void draw(ofVec2f v);
    void draw();
    
    void setAnchorPercent(float xPct, float yPct);
    void setFrameRate(int frameRate);
    void setSpeed(float speed);
    void setProgress(float pct);
    void setPosition(float x, float y);
    void setPosition(ofVec3f v);
    void setRotation(float rotation);
    void addFile(string filename);
    void setCurrentFrame(float frame);
    void setLoop(bool loop);
    void nextFrame();
    void previousFrame();
    void center();
    
    void play();
    void pause();
    void stop();
    void update();
    
    float getProgress(); // 0..1
    int getTotalFrames();
    int getCurrentFrame();
    bool getIsPlaying();
    float getWidth();
    float getHeight();

    ofImage& getImageAtFrame(int frame);
    ofImage& getCurrentImage();
    ofRectangle getBounds();
    ofVec2f getSize();
    
    string id;
    bool visible;
    
private:
    int totalFrames;
    int frameRate;
    bool loop;
    float speed;
    float pos;
    bool isPlaying;
    ofPoint anchorPoint;
    vector<string> filenames;
    static ofxImageAssets assets;
};
