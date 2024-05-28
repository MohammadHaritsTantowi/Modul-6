#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main()
{
string input;
cout << "Masukkan kalimat (minimal 3 kata): ";
getline(cin, input);
// Membuat stack untuk menyimpan karakter-karakter dari input
stack<char> s2311102016;
for (char c : input)
{
s2311102016.push(c);
}
string reversed;
// Mengeluarkan karakter satu per satu dari stack dan membentuk string 
terbalik
while (!s2311102016.empty())
{
char c = s2311102016.top();
s2311102016.pop();
reversed += c;
}
// Memulai pembacaan kata dari string yang sudah dibalik
size_t start = 0;
size_t end = 0;
for (size_t i = 0; i < reversed.length(); i++)
{
if (reversed[i] == ' ')
{
end = i;
string word = reversed.substr(start, end - start);
cout << word << ' ';
start = i + 1;
}
}
// Menangani kata terakhir dalam string yang dibalik
string lastWord = reversed.substr(start);
cout << lastWord << endl;
return 0;
}
