#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    int myage = 19;
    int g_age;
    std ::string myname = "rahul";
    std ::string g_name;

    cout << "Guess my name ? : ";
    cin >> g_name;

    cout << "Guess my age ? : ";
    cin >> g_age;
    //&& -- AND operator true of both are true
    //|| -- OR operator true if anyone is true
    //! -- NOT operator change false to true and true to false
    if (g_name == myname && g_age == myage)
    {
        cout << "You got it right\n";
    }
    else
    {
        cout << "Your wrong, guess it again\n";
    }

    return 0;
}