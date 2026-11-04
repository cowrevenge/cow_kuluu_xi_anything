/* f_101ad820 - it returns the address of +0x08 of its object

   The whole original is `lea eax, [ecx + 8] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_object_plus_08` (guess). called from 4 code site(s): 0x1008084c, 0x10080f68, 0x1014ff79, 0x101ad590
*/
#include "cow.h"

uint32_t cow_object_plus_08(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 8] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_101ad820(Guest* g)
{
    g->eax = cow_object_plus_08(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
