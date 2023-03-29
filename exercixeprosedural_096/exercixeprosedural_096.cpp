#include <iostream>
using namespace std;

string kandidat[20] = { "joki","joko","joka","joku","joke","jiko","jako","jeko","jko","jok","oko","jo","ko","oko","soko","kiko","soko","goko","geko","jiko"};
int nilai_binggris[20];
int nilai_Matematika[20];
int lulus = 0;
int tidak_lulus = 0;

void input() {
    for (int i = 0; i < 20; i++) {
        cout << "Masukkan nilai bahasa inggris " << kandidat[i] << " = ";
        cin >> nilai_binggris[i];
        cout << "Masukkan nilai matematika " << kandidat[i] << " = ";
        cin >> nilai_Matematika[i];
    }
}
void proses() {
    for (int i = 0; i < 20; i++) {
        if ((nilai_Matematika[i] + nilai_binggris[i] / 2 >= 70 || nilai_Matematika[i] > 80)) {
            cout << "kandidat" << kandidat[i] << "Diterima" << endl;
            lulus++;
        }
        else {
            cout << "kandidat" << kandidat[i] << "Tidak Diterima" << endl;
            tidak_lulus++;
        }
    }
    cout << "\n\Jumlah kandidat diterima =" << lulus << endl;
    cout << "\n\Jumlah kandidat tidak diterima =" << tidak_lulus << endl;
}

int main() {
    input();
    proses();
    return 0;
}