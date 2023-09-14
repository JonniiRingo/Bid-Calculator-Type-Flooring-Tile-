#include <iostream>
#include <iomanip>
using namespace std; 

int main()

{

// Fixed variables
double wage =30;  // dolars an hour
double  avg_per_ft = 10; // dollars per square foot old number 10.45
double sqft_perday = 150; // square foot a day within 8 hour shift by one worker old number 150
double d_per_gallon = 5.45; // dollars per gallon
double mpg = 15.5; 
double total;   // // bid price grand total estimate.
double profit_margin = 1.20;
 

// Input 
double square_ft;
double distance; // in miles 
int number_wrkrs;

// Output
int num_days;

cout << "How many square feet is the job? :" ; 
cin >> square_ft;

cout << "How many workers assigned to this job? :";
cin >> number_wrkrs;


cout << "How far is the job? :";
cin >> distance;




num_days = square_ft / sqft_perday / number_wrkrs;
cout << "This job will take " << num_days << " days to complete " << endl;


total = (square_ft / sqft_perday * 8 * wage) + (square_ft * avg_per_ft) + (distance / mpg * d_per_gallon * 2) + (num_days * 100);
cout << "The recomended bid price for this job is $" << total * profit_margin << endl;


//cout << "Any additional expences will have to manually added ";




    return 0;
}