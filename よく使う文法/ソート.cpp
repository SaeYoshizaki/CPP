#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n = 5;
    int array[] = {1, 3, 5, 2, 4};
    vector<int> v = {1, 6, 3, 7, 2};

    sort(v.begin(), v.end());
    for (int x : v)
    {
        cout << x << " ";
    }

    sort(array, array + n);
    sort(array, array + 5, greater<int>());
    return 0;
}