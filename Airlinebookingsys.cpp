#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class airline
{
	public:
		int nos_b,nos_a,ch,a1,a2,a3,a4,a5,count=0;
		char dep[100],arr[100],rt[10],rt1[10],dates[100],ans[10],ans1[10];
	void book_a_flight()
	{
		
		cout<<"\nWelcome to Indigo Airlines.\nDo you wish to travel? If so please enter the city you wish to Visit along with the dates you wish to travel.";
		cout<<"\nand continue to book further.";
		cout<<"\nEnter the city: ";
		cin>>arr;
		cout<<"\nEnter the dates: ";cin>>dates;
		fflush(stdin);
		cout<<"\nDo you wish for a round trip?(yes/Yes) or (no/No): ";
		cin>>rt;
		if(strcmpi(rt,"yes")==0)//'i' here ignores the capital or small.
	
		{
			cout<<"Alright. Do you wish to check our offers on round trips?";
			cin>>rt1;
			if(strcmpi(rt1,"yes")==0)
			{
				cout<<"\nChoose any of the offer from below: ";
				cout<<"\n1. Newbie 10% off";
				cout<<"\n2. Indigo roundtrip special 101";
				cout<<"\n3. Arrivals benefit";
				cout<<"\nEnter your choice(1,2 or 3): ";
				cin>>ch;
				switch(ch)
				{
					case 1: 
					cout<<"\n1. 'Newbie 10% off' offer unlocked.";
					break;
					case 2: 
					cout<<"\n2. 'Indigo roundtrip special 101' offer unlocked.";
					break;
					case 3: 
					cout<<"\n3. 'Arrivals benefit' offer unocked ";
					break;
					default:
					break;
				}
			}
			else
				{
					cout<<"\nContinue booking. ";
					cout<<"\nThe normal fare is: 1800";
					cout<<"\nThe kid fare is 1100";
				}
		}
		else if(strcmpi(rt1,"no")==0)
		{
			cout<<"\nDo you wish to continue booking?(Yes/No): ";cin>>ans;
			if(strcmpi(ans,"yes")==0)
			{
				cout<<"\nContinue booking. ";
					cout<<"\nThe normal fare is: 1800";
					cout<<"\nThe kid fare is 1100";
			}
			else if(strcmpi(ans,"no")==0)
			{
				cout<<"\nCheck out deals more suited to you on our official website www.indigo.in"; 
			}
			else
			{
				cout<<"\nExit.";
			}
		}
		else
		{
			cout<<"\nExit.";
		}
		
		
		cout<<"\n\nPLease enter the city you wish to depart from.";
		cout<<"\n\nEnter the city: ";
		cin>>dep;
		cout<<"\n\nPlease select number of seats you wish to book.";
		cout<<"\n\nEnter the number of seats(Please remember that you can only book upto 5 tickets at a time.): ";
		cin>>nos_b;
		cout<<"\n\nIf the ages of passengers are below 12,they will get an Indigo kids fare special offer.";
		cout<<"\n\nEnter the ages of the travellers: ";
		cin>>a1,a2,a3,a4,a5;
		
		
		if(a1<=12)
		{
			count++;
		}
		if(a2<=12)
		{
			count++;
		}
		if(a3<=12)
		{
			count++;
		}
		if(a4<=12)
		{
			count++;
		}
		if(a5<=12)
		{
			count++;
		}
		
		if(count>0)
		{
			cout<<"\nThe kids fare offer will apply on ages below 12.";
			cout<<"\nIn your case  "<<count<<" passengers will get the offer.";
		}
		fflush(stdin);
		cout<<"\nDo you wish to confirm the booking?(Please enter yes/no): ";
		cin>>ans1;
		
		if(strcmpi(ans1,"yes")==0)
		{
			cout<<"\nYour booking is confirmed. Pls check the message on the registered mobile number to recieve the confirmation message.";
			cout<<"\nIf you haven't recieved any confirmation messages, pls contact Indigo airlines website, or the tollfree helpline number of Indigo airlines.";
			cout<<"\nFor further assistance. Thank you for choosing Indigo. Hope you have a good day_/\_ .";
		}
		else if(strcmpi(ans1,"no")==0)
		{
			cout<<"\nOkay. Hope you have a good day.";
		}
		else
		{
			cout<<"\nExit";
		}
		
	}
	void displaydetails()
	{
		cout<<"\n\nTravelling from: "<<dep;
		cout<<"\n\nTravelling to:   "<<arr;
		cout<<"\n\nNumber of seats requested: "<<nos_b;
		cout<<"\n\nThe offer on the ticket: "<<ch;
	}
};
fstream f;
int main()
{
	airline a;
	a.book_a_flight();
	a.displaydetails();
	return 0;

}