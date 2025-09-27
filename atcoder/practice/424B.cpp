#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m, k;
    int a, b;
    int cnt[10] = {};
    vector<int> ans;
    cin >> n >> m >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        cnt[a - 1]++;
        if (cnt[a - 1] == m)
        {
            ans.push_back(a - 1);
        }
    }
    int sz = ans.size();

    for (int j = 0; j < sz; j++){
        cout << ans[j]+1 << " ";
    }
    return 0;
}