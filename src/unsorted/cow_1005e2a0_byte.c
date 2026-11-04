/* f_1005e2a0 - it reads the byte at +0x02 of its object into al

   The whole original is `mov al, byte ptr [ecx + 2] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_02` (guess). called from 2 code site(s): 0x1005bf83, 0x1005bfb1
*/
#include "cow.h"

uint32_t cow_read_byte_02(const CowByteObj_02* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 2] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_1005e2a0(Guest* g)
{
    g->eax = cow_read_byte_02(COW_AS(CowByteObj_02, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
