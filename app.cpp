#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int base, altura, radio, perimetro=0, area=0, opcion;
  cout<<"### Calcular Area y Perimetro ###"<<endl;
  cout<<"1. Cuadrado"<<endl;
  cout<<"2. Rectangulo"<<endl;
  cout<<"3. Triangulo"<<endl;
  cout<<"4. Paralelogramo"<<endl;
  cout<<"5. Circulo"<<endl;
  cout<<"Seleccione una opcion: ";
  cin>>opcion;

  switch(opcion) {
    case 1:
      cout<<"Elegiste cuadrado"<<endl;
      cout<<"Introduce el lado: ";
      cin>>base;
      perimetro = base*4;
      area = base*base;
      break;
    case 2:
      cout<<"Elegiste Rectangulo"<<endl;
      cout<<"Introduce el altura: ";
      cin>>altura;
      cout<<"Introduce la base: ";
      cin>>base;
      perimetro = base+base+altura+altura;
      area = base*altura;
      break;
    case 3:
      cout<<"Elegiste Triangulo"<<endl;
      cout<<"Introduce el altura: ";
      cin>>altura;
      cout<<"Introduce la base: ";
      cin>>base;
      perimetro = base+base+base;
      area = (base*altura)/2;
      break;
    case 4:
      cout<<"Elegiste Paralelogramo"<<endl;
      cout<<"nose, vas xd";
      break;
    case 5:
      cout<<"Elegiste Circulo"<<endl;
      cout<<"Introduce el radio: ";
      cin>>radio;
      area = pow(radio,2)*3.1416;
      break;
  }
  cout<<"Area: "<<area<<endl;
  cout<<"Perimetro: "<<perimetro;

  
  return 0;
}