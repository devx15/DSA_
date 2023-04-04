#include<iostream>
using namespace std;

class queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;
public:
    queue(int size);
    ~queue();
    bool isfull();
    bool isempty();
    void insert();
    void delque();
    void display();
};

queue::queue(int size){
    this->size=size;
    front=-1;
    rear=-1;
    Q=new int[size];
}
void queue::display(){
    
}



queue::~queue(){}


int main()
{
    
    return 0;
}