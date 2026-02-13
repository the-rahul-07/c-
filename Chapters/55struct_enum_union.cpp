#include <iostream>

using std ::cin;
using std ::cout;

typedef struct student
{
    std::string name;
    int rollno;
    int marks;
} stu;
// everything can be used
// more memory will be allocated

union money
{
    int rice;
    char car;
    float pounds;
};
// in union any one of them will be used
// gives better memory allocation
// maximum datatype memory is allocated as only one of them is going to be used
int main()
{
    union money m1;
    m1.rice = 30;
    cout << m1.rice << "\n";

    // m1.car = 'r';
    // cout << m1.rice << "\n";
    // cout << m1.rice << "\n";   gives garbage value as 2 are used and we can only use one

    stu ram;
    ram.name = "ram";
    ram.rollno = 21;
    ram.marks = 100;

    cout << ram.name << "  " << ram.rollno << "  " << ram.marks << "\n";

    enum meal
    {
        breakfast, // breakfast is ntg but 0
        lunch,     // lunch is ntg but 1
        dinner     // dinner is ntg but 2
    };
    cout << breakfast << "\n";
    cout << lunch << "\n";
    cout << dinner << "\n";

    meal meal1 = dinner;
    cout << meal1 << "\n";
    return 0;
}