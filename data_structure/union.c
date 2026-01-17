/* unions : the members share the same memory location 
* union is a variable that is capable of holding different types of data at different times .
* are as large as thier largest member
-----------
*union are like a stack of books where only one can be read at a time 
*the size of the union is the size of the largest book
* before a book is checked out , il must be loaded into the union
*only one book is valid wthin the union at a time 
*think of memory sppace that is allocated for your electronic book but only one can be loaded at a time */
// ### Delcaration ### :
// Method 1 :
union mixedBag
{
char a;
int b;
float c;
};
// Method 2 :
typedef union
{
char a;
int b;
float c;
} mixedBag ;
mixBag x ;  //space allcation is 16

// Pratical exmple :
//exemple for 8bit pic mcu with two ADC Result registers
union{
unsigned int u16ADRead;
struct{
unsigned char u8ADReadLow;
unsigned char u8ADReadHigh;
} STRUCT_ADReadMembers;
}UNION_ADRead ;
/* for A/D reading in two seerate registers :
UNION_ADRead.STRUCT_ADReadMembers.u8ADReadHigh = ADRESH;
UNION_ADRead.STRUCT_ADReadMembers.u8ADReadLow = ADRESL;
# UNION_ADRead.u16ADRead now contain full value of A/D reading 
*/