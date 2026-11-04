/* f_100c2fe0 - it returns the address of +0x05 of its object

   The whole original is `lea eax, [ecx + 5] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_05` (guess). called from 2 code site(s): 0x100c3628, 0x100c3806
*/
#include "cow.h"

uint32_t cow_object_plus_05(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 5] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_100c2fe0(Guest* g)
{
    g->eax = cow_object_plus_05(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
