#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void printNum (int num) {
    if (num > 50) {
        cout << "Yes";
    }
}

int main()
{
    srand(time(NULL));
    int x;
    x = rand ();
    printNum(x);
    cout<<"Number is: " << x;

    return 0;
}
