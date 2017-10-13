#include <iostream>
#include <sstream>
using namespace std;

int main() {
	string str;
	bool Pair=false;
	int chis[10];
	int nov;
	int pair;
    getline(cin,str);
    cin>>pair;
    istringstream stream(str);
    
    for(int i=0;i<10;i++){
    	if(!(stream>>nov)){
    		cout<<"An error has occured while reading the input sequence.";
    		exit(0);
    		
    	}if((i!=0)&&(nov<chis[i-1])){
    		cout<<"The input sequence must be non-decreasing.";
    		exit(0);
    	} chis[i]=nov;
    }
    int im,jm;
    for(int j=0;j<10;j++){for(int i=0;i<10;i++){
    	if((chis[i]+chis[j]==pair)&&(i!=j)){
    	im=i;jm=j;	Pair=true; }}}
    	if(Pair){cout<<chis[im]<<" ";cout<<chis[jm];}else{cout<<"There is no such pair of numbers";}
	return 0;
}
