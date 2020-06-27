#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;

    cin.ignore();
    for(int z = 0; z < T; z++){
        string str;
        getline(cin, str);

        for(int i = 0; i < str.length(); i= i+2){
            cout << str[i] ;
        }
        cout << " ";
        for(int j= 1; j < str.length(); j = j+2){
            cout << str[j] ;
        }
        cout << endl;
    }

    return 0;
}
