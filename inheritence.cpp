#include <iostream>
#include <string>
using namespace std;

class orang {
public:
    string nama;

    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl; 
    }

    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b) {
        return a + b; // Commit: Simple method to sum two integers
    }
};

class pelajar : public orang {
public:
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "pelajar dibuat\n" << endl; // Commit: pelajar constructor initializes base class and sekolah
    }

    ~pelajar() {
        cout << "pelajar dihapus\n" << endl; // Commit: Destructor message for pelajar
    }

    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main() {
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perkenalan();
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl; // Commit: Using base class method from derived class

    return 0;
}
