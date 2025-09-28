#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
        cin >> A[i];

    long long cnt = 0;
    long long result = 0;

    auto norm = [&](long long x) -> int
    {
        x %= N;
        if (x < 0)
            x += N;
        return (int)x;
    };

    for (int j = 0; j < Q; j++)
    {
        int num;
        cin >> num;
        if (num == 1)
        {
            long long c;
            cin >> c;
            cnt += c;
        }
        else
        {
            int L, R;
            cin >> L >> R;
            L--;
            R--;
            int l = norm(cnt + L);
            int r = norm(cnt + R);

            if (l <= r)
            {
                result = accumulate(A.begin() + l, A.begin() + r + 1, 0LL);
            }
            else
            {
                result = accumulate(A.begin() + l, A.end(), 0LL) + accumulate(A.begin(), A.begin() + r + 1, 0LL);
            }
            cout << result << '\n';
        }
    }
    return 0;
}