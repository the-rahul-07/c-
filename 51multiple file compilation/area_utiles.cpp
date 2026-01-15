#include <iostream>
#include "area_utiles.h"
using std ::cin;
using std ::cout;

double area(double length, double width) // rectangle
{
    return length * width;
}

double area(double length) // square
{
    return length * length;
}

double area(Rectangle rec)
{
    return rec.length * rec.width;
}
