#pragma once

class ofxSprite{

public:

ofxSprite();
~ofxSprite();


void update();
void draw();

///Transform

void setPosition(ofvec2f pos);
void setPosition(float x,float y);
ofvec2f getPosition();

void setRotate(float angle);
float getRotate();

void setScale(ofvec2f scale);
void setScale(float x,float y);
ofvec2f getScale();

///Render

void setTexture(ofTexture* tex) //设置sprite将绘制的纹理
void setShader(ofShader* shader); //设置sprite将使用的shader
bool isShader();  //是否使用了shader

void setColor(ofColor color); //设置sprite将使用的color
ofColor getColor();

private:
 ofTexture* tex;
 bool isShader; 

}

///以后可能会更新的内容
//1根据ofxSprite派生出slicedSprite,tileSprite
//2添加Near方法
//3添加Rotate的其他轴

