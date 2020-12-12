// ���� ��������� ���� t.  
// ��������, �� � ����� ��� ������� ���� ����� ���� "aa" ��� "bb" ��� "cc"(�������� � ������ �������).
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
    // ������ �� ������ ������� � ����� "t"
    while (f >> c) {
        if (c == 'a' && p == 'a') return true;
        if (c == 'b' && p == 'b') return true;
        if (c == 'c' && p == 'c') return true;
        p = c;
    }
    return false;
}
