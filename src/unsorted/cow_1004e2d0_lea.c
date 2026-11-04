/* f_1004e2d0 - it returns the address of +0x03 of its object

   The whole original is `lea eax, [ecx + 3] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_1004e2d0` (placeholder). called from 2 code site(s): 0x1004d5de, 0x10050a63
*/
#include "cow.h"

uint32_t cow_object_plus_03(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 3] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1004e2d0(Guest* g)
{
    g->eax = cow_object_plus_03(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
