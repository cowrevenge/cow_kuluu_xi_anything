/* f_101552d0 - it returns the address of +0x14 of its object

   The whole original is `lea eax, [ecx + 0x14] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_14` (guess). vtable 0x103350a8 slot 47/87 - a virtual method
*/
#include "cow.h"

uint32_t cow_object_plus_14(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 0x14] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_101552d0(Guest* g)
{
    g->eax = cow_object_plus_14(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
