#include <iostream>
using namespace std;
int main(){int n;
    // int m;
    cout<<"enter no row: ";
     cin>>n; 
    // cout<<"enter no coloum : ";
    // cin>>m;
    int i=1;
    int p=1;
 
    while (i<=n){
      int j=1;
      p=1; 
  while (j<=n-i+1)
  {
    cout<<p<<" ";
    p++;
    j++;
  }
  j=1;
  while (j<=2*(i-1))
  {
    cout <<"* ";
    j++;
  }
  j=1;
  p=n-i+1;
  while (j<=n-i+1)
  {
    cout<<p<<" ";
    p--;
    j++;
  }
  
  
  
// {while (j<=(n-i))
//    {
//     cout<<"  ";
//     j++;
//    }
//    j=1;
   
//  p=1;

//  while (p<=i)
// {
//   cout<<p<<" ";
//   p++;  

// }
//  p--;
// while (p>1)
//   p=p-1;
  
//   cout <<p<<" ";
// }
    // j++;
    cout<<endl;

i++;

}}