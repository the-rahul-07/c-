#include <iostream>
#include "area_utiles.h"
using std ::cin;
using std ::cout;

int main()
{
    Rectangle rec;
    rec.length = 5;
    rec.width = 10;
    cout << area(rec.length, rec.width) << "\n";
    cout << area(rec.length) << "\n";
    cout << area(rec) << "\n";
    return 0;
}