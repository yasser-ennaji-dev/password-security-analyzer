    #include <cctype>
    #include <iostream>
    #include <string>
    using namespace std;



    int main() {
        
        string password;
        bool maiuscola = false;
        bool minuscola = false;
        bool numero = false;
        bool simbolo = false;
        cout << " Insersici la password: " << endl;
        cin >> password;
        int lunghezza = password.length();

        for(int i = 0; i<lunghezza; i++){
            char c = password[i];
            if(isupper(c)){
                maiuscola = true;
            }
            if(islower(c)){
                minuscola = true;
            }
            if (isdigit(c)) {
                numero = true;
            }
            if (!isupper(c) && !islower(c) && !isdigit(c)) {
                simbolo = true;
        }
        
        }
        cout << boolalpha;
        cout << " contiene maiuscolo: " << maiuscola << endl;
        cout << " Contiene minuscolo " << minuscola << endl;
        cout << " contiene numero: "  << numero << endl;
        cout << "contiene simbolo: " << simbolo << endl;



        return 0;

    }