#include <iostream>
#include <cstring>
using namespace std;

int main() {
   int k=0;
   int pr=0;
   
	char a[80];
cin.getline(a,80);
	char a1[160];
	for(int i=0;i<strlen(a);i++){
  if(a[i]==' '){a1[i+k]='%';a1[i+k+1]='2';a1[i+k+2]='0';k+=2;pr++;continue;}
  
    a1[i+k]=a[i];
    
	}


	for(int i=0;i<(strlen(a)-pr+pr*3);i++){
                         cout<<a1[i];
                         
	}

return 0;
}
