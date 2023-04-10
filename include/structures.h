// don't try this in C#
// presented is a much more realistic practicle and non trivial example of an array
// 99.99% of the time the requirement is to track, manipulate, gather and report on a collection of things
// a structure is a data container - everything is public
// a structure 'can' contain 'methods' (functions) - but - leave that for classes
// since an 'object' defines data and declares actions that can be performed on the data called methods, leave that for classes
// it's clearer to use structures as data, since classes can contain structures
// here is a structure of two data types, it could have as many types in any number
struct xtimeframe        // this is now a user defined type
{
    int xtime;           // some unit of something
    char xframe;         // a value of that something
};
// now we have 5 of them
xtimeframe x_array[500];

struct yevents
{
    int id;                   // here we have a identifier for the 5 items
    xtimeframe xy_array[500];   // here were declaring an array of arrays - just wait
};
// now we have an array 5 id/arrays
yevents yevents_array[500];

struct zdetail
{
    int post;                 // another thing to keep track of - could be many things and different types of things
    yevents xyz_array[500];
};

zdetail zevents_array[500];     // so here we have an array of arrays of arrays with little extras to go along