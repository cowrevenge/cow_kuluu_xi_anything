/* f_10029e70 - it returns the address of +0x20 of its object

   The whole original is `lea eax, [ecx + 0x20] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_10029e70` (placeholder). called from 8 code site(s): 0x1002a0d9, 0x1002a475, 0x1002a711, 0x1002b3f1
*/
#include "cow.h"

uint32_t cow_object_plus_20(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x20] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10029e70(Guest* g)
{
    g->eax = cow_object_plus_20(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
