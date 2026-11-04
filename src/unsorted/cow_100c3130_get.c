/* f_100c3130 - it reads the word at +0x50 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x50] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_50` (guess). called from 8 code site(s): 0x100c34a5, 0x100c34af, 0x100c34b9, 0x100c34c3
*/
#include "cow.h"

uint32_t cow_read_word_50(const CowWordObj_50* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x50] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_100c3130(Guest* g)
{
    g->eax = cow_read_word_50(COW_AS(CowWordObj_50, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
