/* Bit Fields : are members of structure that occuy a specified number of adjacent bits .
compilers will tyically determine the size of the variable that holds the bit field .
* are ordinary members of a structure
* have a specified bit width
* are used in conjunction with structure to provide bit access to a variable without masking operations 
1/ create a bit field :
### syntax ### :
struct structName
{
unsigned int memberName1:bitWidth;
..
unsigned int memberNamen:bitWidth;
}
*/
// ### exemple ###  :
typedef struct
{
unsigned int bit0: 1;
unsigned int bit1to3: 3;
unsigned int bit4: 1;
unsigned int bit5: 1;
unsigned int bit6to7: 2;
}bytebits ;

/* STM32 example: GPIO configuration register (MODER) */
// Each pin uses 2 bits :
#include <stdin.h>
typedef struct {
    uint32_t MODER0  : 2;
    uint32_t MODER1  : 2;
    uint32_t MODER2  : 2;
    uint32_t MODER3  : 2;
    uint32_t MODER4  : 2;
    uint32_t MODER5  : 2;
    uint32_t MODER6  : 2;
    uint32_t MODER7  : 2;
    uint32_t MODER8  : 2;
    uint32_t MODER9  : 2;
    uint32_t MODER10 : 2;
    uint32_t MODER11 : 2;
    uint32_t MODER12 : 2;
    uint32_t MODER13 : 2;
    uint32_t MODER14 : 2;
    uint32_t MODER15 : 2;
} GPIO_MODER_t;



