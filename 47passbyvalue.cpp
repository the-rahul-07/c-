#include <iostream>

using std ::cin;
using std ::cout;

// PASS BY VALUE
void func(int x)
{
    x++;
    cout << x << "\n";
}
int main()
{
    int x = 10;
    func(x);
    cout << x;
    return 0;
}