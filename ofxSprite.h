#pragma once
#include "ofTexture.h"
#include "ofShader.h"
#include "ofxObject.h"

class ofxSprite : public ofTexture, public ofxObject
{
 public:

 ofxSprite(){}
 virtual ~ofxSprite(){}


 void draw();
 void draw(ofPoint pos,float ang,float s,ofColor cl);
 
 bool loadFromFile(const char *filename); //当没有资源管理器时使用,如果有资源管理器加载资源，直接=赋值

}

///以后可能会更新的内容
//1根据ofxSprite派生出slicedSprite,tileSprite
//2添加Near方法
//3添加Rotate的其他轴
//4添加BlendMode

