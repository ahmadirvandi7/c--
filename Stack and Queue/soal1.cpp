#include <iostream>
using namespace std;

template<typename T>
class Trapezoid {
public:
    T base1;
    T base2;
    T height;
};

int main() {
    Trapezoid<int> tp;
    int a = tp.base1 = 10;
    int b = tp.base2 = 210;
    int c = tp.height = 15;

    cout <<"base 1 :" << a << endl;
    cout <<"base 2 :" << b << endl;
    cout <<"height :" << c << endl;
    return 0;
}
