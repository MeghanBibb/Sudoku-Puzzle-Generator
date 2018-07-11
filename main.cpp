#include <iostream>
using namespace std;


template<class T>
T* strCpy(T*dest, T*src){
    int count = 0;
    while(src[count] != NULL){
        dest[count] = src[count];
        count++;
    }
    dest[count] = NULL;
    return dest;
}

int main() {
    char a = 9;
    int b = 30;
    long double *ptr1;
    int *ptr2 = &b;
    cout << ptr1 << endl;
    cout << *ptr1 << endl;
    cout << ptr2 << endl;
    cout << "size" <<  sizeof(ptr1) << endl;

    /*
    char a[20];

    char b[20];
    cout << "enter string 1" << endl;
    cin >> a;
    cout << "enter string 2" << endl;
   // cin >> b;
    cout << "copying..." << endl;
    strCpy(b,a);
    cout << b << endl;
    */
     return 0;
}