/* f_1003aab0 - it returns the address of +0x08 of its object

   The whole original is `lea eax, [ecx + 8] / ret`. The offset is a named constant in layout/structs.h, so no number appears in user code.

   Name: `cow_return_at_1003aab0` (placeholder). called from 8 code site(s): 0x1003aac0, 0x1003aaf0, 0x1003ab10, 0x1003abc8
*/
#include "cow.h"

uint32_t cow_object_plus_08(uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `lea eax, [ecx + 8] / ret`; its ret pops 0
   bytes above the return address and leaves eax that address. The readability gate skips this block. */
void cow_adapter_1003aab0(Guest* g)
{
    g->eax = cow_object_plus_08(g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
