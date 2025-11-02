
#include <iostream>
#include <stdexcept>
using namespace std;

class MontantInvalideException : public exception {
public:
    const char* what() const noexcept override {
        return "Montant invalide";
    }
};

class SoldeInsuffisantException : public exception {
public:
    const char* what() const noexcept override {
        return "Solde insuffisant";
    }
};

class Compte {
private:
    int solde;
public:
    Compte(int s = 0) : solde(s) {}
    void deposer(int montant) {
        if (montant < 0) throw MontantInvalideException();
        solde += montant;
    }
    void retirer(int montant) {
        if (montant < 0) throw MontantInvalideException();
        if (montant > solde) throw SoldeInsuffisantException();
        solde -= montant;
    }
    int getSolde() const { return solde; }
};

int main() {
    Compte c(100);
    try {
        c.deposer(50);
        cout << c.getSolde() << endl;
        c.retirer(200);
    } catch (const MontantInvalideException& e) {
        cout << e.what() << endl;
    } catch (const SoldeInsuffisantException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
