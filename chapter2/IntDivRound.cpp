#include <iostream>
using namespace std;
int main() {
    int x1 = 5, y1 = 2, x2 = -5, y2 = 2;
    cout << "positive division, 2.5 round down to 2: " << x1 / y1 << endl;
    cout << "negative division, -2.5 round up to -2: " << x2 / y2 << endl;


    int num = -12340;
    cout << (num >> 4) << endl;
    cout << (num / 16) << endl;

}

/*
while for Python

-5 // 2 = -3  // floor down


*/