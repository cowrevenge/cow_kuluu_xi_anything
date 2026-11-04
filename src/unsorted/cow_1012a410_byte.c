/* f_1012a410 - it reads the byte at +0x09 of its object into al

   The whole original is `mov al, byte ptr [ecx + 9] / ret`. Only the low byte of eax is written, so the body takes eax as well: the top three bytes come back as the caller left them.

   Name: `cow_read_byte_09` (guess). called from 3 code site(s): 0x10126de4, 0x10126df6, 0x10128eb2
*/
#include "cow.h"

uint32_t cow_read_byte_09(const CowByteObj_09* o, uint32_t eax);

/* COW_ADAPTER BEGIN - thiscall: the object is in ecx. The original is `mov al, byte ptr [ecx + 9] / ret`; its ret pops 0
   bytes above the return address and leaves eax al = that byte, the rest untouched. The readability gate skips this block. */
void cow_adapter_1012a410(Guest* g)
{
    g->eax = cow_read_byte_09(COW_AS(CowByteObj_09, g->ecx), g->eax);
    rt_return(g, g->eax, 0);
}
/* COW_ADAPTER END */
