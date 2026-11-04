/* f_1002b5a0 - it returns the address of +0x44 of its object

   The whole original is `lea eax, [ecx + 0x44] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_1002b5a0` (placeholder). called from 8 code site(s): 0x1001bd57, 0x1002c274, 0x1002c2a1, 0x1002c2d5
*/
#include "cow.h"

uint32_t cow_object_plus_44(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x44] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1002b5a0(Guest* g)
{
    g->eax = cow_object_plus_44(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
