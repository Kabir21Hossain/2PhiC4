#include <bits/stdc++.h>
using namespace std;

// class Solution
// {

// public:
//     int areaOfDiagonal(vector<vector<int>> &dimensions)
//     {
//         int row = dimensions.size();
//         int area = 0;
//         int maxiDiag = 0;

//         for (int i = 0; i < row; i++)
//         {

//             int a = dimensions[i][0];
//             int b = dimensions[i][1];

//             if ((a * a + b * b) > maxiDiag)
//             {

//                 maxiDiag = a * a + b * b;
//                 area = a * b;
//             }

//             if ((a * a + b * b) == maxiDiag)
//             {
//                 if (area < a * b)
//                 {
//                     area = a * b;
//                 }
//             }
//         }
//         return area;
//     }
// };

class Solution
{
public:
    int areaOfMaxDiagonal(vector<vector<int>> &dimensions)
    {
        long long bestDiag = -1;
        long long bestArea = -1;

        for (auto &d : dimensions)
        {
            long long a = d[0], b = d[1];
            long long diagSq = a * a + b * b;
            long long area = a * b;

            if (diagSq > bestDiag || (diagSq == bestDiag && area > bestArea))
            {
                bestDiag = diagSq;
                bestArea = area;
            }
        }

        return static_cast<int>(bestArea);
    }
};

int main()
{

    int row;
    cin >> row;

    vector<vector<int>> vec(row, vector<int>(2));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> vec[i][j];
        }
    }

    Solution s;
    cout << s.areaOfMaxDiagonal(vec);

    return 0;
}
