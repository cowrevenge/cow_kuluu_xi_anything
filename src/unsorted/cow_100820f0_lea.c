/* f_100820f0 - it returns the address of +0x44 of its object

   The whole original is `lea eax, [ecx + 0x44] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_44` (guess). vtable 0x1032e3c8 slot 112/283 - a virtual method
*/
#include "cow.h"

uint32_t cow_object_plus_44(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x44] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_100820f0(Guest* g)
{
    g->eax = cow_object_plus_44(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
