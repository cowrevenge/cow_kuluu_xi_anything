/* f_1006bb10 - it stores the object pointer into the word at +0x04 of itself

   The whole original is `mov dword ptr [ecx + 4], ecx / ret`. That is the self-link MSVC emits for a node that points back at itself; eax is not written by
the original, so the adapter leaves it exactly as the caller had it.

   Name: `cow_link_self_04` (guess). called from 4 code site(s): 0x10064235, 0x1006591c, 0x1006599c, 0x10065ab9
*/
#include "cow.h"

void cow_link_self_04(CowWordObj_04* o, uint32_t self);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov dword ptr [ecx + 4], ecx / ret`; its ret pops 0
   bytes above the return address and leaves eax exactly as the caller left it (the original writes no GPR). The readability gate skips this block. */
void cow_adapter_1006bb10(Guest* g)
{
    cow_link_self_04(COW_AS(CowWordObj_04, g->ecx), g->ecx);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
