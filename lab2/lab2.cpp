

#include <iostream>
#include <stdio.h>
    using namespace std;


// zd. 5, na celciuszach beądą zera, bo nie będzie wiedział że ma brać z liczb wymiernych nawet jak jest  float
// zd.6 
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


