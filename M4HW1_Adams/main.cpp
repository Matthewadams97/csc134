#include <iostream>
#include <Sstream>
#include <stdlib.h>

using namespace std;

void changeIsGood(int myParam){
myParam += 10;
cout << "Inside the function" << endl;
cout << myParam << endl;
}
void changesAreGood(int *myparm){
(*myparm) += 10;
cout << "Inside the function: " << endl;
cout << (*myparm) << endl;
}
void paraniod(string *realmessage){
(*realmessage)[6] = 'i' ;
realmessage->replace (9, 1, "");
realmessage->insert (18, "ad");
realmessage->replace(15,2,"in");
realmessage->replace(23,7,"!");
realmessage->replace(4,3, "ali");
}

string *getSecretCode(){
string *code = new string;
code->append ("CR");
int randomNumber = rand();
ostringstream converter;
converter << randomNumber;
code->append(converter.str());
code->append("NQ");
}

string *getNotSoSecretCode(){
string *code = new string("ABCDEF");
return code;
}

void messMeUp(int myParm){
myParm = myParm * 2 + 10;
}

string paraniodTwo(const string *realmessage){
string newString = *realmessage;
newString[6] = 'i' ;
newString.replace (9, 1, "");
newString.insert (18, "ad");
newString.replace(15,2,"in");
newString.replace(23,7,"!");
newString.replace(4,3, "ali");
return newString;
}

int main()
{
    cout << "Listing 7-7:" << endl;
    int *ptr = new int(10);
    cout << *ptr << endl;
    cout << "Listing 7-8:" << endl;
    int *ptrTwo = new int(10);
    cout << *ptrTwo << endl;
    cout << "Listing 7-9:" << endl;
    string *password = new string;
    *password = "The egg salad is not fresh";
    cout << *password << endl;
    cout << "listing 7-10:" << endl;
    string *phrase = new string ("All presidents are cool!!!");
    cout << *phrase << endl;
    (*phrase)[20] = 'r';
    phrase->replace(22,4, "oked");
    cout << *phrase << endl;
    delete phrase;
    cout << "Listing 7-11" << endl;
    int myNumber = 30;
    cout << "before the function" << endl << myNumber << endl;
    changeIsGood(myNumber);
    cout << "After the function" << endl;
    cout << myNumber << endl;
    cout << "Listing 7-12" << endl;
    int myNumberTwo = 30;
    cout << "Before the function " << endl;
    cout << myNumberTwo << endl;
    changesAreGood(&myNumberTwo);
    cout << "After the function: " << endl;
    cout << myNumberTwo << endl;
    cout << "Listing 7-13:" << endl;
    string message = "The friends are having dinner." ;
    cout << message << endl;
    paraniod(&message);
    cout << message << endl;
    cout << "Listing 7-14" << endl;
    string *newcode;
    int index;
    for(index = 0; index < 10; index++){
        newcode = getSecretCode();
        cout << *newcode << endl;
    }
    cout << "Listing 7-15" << endl;
    string newCodeTwo;
    int indexTwo;
    for (indexTwo = 0; indexTwo < 10; indexTwo ++){
        newCodeTwo = *getNotSoSecretCode();
        cout << newCodeTwo << endl;
    }
    cout << "Listing 7-16" << endl;
    messMeUp(myNumber);
    cout << myNumber << endl;
    cout << "Listing 7-17" << endl;
    string messageTwo = "The friends are having dinner." ;
    cout << messageTwo << endl;
    string newMessage = paraniodTwo(&messageTwo);
    cout << newMessage << endl;


    return 0;
}
