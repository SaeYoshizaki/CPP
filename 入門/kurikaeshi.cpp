#include <iostream>
#include <iomanip> // io manipulator
using namespace std;

int main()
{
    int i, j;
    for (i = 1; i < 5; i++)
    {
        // cout << i << "の段です\n";
        for (j = 1; j < 5; j++)
        {
            cout << setw(5) << j * i;
        }
        cout << "\n";
    }

    return 0;
}
