#include <iostream>
#include <string.h>
using namespace std;
int main(){
char a[100]="apple";
char b[100];
cout<<strlen(a)<<endl;
strcpy(b,a);
cout<<b<<endl;
cout<<strcmp(b,a)<<endl;
cout<<strcat(b,a)<<endl;
}