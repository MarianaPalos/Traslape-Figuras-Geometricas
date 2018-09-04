# TraslapeRect
Traslape entre dos Rectangulos

#include <iostream>
#include <cmath>
using namespace std;


struct Rectangulo {
int xsupizq, ysupizq, xinfder, yinfder;

int cuadrante () {
  if (ysupizq >0 && xsupizq <=0 && xinfder <=0 && yinfder >=0)
  return 1;
  if (ysupizq >0 && xsupizq >=0 && xinfder >=0 && yinfder <=0)
  return 2;
  if (ysupizq <=0 && xsupizq >0 && xinfder >=0 && yinfder <0)
  return 3;
  return 4;
}
};

void Traslape (Rectangulo R1, Rectangulo R2)
{
if (R1.xinfder <= R2.xsupizq || R1.xsupizq >= R2.xinfder|| R1.yinfder >= R2.ysupizq || R2.yinfder >= R1.ysupizq)
cout << "No se Trasalapan" <<endl;
else
cout << "Se Traslapan" << endl;
}

int main ()
{

  Rectangulo rec;
  cout << "RECTANGULO 1";
  cout << "\nIndica la coordenada x del punto superior izquierdo: ";
  cin >> rec.xsupizq;
  cout << "\nIndica la  coordenada y del punto superior izquierdo: ";
  cin >> rec.ysupizq;
  cout << "\nIndica la coordenada x del punto inferior derecho: " ;
  cin >> rec.xinfder;
  cout << "\nIndica la coordenada y  del punto inferior derecho: "  ;
  cin >> rec.yinfder;
    cout << "Esta en el cuadrante: " <<rec.cuadrante() << endl;

  Rectangulo rec2;
  cout << "RECTANGULO 2";
  cout << "\nIndica la coordenada x del punto superior izquierdo: ";
  cin >> rec2.xsupizq;
  cout << "\nIndica la  coordenada y del punto superior izquierdo: ";
  cin >> rec2.ysupizq;
  cout << "\nIndica la coordenada x del punto inferior derecho: " ;
  cin >> rec2.xinfder;
  cout << "\nIndica la coordenada y  del punto inferior derecho: "  ;
  cin >> rec2.yinfder;
      cout << "Esta en el cuadrante: " <<rec2.cuadrante() << endl;

  Traslape (rec, rec2);

  return 0;
}
