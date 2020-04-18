#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int SIZE = 10000;
    vector<int> c;
    vector<int> res;
    for (int i = 0; i < SIZE; i++)
    {
        c.push_back(SIZE - i);
    };
    int smallest;
    for (int i = 0; i < c.size(); i++)
    {
        smallest = c[i];
        for (int j = i; j < c.size(); j++)
        {
            if (c[j] < smallest)
            {
                smallest = c[j];
            }
        }
        res.push_back(smallest);
    }
    for (auto &&i : c)
    {
        cout << i << endl;
    }
}