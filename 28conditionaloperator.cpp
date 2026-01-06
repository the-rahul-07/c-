#include <iostream>

using std ::cin;
using std ::cout;

int main()
{

    int x = 1;
    int y;

    cout << "Guess value of x : ";
    cin >> y;

    // ternary operator or conditional operator
    //  expression? what if ture: what if false; ---> syntax
    y == x ? cout << "You got it" : cout << "You didnt get it";
    return 0;
}