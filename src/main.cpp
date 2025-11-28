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
     cout << "choisissez une option\n";
     cin >> choix;      
     switch (choix){
        case '1': 
         cout << "vous avez choisi l'option " << choix << endl;
         break;

     }
     
     

}