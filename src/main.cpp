#include <iostream>

using namespace std;

int main() {
  char choix;
  do {
    cout << "affichage du menu\n";

    cout << "********Menu Vehicule*********\n";
    cout << "1° Multimedia\n";
    cout << "2° Telephone\n";
    cout << "3° Conexion\n";
    cout << "4° Personnalisation - configuration\n";
    std::cout << "*******************************\n";

    cout << "choisissez une option\n";
    cin >> choix;
    switch (choix) {
    case '0':
      cout << "vous avez choisi de quitter le menu\n";
      break;
    case '1':
      cout << "vous avez choisi l'option " << choix << endl;
      break;
    case '2':
      cout << "vous avez choisi l'option " << choix << endl;
      break;
    case '3':
      cout << "vous avez choisi l'option " << choix << endl;
      break;
    case '4':
      cout << "vous avez choisi l'option " << choix << endl;
      break;
    default:
      cout << "choix invalide\n";
      break;
    }
  } while (choix != '0');
}