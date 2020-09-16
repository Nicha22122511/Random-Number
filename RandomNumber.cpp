#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int value = 0 ;
	int lucky;
	int count = 1;
	
		while(value<21){
          lucky = 1 + rand()%20 ;
			
		  cout << "Enter luckynumber "<<count<<" (1-20) :" ;
	      cin>> value;
		  //cout << "Luckynumber " <<lucky <<endl;
	      count ++;
		
         if(value!= lucky )
		 {
         cout<<"This is wrong number " <<endl;
		
		 }
		 else
		 {
			cout << " Lucky !!!!!!\nYou got 1,000,000 bath" <<endl;
	     }
      }

     return(0);
	
   }

