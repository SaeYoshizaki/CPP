#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int cnt = 0;
    vector<int> A(N), B(N), result(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        B[i] = i + 1;
    }
    for (int j = 0; j < N; j++)
    {
        if (A[j] != -1)
        {
            if (std::find(A.begin(), A.begin() + j, A[j]) != A.begin() + j)
            {
                cout << "No";
                return 0;
            }
            else
            {
                B.erase(remove(B.begin(), B.end(), A[j]), B.end());
            }
        }
        else
        {
            continue;
        }
    }

    for (int k = 0; k < N; k++)
    {
        if (A[k] == -1)
        {
            A[k] = B[cnt];
            cnt++;
        }
    }

    cout << "Yes" << endl;
    for (const auto &number : A)
    {
        std::cout << number << ' ';
    }
    return 0;
}