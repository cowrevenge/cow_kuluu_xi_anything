/* f_1005e2b0 - it reads the byte at +0x04 of its object into al

   The whole original is `mov al, byte ptr [ecx + 4] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_04` (guess). called from 1 code site(s): 0x1005aaf9
*/
#include "cow.h"

uint32_t cow_read_byte_04(const CowByteObj_04* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 4] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_1005e2b0(Guest* g)
{
    g->eax = cow_read_byte_04(COW_AS(CowByteObj_04, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
