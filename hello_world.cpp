#include <iostream>

using namespace std;
class Hello
{
public:
	void hello(void);
private:
	int Number;
};

void Hello::hello()
{
	char name[10];
	cout<<"please input your name:"<<endl;
	cin>>name;
	cout<<"Hello C++!"<<endl;
	cout<<"i am "<<name<<endl;
}



int main(void)
{
	Hello my_hello;
	my_hello.hello();

	return 0;
}


