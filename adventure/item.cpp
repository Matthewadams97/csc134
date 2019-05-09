#include "item.h"
#include <iostream>

using namespace std;

Item::Item()
{
    _name = "Generic Item";
    _description = "A featureless blob";
    _locationId = 0;
}

Item::Item(string name, string description, int locationId)
{
    _name = name;
    _description = description;
    _locationId = locationId;
}

string Item::getName()
{
    return _name;
}

string Item::getDescription()
{
    return _description;
}

int Item::getLocationId()
{
    return _locationId;
}

void Item::setLocationId(int locId)
{
    _locationId = locId;
}

void ItemList::printAllItems()
{
    cout << "Printing all items" << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string name = itemIter->getName(); // get the name of this item
        cout << name << endl;
        itemIter++; // go to next item
    }


}
void ItemList::printItemsInLocation(int currentLocationId)
{
    cout << "Items here:" << endl;

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        string itemName = itemIter->getName(); // name of item
        int itemLocationId = itemIter->getLocationId(); // loc of item

        if (itemLocationId == currentLocationId) {
            cout << itemName << endl;
        }
        itemIter++; // go to next item
    }

}


void ItemList::add(Item item)
{
    _items.push_back(item);
}

/*

bool ItemList::isItemHere(string itemName, int locationId)
{
    // This method looks up an item by name
    // returns true if it is in this locationId, else false

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemName == itemIter->getName()) {
            // an item of that name exists
            // is it here?
            if (locationId == itemIter->getLocationId() )
            {
                return true; // right name and right location
            } // item wasn't in this room
        } // item didn't have that name

        itemIter++; // go to next item
    }
    return false; // we didn't find it
}

string ItemList::getItemDescription(string itemName)
{
    // input: the name of an item
    // output: its description
    string description = "NOT FOUND";

    vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemIter->getName() == itemName)
        {
            description = itemIter->getDescription();
        }
        itemIter++; // go to next item
    }

    return description;
}

void ItemList::updateLocation(string itemName, int locId) {
        vector<Item>::iterator itemIter = _items.begin();

    while (itemIter != _items.end())
    {
        if (itemIter->getName() == itemName)
        {
            itemIter->setLocationId(locId);
        }
        itemIter++; // go to next item
    }
}

*/


Item* ItemList::getItemByName(string itemName) {
    // if the item exists, return a pointer to it
    // if not, return zero (null pointer)
    // this is a utility function that makes
    // any other itemList functions modifying items
    // much simpler
    Item* pItem = 0;

    vector<Item>::iterator iter = _items.begin();

    while (iter != _items.end()) {
        if (iter->getName() == itemName) {
            // convert the iterator to a regular item pointer
            pItem = &*iter; // yes, this syntax is weird.
        }
        iter++; // go to next item
    }
    return pItem;
}

// now that we have getItemByName, this is much shorter!
void ItemList::updateLocation(string itemName, int locId) {

    Item* pItem = getItemByName(itemName);

    if (pItem != 0)
    {
        pItem->setLocationId(locId);
    }
}

string ItemList::getItemDescription(string itemName)
{
    // input: the name of an item
    // output: its description
    string description = "NOT FOUND";

    Item* pItem = getItemByName(itemName);

    if (pItem != 0)
    {
        description = pItem->getDescription();
    }
    return description;
}

bool ItemList::isItemHere(string itemName, int locationId)
{
    // This method looks up an item by name
    // returns true if it is in this locationId, else false

    Item* pItem = getItemByName(itemName);

    if (pItem != 0) // does this item exist?
    {
        if (locationId == pItem->getLocationId() )
            {
                return true; // right name and right location
            } // item wasn't in this room
    }
    return false; // we didn't find it
}


