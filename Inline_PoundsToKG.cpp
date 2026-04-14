#include <iostream>
using namespace std;

inline float kg(float pounds) {
    return pounds * 0.453592;
}

int main() {
    float pounds;
    cout << "Enter Weight in Pounds: ";
    cin >> pounds;
    cout << pounds << " pounds = " << kg(pounds) << " Kilograms" << endl;
    return 0;
}