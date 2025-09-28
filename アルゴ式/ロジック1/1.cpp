#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[1000];
    cin >> S;
    if (strcmp(S, "password") == 0)
    {
        cout << "dangerous";
    }
    else
    {
        cout << "safe";
    }
    return 0;
}