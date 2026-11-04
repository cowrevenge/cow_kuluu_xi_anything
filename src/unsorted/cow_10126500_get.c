/* f_10126500 - it reads the word at +0x00 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_return_at_10126500` (placeholder). called from 8 code site(s): 0x1011746b, 0x10117529, 0x1011780c, 0x101180fa
*/
#include "cow.h"

uint32_t cow_read_word_00(const CowWordObj_00* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_10126500(Guest* g)
{
    g->eax = cow_read_word_00(COW_AS(CowWordObj_00, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
