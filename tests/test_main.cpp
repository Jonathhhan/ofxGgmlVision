#include "ofxGgmlVision.h"

#include <iostream>

int main() {
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