// padding in class.
// class also have padding.

#include<iostream>
using namespace std;
class hello
{
    // 1 word is readed by every cpu cycle which is 8 bytes in 64-bit system
    char c;
    // char size is 1 bytes.
    int x;
    // int size is 4 bytes.
    // total 5 bytes but it read 8 bytes so it add 3 extra bytes.
    double d;
    // double size is 8 bytes.

    // total size of class = 8+8 = 16.

public:
    
};


int main(){
   hello cp;
   cout<<"size of c : "<<sizeof(hello)<<endl;
}
