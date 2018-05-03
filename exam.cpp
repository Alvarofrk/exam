#include <iostream>
using namespace std;
 

bool substring(char *a,char *b){
	bool band;
	for(;*a!='\0';a++){
		if(*a==*b){
			for(;*b!='\0';b++){
				if(*b==*a++){
					band=true;
				}
				else{
					return false;
				}
			}
			return band;
		}
	}
	
}

int tam(char *a){
	int cont=1;
	for(;*a!='\0';a++){
		cont++;
	}
	return cont;
}

int ent(char *str) {
    int res = 0; 
 
   
    for (int i = 0; str[i] != '\0'; ++i)
        res = res*10 + str[i] - '0';
 
   
	return res;
}

int nCient(char a[],int nElem){
	char b[nElem];
	char signo;
	char numero;
	int numero2=1;
	
	
	for(int i=0; a[i]!='e';i++){
		b[i]=a[i];
	}
	for(int i=0; a[i]!='\0';i++){
		if(a[i]=='+'){
			numero=a[i+1];
			int ia = numero -'0'; 
			for(int i=1;i<=ia;i++){
				numero2=numero2*10;
				
				}
			}
		if(a[i]=='-'){
			numero=a[i+1];
			int ia = numero -'0'; 
			for(int i=1;i<=ia;i++){
				numero2*=-10;
				}
			}
		
		}
	
	
	cout<<ent(b)* numero2;
}

int main()
{
 //char a[]={"hola como"};
 //char b[]={"como"};
 char c[]={"1234e+6"};
 //cout<<substring(a,b)<<endl;
 int t=tam(c);
 nCient(c,t);
 

 return 0;
}

