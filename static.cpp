#include <iostream>
using namespace std;
class counter{
private:
static int count;
public:
void Counter(){
    count++;
}
void print(){
    cout<<"total numbers are "<<count<<endl;
}
};
int counter::count = ; //static variables have only one memory so diff objects will point towrds only one memory 
int main(){
    counter obj1;
    obj1.Counter();
    obj1.print();
    counter obj2;
    obj2.Counter();
    obj2.print();
    counter obj3;
    obj3.Counter();
    obj3.print();
    return 0;

}