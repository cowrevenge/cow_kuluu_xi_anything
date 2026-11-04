/* f_101617e0 - it reads the word at +0x20 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x20] / ret 4`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_20` (guess). vtable 0x10335334 slot 21/28 - a virtual method
*/
#include "cow.h"

uint32_t cow_read_word_20(const CowWordObj_20* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x20] / ret 4`; its ret pops 4
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_101617e0(Guest* g)
{
    g->eax = cow_read_word_20(COW_AS(CowWordObj_20, g->ecx));
    rt_return(g, g->eax, 4);
}
/* COW_ADAPTER END */
