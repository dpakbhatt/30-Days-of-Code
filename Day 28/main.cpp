#include<iostream>
#include<list>
#include <regex>

using namespace std;

int main(){
    int n;
    cin >> n;
    list<string> names;
    for(int i = 0; i < n; i++){
        string name;
        string email;
        cin >> name >> email;
        if (regex_match (email, regex(".+@gmail.com") )){
            names.push_back(name);
        }
    }
    names.sort();
    while (!names.empty())
    {
        cout << names.front()<<endl;
        names.pop_front();
    }

    return 0;
}
