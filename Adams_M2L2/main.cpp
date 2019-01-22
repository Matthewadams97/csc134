// CSC 134
//M2Lab1
//Matthew Adams
//01/22/2019
#include <iostream>

using namespace std;

int main()
{

    string movieName ;
    movieName = "Interstellar" ;
    double rating ;
    rating = 8.6 ;
    int year;
    year = 2014 ;
    char firstLetter ;
    firstLetter = 'I' ;
    cout << "The movie you entered was " << movieName << endl;
    cout << "It was released in " << year << ". It has an IMDM rating of " << rating << endl;
    cout << "I would file " << movieName << " under " << firstLetter << endl;


string nametwo;
cout << "Please enter the Name of the movie" << endl;
cin >> nametwo;
int yeartwo;
cout << "please enter the year of release" << endl ;
cin >> yeartwo;
double ratingtwo ;
cout << "please enter the rating " << endl;
cin >> ratingtwo;
cout << "the movie you entered was " << nametwo << endl;
cout << "It was released in " << yeartwo << endl;
cout << "It has a rating of " << ratingtwo << endl;
return 0;
}
