#include<bits/stdc++.h>
using namespace std;
bool comp(int A[],int B[]){
	for(int i=0;i<256;i++){
		if(A[i]!=B[i]){
			return false;
		}
	}
	return true;
}
void findsubstr(){
	string str1,str2;
	cin>>str1>>str2;
	int A[256] = {},B[256] = {};
	int n = str2.length();
	for(int i=0;i<n;i++){
		A[str1[i]]++;
		B[str2[i]]++;
	}
	for(int i=n;i<str1.length();i++){
		if(comp(A,B)){
			cout<<"substring '"<<str1.substr(i-n,n)<<"' present at index"<<i-n<<endl;
		}
		A[str1[i]]++;
		A[str1[i-n]]--;
	}
	if(comp(A,B)){
		cout<<"substring '"<<str1.substr(str1.length()-n,n)<<"' present at index"<<str1.length()-n<<endl;
	}
}
int main(){
	findsubstr();
	return 0;
}
