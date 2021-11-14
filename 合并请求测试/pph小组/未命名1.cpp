#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t,n;
    cin>>t;
    for(int i = 0; i < t; i++){
    	cin>>n;
    	if(n % 2){
    		cout<<"-1 ";
		}else{
			cout<<"0 ";
		}
	}
    return 0;
}
