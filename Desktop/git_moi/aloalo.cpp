#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main()
{
 int i,j,h;
	cout<<"Nhap vao chieu cao cua tam giac: ";
	cin>>h;
    for(i=1;i<=h;i++){
		for(j=0;j<h-i;j++)
			cout<<" ";
		for(j=0;j<i;j++)
			if(i==1||i==h||j==i-1||j==0) printf("*");
			else cout<<" ";
		cout<<"\n";
	}
    return 0;
}
