#include <iostream>

using namespace std;

int main()
{
   cout << "Ifelse 4-1 " << endl;
    int i;
    cout << "type any number: " << endl;
    cin >> i;
    if (i > 10){
        cout << " Its greater than 10." << endl;
    }
    else
    {
        cout << " It is not greater than 10." << endl;
    }

    cout << " Ifelse2 4-2" << endl;
    cout << "type any number again:" << endl;
    int iI ;
    cin >> iI;
    if (iI > 10)
    {
        cout << "its greater than 10." << endl;
    }
    else if (iI == 10)
    {
        cout << "its equal to 10." << endl;
    }
    else
    {
        cout << "Its less than 10." << endl;
    }
    cout << "ifelse3 listing 4-3" << endl;
    int iK;
    cout << " type any number:" << endl;
    cin >> iK;
    if (iK > 100)
{
    cout << " its is greater than 100." << endl;
}
    else if (iK > 10)
    {
        cout << "It is greater than 10" << endl;
    }
    else
    {
        cout << "it is neither greater than 10 or 100" << endl;
    }

    cout << "Forloop listing 4-4" << endl;
    int x = 0;
    int t;
    for (t = 1; t <= 100; t++)
    {
        x += 1;
    }
    cout << x << endl;

    cout << "ForCountdown listing 4-5" << endl;
    int tT;
    for (tT=10; tT>=5; tT--)
    {
        cout << tT << endl;
    }

    cout << "ForLoop2 listing 4-6" << endl;
    double y = 0.0;
    double l;
    for (l = 0.0; l <= 100; l+=0.1)
    {
        y += l;
    }
    cout << y << endl;

    cout << "WhileLoop listing 4-7" << endl;
    int r = 0;
    while (r < 10)
    {
        cout << r << endl;
        r++;
    }
    cout << "All finished" << endl;

    cout << "DoWhileLoop listing 4-8" << endl;
    int j = 0;
    do
    {
        cout << j << endl;
        j++;
    }
    while (j <= 10 );
    cout << "All finished" << endl;

    return 0;
}
