#ifndef AREA_UTILES
#define AREA_UTILES

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width);

double area(double length);

double area(Rectangle rec);
#endif