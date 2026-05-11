#pragma once

#include "ofxGgmlVisionTypes.h"

#include <string>

namespace ofxGgmlVisionUtils {
	bool hasInput(const ofxGgmlVisionRequest & request);
	std::string describe(const ofxGgmlVisionRequest & request);
}