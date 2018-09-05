#include <iostream>
#include <cmath>
using namespace std;

struct Circulo {
  float radio;
  int xC, yC;

  int cuadrante () {
    if (xC >=0 && yC >=0)
    return 1;
    if (xC <=0 && yC >=0)
    return 2;
    if (xC <=0 && yC <=0)
    return 3;
    //if (xC >=0 && yC <=0) //Se puede eliminar el ultimo if porque ya no hay mas posibilidades
    return 4;
  }
};

void Traslape (Circulo C1, Circulo C2)
{
  float dist, sum;
dist = sqrt( (pow((C2.xC - C1.xC),2)) + (pow((C2.yC - C1.yC),2)) ); //distancia entre centros, es la distancia minima de NO traslape
sum = C1.radio + C2.radio;

if (dist >= sum)
cout << "No se Trasalapan" <<endl;
else
cout << "Se Traslapan" << endl;
}


int main ()
{
  Circulo cir;
  cout << "Indica el radio del circulo 1: ";
  cin >> cir.radio;
  cout << "\nIndica la coordenada x del centro del circulo 1: " ;
  cin >> cir.xC;
  cout << "\nIndica la coordenada y del centro del circulo 1: " ;
  cin >> cir.yC;
  cout << "Esta en el cuadrante: " <<cir.cuadrante() << endl;

  Circulo cir2;
  cout << "Indica el lado del circulo 2: ";
  cin >> cir2.radio;
  cout << "\nIndica la coordenada x del centro del circulo 2: " ;
  cin >> cir2.xC;
  cout << "\nIndica la coordenada y del centro del circulo 2: " ;
  cin >> cir2.yC;
  cout << "Esta en el cuadrante: " <<cir2.cuadrante() << endl;

  Traslape (cir, cir2);

  return 0;
}
