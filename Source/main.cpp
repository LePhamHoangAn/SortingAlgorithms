//Name: Pham Hoang An Le
#include "Screen.h"
#include "test_sorting.h"
#include "visualize_sorting.h"

int main(int argc, char** argv) {
	
	int screenWidth = 550;
	int screenHeight = 550;

	Screen screen(screenWidth, screenHeight, "Galba");
	S_SCREEN = &screen;

	while (screen.IsOpen())
	{
		screen.Clear();

		// PASS
		test_sorting();

		screen.Display();
	}
	return 0;
}