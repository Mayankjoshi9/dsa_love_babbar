
#include<iostream>
using namespace std;

int main() {
    int array [4];
    //To initialize the array with value'1'.
    fill_n( array , 34 , 1 );
    //To check the array input (kewaal 5 hi kari h print)
    for( int i = 0 ; i < 34 ; i++ )
    {
        cout << array[i] << endl;
    }

}