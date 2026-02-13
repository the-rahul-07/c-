#include <iostream>
#include <limits>
using std ::cin;
using std ::cout;

void print_array(int array[], int size)
{

    cout << "size of array : " << size << "\n";
    cout << "Elements of the array\n";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << "\t";
    }
}
int main()
{
    int SIZE = 100;
    int a[SIZE];
    int count = 0;
    cout << "Enter array elements\n";
    for (int i = 0; i < SIZE; i++)
    {
        if (cin >> a[i]) // TRUE TILL ITS ENTERING INTEGER INPUT, WHEN ITS OF OTHER TYPE ITS FALSE
        {
            count++;
            // input worked
        }
        else
        {
            // invalid character
            break;
        }
    }
    print_array(a, count);
    /* now when we give any invalid character to end the array or loop so it will be
    stored in input stream, so we input any string the left over character or string
    which is in input stream will automatically go into that string which creates a
    problem and to solve this we use, see down*/
    cout << "\n";
    std::cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string test;
    cin >> test;
    cout << test;
    return 0;
}