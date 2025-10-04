#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string S;
    cin >> S;
    vector<char> Cvector;
    for (char c : S)
    {
        Cvector.push_back(c);
    }
    char first = Cvector[0];
    char second = Cvector[1];
    if (first == second)
    {
        Cvector.erase(std::remove(Cvector.begin(), Cvector.end(), first), Cvector.end());
        for (char x : Cvector)
        {
            cout << x;
        }
    }
    else
    {
        if (Cvector[2] == first)
        {
            cout << second;
        }
        else
        {
            cout << first;
        }
    }

    return 0;
}