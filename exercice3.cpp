
#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

void lireFichier(const string& nomFichier) {
    ifstream fichier(nomFichier);
    if (!fichier.is_open()) throw runtime_error("Impossible d'ouvrir le fichier");
    string ligne;
    while (getline(fichier, ligne)) {
        cout << ligne << endl;
    }
}

int main() {
    try {
        lireFichier("exemple.txt");
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
