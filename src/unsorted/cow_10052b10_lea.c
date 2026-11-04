/* f_10052b10 - it returns the address of +0x78 of its object

   The whole original is `lea eax, [ecx + 0x78] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_10052b10` (placeholder). called from 6 code site(s): 0x10051219, 0x1005122b, 0x10051248, 0x100512f2
*/
#include "cow.h"

uint32_t cow_object_plus_78(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x78] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10052b10(Guest* g)
{
    g->eax = cow_object_plus_78(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
