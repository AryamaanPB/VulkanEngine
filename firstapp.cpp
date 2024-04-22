#include "firstapp.hpp"

namespace lve {

	void FirstApp::run() {

		while (!lveWindow.shouldClose()) {
			glfwPollEvents();
		}
	}
}