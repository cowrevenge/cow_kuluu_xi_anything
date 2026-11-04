/* f_1014f810 - it returns the address of +0x58 of its object

   The whole original is `lea eax, [ecx + 0x58] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_58` (guess). called from 1 code site(s): 0x1012f699
*/
#include "cow.h"

uint32_t cow_object_plus_58(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x58] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1014f810(Guest* g)
{
    g->eax = cow_object_plus_58(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
