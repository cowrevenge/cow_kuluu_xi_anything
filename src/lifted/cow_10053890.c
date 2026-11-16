/* f_0x10053890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10053890(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = (rd32(self + 0xd8u) & 0xffff00ffu) | (rd32(self + 0xd8u) >> 8u & 0xf7u) << 8u;
    wr32(self + 0xd8u, t1);
    if (rd32(self + 0xa8u) == 0u)
    {
        eax = in_eax;
        goto L_100538d8;
    }
    ecx = rd32(self + 0xa8u);
    if ((uint8_t)arg1 == 0u) goto L_100538c9;
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t2 = rd32(ecx);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x18u), ecx, 1, 1u);
    t4 = g->edx;
    wr32(self + 0xa8u, 0u);
    g->edx = t4;
    return t3;
L_100538c9: ;
    wr16(self + 0xdcu, rd16(self + 0xdcu) | 1u);
    wr32(ecx + 0x14u, 1u);
    eax = 1u;
L_100538d8: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10053890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10053890(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
