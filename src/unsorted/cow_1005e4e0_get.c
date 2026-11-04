/* f_1005e4e0 - it reads the word at +0x74 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x74] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_return_at_1005e4e0` (placeholder). called from 2 code site(s): 0x1005d929, 0x1005d9ad
*/
#include "cow.h"

uint32_t cow_read_word_74(const CowWordObj_74* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x74] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_1005e4e0(Guest* g)
{
    g->eax = cow_read_word_74(COW_AS(CowWordObj_74, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
