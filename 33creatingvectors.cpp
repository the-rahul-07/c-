#include <iostream>
#include <vector>
using std ::cin;
using std ::cout;

int main()
{
    std::vector<int> data = {1, 3, 5};
    data.push_back(12);
    cout << data[data.size() - 1] << std::endl;
    data.pop_back();
    cout << data.size() << "\n";
    return 0;
}