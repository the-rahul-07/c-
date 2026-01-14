#include <iostream>

using std ::cin;
using std ::cout;

// PASS BY REFRENCE
// MEANS THE X AND Y POINT TO THE SAME MEMORY LOCATION
// AND TO DO THIS WE USE & WITH THE FUNCITON VARIABLE

void func(int &y)
{
    y++;
    cout << y << "\n";
    y++;
}
int main()
{
    int x = 3;
    func(x);
    cout << x << "\n";
    return 0;
}