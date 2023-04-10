//     Arrays
// Arrays are collections of values that are referred to using a number, an integer starting with 0 aka an index
// normally the first value would be 1 but in C++ the reference is to the beginning address of the first value
// with all the other fancy obfuscation the compiler performs you'd think that would be not biggie but meh
//
// a "so called" one dimensional array

// define 5 integer things
int intArrayThingx[5];
// x  is to be used as an index into the first dimension of the array
int x;
// a "so called" two dimensional array
// an 'array' of 5 x 5 integers
// is the exact same thing as [25] - but referenced differently
int intArrayThingxy[5][5];
// y  is to be used as an index into the second dimension of the array
int y;
// a "so called" three dimensional array
// an 'array' of 5 x 5 x 5 integers
// is the exact same thing as [125] - but referenced differently
int intArrayThingxyz[5][5][5];
// z  is to be used as an index into the third dimension of the array
int z;
// beyond 3 dimensions I have never seen a use for in 40+ years