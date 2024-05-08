#include <iostream>
#include <cmath>
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
    
    T calculateArea() {
        return ((base1 + base2)/2)*height;
    }

    T calculatePerimeter() {
        T side = sqrt(pow((base2 - base1)/2,2) + pow(height, 2));
        return base1 + base2 + 2 * side;
    }
};

int main() {
    Trapezoid<double> tp;

    double a = tp.getBase1();
    double b = tp.getBase2();
    double c = tp.getHeight();
    double area = tp.calculateArea();
    double perimeter=tp.calculatePerimeter();

    cout <<"base 1 ;"<<a<<endl;
    cout <<"base 2 :"<<b<<endl;
    cout <<"height :"<<c<<endl;
    cout <<"area :"<<area<<endl;
    cout <<"perimeter :"<<perimeter<<endl;
    return 0;

    return 0;
}
