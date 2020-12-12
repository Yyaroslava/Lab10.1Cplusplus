// Дано текстовий файл t.  
// Вияснити, чи є серед цих символів пара сусідні букв "aa" або "bb" або "cc"(оформити у вигляді функції).
// C++

#include <iostream>
#include <fstream>

using namespace std;

bool Find(ifstream& f);

int main() {
    ifstream f("t.txt");
    if (!f) {
        cerr << "file \"t.txt\" not found" << endl;
        return 1;
    }

    bool found = Find(f);
    if (found) {
        cout << "Pairs 'aa' or 'bb' or 'cc' were found successfully." << endl;
    }
    else {
        cout << "Pairs 'aa' or 'bb' or 'cc' were NOT found." << endl;
    }

    f.close();

    return 0;
}

bool Find(ifstream& f) {
    char p = 0;
    char c;
    // читаємо по одному символу з файла "t"
    while (f >> c) {
        if (c == 'a' && p == 'a') return true;
        if (c == 'b' && p == 'b') return true;
        if (c == 'c' && p == 'c') return true;
        p = c;
    }
    return false;
}
