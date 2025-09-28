#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    if (0 <= N && N <= 100)
    {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}