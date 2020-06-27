#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    map<string, int> phoneBook;
    for(int i = 0; i < n; i++){
        string name;
        int phoneNumber;
        cin >> name >> phoneNumber;
        phoneBook.insert(pair<string, int>(name, phoneNumber));
    }
    string value;
    map<string, int>:: iterator it;
    while(cin >> value){
        it = phoneBook.find(value);

        if(it == phoneBook.end()){
            cout << "Not found" << endl;
        }else {
            cout << it->first << "=" << it->second << endl;
        }
    }
    return 0;
}
