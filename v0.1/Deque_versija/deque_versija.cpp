#include "studentas.h"
#include <deque>
#include <chrono>
#include <iomanip>

using namespace std;
using namespace std::chrono;

void paleistiStrategija1(const string& failas) {
    deque<Studentas> studentai, vargsiukai, kietiakiai;
    nuskaitytiIsFailo(studentai, failas);

    auto start = high_resolution_clock::now();
    skirstymas_1(studentai, vargsiukai, kietiakiai);
    auto end = high_resolution_clock::now();

    double trukme = duration<double>(end - start).count();
    cout << "Strategija 1: " << fixed << setprecision(6) << trukme << " s"
         << " (vargsiukai: " << vargsiukai.size()
         << ", kietiakiai: " << kietiakiai.size() << ")" << endl;

    issaugotiStudentusIFaila(vargsiukai, "deque_vargsiukai1.txt");
    issaugotiStudentusIFaila(kietiakiai, "deque_kietiakiai1.txt");
}

void paleistiStrategija2(const string& failas) {
    deque<Studentas> studentai, vargsiukai;
    nuskaitytiIsFailo(studentai, failas);

    auto start = high_resolution_clock::now();
    skirstymas_2(studentai, vargsiukai);
    auto end = high_resolution_clock::now();

    double trukme = duration<double>(end - start).count();
    cout << "Strategija 2: " << fixed << setprecision(6) << trukme << " s"
         << " (vargsiukai: " << vargsiukai.size()
         << ", kietiakiai: " << studentai.size() << ")" << endl;

    issaugotiStudentusIFaila(vargsiukai, "deque_vargsiukai2.txt");
    issaugotiStudentusIFaila(studentai, "deque_kietiakiai2.txt");
}

void paleistiStrategija3(const string& failas) {
    deque<Studentas> studentai, vargsiukai;
    nuskaitytiIsFailo(studentai, failas);

    auto start = high_resolution_clock::now();
    skirstymas_3(studentai, vargsiukai);
    auto end = high_resolution_clock::now();

    double trukme = duration<double>(end - start).count();
    cout << "Strategija 3: " << fixed << setprecision(6) << trukme << " s"
         << " (vargsiukai: " << vargsiukai.size()
         << ", kietiakiai: " << studentai.size() << ")" << endl;

    issaugotiStudentusIFaila(vargsiukai, "deque_vargsiukai3.txt");
    issaugotiStudentusIFaila(studentai, "deque_kietiakiai3.txt");
}

int main() {
    vector<string> failai = {
        "studentai1000.txt",
        "studentai10000.txt",
        "studentai100000.txt",
        "studentai1000000.txt"
    };

    for (const auto& failas : failai) {
        cout << "Failas: " << failas << endl;
        paleistiStrategija1(failas);
        paleistiStrategija2(failas);
        paleistiStrategija3(failas);
        cout << "---------------------------------------------" << endl;
    }

    return 0;
}