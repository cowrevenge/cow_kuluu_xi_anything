/* f_1001a840 - it reads the word at +0x30 of its object and returns it

   The whole original is `mov eax, dword ptr [ecx + 0x30] / ret`. The object is a `thiscall` self pointer in ecx; only this one field of it has been read in this build, and it is named in layout/structs.h with a COW_ASSERT_OFFSET.

   Name: `cow_vf8_at_1032a1c0` (placeholder). vtable 0x1032a1c0 slot 8/17 - a virtual method
*/
#include "cow.h"

uint32_t cow_read_word_30(const CowWordObj_30* o);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov eax, dword ptr [ecx + 0x30] / ret`; its ret pops 0
   bytes above the return address and leaves eax that word. The readability gate skips this block. */
void cow_adapter_1001a840(Guest* g)
{
    g->eax = cow_read_word_30(COW_AS(CowWordObj_30, g->ecx));
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
