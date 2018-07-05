#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
void cod();
void ec();
void dc();
void res();
char t[100],abe[]="abcdefghijklmnopqrstuvwxyz", abc[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",til[]= "αινσϊ";
int main(int argc, char *argv[]) {
	cod();
	return 0;
}
void cod(){
	int i=0;
	int num=0;
	cout<<"\n1. Encriptar \n2. Desencriptar \n3. Salir";
	do{
		cout<<" \nIngrese codigo: ";cin>>num;
		if (num==1){
			cout<<"Ingrese codigo a encriptar: ";gets(t);
			ec();
			i=1;}
		if (num==2){
			cout<<"Ingrese codigo a desencriptar: ";gets(t);
			dc();
			i=1;}
		if (num==3){
			cout<<"Vete a tu casa!!!!";
			i=4;}
		if (num<1 || num>3) {
			cout<<"Codigo incorrecto\n";
			i=1;
		}
	}while(i<=3);
	
}void ec(){
	int j;
	for (int i=0;i<sizeof(t);i++){
		j=0;
		while (j<26){
			if(t[i]==abe[j] && j<23){
				t[i]=abe[j+3];
				j=26;
			}
			if(t[i]==abe[j] && (j>=23 && j<26)){
				if(t[i]=='x')t[i]='a';
				if(t[i]=='y')t[i]='b';
				if(t[i]=='z')t[i]='c';
				j=26;
			}
			if(t[i]==abc[j] && j<23){
				t[i]=abc[j+3];
				j=26;
			}
			if(t[i]==abc[j] && (j>=23 && j<26)){
				if(t[i]=='X')t[i]='A';
				if(t[i]=='Y')t[i]='B';
				if(t[i]=='Z')t[i]='C';
				j=26;
			}
			if(t[i]==til[j] && j<2){
				t[i]=til[j+3];
				j=5;
			}
			if(t[i]==til[j] && (j>=2 && j<5)){
				if(t[i]=='ν')t[i]='α';
				if(t[i]=='σ')t[i]='ι';
				if(t[i]=='ϊ')t[i]='ν';
				j=5;
			}
			j++;
		}
	}
	cout<<"La encriptacion es: "<<t<<"\n";
}void dc(){
	int j;
	for (int i=0;i<sizeof(t);i++){
		j=0;
		while (j<26){
			if(t[i]==abe[j] && (j>2 && j<26)){
				t[i]=abe[j-3];
				j=26;
			}
			if(t[i]==abe[j] && j<=2){
				if(t[i]=='A')t[i]='X';
				if(t[i]=='B')t[i]='Y';
				if(t[i]=='C')t[i]='Z';
				j=26;
			}
			if(t[i]==abc[j] && (j>2 && j<26)){
				t[i]=abc[j-3];
				j=26;
			}
			if(t[i]==abc[j] && j<=2){
				if(t[i]=='A')t[i]='X';
				if(t[i]=='B')t[i]='Y';
				if(t[i]=='C')t[i]='Z';
				j=5;
			}
			if(t[i]==til[j] && (j>1 && j<5)){
				t[i]=til[j-3];
				j=26;
			}
			if(t[i]==til[j] && j<=1){
				if(t[i]=='α')t[i]='ν';
				if(t[i]=='ι')t[i]='σ';
				if(t[i]=='ν')t[i]='ϊ';
				j=5;
			}
			j++;
		}
	}
	cout<<"La desencriptacion es: "<<t<<"\n";
}
