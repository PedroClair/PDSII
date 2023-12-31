#include <iostream>
#include <string>
#include <vector>

class Ponto {
  private:
    double coordenadaHorizontalX;
    double coordenadaVerticalY;

  public:
    Ponto(double, double);
    void imprime(); 
    Ponto get();
    void set(double, double);
    void feature();
};

int main() {
  Ponto origem = Ponto(0, 0);
  origem.feature();
  return 0;
}

Ponto::Ponto(double x, double y) {
  coordenadaHorizontalX = x;
  coordenadaVerticalY = y;
}

void Ponto::imprime(){
  std::cout << "(" << coordenadaHorizontalX << ", " << coordenadaVerticalY << ")" << std::endl;
}

Ponto Ponto::get(){
  Ponto original = Ponto(coordenadaHorizontalX, coordenadaVerticalY);
  return original;
}

void Ponto::set(double x, double y){
  coordenadaHorizontalX = x;
  coordenadaVerticalY = y;
}

void Ponto::feature(){
  Ponto origem = Ponto(2.0, 3.0);
  origem.imprime();
  Ponto original = origem.get();
  original.imprime();
  original.set(4.0, 5.0);
  original.imprime();
}
