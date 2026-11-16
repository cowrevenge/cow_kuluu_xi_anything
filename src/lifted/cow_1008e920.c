/* f_0x1008e920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1008e920(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 == 0u)
    {
        eax = in_eax;
        goto L_1008e999;
    }
    if (rd8(self + 0x1ffu) < 0x28u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
        goto L_1008e999;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x1ffu);
    if ((uint8_t)eax > 0x2bu) goto L_1008e999;
    if (rd8(arg1 + 0x1ffu) < 0x28u) goto L_1008e999;
    edx = (arg1 & 0xffffff00u) | rd8(arg1 + 0x1ffu);
    if ((uint8_t)edx > 0x2bu) goto L_1008e999;
    if ((uint8_t)eax == 0x28u) goto L_1008e953;
    if ((uint8_t)eax == 0x2au) goto L_1008e953;
    ebx = in_ebx & 0xffffff00u;
L_1008e955: ;
    if ((uint8_t)edx == 0x29u) goto L_1008e963;
    if ((uint8_t)edx == 0x2bu) goto L_1008e963;
    ecx = self & 0xffffff00u;
L_1008e965: ;
    if ((uint8_t)ebx == (uint8_t)ecx) goto L_1008e991;
    if ((uint8_t)eax == 0x29u) goto L_1008e976;
    if ((uint8_t)eax == 0x2bu) goto L_1008e976;
    ecx = ecx & 0xffffff00u;
L_1008e978: ;
    if ((uint8_t)edx == 0x28u) goto L_1008e986;
    if ((uint8_t)edx == 0x2au) goto L_1008e986;
    eax = eax & 0xffffff00u;
L_1008e988: ;
    if ((uint8_t)ecx == (uint8_t)eax) goto L_1008e991;
    return 0u;
L_1008e953: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_1008e955;
L_1008e963: ;
    ecx = (self & 0xffffff00u) | 1u;
    goto L_1008e965;
L_1008e976: ;
    ecx = (ecx & 0xffffff00u) | 1u;
    goto L_1008e978;
L_1008e986: ;
    eax = (eax & 0xffffff00u) | 1u;
    goto L_1008e988;
L_1008e991: ;
    return 1u;
L_1008e999: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1008e920(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
