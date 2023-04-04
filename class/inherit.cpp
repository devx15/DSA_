#include <iostream>
using namespace std;

class human
{
public:
    int height;
    int weight;

protected:
    int age;


    void setweight(int w)
    {
        this->weight = w;
    }
};

class male: private human{
    public:
    string colour;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }

     int setheight()
    {
        return this->height;
    }
};

int main()
{
    male obj1;
    cout<<obj1.setheight()<<endl;
    cout<<obj1.age<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.colour<<endl;
    // obj1.sleep();
    // obj1.setweight(77);
    // cout<<obj1.weight<<endl;
    return 0;
}