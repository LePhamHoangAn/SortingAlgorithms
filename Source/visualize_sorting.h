#pragma once

#ifndef VISUALIZE_SORTING_H
#define VISUALIZE_SORTING_H

#include "screen.h"
#include <vector>

static Screen* S_SCREEN = nullptr;

static void visualize_sorting(std::vector<int>& vector)
{
	S_SCREEN->Clear();
	int widthPadding = (S_SCREEN->GetWindowWidth() - (int)vector.size()) / 2;
	int heightPadding = (S_SCREEN->GetWindowHeight() - (int)vector.size()) / 2;
	for (int i = 0; i < vector.size(); i++)
	{
		int x = i + widthPadding;
		int y = S_SCREEN->GetWindowHeight() - heightPadding - vector[i];
		int w = 1;
		int h = vector[i];
		S_SCREEN->DrawRectangle(x, y, w, h);
	}
	S_SCREEN->Display();
}

#endif // VISUALIZE_SORTING_H
