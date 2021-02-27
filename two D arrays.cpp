#include <iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter rows, cols: " << endl;
    cin >> rows >> cols;

    //create the table, a pointer to  a pointer of arrays (an array that holds the rows)
    //the pointer of arrays holds the dynamically created arrays ( or the columns)

    int** table = new int* [rows]; //returns a pointer  to an array that will contain pointers to ints
    //this table var can also be called "rows"..
                                   
    //the pointes to ints that this array contains are actually arrays
    for (int i = 0; i < rows; i++)
    {
        table[i] = new int[cols]; // we add the columns into each row.
    }
    table[0][0] = 100;
    cout << **table << endl;

    //remember to deallocate this memory when you don't need it anymore

    //we will delete all the columns first
    for (int i = 0; i < rows; i++)
    {
        delete table[i]; //table contains the address of the first element in the array for rows
    }

    //now delete the array allocated to hold the rows
    delete[] table; // we delete the array that the pointer table pointed to

    table = NULL; // we have deleted the array so we dont want to keep pointing to the address of the
    //former first element of that old array.
    system("pause>0");
    
}


