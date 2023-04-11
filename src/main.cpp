// Clunker is C++ exposed - raw!
#include "main.h"
// Preprocessor directives
#include "preprocessor.h"
// Variables - since these are all 'outside' of "main" - these are GLOBAL Scope
#include "variables.h"
// Dynamic allocation
#include "heap.h"
// Pointers
#include "pointers.h"
// References - "another word for" a variable or 'identifier'
#include "references.h"
//    Collections
// Arrays
#include "arrays.h"
// Structures
#include "structures.h"
// Class Definitions - defined classes of main
#include "Timer.h"
//     Functions - flow control of the "main" function - what does it do
#include "functions.h"
// Class declairation - main classes that are being used
#include "classes.h"
// Exterior classes 


// this is where the program starts
int main()
{

    std::cout << "Clunker is C++ exposed - raw!" << std::endl;
// these functions are performed in Sequence
// provide initial values to variables
    InitializeVariables();
// expose initial values of variables and the size of each
    SizeofVariables();
// provide initial values to pointers
    InitializePointers();
// expose addresses of pointers, initial values and the size of each
    SizeofPointers();
// expose values pointed to ->
    ValuesofPointers();
// expose integer values of pointers ->
    IntegerValuesofPointers();
// provide initial values to arrays
    InitializeArrays();
// expose values within arrays
    ValuesofArrays();
// provide values to structures - bad way
    InitializeStructuresX();
// provide values to structures - good way
    InitializeStructures();
// expose values within structures
    ValuesofStructues();
// Delete HEAP
    DeleteHeap();


    std::cout << "press enter to continue" << std::endl;
    std::cin.get();

    return 0;

}
// provide initial values to variables
void InitializeVariables()
{
   std::cout << "Initialize Variables " << std::endl;
// Character Types
    charThing = 'P';
    char16tThing = u'P';
    char32tThing = U'P';
    wchartThing = L'P';
    unsignedcharThing = 'P';
    signedcharThing = 'P';

// Integer Types (signed)
    shortintThing = -1;
    intThing = -1;
    longintThing = -1;
    longlongintThing = -1;

// Integer Types (unsigned)
    unsignedshortintThing = 1;
    unsignedintThing = 1;
    unsignedlongintThing = 1;
    unsignedlonglongintThing = 1;

// Floating-point types
    floatThing = 1.1;
    doubleThing = 1.1;
    longdoubleThing = 1.1;

// Boolean type
    boolThing = true;

// string type
    stringThing = "Clunker\0";  // appears to be minimum 32 bytes?

// Heap things
    *charThingH = 'P';

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
 	system("clear");

}
// expose initial values of variables and the size of each
void SizeofVariables()
{
       std::cout << "Size of Variables " << std::endl;
// Character Types
    std::cout << "charThing is............... " << charThing << " and is " << sizeof(charThing) << " bytes " << std::endl;
    std::cout << "char16tThing is............ " << char16tThing << " and is " << sizeof(char16tThing) << " bytes " << std::endl;
    std::cout << "char32tThing is............ " << char32tThing << " and is " << sizeof(char32tThing) << " bytes " << std::endl;
    std::cout << "wchartThing is............. " << wchartThing << " and is " << sizeof(wchartThing) << " bytes " << std::endl;
    std::cout << "unsignedcharThing is....... " << unsignedcharThing << " and is " << sizeof(unsignedcharThing) << " bytes " << std::endl;
    std::cout << "signedcharThing is......... " << signedcharThing << " and is " << sizeof(signedcharThing) << " bytes " << std::endl;

// Integer Types (signed)
    std::cout << "shortintThing is........... " << shortintThing << " and is " << sizeof(shortintThing) << " bytes " << std::endl;
    std::cout << "intThing is................ " << intThing << " and is " << sizeof(intThing) << " bytes " << std::endl;
    std::cout << "longintThing is............ " << longintThing << " and is " << sizeof(longintThing) << " bytes " << std::endl;
    std::cout << "longlongintThing is........ " << longlongintThing << " and is " << sizeof(longlongintThing) << " bytes " << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThing is... " << unsignedshortintThing << " and is " << sizeof(unsignedshortintThing) << " bytes " << std::endl;
    std::cout << "unsignedintThing is........ " << unsignedintThing << " and is " << sizeof(unsignedintThing) << " bytes " << std::endl;
    std::cout << "unsignedlongintThing is.... " << unsignedlongintThing << " and is " << sizeof(unsignedlongintThing) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThing is " << unsignedlonglongintThing << " and is " << sizeof(unsignedlonglongintThing) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThing is.............. " << floatThing << " and is " << sizeof(floatThing) << " bytes " << std::endl;
    std::cout << "doubleThing is............. " << doubleThing << " and is " << sizeof(doubleThing) << " bytes " << std::endl;
    std::cout << "longdoubleThing is......... " << longdoubleThing << " and is " << sizeof(longdoubleThing) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThing is............... " << boolThing << " and is " << sizeof(boolThing) << " bytes " << std::endl;

// string type
    std::cout << "stringThing is............. " << stringThing << " and is " << sizeof(stringThing) << " bytes ?" << std::endl;

// NOTE: see arrays
    std::cout << "stringThing 0 ............. " << stringThing[0] << std::endl;
    std::cout << "stringThing 1 ............. " << stringThing[1] << std::endl;
    std::cout << "stringThing 2 ............. " << stringThing[2] << std::endl;
    std::cout << "stringThing 3 ............. " << stringThing[3] << std::endl;
    std::cout << "stringThing 4 ............. " << stringThing[4] << std::endl;
    std::cout << "stringThing 5 ............. " << stringThing[5] << std::endl;
    std::cout << "stringThing 6 ............. " << stringThing[6] << std::endl;
    std::cout << "stringThing 7 ............. " << stringThing[7] << std::endl;

// Heap
// Character Types
    std::cout << "charThingH is............... " << *charThingH << " and is " << sizeof(*charThingH) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
  	system("clear");
}
// provide initial values to pointers
void InitializePointers()
{
   std::cout << "Initialize Pointers " << std::endl;
// Character Types
    charThingptr = & charThing;   // '&' on the right side means 'address of'
    char16tThingptr = & char16tThing;
    char32tThingptr = & char32tThing;
    wchartThingptr = & wchartThing;
    unsignedcharThingptr = & unsignedcharThing;
    signedcharThingptr = & signedcharThing;

// Integer Types (signed)
    shortintThingptr = & shortintThing;
    intThingptr = & intThing;
    longintThingptr = & longintThing;
    longlongintThingptr = & longlongintThing;

// Integer Types (unsigned)
    unsignedshortintThingptr = & unsignedshortintThing;
    unsignedintThingptr = & unsignedintThing;
    unsignedlongintThingptr = & unsignedlongintThing;
    unsignedlonglongintThingptr = & unsignedlonglongintThing;

// Floating-point types
    floatThingptr = & floatThing;
    doubleThingptr = & doubleThing;
    longdoubleThingptr = & longdoubleThing;

// Boolean type
    boolThingptr = & boolThing;

// string type
    stringThingptr = & stringThing;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose addresses of pointers, initial values and the size of each
void SizeofPointers()
{
   std::cout << "Size of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr address is............... " << charThingptr << " and is " << sizeof(charThingptr) << " bytes ?" << std::endl;
    std::cout << "char16tThingptr address is............ " << char16tThingptr << " and is " << sizeof(char16tThingptr) << " bytes " << std::endl;
    std::cout << "char32tThingptr address is............ " << char32tThingptr << " and is " << sizeof(char32tThingptr) << " bytes " << std::endl;
    std::cout << "wchartThingptr address is............. " << wchartThingptr << " and is " << sizeof(wchartThingptr) << " bytes " << std::endl;
    std::cout << "unsignedcharThingptr address is....... " << unsignedcharThingptr << " and is " << sizeof(unsignedcharThingptr) << " bytes ?" << std::endl;
    std::cout << "signedcharThingptr address is......... " << signedcharThingptr << " and is " << sizeof(signedcharThingptr) << " bytes ?" << std::endl;

// Integer Types (signed)
    std::cout << "shortintThingptr address is........... " << shortintThingptr << " and is " << sizeof(shortintThingptr) << " bytes " << std::endl;
    std::cout << "intThingptr address is................ " << intThingptr << " and is " << sizeof(intThingptr) << " bytes " << std::endl;
    std::cout << "longintThingptr address is............ " << longintThingptr << " and is " << sizeof(longintThingptr) << " bytes " << std::endl;
    std::cout << "longlongintThingptr address is........ " << longlongintThingptr << " and is " << sizeof(longlongintThingptr) << " bytes " << std::endl;

// Integer Types (unsigned)

    std::cout << "unsignedshortintThingptr address is... " << unsignedshortintThingptr << " and is " << sizeof(unsignedshortintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedintThingptr address is........ " << unsignedintThingptr << " and is " << sizeof(unsignedintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlongintThingptr address is.... " << unsignedlongintThingptr << " and is " << sizeof(unsignedlongintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThingptr address is " << unsignedlonglongintThingptr << " and is " << sizeof(unsignedlonglongintThingptr) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThingptr address is.............. " << floatThingptr << " and is " << sizeof(floatThingptr) << " bytes " << std::endl;
    std::cout << "doubleThingptr address is............. " << doubleThingptr << " and is " << sizeof(doubleThingptr) << " bytes " << std::endl;
    std::cout << "longdoubleThingptr address is......... " << longdoubleThingptr << " and is " << sizeof(longdoubleThingptr) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThingptr address is............... " << boolThingptr << " and is " << sizeof(boolThingptr) << " bytes " << std::endl;

// string type
    std::cout << "stringThingptr address is............. " << stringThingptr << " and is " << sizeof(stringThingptr) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values pointed to ->
void ValuesofPointers()
{
   std::cout << "Values of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr value is............... " << * charThingptr << " and is " << sizeof(charThingptr) << " bytes " << std::endl;           // * means refer to the value pointed to
//  std::cout << "char16tThingptr value is............ " << * char16tThingptr << " and is " << sizeof(char16tThingptr) << " bytes " << std::endl;
//  std::cout << "char32tThingptr value is............ " << * char32tThingptr << " and is " << sizeof(char32tThingptr) << " bytes " << std::endl;
//  std::cout << "wchartThingptr value is............. " << * wchartThingptr << " and is " << sizeof(wchartThingptr) << " bytes " << std::endl;
    std::cout << "unsignedcharThingptr value is....... " << * unsignedcharThingptr << " and is " << sizeof(unsignedcharThingptr) << " bytes " << std::endl;
    std::cout << "signedcharThingptr value is......... " << * signedcharThingptr << " and is " << sizeof(signedcharThingptr) << " bytes " << std::endl;


// Integer Types (signed)
    std::cout << "shortintThingptr value is........... " << * shortintThingptr << " and is " << sizeof(shortintThingptr) << " bytes " << std::endl;
    std::cout << "intThingptr value is................ " << * intThingptr << " and is " << sizeof(intThingptr) << " bytes " << std::endl;
    std::cout << "longintThingptr value is............ " << * longintThingptr << " and is " << sizeof(longintThingptr) << " bytes " << std::endl;
    std::cout << "longlongintThingptr value is........ " << * longlongintThingptr << " and is " << sizeof(longlongintThingptr) << " bytes " << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThingptr value is... " << * unsignedshortintThingptr << " and is " << sizeof(unsignedshortintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedintThingptr value is........ " << * unsignedintThingptr << " and is " << sizeof(unsignedintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlongintThingptr value is.... " << * unsignedlongintThingptr << " and is " << sizeof(unsignedlongintThingptr) << " bytes " << std::endl;
    std::cout << "unsignedlonglongintThingptr value is " << * unsignedlonglongintThingptr << " and is " << sizeof(unsignedlonglongintThingptr) << " bytes " << std::endl;

// Floating-point types
    std::cout << "floatThingptr value is.............. " << * floatThingptr << " and is " << sizeof(floatThingptr) << " bytes " << std::endl;
    std::cout << "doubleThingptr value is............. " << * doubleThingptr << " and is " << sizeof(doubleThingptr) << " bytes " << std::endl;
    std::cout << "longdoubleThingptr value is......... " << * longdoubleThingptr << " and is " << sizeof(longdoubleThingptr) << " bytes " << std::endl;

// Boolean type
    std::cout << "boolThingptr value is............... " << * boolThingptr << " and is " << sizeof(boolThingptr) << " bytes " << std::endl;

// string type
    std::cout << "stringThingptr value is............. " << * stringThingptr << " and is " << sizeof(stringThingptr) << " bytes " << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose integer values of pointers ->
void IntegerValuesofPointers()
{

    std::cout << "Integer Values of Pointers " << std::endl;
// Character Types
    std::cout << "charThingptr is............... " << (unsigned long) charThingptr << std::endl;           // this (unsigned long) is a 'cast' - to convert one type to another
//  std::cout << "char16tThingptr is............ " << (unsigned long) char16tThingptr << std::endl;
//  std::cout << "char32tThingptr is............ " << (unsigned long) char32tThingptr << std::endl;
//  std::cout << "wchartThingptr is............. " << (unsigned long) wchartThingptr << std::endl;
    std::cout << "unsignedcharThingptr is....... " << (unsigned long) unsignedcharThingptr << std::endl;
    std::cout << "signedcharThingptr is......... " << (unsigned long) signedcharThingptr << std::endl;

// Integer Types (signed)
    std::cout << "shortintThingptr is........... " << (unsigned long) shortintThingptr << std::endl;
    std::cout << "intThingptr is................ " << (unsigned long) intThingptr << std::endl;
    std::cout << "longintThingptr is............ " << (unsigned long) longintThingptr << std::endl;
    std::cout << "longlongintThingptr is........ " << (unsigned long) longlongintThingptr  << std::endl;

// Integer Types (unsigned)
    std::cout << "unsignedshortintThingptr is... " << (unsigned long) unsignedshortintThingptr << std::endl;
    std::cout << "unsignedintThingptr is........ " << (unsigned long) unsignedintThingptr << std::endl;
    std::cout << "unsignedlongintThingptr is.... " << (unsigned long) unsignedlongintThingptr << std::endl;
    std::cout << "unsignedlonglongintThingptr is " << (unsigned long) unsignedlonglongintThingptr << std::endl;

// Floating-point types
    std::cout << "floatThingptr is.............. " << (unsigned long) floatThingptr << std::endl;
    std::cout << "doubleThingptr is............. " << (unsigned long) doubleThingptr << std::endl;
    std::cout << "longdoubleThingptr is......... " << (unsigned long) longdoubleThingptr << std::endl;

// Boolean type
    std::cout << "boolThingptr is............... " << (unsigned long) boolThingptr << std::endl;

// string type
    std::cout << "stringThingptr is............. " << (unsigned long) stringThingptr << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide initial values to arrays
void InitializeArrays()
{

    std::cout << "Initialize Arrays " << std::endl;

    for (x = 0; x < 5; x++)
    {
        intArrayThingx[x] = 0;         // one assignment statement for each index - 5
    }
// aviod this
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            intArrayThingxy[x][y] = 0; // one assignment statement for each index - 25
        }
    }
// avoid this
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                  intArrayThingxyz[x][y][z] = 0; // one assignment statement for each index - 125
            }
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values within arrays
void ValuesofArrays()
{
    std::cout << "Values of Arrays " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << "intArrayThingx at index X " << x << " value is " << intArrayThingx[x] << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            std::cout << "intArrayThingxy at index X " << x << " index Y " << y << " value " << intArrayThingxy[x][y] << std::endl;
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            for (z = 0; z < 5; z++)
            {
                std::cout << "intArrayThingxyz at index X " << x << " index Y " << y << " index Z " << z << " value " << intArrayThingxyz[x][y][z] << std::endl;
            }
        }
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide values to structures - bad way
void InitializeStructuresX()
{
    std::cout << "Initialize Structures - bad " << std::endl;
    start_s = clock();

    for (x = 0; x < 500; x++)
    {
        x_array[x].xtime = 0;
        x_array[x].xframe = '0';
    }

    for (x = 0; x < 500; x++)
    {
        yevents_array[x].id = x;
        for (y = 1; y < 500; y++)
        {
            yevents_array[x].xy_array[y].xtime = 0;
            yevents_array[x].xy_array[y].xframe = '0';
        }
    }

    for (x = 0; x < 500; x++)
    {
        zevents_array[x].post = x;
        for (y = 0; y < 500; y++)
        {
            zevents_array[x].xyz_array[y].id = y;
            for (z = 0; z < 500; z++)
            {
                zevents_array[x].xyz_array[y].xy_array[z].xtime = 0;
                zevents_array[x].xyz_array[y].xy_array[z].xframe = 'A';
            }
        }
    }

    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// provide values to structures - good way
void InitializeStructures()
{
    std::cout << "Initialize Structures - good " << std::endl;
    start_s = clock();

// array of structures
// here is where the fireworks really begin
// assign initial values to first array index - use your imagination - there might be dozens of things to keep track of
    x_array[0].xtime = 0;
    x_array[0].xframe = '0';
//  magic
// we are now assigning the other values (1 thru 4) to the first one
    for (x = 1; x < 500; x++)
    {
        x_array[x] = x_array[0];
    }

// array of array of structures
//  as is the routine we start from the inside and move out
//  starting with the first entry
    for (x = 0; x < 500; x++)                          // the unavoidable 5 assignments (10  actually)
    {
        yevents_array[0].xy_array[x].xtime = 0;
        yevents_array[0].xy_array[x].xframe = '0';
    }

    yevents_array[0].id = 0; //initialize
//  so we have initialized a 5 x 5 (25)) element array with 9 assignments (5 + 4)
    for (y = 1; y < 500; y++) //initialize all the entries to the first
    {
        yevents_array[y] = yevents_array[0];   // don't be tempted to flip these two lines around - the result will mortify you
        yevents_array[y].id = y;               // resist the urge to perform the assignments in the order of the struct
    }

//  array of array of array of structures
//  let's initialize
//  so we move from the inside towards the outside - always starting at the first entry
    for (x = 0; x < 500; x++)
    {
        zevents_array[0].xyz_array[0].xy_array[x].xtime = 0;
        zevents_array[0].xyz_array[0].xy_array[x].xframe = 'A';
    }
//  next we move outwards to the next level
    zevents_array[0].xyz_array[0].id = 0; //initialize

    for (y = 1; y < 500; y++) //initialize the rest to the first
    {
        zevents_array[0].xyz_array[y] = zevents_array[0].xyz_array[0];
        zevents_array[0].xyz_array[y].id = y;
    }
//  keep moving outwards
    zevents_array[0].post = 0;

    for (z = 1; z < 500; z++)  // initialize the rest to the first
    {
        zevents_array[z] = zevents_array[0];
        zevents_array[z].post = z;
    }
//  so we have initialized a 5 x 5 x 5 (125)) element array with 14 assignments (5 + 4 + 4)
//  had the array been 500x500x500 that would be 125,000,000 versus 500 + 499 + 499 = 1,498 - that is a massive performance difference
    stop_s = clock();
    std::cout << "elapsed time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << std::endl;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// expose values within structures
void ValuesofStructues()
{
    std::cout << "Values of Structures " << std::endl;

    for (x = 0; x < 5; x++)
    {
        std::cout << " t " << x_array[x].xtime << " f " << x_array[x].xframe << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (x = 0; x < 5; x++)
    {
        std::cout << " id " << yevents_array[x].id ;
        for (y = 0; y < 5; y++)
        {
            std::cout << " t " << yevents_array[x].xy_array[y].xtime << " f " << yevents_array[x].xy_array[y].xframe;
        }
        std::cout << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");

    for (z = 0; z < 5; z++)
    {
        std::cout << " post " << zevents_array[z].post << std::endl;
        for (y = 0; y < 5; y++)
        {
            std::cout << " id " << zevents_array[z].xyz_array[y].id;
            for (x = 0; x < 5; x++)
            {
                std::cout << " t " << zevents_array[z].xyz_array[y].xy_array[x].xtime
                          << " f " << zevents_array[z].xyz_array[y].xy_array[x].xframe;
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}
// Delete HEAP
void DeleteHeap()
{
    std::cout << "Delete Heap " << std::endl;
    
    delete charThingH;
    delete timerH;

    std::cout << "press enter to continue" << std::endl;
    std::cin.get();
	system("clear");
}