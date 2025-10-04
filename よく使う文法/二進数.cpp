#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int number = 12084782;
    bitset<32> bs(number);
    cout << bs << endl;

    return 0;
}