#include <iostream>

using std ::cin;
using std ::cout;
template <typename T>
void swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}
template <typename T>
void swap(T a[], T b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        T temp;
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}
int main()
{
    int a = 10, b = 5;
    cout << "Value of a : " << a << "\n"
         << "Value of b :" << b << "\n";
    cout << "SWAPPING VALUES OF A & B\n";
    swap(a, b);
    cout << "Value of a : " << a << "\n"
         << "Value of b :" << b << "\n";

    cout << "\n";
    int const SIZE = 5;
    int x[] = {1, 1, 1, 1, 1};
    int y[] = {0, 0, 0, 0, 0};

    for (int i = 0; i < SIZE; i++)
    {
        cout << x[i] << y[i] << "\t";
    }
    cout << "\n";
    swap(x, y, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << x[i] << y[i] << "\t";
    }
    return 0;
}