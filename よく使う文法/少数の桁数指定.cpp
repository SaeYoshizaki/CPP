#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    double y;
    y = 1.0 / 3.0;
    cout << y << endl;
    cout << fixed << setprecision(10) << y << endl; // 長さ指定

    return 0;
}