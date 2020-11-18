#include<iostream>
using namespace std;
int main(){
	for(int i=1;i<=7;i++){
		for(int j=1;j<i-1;j++){
			cout<<" ";
		}
		for(int j=i;j<=7;j++){
			cout<<" "<<j;
		}
		cout<<endl;
	}
	for(int i=6;i>=1;i--){
		for(int j=i;j>1;j--){
			cout<<" ";
		}
		for(int j=i;j<=7;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}
