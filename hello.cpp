#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"hello world\n";
	//试图观察sin函数的输出变化
	for(double i=0;i<=3.14;i=i+0.02){
		cout<<"sin( "<<i<<" )= "<<sin(i)<<endl;
	}
	return 0;
}
