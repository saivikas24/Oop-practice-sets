// Q2. Design a class that mimics a dictionary or map functionality — where you
// can store key-value pairs, search for a key, and display all pairs. Explain why
// encapsulation is important in this implementation.

#include<iostream>
#include<string>
using namespace std;

class Dictionary {
private:
    string key[50];
    string value[50];
    int n;

public:
    Dictionary() {
        n = 0;
    }

    void addData(string k, string v) {
        key[n] = k;
        value[n] = v;
        n++;
        cout << "Data added.\n";
    }

    void searchData(string k) {
        for (int i = 0; i < n; i++) {
            if (key[i] == k) {
                cout << "Found: " << value[i] << endl;
                return;
            }
        }
        cout << "Not found.\n";
    }

    void showData() {
        cout << "\nDictionary data:\n";
        for (int i = 0; i < n; i++) {
            cout << key[i] << " - " << value[i] << endl;
        }
    }
};

int main() {
    Dictionary d1;
    d1.addData("Apple", "Fruit");
    d1.addData("Dog", "Animal");
    d1.addData("Sai", "University");

    d1.searchData("Dog");
    d1.showData();

    return 0;
}
