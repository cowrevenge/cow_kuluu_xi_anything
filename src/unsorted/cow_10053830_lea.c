/* f_10053830 - it returns the address of -48 of its object

   The whole original is `lea eax, [ecx - 0x30] / ret`. The displacement is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_m30` (guess). vtable 0x1032b5f8 slot 40/52 - a virtual method
*/
#include "cow.h"

uint32_t cow_object_plus_m30(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx - 0x30] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_10053830(Guest* g)
{
    g->eax = cow_object_plus_m30(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
