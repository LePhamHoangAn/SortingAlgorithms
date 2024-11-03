#pragma once

#ifndef TEST_SORTING_H_INCLUDED
#define TEST_SORTING_H_INCLUDED

#include "sorting.h"

#include <algorithm>
#include <vector>
#include <iostream>

static bool verify(const std::vector<int>& lhs, const std::vector<int>& rhs)
{
    if (lhs.size() != rhs.size())
        return false;

    const std::size_t count = lhs.size();
    for (std::size_t index = 0; index < count; index++) 
    {
        if (lhs[index] != rhs[index]) 
            return false;
    }

    return true;
}

void test_sorting() 
{
    std::vector<int> unsorted;
    unsorted.reserve(512);
    for (int index = 0; index < 512; index++) {
        unsorted.push_back(index);
    }

    std::vector<int> expected(unsorted);
    std::random_shuffle(unsorted.begin(), unsorted.end());

    // note: insertion sort
    {
        std::vector<int> result;
        insertion_sort(unsorted, result);
        if (!verify(expected, result)) {
            std::cout << "failed: insertion sort!" << std::endl;
        }
        else {
            std::cout << "passed: insertion sort" << std::endl;
        }

    }

    // note: bubble sort
    {
        std::vector<int> result(unsorted);
        bubble_sort(result);
        if (!verify(expected, result)) {
            std::cout << "failed: bubble sort!" << std::endl;
        }
        else {
            std::cout << "passed: bubble sort" << std::endl;
        }
    }

    // note: quicksort
    {
        std::vector<int> result(unsorted);
        quick_sort(result);
        if (!verify(expected, result)) {
            std::cout << "failed: quicksort!" << std::endl;
        }
        else {
            std::cout << "passed: quicksort" << std::endl;
        }
    }
}





#endif // TEST_SORTING_H_INCLUDED

