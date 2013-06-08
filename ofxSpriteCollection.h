#pragma once

class ofxSpriteCollection{

public:

ofxSpriteCollection();
~ofxSpriteCollection();

bool setSection(vector<sequenceSection> seqSection)
bool lastSection() //是否播放到最后一个Section
bool isDone(string name = "")     //如果为空判断是否播放完成所有Section ,如果指定名字判断是否播放完成当前section

void restart()  //不管当前播放到什么section,均复位到最初section从新开始播放
void restartAndWait() //不管当前播放到什么section,均复位到最初并且不播放
string getCurSectionName() //获取当前section名字
vector<sequenceSection> getSection() //获取当前section
int getSectionNum() //得到当前section数量

void playSection(string name = "") //如果为空播放所有section,如果指定名字则播放指定section

}


//sequenceSection结构或类:sectionName,sequenName,startFrame,endFrame,loopNum,(delayFrame,delayValue这里也可以用你的思路)
//备选名字sequenceClip，或者都去掉sequence

//备选名字ofxImageSequenceManager.h,ofxImageSequenceCollection.h
