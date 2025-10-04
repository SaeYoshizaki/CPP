#include <iostream>
#include <vector>
using namespace std;

struct UnionFind
{
    vector<int> par;
    UnionFind(int N) : par(N)
    {
        for (int i = 0; i < N; i++)
            par[i] = i;
    }

    int root(int x)
    {
        if (par[x] == x)
            return x;
        return par[x] = root(par[x]);
    }

    void unite(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        if (rx == ry)
            return;
        par[rx] = ry;
    }

    bool same(int x, int y)
    {
        int rx = root(x);
        int ry = root(y);
        return rx == ry;
    }
};

int main()
{
    int N, Q;
    cin >> N >> Q;
    UnionFind tree(N);
    vector<long long> cnt(N + 1, 1);
    for (int i = 0; i < Q; i++)
    {
        int X, Y;
        cin >> X >> Y;
        long long result = 0;

        int v = tree.root(X);
        while (v > 0)
        {
            if (cnt[v] > 0)
            {
                result += cnt[v];
                cnt[Y] += cnt[v];
                cnt[v] = 0;
            }
            tree.unite(v, v - 1);
            v = tree.root(v);
        }
        cout << result << endl;
    }
    return 0;
}