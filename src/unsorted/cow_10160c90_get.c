/* f_10160c90 - it reads the word at +0x54 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x54] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_54` (guess). called from 8 code site(s): 0x101185e9, 0x10118649, 0x101186ab, 0x101187a8
*/
#include "cow.h"

uint32_t cow_read_word_54(const CowWordObj_54* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x54] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_10160c90(Guest* g)
{
    g->eax = cow_read_word_54(COW_AS(CowWordObj_54, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
