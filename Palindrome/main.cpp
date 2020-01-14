#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Enter the word/phrase : ";
    string s;
    cin >> s;
    string s2;
    for (int i = s.size()-1; i >= 0  ; i--){
        s2 += s[i];
    }
    if (s2.compare(s) == 0){
        cout << "yes";
    }
    else{
        cout << "no";
    }
}
