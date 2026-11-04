/* f_1005e2d0 - it reads the byte at +0x0e of its object into al

   The whole original is `mov al, byte ptr [ecx + 0xe] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_0e` (guess). called from 1 code site(s): 0x1005ae19
*/
#include "cow.h"

uint32_t cow_read_byte_0e(const CowByteObj_0e* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 0xe] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_1005e2d0(Guest* g)
{
    g->eax = cow_read_byte_0e(COW_AS(CowByteObj_0e, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
