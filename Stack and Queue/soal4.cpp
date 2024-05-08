#include <iostream>
#include <cmath> 

using namespace std;

template<typename T>
class Kite {
private:
    T diagonal1;
    T diagonal2;

public:

    Kite(){
     diagonal1 = 10;
     diagonal2 = 10;
    }

    Kite(T d1, T d2){
     diagonal1 = d1;
     diagonal2 = d2;
    }
   
    void setDiagonal1(T d) {
        diagonal1 = d;
    }

    T getDiagonal1() const {
        return diagonal1;
    }

    void setDiagonal2(T d) {
        diagonal2 = d;
    }

    T getDiagonal2() const {
        return diagonal2;
    }

    T calculateArea() const {
        return (diagonal1 * diagonal2) / 2;
    }

    T calculatePerimeter() const {
        return 2 * diagonal2 *sqrt(2);
    }
};

int main() {
    
    Kite<double> k;

   
    double area = k.calculateArea();
    double perimeter = k.calculatePerimeter();

    cout << "Luas layangan: " << area << endl;
    cout << "Keliling layangan: " << perimeter << endl;

    return 0;
}
