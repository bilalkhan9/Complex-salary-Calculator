#include<iostream>
using namespace std;

const int m=50;

class emp
{
   public :
   		  int empno;
			char empname[30];
			
			void set()
			{
			  cout<<"\n Enter Employee No : ";
			  cin>>empno;
			  cout<<"\n Enter Employee Name : ";
			  cin>>empname; 	 
	        } 	  
};

class fulltime : public emp
{
 public :
 		float daily_rate;
		 float days;
		 float salary;
		 
		 void setdata()
		 {
		   cout<<"\n Enter Daily Rate ";
		   cin>>daily_rate;
		   cout<<"\n Enter No days";
		   cin>>days; 	  
	     } 	  
	     
	     void cal()
	     {
		   salary = daily_rate * days;
		   cout<<"\n Salary : "<<salary; 	  
	     }
	     void show()
	     {
		   cout<<"\n------------------------ ";
		   cout<<"\n Employee Number      :     "<<empno;
		   cout<<"\n Employee Name      :     "<<empname;
		   cout<<"\n Salary      :     "<<salary;
		   cout<<"\n Status      : Fulltime";
		   cout<<"\n------------------------ \n";
		   	  
	     }
	     
};

class PartTime : public emp
{
  public :
  		 int hourly_rate;
         int working_hours;
         int salary1;
         
  public :
  		 void set1()
  		 {
		   cout<<"\n Enter Hourly Rate  : ";
		   cin>>hourly_rate;
		   cout<<"\n Enter Working Hours : ";
		   cin>>working_hours; 	  		
		 }
		 
		 void cal1()
		 {
		  salary1 = hourly_rate * working_hours;
		  cout<<"\n Salary "<<salary1<<endl; 	  
		 }
		 
		 void show1()
		 {
		   cout<<"\n------------------------\n";
		   cout<<"\n Employee No   :   "<<empno;
		   cout<<"\n Employee Name  :  "<<empname;
		   cout<<"\n Salary   :  "<<salary1;
		   cout<<"\n Status    :  PartTime ";
		   cout<<"\n------------------------\n";  	  
		 }
  		  	  
};

int main()
{
  int var=0;
  int var1=0;
  fulltime f1[5];
  PartTime p1[5];
  
  int x , i;
  
  do
  {
    cout<<"\n";
	cout<<"\n 1.Enter Record";
	cout<<"\n 2.Display Record";
	cout<<"\n 3.Search Record";
	cout<<"\n 4.Quite";
	cout<<"\n\n Enter Your Choice : ";
	cin>>x;
	
	switch(x)
	{
	  case 1:
	  	   int y;
	  	   cout<<"\n 1.FullTime Employee\n";
		   cout<<"\n 2.PartTime Employee\n";
		   cout<<"\n Enter : ";
		   cin>>y;
		   
		   switch(y)
		   {
		     case 1:
			 	  f1[var].set();
				  f1[var].setdata();
				  f1[var].cal();
				  var++;
				  break;
	  		case 2:
			 	  p1[var1].set();
				  p1[var1].set1();
				  p1[var1].cal1();
				  var1++;
				  break;
		   }
		   break;
		   
		   case 2:
		   		for(i=0;i<var;i++)
				   {
				     f1[i].show();				  
				   }
		        for(i=0;i<var;i++)
				   {
				     p1[i].show1();				  
				   }
				   break;
				   
		 case 3:
		 	  int a;
			   cout<<"Enter Employee No : ";
			   cin>>a;
			   for(i=0;i<var;i++)
				   {
				     if(f1[i].empno==a)
					 {
					   f1[i].show(); 				   
					 }
		           } 
					 for(int i=0;i<var1;i++)
					  {
					 if(p1[i].empno==a)
					 {
					   p1[i].show1();
					 }
					  }				  
				   
			    	
    } 	  
  } while(x!=4);
  return 0;
	 system ("pause"); 
}
