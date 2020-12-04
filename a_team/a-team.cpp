#include <iostream>
using namespace std;
int main() {
    int n, p1, p2, p3, result, solved = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> p1 >> p2 >> p3;

        result = p1 + p2 + p3;

        if(result > 1){
            solved += 1;
        }
    }
    cout << solved;
}
