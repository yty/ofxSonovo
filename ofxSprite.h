#pragma once

class ofxSprite{

public:

void setShader(ofShader shader);

void setPosition(ofvec2f pos);
void setPosition(float x,float y);
ofvec2f getPosition();

void setAngle(float angle);
float getAngle();

void setScale(ofvec2f scale);
void setScale(float x,float y);
ofvec2f getScale();

void setColor(ofColor color);
ofColor getColor();

}

///以后可能会更新的内容,根据ofxSprite派生出slicedSprite,tileSprite


