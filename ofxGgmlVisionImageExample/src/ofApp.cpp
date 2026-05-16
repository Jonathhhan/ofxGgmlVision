#include "ofApp.h"

void ofApp::setup() {
	ofSetWindowTitle("ofxGgmlVision smoke example");
	gui.setup(nullptr, false);
	request.imagePath = "images/frame.png";
	status = ofxGgmlVisionUtils::describe(request);
	ofLogNotice("ofxGgmlVisionImageExample") << status;
}

void ofApp::draw() {
	ofBackground(18);
	gui.begin();
	ImGui::SetNextWindowPos(ImVec2(24.0f, 24.0f), ImGuiCond_Once);
	ImGui::SetNextWindowSize(ImVec2(560.0f, 220.0f), ImGuiCond_Once);
	if (ImGui::Begin("ofxGgmlVision Image Example")) {
		ImGui::TextUnformatted("Image Request");
		ImGui::Separator();
		ImGui::TextWrapped("%s", status.c_str());
	}
	ImGui::End();
	gui.end();
	gui.draw();
}
