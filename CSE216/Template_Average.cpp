#include <iostream>
using namespace std;

template <typename T>
class GeneralArray {
private:
    T* array;
    int size;
    
public:
    GeneralArray(int s) {
        size = s;
        array = new T[size];
    }
    
    ~GeneralArray() {
        delete[] array;
    }
    
    void inputElements() {
        cout << "Enter " << size << " Elements: ";
        for (int i = 0; i < size; i++) {
            cin >> array[i];
        }
    }
    
    T calculateAverage() {
        T sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum / size;
    }
};

int main() {
    int size;
    char type;
    
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter Type (i=int, l=long, d=double, c=char): ";
    cin >> type;
    
    if (type == 'i') {
        GeneralArray<int> arr(size);
        arr.inputElements();
        cout << "Average: " << arr.calculateAverage() << endl;
    } else if (type == 'l') {
        GeneralArray<long> arr(size);
        arr.inputElements();
        cout << "Average: " << arr.calculateAverage() << endl;
    } else if (type == 'd') {
        GeneralArray<double> arr(size);
        arr.inputElements();
        cout << "Average: " << arr.calculateAverage() << endl;
    } else if (type == 'c') {
        GeneralArray<char> arr(size);
        arr.inputElements();
        cout << "Average: " << arr.calculateAverage() << endl;
    } else {
        cout << "Invalid type." << endl;
    }
    
    return 0;
}