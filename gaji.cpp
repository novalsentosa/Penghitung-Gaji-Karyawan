#include <iostream>
using namespace std;

int gol1 = 1000000, gol2 = 1500000, gol3 = 2000000;
int makan = 750000;
int gol;
int kwn;
int gapok;
float tunjs;
int tunja;
int anak;
int pot;
int gajibersih;
int gajikotor;
int main(){
    cout << "golongan(1/2/3): ";
    cin >> gol;

    cout << "jumlah anak: ";
    cin >> anak;

    cout << "status kawin(y=1/n=0): ";
    cin >> kwn;



    switch (gol){
        case 1:
            gapok = gol1;
            break;
        case 2:
            gapok = gol2;
            break;
        case 3:
            gapok = gol3;
            break;
        default:
            cout << "salah input";
            break;
    }

    if (kwn=1) {
        tunjs = 10*gapok/100;
    }else {
        tunjs = 10;
    }

    if (anak>0 && anak<=2) {
        tunja = 2 * anak * gapok/100;
    } else {
        tunja = 2 * 2 * gapok/100;
    }
    gajikotor = gapok + tunjs + tunja;
    pot = 10 * gajikotor/100;
    cout << "gol:" << gol << endl;
    cout << "anak:" << anak << endl;
    cout << "kawin:" << kwn << endl;
    cout << "gaji pokok:" << gapok << endl;
    cout << "tunjangan istri:" << tunjs << endl;
    cout << "tunjangan anak:" << tunja << endl;
    cout << "gaji kotor: " << gajikotor << endl;
    cout << "potongan: " << pot << endl;
    gajibersih = gajikotor + makan - pot;
    cout << "uang makan: " << makan << endl;
    cout << "total gaji bersih: Rp." << gajibersih;
}
