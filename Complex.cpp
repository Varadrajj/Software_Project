#include<iostream>
using namespace std;
class Complex
{
//start
//
//

int real, img;//change by Saurabh
	public:
		void getData()
		{
			cout<<"Accept real and imaginary values=";
			cin>>real>>img;
		}
                //To display the complex number.
		void display()
		{
			cout<<"Complex number is="<<real<<"+"<<img<<"i"<<endl;
		}
		void acceptparam(int,int);
		
		void setReal()
		{
			int r;                      
			cout<<"Enter the real value you want=";
			cin>>r;
			real=r;
		}
//created by Harshvardhan Wadavane 
		int getReal()
		{
			return real;
		}
		void setImg()
		{
			int i;
			cout<<"Enter imaginary part you want=";
			cin>>i;
			img=i;
		}
		int getImg()
		{
			return img;
		}
};
void Complex :: acceptparam(int r, int i)
{
	real=r;
	img=i;
}
		
	int main()
	{
		Complex c1;
		c1.getData();
		c1.display();
		Complex c2;
		c2.acceptparam(10,2);
		c2.display();
		c2.setReal();
		c2.display();
		c2.setImg();
		c2.display();
		cout<<"Modified real  part="<<c2.getReal();
		cout<<"\nModified imaginary part="<<c2.getImg();
		cout<<"\nModified complex number="<<c2.getReal()<<"+"<<c2.getImg()<<"i";
	}
		
