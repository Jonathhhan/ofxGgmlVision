#include "ofxGgmlVisionUtils.h"

namespace ofxGgmlVisionUtils {
	bool hasInput(const ofxGgmlVisionRequest & request) {
		return !request.imagePath.empty();
	}

	std::string describe(const ofxGgmlVisionRequest & request) {
		if (!hasInput(request)) {
			return "vision: empty request";
		}
		return "vision: " + request.imagePath;
	}
}