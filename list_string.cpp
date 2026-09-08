
/*
    List of strings:
    Store names in a list<string> and print all names using an iterator.

    Find a name:
    Take a name from the user and search for it in a list<string>.
    Print "Found" or "Not Found".

    Delete a name:
    Take a name from the user and delete all occurrences of that name
    from a list<string> using an iterator.

    Count a name:
    Count how many times a particular name appears in a list<string>.

    Move names:
    Store names in a list. Move names starting with 'A' to another list.

    List → Vector:
    Create a list<string> and copy its elements into a vector<string>.

    Remove duplicates:
    Given a list<string>, remove duplicate names without using sort().

    Longest name:
    Find the longest name in a list<string> using an iterator.

    Compare:
    Take two vector<string> objects and check whether they contain
    the same names in the same order.
*/

#include<iostream>
#include<list>
#include<iterator>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int choice;

    string name;
    string find;
    string delete_name;
    string name_appear;

    bool result = false;
    int count = 0;

    // Main list
    list<string> l;

    // Second list for names starting with A
    list<string> l2;

    // Vector
    vector<string> v1;
    vector<string> v2;

    // Iterators
    list<string>::iterator it;
    vector<string>::iterator it1;


    // =========================================================
    // QUESTION 1
    // Store names in list and print them
    // =========================================================

    cout << "Enter the number of persons whose names you want to enter: "
         << endl;

    cin >> choice;
    cin.ignore();

    for(int i = 0; i < choice; i++)
    {
        cout << "Enter the name of person " << i + 1 << ": "
             << endl;

        getline(cin, name);

        // Convert name to uppercase
        for(auto &c : name)
        {
            c = toupper(c);
        }

        // Add name to list
        l.push_back(name);
    }

    cout << "\nNames in list:" << endl;

    // Print list using iterator
    for(it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "\t";
    }

    cout << endl;


    // =========================================================
    // QUESTION 2
    // Find a name
    // =========================================================

    cout << "\nEnter the name you want to find in list: "
         << endl;

    getline(cin, find);

    // Convert search name to uppercase
    for(auto &c : find)
    {
        c = toupper(c);
    }

    // Search name
    for(it = l.begin(); it != l.end(); it++)
    {
        if(find == *it)
        {
            result = true;
            break;
        }
    }

    if(result == true)
    {
        cout << "Found: " << find << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }


    // =========================================================
    // QUESTION 3
    // Delete all occurrences of a name
    // =========================================================

    cout << "\nEnter the name you want to delete from list: "
         << endl;

    getline(cin, delete_name);

    // Convert delete name to uppercase
    for(auto &c : delete_name)
    {
        c = toupper(c);
    }

    // Delete all matching names
    for(it = l.begin(); it != l.end();)
    {
        if(*it == delete_name)
        {
            // erase() deletes current element
            // and returns iterator to next element
            it = l.erase(it);
        }
        else
        {
            // Move to next element
            it++;
        }
    }

    cout << "After deleting name, list is:" << endl;

    for(it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "\t";
    }

    cout << endl;


    // =========================================================
    // QUESTION 4
    // Count how many times a name appears
    // =========================================================

    cout << "\nEnter the name you want to count: "
         << endl;

    getline(cin, name_appear);

    // Convert name to uppercase
    for(auto &c : name_appear)
    {
        c = toupper(c);
    }

    // Count matching names
    for(it = l.begin(); it != l.end(); it++)
    {
        if(name_appear == *it)
        {
            count++;
        }
    }

    cout << "The name appears in the list "
         << count << " times." << endl;


    // =========================================================
    // QUESTION 5
    // Move names starting with 'A' to another list
    // =========================================================

    cout << "\nNames starting with 'A':" << endl;

    /*
        We use no it++ in the for loop header.

        Why?

        If name starts with A:
            1. Copy it to l2
            2. Erase it from l
            3. erase() gives us the next iterator

        If name does not start with A:
            Move iterator manually using it++
    */

    for(it = l.begin(); it != l.end();)
    {
        if(!it->empty() && it->front() == 'A')
        {
            l2.push_back(*it);

            // Remove from original list
            it = l.erase(it);
        }
        else
        {
            it++;
        }
    }

    // Check if second list is empty
    if(l2.empty())
    {
        cout << "No name starts with 'A'" << endl;
    }
    else
    {
        for(it = l2.begin(); it != l2.end(); it++)
        {
            cout << *it << "\t";
        }

        cout << endl;
    }


    // =========================================================
    // QUESTION 6
    // List → Vector
    // =========================================================

    cout << "\nCopying list data into vector:" << endl;

    // Copy every list element into vector
    for(it = l.begin(); it != l.end(); it++)
    {
        v1.push_back(*it);
    }

    // Print vector using iterator
    for(it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        cout << *it1 << "\t";
    }

    cout << endl;


    // =========================================================
    // QUESTION 7
    // Remove duplicate names
    // =========================================================

    /*
        unique() removes only CONSECUTIVE duplicates.

        Example:

        AYESHA
        AYESHA
        ALI
        ALI

        becomes:

        AYESHA
        ALI
    */

    l.unique();

    cout << "\nAfter removing consecutive duplicate names:"
         << endl;

    for(it = l.begin(); it != l.end(); it++)
    {
        cout << *it << "\t";
    }

    cout << endl;


    // =========================================================
    // QUESTION 8
    // Find longest name
    // =========================================================

    /*
        We first take the first name as the longest.

        Then compare every other name with it.

        If current name is longer:
            longest_name = current name
    */

    if(!l.empty())
    {
        string longest_name = *l.begin();

        for(it = l.begin(); it != l.end(); it++)
        {
            if((*it).length() > longest_name.length())
            {
                longest_name = *it;
            }
        }

        cout << "\nThe longest name is: "
             << longest_name << endl;

        cout << "The length of longest name is: "
             << longest_name.length() << endl;
    }
    else
    {
        cout << "\nList is empty. No longest name."
             << endl;
    }


    // =========================================================
    // QUESTION 9
    // Compare two vectors
    // =========================================================

    /*
        Copy v1 into v2.

        Both vectors will contain the same names
        in the same order.
    */

    for(it1 = v1.begin(); it1 != v1.end(); it1++)
    {
        v2.push_back(*it1);
    }

    // Compare vectors
    if(v1 == v2)
    {
        cout << "\nBoth vectors contain the same data "
             << "in the same order." << endl;
    }
    else
    {
        cout << "\nVectors do not contain the same data."
             << endl;
    }


    return 0;
}