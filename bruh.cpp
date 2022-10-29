#include<iostream>
using namespace std;
class check
{public:
 char i;
void get_data()
  {cout<<"Enter data:: "<<endl;
   cin>>i;}
 
 void check_data()
  { if (i == '0' || i=='1' || i=='2' || i=='3' || i=='4' || i=='5' || i=='6' || i=='7' || i=='8' || i=='9')
        cout<<"Entered Data is a digit";
    else if (i == 'a' || i=='A' || i=='e' || i=='E' || i=='i'|| i=='I' || i=='o' || i=='O' || i=='u' || i=='U')
        cout<<"Entered Data is a vowel";
    else if (i == 'b' || i=='B' || i=='c' || i=='C' || i=='d'|| i=='D' || i=='f' || i=='F' || i=='g' 
	|| i=='G'||i == 'h' || i=='H' || i=='j' || i=='J' || i=='k'|| i=='K' || i=='l' || i=='L' || i=='m' 
	|| i=='M'||i == 'n' || i=='N' || i=='p' || i=='P' || i=='q'|| i=='Q' || i=='r' || i=='R' || i=='s' 
	|| i=='S'||i == 't' || i=='T' || i=='v' || i=='V' || i=='w'|| i=='W' || i=='x' || i=='X' || i=='y' || i=='Y'|| i=='z'||i=='Z')
        cout<<"Entered Data is a consonant";
    else
        cout<<"Entered Data is a special character";
	 }
};

int main()
{check obj1;
 obj1.get_data();
 obj1.check_data();
 return 0;}
