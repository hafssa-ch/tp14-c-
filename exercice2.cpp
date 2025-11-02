
#include <iostream>
#include <stdexcept>
using namespace std;

class StockInsuffisantException : public exception {
public:
    const char* what() const noexcept override {
        return "Stock insuffisant pour la vente";
    }
};

class Produit {
private:
    int stock;
public:
    Produit(int s) : stock(s) {}
    void vendre(int quantite) {
        if (quantite > stock) throw StockInsuffisantException();
        stock -= quantite;
    }
    int getStock() const { return stock; }
};

int main() {
    Produit p(5);
    try {
        p.vendre(3);
        cout << p.getStock() << endl;
        p.vendre(4);
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}
