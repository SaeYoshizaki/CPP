#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (90 <= N && N <= 100)
    {
        cout << "A";
    }
    else if (80 <= N && N < 90)
    {
        cout << "B";
    }
    else{
        cout << "C";
    }
    return 0;
}