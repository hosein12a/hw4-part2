#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
 main(){
 	float x,y,z,a,b,c;
 	cout<<"please enter x,y,z=";
cin>>x>>y>>z;
    a=(x-y)*(x+z);
    b=(x+y+z);
    c=1;
    cout<<"result is="<<a/(b*b)+c;
}