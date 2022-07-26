//learnimg map......
#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<char, int> first;

    // initializing
    first['a'] = 10;
    first['b'] = 20;
    first['c'] = 30;
    first['d'] = 40;

    for (auto pr : first)
    {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
