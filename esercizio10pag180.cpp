#include <iostream>
using namespace std;

class Utente {
private:
    char nome[20];
    char password[20];
public:
    Utente(){
        modificanome();
        modificapassword();
    }
    void stampanome(){
        cout << nome << endl;
    }
    void modificanome(){
        cout << "Inserisci nome utente" << endl;
        cin >> nome;
    }
    void stampapassword(){
        cout << password << endl;
    }
    void modificapassword(){
        cout << "Inserisci password utente" << endl;
        cin >> password;
    }
};

int main() {
    Utente utente1;
    utente1.stampanome();
    utente1.stampapassword();
    utente1.modificanome();
    utente1.modificapassword();
    utente1.stampanome();
    utente1.stampapassword();
    return 0;
}
