#include <iostream>
using namespace std;
int main(){
    int a=1, b=2;
    if (a-- >0 || ++b >2)
    {
        cout<<"stage1 \n"    ;
    }
    else
    {
        cout<< "stage 2";
    }
    cout<<a<<endl<<b;
   
    return 0;
    
}