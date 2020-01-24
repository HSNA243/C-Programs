#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "Enter the 10 elements in the array:" << endl;
    vector<int> a(10);
    for (int i = 0; i<10 ; i++){
        int x;
        cin >> x;
        a[i] = x;
    }
    for (int i = 0 ; i < 10 ; i++){
        int m = a[i];
        int ch = i;
        for (int j = i+1 ; j < 10 ; j++){
            if (a[j]<m){
                m = a[j];
                ch = j;
            }
        }
        int t = a[i];
        a[i] = m;
        a[ch] = t;

    }
    for (int i = 0; i<10 ; i++){
        cout << a[i] << " ";
    }
}
