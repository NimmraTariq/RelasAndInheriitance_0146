#include<iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h" 

int main ()
{ //agregasi
    ibu *varibu = new ibu ("dini");
    ibu *varibu2 = new ibu ("novi"); 
    anak *varAnak1 = new anak ("tono");
    anak *varAnak2 = new anak ("rini");
    anak *varAnak3 = new anak ("Dewi");

    varibu -> tambahAnak (varAnak1);
    varibu -> tambahAnak (varAnak2); 
    varibu -> tambahAnak (varAnak3); 
    varibu2 -> tambahAnak (varAnak1); 

    varibu -> cetakAnak ();
    varibu2 -> cetakAnak ();

    delete varibu;
    delete varibu2;
    delete varAnak1;
    delete varAnak2;
    delete varAnak3 ;

    system ("pause");

    return 0;

}


