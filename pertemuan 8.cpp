//ilman arifin A.R 2410631170143 1E informatika
#include <iostream>
#include <string>

using namespace std;

struct Zodiak {
    string nama;
    int mulaiBulan;
    int mulaiTanggal;
    int akhirBulan;
    int akhirTanggal;
};

int main() {
    Zodiak zodiaks[] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21}
    };

    int tgl, bln, thn;
    cout << "Tanggal Lahir Anda [tgl-bln-tahun]: ";
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    string zodiakNama = "UNKNOWN";

    for (const auto& zodiak : zodiaks) {
        if ((bln == zodiak.mulaiBulan && tgl >= zodiak.mulaiTanggal) ||
            (bln == zodiak.akhirBulan && tgl <= zodiak.akhirTanggal)) {
            zodiakNama = zodiak.nama;
            break;
        }
    }

    cout << "Zodiak Anda adalah: " << zodiakNama << endl;
    return 0;
}
