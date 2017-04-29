#include<iostream>
#include<math.h>
using namespace std;

int main(){

  double b;
  double b2;
  long q = 1000000000000;
  double sq; 
  long a;

  for(int i=0;i < 1000 ; i++)
  {
    a = (pow(q,2)-q)/2;

    sq = sqrt(a*4+1);
    cout << "sq is: " << sq  << endl;
    b = (sq+1)/2;
    cout << "Q,B is: "<< q << " , " << b << endl;
    q++;
    cin.get();
  }
  return 0;
  
} 