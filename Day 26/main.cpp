#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Da, Ma, Ya;
    cin >> Da >> Ma >> Ya;
    int fine;

    int De, Me, Ye;
    cin >> De >> Me >> Ye;

    if((Da == De || Da < De) && Ma == Me && Ya == Ye){
        fine = 0;
    }else if(Da > De && Ma == Me && Ya == Ye){
        fine = (15 * (Da - De));
    }else if(Ma > Me && Ya == Ye){
        fine = (500 * (Ma - Me));
    }else if(Ya > Ye){
        fine = 10000;
    }

    cout << fine << endl;
    return 0;
}
