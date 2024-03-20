#include <iostream>

using namespace std;

class Mahasiswa{
    public :
    string nama, npm;
};

int main(){
    Mahasiswa mhs;

    cin>>mhs.nama;
    cin>>mhs.npm;

    cout<<mhs.nama<<" "<<mhs.npm<<endl;
}