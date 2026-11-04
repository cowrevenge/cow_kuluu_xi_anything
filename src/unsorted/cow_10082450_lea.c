/* f_10082450 - it returns the address of +0x34 of its object

   The whole original is `lea eax, [ecx + 0x34] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_vf153_at_1032e890` (placeholder). vtable 0x1032e890 slot 153/1056 - a virtual method
*/
#include "cow.h"

uint32_t cow_object_plus_34(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x34] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10082450(Guest* g)
{
    g->eax = cow_object_plus_34(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
