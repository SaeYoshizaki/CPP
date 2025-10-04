#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    long long cnt = 0;
    long long result = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    // cout << "\n";

    for (int j = 0; j < Q; j++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            int c;
            cin >> c;
            cnt += c;
        }
        else
        {
            int L, R;
            cin >> L >> R;
            L --;
            R --;
            int l = (cnt + L) % N;
            int r = (cnt + R) % N;
            if (r >= l)
            {
                result = accumulate(A.begin() + l, A.begin() + r + 1, 0LL);
                cout << result << endl;
            }
            else
            {
                result = accumulate(A.begin(), A.begin() + r + 1, 0LL) + accumulate(A.begin() + l, A.end(), 0LL);
                cout << result << endl;
            }
        }
    }
    return 0;
}