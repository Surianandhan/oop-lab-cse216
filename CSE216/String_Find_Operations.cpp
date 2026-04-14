#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "In Xanadu did Kubla Kahn Stately Pleasure";
    
    int n = s1.find("Kubla");
    cout << "Found Kubla at " << n << endl;
    
    n = s1.find_first_of("spde");
    cout << "First of SPDE at " << n << endl;
    
    n = s1.find_first_not_of("aeiouAEIOU");
    cout << "First Consonant at " << n << endl;
    
    return 0;
}