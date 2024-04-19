#include <iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        return 0;
    }
    return 1;
}
int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;

    if(isEven(num)){
        cout<<"number is even ";
    }
    else{
        cout<<"number is odd ";
    }


}