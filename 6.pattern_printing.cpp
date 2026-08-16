// Given an integer n. You need to recreate the pattern given below for any
// value of N. Let's say for N = 5, the pattern should look like as below:

// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

// so the pattern is matrix=
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5

//      4-matrix=
// 1 1 1 1 1 1 1 1 1
// 1 0 0 0 0 0 0 0 1
// 1 0
// 1 0
// 1 0
// 1 0
// 1 0
// 1 0
// 1 0
// 1 0
// like that
#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    // The matrix size is (2*n - 1) x (2*n - 1)
    int size = 2 * n - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // Calculate distance to the nearest edge
            // Top edge: i
            // Bottom edge: size - 1 - i
            // Left edge: j
            // Right edge: size - 1 - j
            int dist = min({i, size - 1 - i, j, size - 1 - j});

            // The value is n minus the distance
            cout << (n - dist);

            // Print a space after the number if it's not the last column
            if (j < size - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
