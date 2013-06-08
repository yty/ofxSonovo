#pragma once

class ofxSpriteSequence{

public:

ofxSpriteSequence();
~ofxSpriteSequence();


void update();
void draw();

void setSequence(vector<ofTexture*> imgSeq,float fps = 24); //设置序列图
void setFrameRate(float fps); //设置播放速率
int getFrameNums(); //获取序列图数量

ofTexture* getPct(float pct); //根据百分比返回序列图
ofTexture* getFrame(int which); //根据帧数返回序列图

void setPlayMode(mode m); //有3种播放模式 正播，倒播,pingpong播,
void setKeepLastFrame(bool b); //播完了是否停留在最后一帧

bool setLoopNum(int num); //-1 无限次
int getLoopNum(); //2013.6.7 

void setPlay(); //2013.6.8
void setPause(); //2013.6.8
void setStop(); //2013.6.8
void isPlay(); //当前是否是播放状态2013.6.8


private:


}

//考虑针对只有一张的序列帧做优化. //2013.6.8

