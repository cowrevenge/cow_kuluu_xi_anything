/* f_1003fce0 - it returns the address of +0x38 of its object

   The whole original is `lea eax, [ecx + 0x38] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_1003fce0` (placeholder). called from 8 code site(s): 0x1003fd06, 0x1003fd39, 0x1003ff25, 0x1004044c
*/
#include "cow.h"

uint32_t cow_object_plus_38(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x38] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1003fce0(Guest* g)
{
    g->eax = cow_object_plus_38(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
