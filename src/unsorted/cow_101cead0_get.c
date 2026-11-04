/* f_101cead0 - it reads the word at +0x18 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x18] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_read_word_18` (guess). called from 7 code site(s): 0x101cd851, 0x101cee0a, 0x101cef3e, 0x101cf0d3
*/
#include "cow.h"

uint32_t cow_read_word_18(const CowWordObj_18* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x18] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_101cead0(Guest* g)
{
    g->eax = cow_read_word_18(COW_AS(CowWordObj_18, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
