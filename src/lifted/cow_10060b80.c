/* f_0x10060b80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10060b80(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(rd32(self + 0x78u) + 0x14a4u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(rd32(self + 0x78u) + 0x14a4u);
        goto L_10060ba8;
    }
    eax = (in_eax & 0xffffff00u) | rd8(rd32(self + 0x78u) + 0x14a4u);
    ecx = rd32(self + 0x78u);
    if (ecx != 0u)
    {
        g->eax = rd32(ecx);
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        eax = t2;
    }
    g->eax = eax;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, rd32(t3 + 0x18u), self, 1, 1u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
L_10060ba8: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10060b80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10060b80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
