#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int bin[32];
    int i = 0;
    while(n > 0){
        int remainder = n%2;
        n = n/2;
        bin[i] = remainder;
        i++;
    }
    int count = 0;
    int maxConsecutive= 0;
    for(int j = i-1; j >=0; j--){
        if(bin[j] == 1){
            count++;
        }
        if(maxConsecutive < count){
            maxConsecutive = count;
        }
        if(bin[j] == 0){
            count = 0;
        }
    }
    cout << maxConsecutive << endl;
    return 0;
}
