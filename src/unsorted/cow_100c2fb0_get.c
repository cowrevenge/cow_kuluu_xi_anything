/* f_100c2fb0 - it reads the word at +0x00 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_return_at_100c2fb0` (placeholder). called from 3 code site(s): 0x100c33ea, 0x100c341b, 0x100c3605
*/
#include "cow.h"

uint32_t cow_read_word_00(const CowWordObj_00* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_100c2fb0(Guest* g)
{
    g->eax = cow_read_word_00(COW_AS(CowWordObj_00, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
