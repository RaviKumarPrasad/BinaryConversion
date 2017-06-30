
#include<iostream>
#include<cmath> //math.h
#include<ctime>

class FindOnes
{
	private :
		unsigned int num;
		clock_t end;
     		double cpu_time_used;
	public :
		FindOnes()
		{
			std::cout<<"Enter a number :> ";
			std::cin>>num;
		}
		void checkOnes(clock_t &);
};
void FindOnes::checkOnes(clock_t & start)
{
	unsigned short count=0;
	unsigned int terms=num;
	for(register unsigned int i=0; i<=log2(terms); i++)
	{
		if(num&1) count++;
		num>>=1;
	}
	std::cout<<"Number of ones = "<<count;
     	end = clock();
     	cpu_time_used =((double)(end-start))/CLOCKS_PER_SEC;
	std::cout<<std::endl<<"Execution Time = "<<cpu_time_used<<" sec..."<<std::endl;
}
int main()
{
     	clock_t start;
     	start = clock();
     	FindOnes f;
     	f.checkOnes(start);
}



#include<iostream>
#include<cmath> //math.h
#include<ctime>

class FindOnes
{
	private :
		unsigned int num;
		clock_t end;
     		double cpu_time_used;
	public :
		FindOnes()
		{
			std::cout<<"Enter a number :> ";
			std::cin>>num;
		}
		void checkOnes(clock_t &);
};
void FindOnes::checkOnes(clock_t & start)
{
	unsigned short count=0;
	unsigned int terms=num;
	for(register unsigned int i=0; i<=log2(terms); i++)
	{
		if(num&1) count++;
		num>>=1;
	}
	std::cout<<"Number of ones = "<<count;
     	end = clock();
     	cpu_time_used =((double)(end-start))/CLOCKS_PER_SEC;
	std::cout<<std::endl<<"Execution Time = "<<cpu_time_used<<" sec..."<<std::endl;
}
int main()
{
     	clock_t start;
     	start = clock();
     	FindOnes f;
     	f.checkOnes(start);
}


