#include <iostream>
using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    string O = "Ocelot";
    string S = "Serval";
    string L = "Lynx";
    if (A == O && B == S || A == O && B == L || A == S && B == L)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
    return 0;
}