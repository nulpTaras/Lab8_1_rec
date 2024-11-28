#include "functions.cpp"

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout << "Comma count = " << Count(str) << endl;

    char* dest = new char[strlen(str) + Count(str) + 1];
    Change(dest, str);

    cout << "Result = " << dest << endl;

    delete[] dest;

    return 0;
}
