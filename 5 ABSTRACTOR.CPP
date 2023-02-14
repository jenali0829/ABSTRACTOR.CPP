#include<iostream>

using namespace std;

class math{
	
	public:
		
		int a;
		int b;
		int c;
		int d;
		int s;
		double circle;
		double triangle;
		double rectangle;
		
		public:
			
			virtual void calculate()=0;
		
};

class area:public math{
	
	public:
		
		void calculate(){
			
			cout<<"Enter a";
			cin>>a;
			
			circle=3.14*a*a;
			
			cout<<"circle"<<circle<<endl;
			
			cout<<"Enter b";
			cin>>b;
			
			cout<<"Enter c";
			cin>>c;
			
			cout<<"Enter s";
			cin>>s;
			
			triangle=(s)*(s-a)*(s-b)*(s-c);
			
			cout<<"triangle"<<triangle<<endl;
			
			cout<<"Enter d";
			cin>>d;
			
			rectangle=c*d;
			
			cout<<"rectangle"<<rectangle<<endl;
		}
};

main(){
	
	area obj;
	obj.calculate();
}
