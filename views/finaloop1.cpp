#include<iostream>
#include<iomanip>
using namespace std;
class Restro
{
    public:
    int id;
    string name;
    string loc;
    static float pre,post;
Restro()
{ id=101;
  name=".............*Cherry On The Top*.............";
  loc="Pune";
}
void display()
{ cout<<"Welcome to "<<name<<endl;;
  cout<<"ID:"<<id<<endl;
  cout<<"Location:"<<loc<<endl;
  cout<<"Our Branches:Pune,Mumbai,Delhi,Solapur,Pandharpur,Indore,Jaipur,Paranda\n"<<endl;
  cout<<"Your Trust Our Service... \n\n";
}

};

float Restro::pre=0;
float Restro::post=0;
class snacks:public Restro
{ public:
int ch;
int n;

snacks()
{ 

}
snacks(int ch1)
{ 
ch=ch1;
}

 void Samosa()
 {cout<<"\nMenu \n1.Samomsa with Imli chutney\n2.Samomsa with Green chutney\n3.Samomsa with Imli chutney and Green chutney\n";
 cout<<"\nEnter choice:";
	cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.25 only";
	  cout<<"Your Fresh Samosa with Imli chutney is ready!!!!\n";
	  snacks::post=25;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.20 only\n";
	  cout<<"Your Fresh Samosa with Green chutney is ready!!!!\n";
	  snacks::post=20;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.30 only\n";
	  cout<<"Your Fresh Samosa with Imli and Green chutney is ready!!!!\n";
	  snacks::post=30;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
		
 }
 
 
void Sandwich()
{cout<<"Enter 1.Sandwich with cheese\n2.Grilled Sandwich\n3.Grilled Sandwhich with extra cheese\n\n";
 cout<<"Enter choice";
 cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.70 only\n";
	  cout<<"Your Fresh Sandwich with cheese is ready!!!!\n";
	  snacks::post=70;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.90 only\n";
	  cout<<"Your Fresh Grilled Sandwich is ready!!!!\n";
	  snacks::post=90;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.120 only\n";
	  cout<<"Your Fresh Grilled Sandwhich with extra cheese is ready!!!!\n";
	  snacks::post=120;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}


void Noodles()
{cout<<"Enter 1.Noodles\n2.Spicy Noodles\n3.Chicken Noodles\n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.80 only\n";
	  cout<<"Your Fresh Noodles with cheese is ready!!!!\n";
	  Restro::post=80;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.90 only\n";
	  cout<<"Your Fresh Spicy Noodles is ready!!!!\n";
	  post=90;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.150 only\n";
	  cout<<"Your Fresh Chicken Noodles is ready!!!!\n";
	  post=150;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}

void FrenchFries()
{cout<<"Enter 1.French Fries\n2.Peri peri French Fries with cheese \n3.Masala French Fries with cheese \n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.70 only\n";
	  cout<<"Your Fresh French Fries is ready!!!!\n";
	  post=70;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.80 only\n";
	  cout<<"Your Fresh Peri peri French Fries with cheese is ready!!!!\n";
	  post=80;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.100 only\n";
	  cout<<"Your Fresh Masala French Fries with cheese is ready!!!!\n";
	  post=100;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}


void Dosa()
{cout<<"Enter 1.Plain Dosa\n2.Paper Dosa\n3.Masala Dosa \n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.70 only\n";
	  cout<<"Your Plain Dosa with Aloo Sabji is ready!!!!\n";
	  post=70;
	   Restro::pre= Restro::pre+ Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.80 only\n";
	  cout<<"Your Paper Dosa with Aloo Sabji is ready!!!!\n";
	  post=80;
	   Restro::pre= Restro::pre+ Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.150 only\n";
	  cout<<"Your Masala Dosa with Aloo Sabji ,Coconut Chutney and Sambhar is ready!!!!\n";
	post=150;
	  Restro::pre= Restro::pre+ Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}
//void bill()
//{ cout<<"\nYour Total bill:"<<snacks::pre;
//}

 
};


//sweets
class dessert:public Restro
{ public:
int ch;
int n,n1;

dessert()
{ 

}
dessert(int ch1)
{ 
ch=ch1;
}

