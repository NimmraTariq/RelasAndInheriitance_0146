#include<iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h" 

int main ()
{
    ibu *varibu = new ibu ("dini");
    ibu *varibu2 = new ibu ("novi"); 
    anak *varAnak1 = new anak ("tono");
    anak *varAnak2 = new anak ("rini");
    anak *varAnak3 = new anak ("Dewi");

    varibu -> tambahAnak (varAnak1);
    varibu -> tambahAnak (varAnak2); 
}


