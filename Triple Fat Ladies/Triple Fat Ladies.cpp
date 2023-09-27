#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    long t, k;
    string tmp;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> k;
        while(true)
        {
            long tmpNum = k^3;
            string tmpString = to_string(tmpNum);
            if(tmpString[-1] == 8 && tmpString[-2] == 8 && tmpString[-3] == 8 )
            {
                cout << k;
                break;
            }

            k++;
        }
    }
}