// DistinctNumbersInWindow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

int GetDistinctNumber(const int* pStart, int count)
{
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

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
