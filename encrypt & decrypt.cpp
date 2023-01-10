#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char plain[10],cipher[10];
	int key,i,l;
	int result;
	cout<<"enter the plain text : ";
	cin>>plain;
	cout<<"enter the key value : ";
	cin>>key;
	cout<<"\n encrypted text : ";
	for(i=0,l=strlen(plain);i<l;i++)
	{
		cipher[i]=plain[i]+key;
		if(isupper(plain[i]) && (cipher[i] > 'Z'))
		cipher[i]=cipher[i]-26;
		if(islower(plain[i]) && (cipher[i] > 'z'))
		cipher[i]=cipher[i]-26;
		cout<<cipher[i];
	}
	cout<<"\n After decryption : ";
	for(i=0;i<l;i++)
	{
		plain[i]=cipher[i]-key;
		if(isupper(cipher[i]) && (plain[i] < 'A') )
		plain[i]=plain[i]+26;
		if(islower(cipher[i]) && (plain[i] < 'a'))
		plain[i]=plain[i]+26;
		cout<<plain[i];
	}
}
