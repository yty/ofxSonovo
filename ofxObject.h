#pragma once

class ofxObject
{

protected:

  ofShader shader;
	ofVec2f position;	
	float angle;		
	float size;			
	ofColor color;		
  
public:

	ofxObject():
		size(1.0f),
		angle(0.0f)
	{	}
  
	virtual ~ofxObject()	{	}
	virtual void setShader(ofShader &sd) {shader = sd;}
	virtual void setPosition(const ofVec2f &pos) {position = pos;}
	virtual void setRotate(float a) {angle = a;}	//[0 - 360]
	virtual void setScale(float s) {size = s;}		//(0 - ...)	
	virtual void setColor(ofColor &c) {color = c;}	//[0 - 255]

	virtual void draw() = 0;
};
