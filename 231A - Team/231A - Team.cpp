#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, a, b, c, counter;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if(a + b + c > 1)
        {
            ++counter;
        }
    }

    cout << counter;
}