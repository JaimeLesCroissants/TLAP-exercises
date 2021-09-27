#include <iostream>

using namespace std;

class AutomobileCollection{
public:
    AutomobileCollection();
    AutomobileCollection(string maker,string model,int year);
    string getMaker();
    void setMaker(string maker);
    string getModel();
    void setModel(string model);
    int getYear();
    void setYear(int year);
    void printAge();
    void printCar();
private:
    string maker;
    string model;
    int year;
};

string AutomobileCollection::getMaker(){
    return this->maker;
}
void AutomobileCollection::setMaker(string maker){
    this->maker=maker;
}
string AutomobileCollection::getModel(){
    return this->model;
}
void AutomobileCollection::setModel(string model){
    this->model=model;
}
int AutomobileCollection::getYear(){
    return this->year;
}
void AutomobileCollection::setYear(int year){
    this->year=year;
}
void AutomobileCollection::printCar(){
    cout<<this->year<<" "<<this->maker<<" "<<this->model<<"."<<endl;
}
void AutomobileCollection::printAge(){
    int res=2021-this->year;
    cout<<res<<endl;;
}
AutomobileCollection::AutomobileCollection(){
    setMaker(" ");
    setModel(" ");
    setYear(0);
}
AutomobileCollection::AutomobileCollection(string maker,string model,int year){
    setMaker(maker);
    setModel(model);
    setYear(year);
}
int main()
{
    AutomobileCollection car1("Mazda","rx-7",1999);
    AutomobileCollection car2("Toyota","supra",2000);
    AutomobileCollection car3("Nissan","gtr r-34",2001);
    cout<<car1.getMaker()<<endl;
    cout<<car2.getModel()<<endl;
    cout<<car3.getYear()<<endl;
    car1.printCar();
    car2.printCar();
    car3.printCar();
    car1.printAge();
    car2.printAge();
    car3.printAge();
    return 0;
}
