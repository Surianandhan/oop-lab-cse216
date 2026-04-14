#include <iostream>
using namespace std;

int main() {
    char word[] = "EDUCATION";
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j <= i; j++) {
            cout << word[j];
        }
        cout << endl;
    }
    
    return 0;
}