#include <iostream>
#include <algorithm> // for std::lower_bound
#include <cmath>     // for std::abs

int matMed(int mat[][3], int r, int c)
{
    int min = mat[0][0], max = mat[0][c - 1];

    for (int i = 1; i < r; i++)
    {
        if (mat[i][0] < min)
        {
            min = mat[i][0];
        }

        if (mat[i][c - 1] > max)
        {
            max = mat[i][c - 1];
        }
    }

    int medPos = (r * c + 1) / 2;

    while (min < max)
    {
        int mid = (min + max) / 2, midPos = 0;

        for (int i = 0; i < r; i++)
        {
            // Use std::lower_bound for binary search
            int pos = std::lower_bound(mat[i], mat[i] + c, mid) - mat[i] + 1;
            midPos += std::abs(pos);
        }

        if (midPos < medPos)
        {
            min = mid + 1;
        }
        else
        {
            max = mid;
        }
    }

    return min;
}

int main()
{
    // Example usage
    int matrix[3][3] = {{1, 3, 5},
                        {2, 6, 9},
                        {3, 6, 9}};

    int result = matMed(matrix, 3, 3);
    std::cout << "Median: " << result << std::endl;

    return 0;
}
