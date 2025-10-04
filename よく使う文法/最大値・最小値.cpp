#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    cout << min_element(array, array + 5) << endl;  // 最小の要素のアドレスを表示
    cout << *min_element(array, array + 5) << endl; // 最小の数を表示(1)
    cout << max_element(array, array + 5) << endl;
    cout << *max_element(array, array + 5) << endl;
    return 0;
}