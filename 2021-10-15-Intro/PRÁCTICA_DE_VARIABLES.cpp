#include <iostream>

int main()
{

  float x;
  bool y=false;
  double z;
  float w=1.0e40;
  
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";
    std::cout << "z = " << z << "\n";
    std::cout << "Drección de Memoria de double z = " << &z << "\n";
    std::cout << "Size of z = " << sizeof(z) << "\n"; 
    std::cout << "w = " << w << "\n";
//Se imprime inf en la consola ya que 1.0e40 excede el rango de la variable float al ser esta una variable de precisión sencilla y de 32 bits. Imprimiendo el mismo valor en una variable de precisión doble como double, se puede observar el número 1.40e40 en la consola debido a que double es una varible de 64 bits.
    
    return 0;
}

