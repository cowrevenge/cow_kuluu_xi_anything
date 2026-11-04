/* f_1004e2a0 - it returns the address of +0x02 of its object

   The whole original is `lea eax, [ecx + 2] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_1004e2a0` (placeholder). called from 4 code site(s): 0x1004d47d, 0x1004d542, 0x1005068d, 0x100509c1
*/
#include "cow.h"

uint32_t cow_object_plus_02(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 2] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1004e2a0(Guest* g)
{
    g->eax = cow_object_plus_02(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
