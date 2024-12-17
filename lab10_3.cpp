#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include <iomanip>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("score.txt");
	string text;
	double sum ,sum_2 , i = 0;
	while(getline(source,text))
	{
	    sum += stod(text) ;
	    sum_2 += pow(stod(text),2) ;
	    i++ ;
	    
	}
	double mean = 1/i*sum;
	double Standard = sqrt(((1/i)*sum_2)-pow(mean,2));
    cout << "Number of data = " << i << "\n" ;
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = "<< Standard;
    source.close();
}
