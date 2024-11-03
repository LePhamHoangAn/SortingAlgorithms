#pragma once

#ifndef SORTING_H_INCLUDED
#define SORTING_H_INCLUDED

#include <vector>

void insertion_sort(const std::vector<int> &in, std::vector<int> &out);
void bubble_sort(std::vector<int>& in_out);
int Partition(std::vector<int>& in_out, int a, int b);
void Quicksortjunior(std::vector<int>& in_out, int a, int b);
void quick_sort(std::vector<int> &in_out);


#endif // SORTING_H_INCLUDED
