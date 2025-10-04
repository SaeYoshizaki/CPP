#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 4, 5, 9, 9};
    v.erase(unique(v.begin(), v.end()), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    return 0;
}