#include <iostream>
#include <cmath>
using namespace std;


struct Rectangulo {
int xsupizq, ysupizq, xinfder, yinfder, xsupder, ysupder, xinfizq, yinfizq;

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
    return 4;
  }
};

void Traslape (Circulo c, Rectangulo r)
{
  float distp1, distp2, distp3, distp4;

  distp1 = sqrt( (pow((c.xC - r.xsupizq),2))+  (pow((c.yC - r.ysupizq),2)) );
  distp2 = sqrt( (pow((c.xC - r.xinfder),2))+  (pow((c.yC - r.yinfder),2)) );
  distp3 = sqrt( (pow((c.xC - r.xsupder),2))+  (pow((c.yC - r.ysupder),2)) );
  distp4 = sqrt( (pow((c.xC - r.xinfizq),2))+  (pow((c.yC - r.yinfizq),2)) );

if ( (r.xsupizq < c.xC && r.ysupizq < c.yC && distp1 >= c.radio) ||
     (r.xinfder > c.xC && r.yinfder > c.yC && distp2 >= c.radio) ||
     (r.xsupder > c.xC && r.ysupder < c.yC && distp3 >= c.radio) ||
     (r.xinfizq < c.xC && r.yinfizq > c.yC && distp3 >= c.radio) ||
     (distp1 <= c.radio && distp2 <= c.radio && distp3 <= c.radio && distp4 <= c.radio))
     cout << "No se Traslapan" << endl;
else
cout << "Se Traslapan" << endl;
cout << distp1;
}


int main ()
{

  Circulo cir;
  cout << "\nCIRCULO";
  cout << "\nIndica el radio del circulo: ";
  cin >> cir.radio;
  cout << "\nIndica la coordenada x del centro del circulo: " ;
  cin >> cir.xC;
  cout << "\nIndica la coordenada y del centro del circulo: " ;
  cin >> cir.yC;
  cout << "Esta en el cuadrante: " <<cir.cuadrante() << endl;

  Rectangulo rec;
  cout << "\nRECTANGULO";
  cout << "\nIndica la coordenadas 'x' y 'y' del punto superior izquierdo: ";
  cin >> rec.xsupizq >> rec.ysupizq;
  cout << "\nIndica la coordenadas 'x' y 'y' del punto inferior izquierdo: ";
  cin >> rec.xinfizq >> rec.yinfizq;
  cout << "\nIndica la coordenadas 'x' y 'y' del punto inferior derecho: ";
  cin >> rec.xinfder >> rec.yinfder;
  cout << "\nIndica la coordenadas 'x' y 'y' del punto superior izquierdo: ";
  cin >> rec.xsupder >> rec.ysupder;
  cout << "Esta en el cuadrante: " <<rec.cuadrante() << endl;

    Traslape (cir, rec);

return 0;
}
