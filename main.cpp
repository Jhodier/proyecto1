#include <iostream>

using namespace std;

int main() {
  char letra;

  cout << "Introduzca una letra: ";
  cin >> letra;

  if (letra >= 'a' && letra <= 'z') {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
      cout << letra << " es una vocal." << endl;
    } else {
      cout << letra << " es una consonante." << endl;
    }
  } else {
    cout << letra << " no es una letra." << endl;
  }

  return 0;
}
