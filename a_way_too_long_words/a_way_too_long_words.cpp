#include <iostream>
using namespace std;

int main() {
    int n;
    string str;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> str;
        int lastIndex;

        if(str.size() > 10){
            lastIndex = str.size() - 1;
            cout << str[0] << to_string(str.size() - 2) << str[lastIndex] << endl;
        }else {
            cout << str << endl;
        }
    }
}
