// DistinctNumbersInWindow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int GetDistinctNumber(const int* pStart, int count)
{   // if set or map is allowed, it will be much simpler -- simply add all the
    //  elements to the set or map, then return the size of the set or map
    int num = 1;
    for (int i = 1; i < count; ++i)
    {
        bool found = false;
        for (int j = 0; j < i; ++j)
        {
            if (pStart[i] == pStart[j])
            {
                found = true;
                break;
            }
        }
        if (!found)
            ++num;
    }

    return num;
}

std::vector<int> DistinctNumbersInWindow(const std::vector<int>& A, int k)
{
    std::vector<int> result;
    result.reserve(A.size() - k + 1);
    for (size_t i = 0; i < A.size() - k + 1; ++i)
    {
        result.push_back(GetDistinctNumber(&A[i], k));
    }

    return result;
}

int main()
{
    while (true)
    {
        int count = 0;
        std::cout << "Number of elements in the array: ";
        std::cin >> count;
        if (count <= 0)
            break;

        std::vector<int> vec(count);
        std::cout << "The array: ";
        for (int i = 0; i < count; ++i)
            std::cin >> vec[i];

        std::cout << "Window size: ";
        int k;
        std::cin >> k;

        std::cout << "The distinct numbers in window: ";
        std::vector<int> disNumbers = DistinctNumbersInWindow(vec, k);

        if (disNumbers.empty())
            continue;

        std::cout << disNumbers[0];
        for (size_t i = 1; i < disNumbers.size(); ++i)
            std::cout << ", " << disNumbers[i];
        std::cout << std::endl;
    }
}
