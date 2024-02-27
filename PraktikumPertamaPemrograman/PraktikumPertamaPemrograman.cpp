#include <iostream>
using namespace std;

int main()
{//Begin
    cout << "====Menghitung Luas Lingkaran====" << endl;


    //numeric nJejari, nLuas
    float nJejari, nLuas ;
    //display 'masukan jejari= '
    cout << "masukan jejari =";
    //accept nJejari
    cin >> nJejari;
    //compute nLuas = 3.14 * r * r
    nLuas = 3.14 * nJejari * nJejari;
    //display 'Luasnya= ' + nLuas
    cout << "Luasnya =" << nLuas;

    //NUMERIC nPanjang, nLebar, nLuas
    int nPanjang, nLebar;
    //display 'Masukan Panjang= '
    cout << "masukan panjang=";
    //accept nPanjang
    cin >> nPanjang;
    //display 'masukan Lebar= '
    cout << "masukan lebar=";
    //accept nLebar
    cin >> nLebar;
    //compute nLuas = nPanjang * nLebar
    nLuas = nPanjang * nLebar;
    //display 'luasnya = ' + nLuas
    cout << "Luasnya =" << nLuas << endl;


}//End