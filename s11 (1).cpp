#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
using namespace std;
class board
{
 protected:
 	int bp;
 	public:
 		void getb();
 		int putb();
 		int sb();
 		
};

class lpunest
{
 protected:
 	int ln;
 	public:
 		void getl();
 		int putl();
 		int sl();
 		
};
class jee
{
 protected:
 	int jm;
 	public:
 		void getjm();
 		int putjm();
 		int sjm();
 		
};
class scholarship: public board, public lpunest,public jee
{
	public :
		int scholarship;
		int b,l,j;
		static int s_no;
		char name[50],lname[50];
		public:
			int scholarship1(int);
			int scholarship2(int);
			int scholarship3(int);
			void interface();
			void getdata()
			{
				cout<<"enter first name of the student";
				cin>>name;
				cout<<"enter last name";
				cin>>lname;
				br: cout<<"enter you board percentage";
				cin>>b;
				if(b>100||b<0)
				{
				cout<<"\ninvalid input\n";
			    goto br;
			}
				je: cout<<"enter your jee mains marks";
				cin>>j;
					if(j>360||j<0)
				{
				cout<<"\ninvalid input\n";
			    goto je;
			}
				lp: cout<<"enter your lpu nest marks";
				cin>>l;
					
				if(l>360||l<0)
				{
				cout<<"\ninvalid input\n";
			    goto lp;
			}
				
				
				
				
			}
			void showdata()
			{
				cout<<"\nname of student is:"<<name<<endl;
				cout<<"\n\napplication no. is :"<<++s_no;
				cout<<"\nlpu nest marks is:"<<l;
				cout<<"\nboard percentage is:"<<b;
				cout<<"\njeemains marks is:"<<j;
			}
	void add();
    void delet();
	void edit();
	void view();
	void display();
	void modify(int);
	void scholar();
}s;
void board::getb()
{
	br1: cin>>bp;
				if(bp>100||bp<0)
				{
				cout<<"\ninvalid input\n";
			    goto br1;
			}
	
	
}
int board::putb()
{
	return bp;
}
int board::sb()
{
	if(bp>=90)
	return 1;
	
	else if(bp>=80&&bp<90)
    return 2;
	
	else if(bp>=70&&bp<80)
	return 3;
	else 
	return 4;
}
void lpunest::getl()
{
   lp1:	cin>>ln;
	cin>>ln;
					
				if(ln>360||ln<0)
				{
				cout<<"\ninvalid input\n";
			    goto lp1;
}
}
int lpunest::putl()
{
	return ln;
}
int lpunest::sl()
{
	if(ln>=300)
	return 1;
	
	else if(ln>=200&&ln<300)
    return 2;
	
	else if(ln>=100&&ln<200)
	return 3;
	else 
	return 4;
}
void jee::getjm()
{
	
	jm1: cin>>jm;
					
				if(jm>360||jm<0)
				{
				cout<<"\ninvalid input\n";
			    goto jm1;
}
}
int jee::putjm()
{
	return jm;
}
int jee::sjm()
{
	if(jm>=300)
	return 1;
	
	else if(jm>=200&&jm<300)
    return 2;
	
	else if(jm>=100&&jm<200)
	return 3;
	else 
	return 4;
	
}
int scholarship::scholarship1(int x)
{
	if(x==1)
	scholarship=50000;
	else if(x==2)
	scholarship=45000;
	else if(x==3)
	scholarship=40000;
	else
	scholarship=0;
	return scholarship;
	
	
}
int scholarship::scholarship2(int x)
{
	if(x==1)
	scholarship=45000;
	else if(x==2)
	scholarship=40000;
	else if(x==3)
	scholarship=35000;
	else
	scholarship=0;
	return scholarship;
	
	
}
int scholarship::scholarship3(int x)
{
	if(x==1)
	scholarship=40000;
	else if(x==2)
	scholarship=35000;
	else if(x==3)
	scholarship=30000;
	else
	scholarship=0;
	return scholarship;
	
	
}
int scholarship::s_no=20180000;
void scholarship::interface()
{
	
	int press;
	cout<<"\t\t\t\t*______________________________________________*\n";
   		cout<<"\t\t\t\t|     WELCOME TO  LPU SCHOLARSHIP PROGRAM      |\n";
   		cout<<"\t\t\t\t|______________________________________________|\n\n\n";
   		cout<<"\nLovely Professional University conducts its own test LPUNEST (National Entrance & Scholarship Test).\n";
		cout<<"\nThis test forms the basis of eligibility for some of the programmes and scholarship for most of the programmes.\n";
		cout<<"\nThe amount of scholarship depends on the fee of the programme, phase of admission\n and performance of the student in LPUNEST.\n";
		cout<<"\nPhase of admission:\n";
		cout<<"\n\n_____________________________";
		  cout<<"\n|PHASE 1: 10 may to 20 june   |";
		  cout<<"\n|PHASE 2: 20 june to 20 july  |";
		  cout<<"\n|PHASE 3: 20 july to 30 august|";
		  cout<<"\n______________________________";
		  cout<<"\n\n\t\t\t\t\t*press 1 to proceed further*";
		  cin>>press;
		  if(press==1)
		  system("cls");
		
		  int ch;

 	   cout<<"\t\t\t\t\t1. Add information"<<endl<<endl;
 	  cout<<"\t\t\t\t\t2. Remove information"<<endl<<endl;
 	  cout<<"\t\t\t\t\t3. View information"<<endl<<endl;
 	  cout<<"\t\t\t\t\t4. Display information of all student"<<endl<<endl;
 	  cout<<"\t\t\t\t\t5. calculate scholarship"<<endl<<endl;
 	  
 	  cout<<"\t\t\t\t**Please Enter Required option**"<<endl;
 	  cin>>ch;
 	  switch(ch)
 	  	{
 	  		
	          case 1: add();
		             break;
		      case 2: 
					 delet();
		             break;
		      case 3: 
					 view();
		             break;
		     case 4: 
		             display();
		             break;
 	  	
			case 5:
				  scholar();
				  break;
			
 	  		
 	  		default: cout<<"OOOPS!! INVALID OPTION"<<endl; 
 	  		getch();
		   }
	
	 	
}
void scholarship::add()
     {    adr:
     	char ch,y,n;
     	system("cls");
     	fstream fout;
     	fout.open("scholarship.txt",ios::app);
     	cout<<"ENTER STUDENT DETAILS"<<endl;
     	getdata();
     	fout.write((char*)&s,sizeof(s));
         cout<<endl<<"**INFORMATION ADDED SUCCESSFULLY**!"<<endl;
         fout.close();
         cout<<"Do you want to add more data of student"<<endl;
         cout<<"Press y for yes and n for no (y/n)";
         cin>>ch;
         if(ch=='y')
         {
	     goto adr;
  	    }
         else
         if(ch=='n')
         {system("cls");
		  interface();}
         else
         {cout<<"Invalid Input";
		 }
	}
	void scholarship::scholar()
	{
		int phase,x,sc,ss;
		
		
	   cout<<"SCHOLARSHIP IS AVAILABLE ON THE BASIS OF:\n";
	   cout<<"\n1.BOARD PERCENTAGE";
	   cout<<"\n2.LPUNEST MARKS";
	   cout<<"\n3.JEE MAINS MARKS";
	   r:
	   cout<<"\nENTER YOUR CHOICE";
	   cin>>x;
	   
	   if(x==1)
	   {
	   	cout<<"enter your percentage";
	   	s.getb();
	   	
	   	sc=s.sb();
	   	cout<<"enter your phase";
	   	cin>>phase;
	   	if(phase>3)
	   	cout<<"\ninvalid phase\n";
	   	
	   	if(phase==1)
	   	ss=s.scholarship1(sc);
	   	else if(phase==2)
	   	ss=s.scholarship2(sc);
	   	else if(phase==3)
	   	ss=s.scholarship3(sc);
	   	else
	   	ss=0;
	   	cout<<"your scholarship will be"<<ss;
	   }
	   	else if(x==2)
	   {
	   	cout<<"enter your jee mains marks";
	   	s.getjm();
	   	
	   	sc=s.sjm();
	   	cout<<"enter your phase";
	   
	   	cin>>phase;
	   		if(phase>3)
	   	cout<<"\ninvalid phase\n";
	   	if(phase==1)
	   	ss=s.scholarship1(sc);
	   	else if(phase==2)
	   	ss=s.scholarship2(sc);
	   	else if(phase==3)
	   	ss=s.scholarship3(sc);
	   	else
	   	ss=0;
	   	cout<<"your scholarship will be"<<ss;
	   }
	   else if(x==3)
	   {
	   	cout<<"enter your lpu nest marks";
	   	s.getl();
	   	
	   	sc=s.sl();
	   	cout<<"\nenter your phase\n";
	   	cin>>phase;
	   	if(phase>3)
	   	cout<<"invalid phase";
	   	if(phase==1)
	   	ss=s.scholarship1(sc);
	   	else if(phase==2)
	   	ss=s.scholarship2(sc);
	   	else if(phase==3)
	   	ss=s.scholarship3(sc);
	   	else
	   	ss=0;
	   	cout<<"your scholarship will be"<<ss;
	   }
	   	else
	   	{
	   	cout<<"INVALID INPUT";
	   	goto r;
	   }
	   	
	   
	}
	void scholarship::view()
	{
		char ch;
		system("cls");
		char namex[50];
	  fstream fin("scholarship.txt",ios::in);
	  cout<<"Enter the name of the student whose detail you want to see : ";
	  cin>>namex;
	  fin.read((char*)&s,sizeof(s));
	  while(fin)
	  {
	  	if(strcmp(name,namex)==0)
	  	showdata();
	  	fin.read((char*)&s,sizeof(s));
	  	cout<<endl;
	  	
	  }
	  fin.close();
	  cout<<"Press h for back to main page : "<<endl;
	  cin>>ch;
	  if(ch=='h')
	  {
	  	interface();
	  }
	}
	 void scholarship::display()
	{
		system("cls");
		fstream in;
		in.open("scholarship.txt",ios::in);
		in.read((char*)&s,sizeof(s));
		while(in)
		{
			showdata();
			in.read((char*)&s,sizeof(s));
			cout<<endl;
			cout<<"===========================\n";
			cout<<endl;
		}
		
		in.close();
	}
	void scholarship::delet()
	{
		char ch;
		system("cls");
		char st[50];
		cout<<"Enter the name of student whose data is to be deleted : ";
		cin>>st;
		fstream in,out;
		in.open("scholarship.txt",ios::in);
		out.open("temp.txt",ios::app);
		while(in)
		{
			if(strcmp(name,st)!=0)
			{
				out.write((char*)&s,sizeof(s));
				in.read((char*)&s,sizeof(s));
				continue;
			}
		 in.read((char*)&s,sizeof(s));
		}
		in.close();
		out.close();
		remove("scholarship.txt");
		rename("temp.txt","scholarship.txt");
		cout<<"Data deleted successfully !!"<<endl;
		cout<<"press h for back to muenulist : "<<endl;
		cin>>ch;
		if(ch=='h')
		{
			interface();
		}
		
	} 
	

int main()
{
	system("color C");
	s.interface();
}


