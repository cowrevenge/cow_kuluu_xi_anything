/* f_100196b0 - it pushes the float at +0x2c of its object on the x87 stack

   The whole original is `fld dword ptr [ecx + 0x2c] / ret`. The field is typed `float` in layout/structs.h with a COW_ASSERT_OFFSET; the adapter does the
               fpush, because the floating-point stack belongs to the guest, not to the conversion.

   Name: `cow_read_float_2c` (guess). vtable 0x1032a160 slot 12/17 - a virtual method
*/
#include "cow.h"

float cow_read_float_2c(const CowFloatObj_2c* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `fld dword ptr [ecx + 0x2c] / ret`; its ret pops 0
   bytes above the return address and leaves eax as it was (fld does not write a GPR). The readability gate skips this block. */
void cow_adapter_100196b0(Guest* g)
{
    fpush(g, (double)cow_read_float_2c(COW_AS(CowFloatObj_2c, g->ecx)));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
