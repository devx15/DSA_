#include <iostream>
#include <string.h>
using namespace std;

class Hero
{
private:
    char level;

public:
    int health;
    char *name;
    static int timetocomplete;

    Hero()
    {
        cout << "constructor is being called" << endl;
        name=new char[100];
    }

    Hero(int health)
    {
        cout << "this -> " << this << endl;
        this->health = health;
    }
    Hero(int health, char level)
    {
        cout << "this -> " << this << endl;
        this->health = health;
        this->level = level;
    }

    int getlevel()
    {
        return level;
    }

    int gethealth()
    {
        return health;
    }

    void setlevel(char ch)
    {
        level = ch;
    }

    void sethealth(int n)
    {
        health = n;
    }
    void print()
    {
        cout << health << endl;
        cout << level << endl;
        cout << name << endl;
    }
    Hero(Hero &temp)
    {
        cout<<"copy constructor is called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
        this->name=name;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }

    

    ~Hero(){
        cout<<"destructor is being called "<<endl;
    }
};

int Hero::timetocomplete=5;

int main()
{

    cout<<Hero::timetocomplete<<endl;
    Hero a;
    cout<<a.timetocomplete<<endl;


    // Hero hero1  ;
    // hero1.setlevel('h');
    // hero1.sethealth(44);
    // char name[8]="devansh";
    // hero1.setname(name);
    // hero1.print();
    // Hero hero2(hero1);
    // hero1.name[0]='l';
    // hero2.print();
    // hero1.print();
    // Hero *b=new Hero;
    // delete(b);





    // Hero aman;
    // cout << "size : " << sizeof(Hero) << endl;
    // cout << "size : " << sizeof(aman.health) << endl;
    // aman.sethealth(7);
    // aman.setlevel('h');
    // cout << "the level is : " << aman.getlevel() << endl;
    // aman.print();
    // cout << "the health is : " << aman.gethealth() << endl;
    // Hero *b = new Hero(33); // parameterised constuctor
    // cout << "the address of the constructor is " << &aman;
    // Hero c(33, 'h');
    // c.print();
    // Hero d(c); // copy constructor
    // d.print();
    return 0;
}