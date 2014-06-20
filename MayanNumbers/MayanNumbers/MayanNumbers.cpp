#include <stdafx.h>
#include <iostream>


using namespace std;

int number;
int one;
int five;
int twenty;
int fourhun;
int eighttho;
float twentyf;
float fourhunf;
float eightthof;
///*int abovetwentyfive*/;
//int abovetwentyone;

int main()
{
     cout<<"WELCOME TO THE MAYAN NUMBER TRANSLATOR!"<<endl;
	 cout<<"THIS APPLICATION CONVERTS STANDARD NUMBERS OF OUR BASE 10 SYSTEM" <<endl<<"INTO MAYAN CHARACTERS!"<<endl;
      




    cout<<endl;


	while(true)
	{
		cout<<endl;
		




		cout<<"Input Number(1-159999): ";
		cin>>number;
        eightthof = number / 8000;
        eighttho = eightthof;
		fourhunf = (number - eighttho*8000)/400;
		fourhun = fourhunf;
		twentyf = (number - (eighttho*8000) - (fourhun * 400))/20;
		twenty = twentyf;
		five =(number - (eighttho*8000) - (fourhun * 400)-(twenty*20))/5;
		one = number - (eighttho*8000) - (fourhun * 400)-(twenty*20)- (five*5);

	    if(eighttho > 0)
		{
			int dotbig;
			int linebig;
			linebig = eighttho/5;
			dotbig = eighttho - (linebig*5);
			for(int i = 0; i< dotbig; i++)
			{
				cout<<".";
			}
			cout<<endl;
            for(int w = 0; w < linebig; w++)
			{
				cout<<"----"<<endl;
			}
			

			}
			
			
		
       
	
		
		if(fourhun > 0)
		{
			int dotmed;
			int linemed;
			linemed = fourhun/5;
			dotmed = fourhun - (linemed*5);
			for(int i = 0; i< dotmed; i++)
			{
				cout<<".";
			}
			cout<<endl;
            for(int w = 0; w < linemed; w++)
			{
				cout<<"----"<<endl;
			}
			
		}
		if(fourhun == 0 && eighttho >= 1)
		{
			cout<<"{O}"<<endl;
		}
		if(twenty > 0)
		{
			int dotsmall;
			int linesmall;
			linesmall = twenty/5;
			dotsmall = twenty - (linesmall*5);
			for(int i = 0; i< dotsmall; i++)
			{
				cout<<".";
			}
			cout<<endl;
            for(int w = 0; w < linesmall; w++)
			{
				cout<<"----"<<endl;
			}
			
			
		}
		if(twenty == 0 && fourhun >= 1)
		{
			cout<<"{O}"<<endl;
		}
		else if(twenty == 0 && eighttho >= 1)
		{
			cout<<"{O}"<<endl;
		}
	
		 for(int w = 0; w < one; w++)
			{
				cout<<".";
			}
		 cout<<endl;
		  for(int w = 0; w < five; w++)
			{
				cout<<"----"<<endl;
			} 
		  if(one == 0 && five == 0)
		  {
			  cout<<"{O}"<<endl;
		  }
		  cout<<endl;

}

}