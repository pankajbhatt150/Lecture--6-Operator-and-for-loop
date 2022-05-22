#include<iostream>
using namespace std;

int main() {
    char c;
    c = cin.get();
    int i = 0, j = 0, k = 0;
    while(c!= '$') {
        if(c >= 'a' && c <= 'z') {
            i++;
        }
        else if(c >= '0' && c <= '9') {
            j++;
        }
        else if(c == ' ' || c == '\t' || c == '\n') {
            k++;
        }
        c = cin.get();
    }
    cout << i << " " << j << " " << k;
}
