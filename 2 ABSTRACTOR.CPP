#include<iostream>

using namespace std;

class parent{
	
	public:
		
		virtual void read(){
			
			cout<<"parent class read function"<<endl;
		}
		
		virtual void print(){
			
			cout<<"parent class print function"<<endl;
		}
};

class child:public parent{
	
	public:
		
		 void read(){
			
			cout<<"child class read function"<<endl;
		}
		
		 void print(){
			
			cout<<"child class print function"<<endl;
		} 
};
main(){
	
	parent*ptr;
	child obj;
	
	ptr = &obj;
	ptr->read();
	ptr->print();
}
