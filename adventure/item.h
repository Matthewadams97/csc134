#ifndef ITEM_H_INCLUDED
#define ITEM_H_INCLUDED

#include <string>
#include <vector>

using namespace std;


class Item
{
public:
    Item();
    Item(string, string, int); // name, description, locationId

    string getName();
    string getDescription();
    int getLocationId();
    void setLocationId(int);

private:
    string  _name;
    string  _description;
    int     _locationId;

};


class ItemList
{

public:
    void printAllItems();
    void printItemsInLocation(int); // locationId
    void add(Item); // adds item to the list
    bool isItemHere(string, int); // name of item, location id
    string getItemDescription(string);
    void updateLocation(string, int); // name of item, location id
    Item* getItemByName(string);


private:
    vector<Item> _items;

};






#endif // ITEM_H_INCLUDED
