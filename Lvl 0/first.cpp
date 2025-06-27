#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int s, d, n;
    cin >> s >> d >>n;
    
    int result = 0;
    int current = 0;

    while (current < s) {
        result++;
        current += d;

        if (current >= s) break;
        
        current -= n;
        if (current < 0) {
            current = 0;
        }
    }

    printf("%d", result);
    return 0;
}