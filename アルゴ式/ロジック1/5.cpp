#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (N == 100)
    {
        cout << "S";
    }
    if (90 <= N && N < 100)
    {
        cout << "A";
    }
    else if (80 <= N && N < 90)
    {
        cout << "B";
    }
    else if (70 <= N && N < 80)
    {
        cout << "C";
    }
    else if (60 <= N && N < 70)
    {
        cout << "D";
    }
    else if (50 <= N && N < 60)
    {
        cout << "E";
    }
    else
    {
        cout << "F";
    }
    return 0;
}