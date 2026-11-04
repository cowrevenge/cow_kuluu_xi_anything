/* f_1005e640 - it reads the word at +0x38 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x38] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_38` (guess). called from 1 code site(s): 0x1005b963
*/
#include "cow.h"

uint32_t cow_read_word_38(const CowWordObj_38* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x38] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_1005e640(Guest* g)
{
    g->eax = cow_read_word_38(COW_AS(CowWordObj_38, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
