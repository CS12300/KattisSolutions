// 
Grass Seed Inc.
https://open.kattis.com/problems/grassseed
//

#include <iostream>

using namespace std;

int main() 
{
        float c;
        int l;
        float sum = 0;

        cin >> c >> l; 

        while (l--)
        {
          float width, length;
          cin >> width >> length;
          sum += width * length * c;
        }

        cout << fixed << cout.precision(7) << sum;
      
    return 0;
}
