/* f_10186ee0 - it returns the address of +0x44 of its object

   The whole original is `lea eax, [ecx + 0x44] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_44` (guess). called from 1 code site(s): 0x101886c3
*/
#include "cow.h"

uint32_t cow_object_plus_44(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x44] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10186ee0(Guest* g)
{
    g->eax = cow_object_plus_44(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
