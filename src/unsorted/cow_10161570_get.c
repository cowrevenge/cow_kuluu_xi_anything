/* f_10161570 - it reads the word at +0x24 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x24] / ret 4`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_24` (guess). vtable 0x10335334 slot 14/28 - a virtual method
*/
#include "cow.h"

uint32_t cow_read_word_24(const CowWordObj_24* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x24] / ret 4`; its ret pops 4
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_10161570(Guest* g)
{
    g->eax = cow_read_word_24(COW_AS(CowWordObj_24, g->ecx));
    rt_return(g, g->eax, 4);
}
/* COW_ADAPTER END */
