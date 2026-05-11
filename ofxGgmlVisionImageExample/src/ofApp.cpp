#include "ofApp.h"

void ofApp::setup() {
	ofSetWindowTitle("ofxGgmlVision smoke example");
	request.imagePath = "images/frame.png";
	status = ofxGgmlVisionUtils::describe(request);
	ofLogNotice("ofxGgmlVisionImageExample") << status;
}

void ofApp::draw() {
	ofBackground(18);
	ofSetColor(240);
	ofDrawBitmapString("ofxGgmlVision", 32, 48);
	ofDrawBitmapString(status, 32, 78);
}