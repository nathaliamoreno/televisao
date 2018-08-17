#include <iostream>
#include "Televisao.h"

using namespace std;

int main()
{
    Televisao tv = Televisao(7, 40);


    cout <<"         T E S T A N D O  C O N T R O L E" << endl;
    cout << " "<< endl;
    cout << "CANAL ATUAL: " << tv.getCanal() << endl;
    cout << "VOLUME ATUAL: " << tv.getVolume() <<endl;
    cout << "-------------------" << endl;

    tv.addCanal();
    tv.addVolume();
    cout << " "<< endl;
    cout << " + CANAL: " << tv.getCanal() << endl;
    cout << " + VOLUME : " << tv.getVolume() <<endl;
    cout << "-------------------" << endl;
    tv.subCanal();
    tv.subVolume();
    cout << " "<< endl;
    cout << " - CANAL: " << tv.getCanal() << endl;
    cout << " - VOLUME : " << tv.getVolume() <<endl;
    cout << "-------------------" << endl;

    return 0;
}
