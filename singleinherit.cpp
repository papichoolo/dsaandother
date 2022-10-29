
#include <iostream>
using namespace std;
class Mammals{
    public:
    void display(){
        cout<<"I am Mammal"<<endl;
    }
};
class MarineAnimals{
    public: 
    void displayy(){
        cout<<"I am a Marine animal"<<endl;
    }
};
class BlueWhale: public Mammals, public MarineAnimals{
    public: 
    void displayyy(){
        cout<<"i belong to both mammals and marine animals"<<endl;
    }
};
int main(){
    BlueWhale obj1;
    obj1.display();
    obj1.displayy();
    obj1.displayyy();
}

