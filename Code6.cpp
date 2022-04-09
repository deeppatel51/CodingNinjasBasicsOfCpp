#include <iostream>
using namespace std;

int main() {
    //Write your code here
    float basic, hra, da, allow, pf, total;
    char grade;
    cin >> basic >> grade;
    hra = 0.2*basic;
    da = 0.5*basic;
    pf = 0.11*basic;
switch(grade)
    {
       case 'A':
           allow=1700;
           break;
       case 'B':
           allow=1500;
           break;
       default:
           allow=1300;
           break;
   }
    total = basic + hra + da + allow - pf;
    if( (total + 0.5) >= (int(total) + 1) )
cout << int(total)+1;
else
cout << int(total);
    return 0;
}
