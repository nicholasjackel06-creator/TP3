#include <iostream>

using namespace std;

int main() {
  cout << "********Menu Vehicule*********\n";
  cout << "1° Multimedia\n";
  cout << "2° Telephone\n";
  cout << "3° Conexion\n";
  cout << "4° Personnalisation - configuration\n";
  std::cout << "*******************************\n";

  char choix;
     std::cout << "choisissez une option\n";
     std::cin >> choix;
     std::cout << "vous avez choisi l'option " << choix << endl;
     if (choix >= 4){
        std::cout << "choix invalide\n";
     }

}