/* f_0x102173a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u16 stack_args=2 */
uint32_t cow_fn_102173a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    t1 = rd32(sp0 + 4u);
    t2 = rd8(rd32(sp0 + 4u) + 1u);
    wr8(sp0 + 4u, rd8(t1));
    wr8(sp0 + 5u, (uint8_t)t2);
    if (rd8(arg2) == 0u)
    {
        eax = t1;
        goto L_102173ce;
    }
    eax = t1;
    edx = (in_edx & 0xffffff00u) | t2;
    eax = (eax & 0xffff0000u) | rd16(sp0 + 4u);
    ecx = arg2;
L_102173bf: ;
    if (rd16(ecx) == (uint16_t)eax) goto L_102173d1;
    if (rd8(ecx + 2u) != 0u)
    {
        edx = (edx & 0xffffff00u) | rd8(ecx + 2u);
        ecx = ecx + 2u;
        goto L_102173bf;
    }
L_102173ce: ;
    eax = eax & 0xffff0000u;
L_102173d1: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102173a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102173a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
