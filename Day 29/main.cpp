#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int N, K;
        cin >> N >> K;
        int S[N];
        int max1 = 0;
        for(int j = 0; j < N; j++){
            S[j] = j+1;
        }
        for(int k = 0; k < N; k++){
            for(int l = k + 1; l < N; l++ ){
                if(((S[k] & S[l]) > max1) && ((S[k] & S[l]) < K)){
                    max1 = (S[k] & S[l]);
                }
            }
        }
        cout << max1 << endl;
    }
    return 0;
}
