#include <iostream>
using namespace std;

int main() {
    int i,j,n;
	cin>>n;
	int a[2*n][n];
	for(i=0;i<n*2;i++){
	    for(j=0;j<2;j++){
	        cin>>a[i][j];   
	    }
	}
	for(i=0;i<n*2;i+=2){
	    for(j=0;j<1;j++){
	        if( a[i][j]<=a[i+1][j] && a[i][j+1]<=a[i+1][j+1]){
	            cout<<"POSSIBLE"<<endl;
	        }
	        else{
	            cout<<"IMPOSSIBLE"<<endl;
	        }
	    }
	}
	return 0;
}
