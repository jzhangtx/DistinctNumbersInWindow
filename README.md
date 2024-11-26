Distinct Numbers in Window


Given an array A and a value k, find the number of distinct elements in each window (subarray) of size k.

Example
A: [1, 1, 2, 1, 4, 6, 5]
k: 3
Result: [2, 2, 3, 3, 3]
Testing
Input Format
The first line contains an integer ‘T’ denoting the number of test cases.

For each test case, the input has three lines:

An integer ‘n’ denoting the length of the array A.
n space-separated integers denoting elements of array A.
An integer ‘k’ denoting the window size.
Output Format
For each test case, the output has one line with (n-k+1) space separated integers denoting the number of different elements in each window of size k.

Sample Input
3
7
1 1 2 1 4 6 5
3
4
1 1 1 4
2
5
1 1 2 1 1
2
Expected Output
2 2 3 3 3
1 1 2
1 2 2 1