#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLowerCase(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

bool binarySearch(const string &str, char target) {
    int low = 0;
    int high = str.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (str[mid] == target) {
            return true;
        } else if (str[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return false;
}

int main() {
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    bool ditemukan = binarySearch(kalimat, tolower(huruf));

    if (ditemukan) {
        cout << "Huruf '" << huruf << "' ditemukan dalam kalimat." << endl;
    } else {
        cout << "Huruf '" << huruf << "' tidak ditemukan dalam kalimat." << endl;
    }

    return 0;
}
