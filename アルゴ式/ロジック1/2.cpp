#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char S[1000];
    cin >> S;
    int len;
    len = strlen(S);
    if (len <= 6){
        cout << "dangerous";
    }
    else{
        cout << "safe";
    }
    return 0;
}