#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << i << "\n";
    // }

    int fac = 5;
    for (int i = 4; i > 0; i--)
    {
        fac *= i;
    }
    cout << "factorial : " << fac;

    return 0;
}