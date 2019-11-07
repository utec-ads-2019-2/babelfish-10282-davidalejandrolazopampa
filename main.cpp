#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, string> array;
    string linea;
    while ((getline(cin, linea)) && linea.length() > 0) {
        int space = linea.find(' ');
        auto a = linea.substr(0, space);
        auto b = linea.substr(space + 1);
        array[b] = a;
    }
    while ((getline(cin, linea)) && linea.length() > 0) {
        if (array[linea].length() != 0)
            cout << array[linea] << endl;
        else
            cout << "eh\n";
    }
    return 0;
}