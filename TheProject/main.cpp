#include "src/graphics/window.h"

int main()
{
	using namespace thename;
	using namespace graphics;

	Window window("Falan Engine", 800, 500);
	glClearColor(0.1f, 0.8f, 0.8f, 1.0f);

	while (!window.closed())
	{
		window.clear();
		glBegin(GL_TRIANGLES);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(0.0f, 0.5f);
		glVertex2f(0.5f, -0.5f);
		glEnd();
		window.update();
	}

	return 0;
}