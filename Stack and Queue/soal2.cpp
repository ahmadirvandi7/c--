#include <iostream>
using namespace std;

template<typename T>
class Trapezoid {
private:
    T base1;
    T base2;
    T height;

public:
	Trapezoid() : base1(10),base2(10),height(10){
	}
	
    Trapezoid(T b1, T b2, T h) {
        base1 = b1;
        base2 = b2;
        height = h;
    }

    void setBase1(T b) {
        base1 = b;
    }

    T getBase1() const {
        return base1;
    }

    void setBase2(T b) {
        base2 = b;
    }

    T getBase2() const {
        return base2;
    }

    void setHeight(T h) {
        height = h;
    }

    T getHeight() const {
        return height;
    }
};

int main() {
    Trapezoid<int> tp(15, 20, 25);

    int a = tp.getBase1();
    int b = tp.getBase2();
    int c = tp.getHeight();

    cout <<"base 1 :" << a << endl;
    cout <<"base 2 :" << b << endl;
    cout <<"height :" << c << endl;

    return 0;
}
