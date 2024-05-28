#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool adalahPalindrom(const string& input) {
stack<char> tumpukanKarakter;
for (char c : input) {
tumpukanKarakter.push(c);
}
for (char c : input) {
if (c!= tumpukanKarakter.top()) {
return false;
}
tumpukanKarakter.pop();
}
return true;
}
int main() {
string inputUser;
cout << "Masukkan kalimat: ";
getline(cin, inputUser);
if (adalahPalindrom(inputUser)) {
cout << "Kalimat tersebut adalah palindrom." << endl;
} else {
cout << "Kalimat tersebut bukan palindrom." << endl;
}
 return 0;
}
