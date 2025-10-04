#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

int main()
{
    string s = "Some String";
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}