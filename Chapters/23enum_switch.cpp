#include <iostream>

using std ::cin;
using std ::cout;

int main()
{
    enum season
    {
        summer,
        winter,
        spring,
        fall
    };
    season now = summer;

    switch (now)
    {
    case summer:
        cout << "Its summer, Stay hydrated\n";
        break;
    case winter:
        cout << "Stay warm\n";
        break;
    case spring:
        cout << "Rome around\n";
        break;
    case fall:
        cout << "Tress are beautifull";
        break;
    }
    return 0;
}