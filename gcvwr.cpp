//
GCVWR
https://open.kattis.com/problems/gcvwr
//

#include <iostream>

using namespace std;

int main()
{
        int g, t, n;
        int sum = 0;

        cin >> g >> t >> n;

        for (int i = 0; i < n; i++)
          {
            int weight = 0;

            cin >> weight;
            sum += weight;
          }
        cout << (g-t)*0.9 - sum;

    return 0;  
}

