

#include <iostream>
#include <stdio.h>
    using namespace std;


// zd. 5, na celciuszach beądą zera, bo nie będzie wiedział że ma brać z liczb wymiernych nawet jak jest  float
// zd.6 

/*
int main(){

    int fahr, celsius, start, limit, krok;
    start = 0;
    cout << " podaj limit:  ";
    cin >> limit;
    cout << "podaj krok";
    cin >> krok;

    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        cout << fahr << "\t" << celsius << endl;
    }
    
}
*/

//zd.7
    /*
    int main(){

        int i = 0;
        for (i = 0; i < 10; i++) {
            double liczba;
                cout << "podaj liczbe: ";
            cin >>  liczba;
            if (liczba > 0) {
                cout << liczba << endl;
            }
            else {
                cout << "spróbuj jeszcze raz, liczba jest niedodatnia" << endl;
            }
        }

}
*/

//zd.8
    int main() {
        int i;
        for (i = 0; i < 100; i = i + 2) {
            cout << i << endl;
        }
    }