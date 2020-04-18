#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int SIZE = 10000;
    vector<int> c;
    for (int i = 0; i < SIZE; i++)
    {
        c.push_back(SIZE - i);
    };
    int smallest, index, tmp;
    for (int i = 0; i < c.size(); i++)
    {
        smallest = c[i];
        index = i;
        for (int j = i; j < c.size(); j++)
        {
            if (c[j] < smallest)
            {
                smallest = c[j];
                index = j;
            }
        }
        tmp = c[i];
        c[i] = smallest;
        c[index] = tmp;
    }
    for (auto &&i : c)
    {
        cout << i << endl;
    }
}