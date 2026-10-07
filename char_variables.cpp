#include<iostream>
using namespace std;
int main() {
    for(int i = 0; i < 26; i = i + 1) {
        cout << (i+1)<< " litera to "<<(char)(i+'a')<< endl;
    }
    return 0;
}