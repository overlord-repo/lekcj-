#include <iostream>
using namespace std;
void nwd(int a, int b,int i);
int a,b,d;

int main()
{
	cout<<"pierwsza =";
	cin>>a;
	cout<<"druga =";
	cin>>b;
	nwd(a,b,d);
	cout << d;
	return 0;
}
void nwd(int a, int b,int i) {
    if (a>b){
        int temp=a;
        temp=a;
        a=b;
        b=temp;
    }
    for (int i=b; i <= a*b; i+=a) {
        if (i%b==0) {
        cout << i << ";";
        break;
        }
    }	
}
