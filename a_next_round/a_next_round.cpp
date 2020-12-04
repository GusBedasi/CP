#include <iostream>
using namespace std;

int main() {
    int n, k, r, counter = 0;

    cin >> n >> k;

    r = n - k;

    int c[n];

    if(n >= k){
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }

        for(int y = 0; y < n; y++){
            if(c[y] <= 0){
                counter += 1;
            }
        }

        if(r > 0) {
            for(int j = 0; j < r; j++){
                if((c[k - 1] > c[k + j]) && (c[k + j] > 0)){
                    counter += 1;
                }
            }
            cout << n - counter;
        }else{
            cout << n - counter;
        }
    }
}
