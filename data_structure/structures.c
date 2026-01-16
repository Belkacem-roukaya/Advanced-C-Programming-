/*
structure : are collection of variables grouped together under a common name
members may be of any data type
each field is allocated space even if it is not used . 

### syntax ### : 
struct structName
{
  type1 memberName1;
  .....
  typen memberNamen;
};
*/
// ### exemple ###: 
struct complex {
 int im;
 int re;
};


/* Declare a structure variable (method1) :
### syntax ### : 
struct structName
{
type1 member1name ;
type2 member2name ;
} var1name , var2name ;
*/
// ### exemple ###  :
struct complexe 
{
float re ;
float im ;
} x, y ;

/* Declare a structure variable (method2) :
### syntax ### :
struct structName var1name, .... varnname ;
*/
// ### exemple ### :
struct coordonee
{
int num ;
char nom ;
int age ;
};
struct coordonee x,y,z ;

/* How to use a structure variable :
### syntax ### : 
structVariableName.memberName
*/
// ### exemple ###:
struct complex 
{
float re ;
float im ;
} x,y ;

int main(void) 
{
x.re = 0.1 ;
x.im = 5.4 ;
y = x ;
}
/* How to create a structure type with typedef :
### syntax ### : 
typedef struct
{
type1 memberName1;
...
typen memberNamen;
}typeName;
*/
// ### exemple ### :
typedef struct
{
float re ;
float im ;
} complex ;
/* Declare a structure type variable with typedef :
### syntax ### :
typeName varName1,...,varNamen;
*/
// ### exemple ###:
typedef struct
{
float re;
float im;
}complex ;

complex x,y ;
/* How to Initialize a structure variable at declaration :
    if typeName or structureName has already been defined .
    ### syntax ### :
typeName varName = { const1 ,..,const n};
or
struct structName varName = { const1,.., constn};
*/
// ### exemple ###  :
typedef struct
{
float re;
float im;
}complex ;

complex x = {1.25 , 0.5};  // x.re = 1.25 , x.im = 0.5
