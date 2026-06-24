#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, k = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << k << " ";
            k++;
            if(k > 9) k = 1;
        }
        cout << "\n";
    }
    return 0;
}