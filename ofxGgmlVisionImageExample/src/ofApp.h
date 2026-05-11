#pragma once

#include "ofMain.h"
#include "ofxGgmlVision.h"

class ofApp : public ofBaseApp {
public:
	void setup() override;
	void draw() override;

private:
	ofxGgmlVisionRequest request;
	std::string status;
};