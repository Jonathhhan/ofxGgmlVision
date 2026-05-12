#include "ofxGgmlVision.h"

#include <iostream>

int main() {
	if (OFXGGML_VISION_VERSION_MAJOR != 1 ||
		OFXGGML_VISION_VERSION_MINOR != 0 ||
		OFXGGML_VISION_VERSION_PATCH != 1 ||
		std::string(OFXGGML_VISION_VERSION_STRING) != "1.0.1" ||
		std::string(ofxGgmlVisionGetVersionString()) != "1.0.1") {
		std::cerr << "unexpected vision addon version metadata\n";
		return 1;
	}

	ofxGgmlVisionRequest request;
	if (ofxGgmlVisionUtils::hasInput(request)) {
		std::cerr << "empty request reported as configured\n";
		return 1;
	}

	request.imagePath = "images/frame.png";
	if (!ofxGgmlVisionUtils::hasInput(request)) {
		std::cerr << "configured request reported as empty\n";
		return 1;
	}

	const auto description = ofxGgmlVisionUtils::describe(request);
	if (description.find(request.imagePath) == std::string::npos) {
		std::cerr << "description did not include request input\n";
		return 1;
	}

	return 0;
}
