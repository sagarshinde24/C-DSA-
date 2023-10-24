/*Write C++ program for string operations- copy, concatenate, check substring, equal, reverse

and length*/


#include<iostream>
using namespace std;

void subtr(char str1[20],char str2[20]){

	    int l = 0; //Hold length of second string
	    //finding length of second string
	    for(l = 0; str2[l] != '\0'; l++);
	    int i, j;
	    for(i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++){
	        if(str1[i] == str2[j]){
	            j++;
	        }
	        else{
	            j = 0;
	        }
	    }

	    if(j == l)
	        cout<<"Substring found at position "<< i - j + 1;
	    else
	        cout<<"Substring not found";

	}
void strcpy(char str1[20],char str2[20]){
	int i;
	for(i=0;str2[i]!='\0';i++){
		str1[i]=str2[i];
	}
	str1[i]='\0';
}
void strcon(char str1[20],char str2[20]){
	int i,j;
	for(i=0;str1[i]!='\0';i++){

	}
	for(j=0;str2[j]!='\0';j++){
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';

}
int strlen(char str[20]){
	int len=0;
	for(int i=0;str[i]!='\0';i++){
		len++;
	}
	return len;
}
void strcmp(char str1[20],char str2[20]){
	int len=strlen(str1);

	int f=0,i;
	for(i=0;str1[i]!='\0';i++){
		if(str1[i]==str2[i])
			f++;
	}
	if(str1[i]=='\0' && str2[i]=='\0'){
	if(f==len)
		cout<<"\n\nStrings are Equal..!!\n";
	}
	else
		cout<<"\n\nStrings are NOT Equal..!!\n";

}
void reverse(char str[20]){
	int len=strlen(str);
	for(int i=len-1;i>=0;i--){
		cout<<str[i];
	}

}



int main(){

	int ch;
	char str[20],strco[20],strnew[20];;
	cout<<"\nEnter String >> ";
	cin>>str;
	strcpy(strco,str);

	do{
		cout<<"\n1)COPY\t2)CONCATENATE\t3)SUBSTRING\t4)EQUAL\n5)REVERSE\t6)LENGTH\t7)EXIT\n\n";
		cin>>ch;
		switch(ch){
		case 1:
			strcpy(strnew,str);
			cout<<"New string is >> "<<strnew<<endl;
			break;
		case 2:
			cout<<"\nEnter New String>> ";
			cin>>strnew;
			strcon(strco,strnew);
			cout<<"New string is >> "<<strco<<endl;
			break;
		case 3:
			cout<<"\nEnter the String to be searched >> ";
			cin>>strnew;
			subtr(str,strnew);
			break;
		case 4:
			cout<<"\nEnter the String to compare >> ";
			cin>>strnew;
			strcmp(str,strnew);
			break;
		case 5:
			cout<<"\n\nReverse of this String is ";
			reverse(str);
			break;
		case 6:
			cout<<"\nLength of the string is "<<strlen(str)<<endl;
			break;
		case 7: return 0;

		}
	}while(1);
}


















