#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    long long a = 12, b = 18;
    long long g = gcd(a, b);
    long long l = lcm(a, b);
    cout << "gcd: " << g << ", lcm: " << l << endl;
}