

#include <iostream>
#include <stdio.h>
#include <cmath> 
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
    /*
    int main() {
        int i;
        for (i = 0; i < 100; i = i + 2) {
            cout << i << endl;
        }
    }
    */

//zd.9
   /*
    int main() {
        int n;
        cout << "podaj dzielnik: ";
        cin >> n;
        int i;
        for (i = 0; i <= 100; i = i + n) {
            cout << i << endl;
        }
    }
    */


#include <iostream>
#include <stdio.h>
#include <cmath> 
    using namespace std;

    /*

    int main() {
        int n;
        int i;
        int count = 0;
        cout << "podaj dzielnik";
        cin >> n;
        if (n == 0) {
            cout << " nie można dzielić przez zero " << endl;
            return 1;
        }
        for (i = 0 ; i =< 100; i = i + 1) {
            if (i % n == 0) {
                count = count + 1;
            }
        cout << "jest " << count << "liczb podzoelnych przez " << n << "w przedziale [0;100]" << endl;

        }
        c
            
    }
    */
    //zd.11

    int main() {
        int a;
        int b;
        cout << "podaj a ";
        cin >> a;
        cout << "podaj b ";
        cin >> b;
        if (a < b){
            for (int i = a; i < b; i++) {
                if (i % 3 == 0) {
                    cout << i << endl;
                }
                }
            }
        else {
            for (int i = b; i < a; i++) {
                if (i % 3 == 0) {
                    cout << i << endl;
                }
            }
        }


            



    }