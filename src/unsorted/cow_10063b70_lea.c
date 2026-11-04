/* f_10063b70 - it returns the address of +0x10 of its object

   The whole original is `lea eax, [ecx + 0x10] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_10` (guess). called from 5 code site(s): 0x10047b90, 0x10047b9a, 0x1004992d, 0x10049951
*/
#include "cow.h"

uint32_t cow_object_plus_10(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x10] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10063b70(Guest* g)
{
    g->eax = cow_object_plus_10(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
