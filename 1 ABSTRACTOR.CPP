#include<iostream>

using namespace std;

class mobile{
	
	public:
		
		virtual void touchscreen()=0;
		
};
class iphone:public mobile{
	
	public:
		
		void touchscreen(){
			
			cout<<"iphone touchscreen mobile";
		}
};

main(){
	
	iphone obj;
	obj.touchscreen();
}
