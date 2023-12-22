#include<iostream>
using namespace std;
class Cricketer
{
	public :
			char cname[30];
			int tot_match;
			void cricketer_name()
			{
				cout<<"\n\n\t Cricketer Name : ";
				cin>>cname;
				cout<<"\n\n\t Total Matches : ";
				cin>>tot_match;
			}	
};
class Batsman :public Cricketer
{
	public:
			int tot_runs;
			int avg_runs;			
			void Calculate()
			{
				cricketer_name();
				cout<<"\n\n\t Total runs : ";
				cin>>tot_runs;
				avg_runs=tot_runs/tot_match;
				cout<<"\n\n\t Cricketer : "<<cname;
				cout<<"\n\n\t Total Matches : "<<tot_match;
				cout<<"\n\n\t Total Runs : "<<tot_runs;
				cout<<"\n\n\t Average Run : "<<avg_runs;
				if(avg_runs>50000)
					cout<<"\n\n\t Best Performance ....";
				else if(avg_runs>30000)
					cout<<"\n\n\t Good Performance ....";
				if(avg_runs>20000)
					cout<<"\n\n\t Average Performance ....";
				else
				    cout<<"\n\n\t Need to improve ...."; 
			}
};
int main()
{
	Batsman B;
	B.Calculate();
	return 0;
}