 void GulabJamun()
 {cout<<"\nMenu \n1.Gulab Jamun \n2.Gulab Jamun with dryfruits\n3.Mava Gulab Jamun\n";
 cout<<"\nEnter choice:";
	cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.60 only";
	  cout<<"Your Sweet and tasty Gulab Jamun is ready!!!!\n";

	  Restro::post=60;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.70 only\n";
	  cout<<"Your Sweet and tasty Gulab Jamun with dryfruits is ready!!!!\n";
	  Restro::post=70;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.80 only\n";
	  cout<<"Your Sweet and tasty Mava Gulab Jamun is ready!!!!\n";
	  Restro::post=80;
	  snacks::pre=dessert::pre+Restro::post;;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
		
 }
 
 
void Icecream()
{cout<<"Enter 1.Chocolate\n2.Butterscotch\n3.Cookies and cream\n4.Vanilla\n";
 cout<<"Enter choice";
 cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.40 only\n";
	  cout<<"Your Chilled Chocolate Icecream is ready!!!!\n";
	  Restro::post=40;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.35 only\n";
	  cout<<"Your Chilled Butterscotch Icecream is ready!!!!\n";
	  Restro::post=35;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.45 only\n";
	  cout<<"Your Chilled Cookies and cream Icecream is ready!!!!\n";
	  Restro::post=120;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==4)
	{cout<<"Price:Rs.50 only\n";
	  cout<<"Your Chilled Vanilla Icecream is ready!!!!\n";
	  Restro::post=50;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}



void cake()
{cout<<"Enter 1.Chocolate\n2.Red Velvet\n3.Black Forest\n4.Choco Lava\n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.40 only\n";
	  cout<<"Your Yummy Chocolate Cake is ready!!!!\n";
	  Restro::post=40;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.35 only\n";
	  cout<<"Your Yummy Red Velvet Cake is ready!!!!\n";
	  post=35;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.50 only\n";
	  cout<<"Your Yummy Black Forest Cake  is ready!!!!\n";
	  post=50;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==4)
	{cout<<"Price:Rs.45 only\n";
	  cout<<"Your Yummy Choco Lava Cake  is ready!!!!\n";
	  post=45;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}

void Bev()
{cout<<"Enter 1.Coffee\n2.Cold Coffee \n3.Green Tea\n4.Black Tea \n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.30 only\n";
	  cout<<"Your Coffee is ready!!!!\n";
	  post=30;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.40 only\n";
	  cout<<"Your Cold Coffee is ready!!!!\n";
	  post=40;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.25 only\n";
	  cout<<"Your Green Tea is ready!!!!\n";
	  post=25;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==4)
	{cout<<"Price:Rs.20 only\n";
	  cout<<"Your Black Tea is ready!!!!\n";
	  post=20;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}


void SuperSunday()
{cout<<"Enter 1.Marshmellow\n2.Marshmallow with Hot Chocolate\n3.Sizzling\n4.Sizziling Brownie\n5.Hot Choco Bread \n\n";
cout<<"Enter choice";
cin>>n;
	if(n==1)
	{ cout<<"Price:Rs.90 only\n";
	  cout<<"Your Marshmallow is ready!!!!\n";
	  post=90;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else if(n==2)
	{cout<<"Price:Rs.150 only\n";
	  cout<<"Your Marshmallow with Hot Chocolate is ready!!!!\n";
	  post=150;
	  Restro::pre=Restro::pre+Restro::post;
	}
	else if(n==3)
	{cout<<"Price:Rs.120 only\n";
	  cout<<"Your Sizziling is ready!!!!\n";
	post=120;
	  Restro::pre=Restro::pre+Restro::post;
	}
		else if(n==4)
	{cout<<"Price:Rs.160 only\n";
	  cout<<"Your Sizziling Brownie is ready!!!!\n";
	post=160;
	  Restro::pre=Restro::pre+Restro::post;
	}
		else if(n==5)
	{cout<<"Price:Rs.60 only\n";
	  cout<<"Your Hot Choco Bread is ready!!!!\n";
	post=60;
	  Restro::pre=Restro::pre+Restro::post;
	}
	
	else 
	{ cout<<"Sorry no other choice available....\n";
	}
}

 
};
void bill()
{ cout<<"\nYour Total bill:"<<dessert::pre;
}

void snackss()
{ snacks s;
int ch1;
cout<<":\n1.Samosa\n2.Sandwich\n3.Noodles\n4.FrenchFries\n5.Dosa\n6.Bill\n7.exit\n";

do
{ 
cout<<"\nEnter menu choice:";
cin>>ch1;
snacks s1(ch1);

switch(s.ch)
{ 
case 1:
	s.Samosa();
	break;
	
case 2:
	s.Sandwich();
	break;	
	
case 3:
	s.Noodles();
	break;
	
case 4:
    s.FrenchFries();
	break;

case 5:
	s.Dosa();
	break;
	
case 6:
 bill();
 break;
 	
case 7:exit(0);
	break;
	
default:
		cout<<"\nSorry, Inavailable or re-enter choice\n";
		
}
}while(s.ch!=7);
}


void desserts()
{
dessert d;

cout<<":\n1.GulabJamun\n2.Icecream\n3.Cake\n4.Beverage\n5.SuperSunday\n6.Bill\n7.exit\n";
int ch1;
do
{
cout<<"\nEnter menu choice:";
cin>>ch1;
dessert d1(ch1);

switch(d.ch)
{ 
case 1:
	d.GulabJamun();
	break;
	
case 2:
	d.Icecream();
	break;	
	
case 3:
	d.cake();
	break;
	
case 4:
    d.Bev();
	break;

case 5:
	d.SuperSunday();
	break;
	
case 6:
 bill();
 break;
 	
case 7:exit(0);
	break;
	
default:
cout<<"\nSorry, Inavailable or re-enter choice\n";
		
}
}while(d.ch!=7);
}



int main()
{ 
Restro r;
int ch1;
snacks s1;
dessert d;

r.display();
 
cout<<"Main Menu:\n1)Snacks\n2)Desserts\n3)Exit\n";
do
{
cout<<"Enter Choice:";
cin>>ch1;
switch(ch1)
{
case 1:snackss();
break;

case 2:desserts();
break;

case 3:exit(0);

default:
	cout<<"Invalid choice...Please re-enter your choice..";
}
}while(ch1!=3);

	
}





