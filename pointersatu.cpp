#include <iostream>
using namespace std;

class mahasiswa{
    public:
    int nim;
    void showNim(){
        cout << "No Induk = " <<nim<< endl;
    }
};

int main(){
    mahasiswa mhs{1};// objek mahasiswa
    mhs.showNim();// Mmeber accces opertaor

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.showNim();

    mahasiswa *pMhs = &mhs;
    pMhs->nim = 3;
    pMhs->showNim();
    return 0;
}