/**********************************************************
*              program that print calender                *
*         it display calender of any year                 *
* 	in this program I set year 2020 as a referance year	  *
**********************************************************/
#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
int main()
{
	int start = 3,col = 3,leap,count = 6;		//here we declear variable that use in program
	cout<<"--------------Display the Calender------------------"<<endl;
	cout<<"enter year greater then 2019 : ";
	int year,month,diff;
	cin>>year;		//take the year from user
	cout<<"enter month in number as 1- junary, 2- feb (enter 1 - 12): ";
	cin>>month;
	if(month<1 || month > 12)
		cout<<"you enter wrong month .";
	cout<<endl<<endl;
	if(year>=2020)
		for(int years = 2020;years<=year;years++)
	{
	/*******************************************************
	*   here month of Junuary will display                 *
	*******************************************************/
	if(year == years && month == 1)   cout<<"--------------Junuary,"<<year<<"-------------------";
	if(year == years&& month == 1)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	for(int tab = 1;tab <= col;tab++)		//start to display Junary
		if(year == years && month == 1)	cout<<"\t";
	for(int date = 1;date<= 31;date++)
	{
		if(year == years && month == 1)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 1) cout<<endl;
			col = 0;
		}
	}
	/*******************************************************
	*   here month of February will display                 *
	*******************************************************/
	if(year == years && month == 1)   cout<<endl<<endl;
	if(year == years && month == 2)   cout<<"--------------February,"<<year<<"-------------------";
	if(year == years && month == 2)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab <= col;tab++)		//start to display February
		if(year == years && month == 2)	cout<<"\t";
		if (years % 4 == 0)
   				{
        			if (years % 100 == 0)
        			{
           			 	if (years % 400 == 0)
                		
							leap = 29;
        				else
                			leap = 28;
					}
        			else
        				leap = 29;
				}
    			else
        			leap = 28;
	for(int date = 1;date<= leap;date++)
	{
		if(year == years && month == 2)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 2) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 2)   cout<<endl<<endl;
	/*******************************************************
	*   here month of March will display                   *
	*******************************************************/
	if(year == years && month == 3)   cout<<"--------------March,"<<year<<"-------------------";
	if(year == years && month == 3)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab <= col;tab++)		
		if(year == years && month == 3) cout<<"\t";
	
	for(int date = 1;date<= 31;date++)		//start to display March
	{
		if(year == years && month == 3)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 3) cout<<endl;
			col = 0;
		}
	}
		if(year == years && month == 3)   cout<<endl<<endl;
	/*******************************************************
	*   here month of April  will display                  *
	*******************************************************/
	if(year == years && month == 4)   cout<<"--------------April,"<<year<<"-------------------";
	if(year == years && month == 4)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab <= col;tab++)		//start to display April
		if(year == years && month == 4) cout<<"\t";
	for(int date = 1;date<= 30;date++)
	{
		if(year == years && month == 4)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 4) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 4)   cout<<endl<<endl;
	/*******************************************************
	*   here month of May will display                     *
	*******************************************************/
	if(year == years && month == 5)   cout<<"--------------May,"<<year<<"-------------------";
	if(year == years && month == 5)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 5) cout<<"\t";
	for(int date = 1;date<= 31;date++)		//start to display May
	{
		if(year == years && month == 5)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 5) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 5)   cout<<endl<<endl;
	/*******************************************************
	*   here month of June will display                    *
	*******************************************************/
	if(year == years && month == 6)   cout<<"--------------June,"<<year<<"-------------------";
	if(year == years && month == 6)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<=col;tab++)
		if(year == years && month == 6) cout<<"\t";
	for(int date = 1;date<= 30;date++)		//start to display June
	{
		if(year == years && month == 6)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 6) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 6)   cout<<endl<<endl;
	/*******************************************************
	*   here month of July  will display                   *
	*******************************************************/
	if(year == years && month == 7)   cout<<"--------------July,"<<year<<"-------------------";
	if(year == years&& month == 7)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years&& month == 7) cout<<"\t";
	for(int date = 1;date<= 31;date++)		//start to display July
	{
		if(year == years&& month == 7)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years&& month == 7) cout<<endl;
			col = 0;
		}
	}
	if(year == years&& month == 7)   cout<<endl<<endl;
	/*******************************************************
	*   here month of August will display                  *
	*******************************************************/
	if(year == years&& month == 8)   cout<<"--------------August,"<<year<<"-------------------";
	if(year == years && month == 8)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 8) cout<<"\t";
	for(int date = 1;date<= 31;date++)		//start to display August
	{
		if(year == years && month == 8)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 8) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 8)   cout<<endl<<endl;
	/*******************************************************
	*   here month of September will display               *
	*******************************************************/
	if(year == years && month == 9)   cout<<"--------------September,"<<year<<"-------------------";
	if(year == years && month == 9)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 9) cout<<"\t";
	for(int date = 1;date<= 30;date++)		//start to display September
	{
		if(year == years && month == 9)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 9)  cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 9)   cout<<endl<<endl;
	/*******************************************************
	*   here month of October will display                 *
	*******************************************************/
	if(year == years && month == 10)   cout<<"--------------October,"<<year<<"-------------------";
	if(year == years && month == 10)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 10) cout<<"\t";
	for(int date = 1;date<= 31;date++)		//start to display October
	{
		if(year == years && month == 10)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 10) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 10)   cout<<endl<<endl;
	/*******************************************************
	*   here month of November will display                *
	*******************************************************/
	if(year == years && month == 11)   cout<<"--------------November,"<<year<<"-------------------";
	if(year == years && month == 11)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 11) cout<<"\t";
	for(int date = 1;date<= 30;date++)		//start to display November
	{
		if(year == years && month == 11)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 11) cout<<endl;
			col = 0;
		}
	}
	if(year == years && month == 11)   cout<<endl<<endl;
	/*******************************************************
	*   here month of december will display                *
	*******************************************************/
	if(year == years && month == 12)   cout<<"--------------December,"<<year<<"-------------------";
	if(year == years && month == 12)   cout<<endl<<"Su\tMo\tTu\tWe\tTh\tFr\tSa"<<endl;
	start = col;
	for(int tab = 1;tab<= col;tab++)
		if(year == years && month == 12) cout<<"\t";
	for(int date = 1;date<= 31;date++)		//start to display December
	{
		if(year == years && month == 12)    cout<<date<<"\t";
		++col;
		if(col%7==0)
		{
			if(year == years && month == 12) cout<<endl;
			col = 0;
		}
	}
	}
	else
		cerr<<"invalid year."<<endl;
	cout<<endl<<"-------------------"<<endl<<"Compossed By Haris"<<endl;
	cout<<"contect: 0304-4195933\t0308-1355815"
		<<endl<<"email: harisbro88@gmail.com\tF2019266084@umt.edu.pk"<<endl;
	cout<<"enter eny ey to exit";
	char ch = getch();
	return 0;
}
