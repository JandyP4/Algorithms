#include <iostream>
using namespace std;

/*
January 25, 2024
This class we just spoke about using pointers.
Seems like these are going to be inportant might wanna study up on it.
*/
int main(){

    int a=0;
    a = 10;

    //dynamic allocation
    int *pInt = nullptr; //created a pointer named pInt that points to and int. pointers are always 4 byte 

    pInt = new int; //allocate 4 byte and assign the address to pInt 
    *pInt = 10; //save  10 to that 4 byte memory space 
                //dereferencing

    if (pInt != NULL)
            cout << *pInt << endl; //This will fetch the value of the location stored in pInt

    //Important to note that good code will dealocate the pointer after being used.
    delete pInt; //this will reclaim the 4 bytes of memory used to store the pointer

    pInt = NULL;
    if (pInt != NULL)
            cout << pInt << endl;


            //The IF statments were here just to make this "good code" I think lol

    return 0;
}