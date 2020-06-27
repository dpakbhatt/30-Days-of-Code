#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int arr[N];

    cin.ignore();
    for(int i = 0; i < N; i++){
        int x;
        cin >> arr[i];
    }
    for(int i = (N-1); i >= 0; i--){
        cout << arr[i] << " ";
    }

    return 0;
}
