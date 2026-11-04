/* f_10212440 - it returns the address of +0x04 of its object

   The whole original is `lea eax, [ecx + 4] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_04` (guess). vtable 0x1033bcb8 slot 2/15 - a virtual method
*/
#include "cow.h"

uint32_t cow_object_plus_04(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 4] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10212440(Guest* g)
{
    g->eax = cow_object_plus_04(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
