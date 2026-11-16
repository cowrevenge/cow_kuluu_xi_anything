/* f_0x10112380 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10112380(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd8(self + 5u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 5u);
        goto L_1011240e;
    }
L_1011238e: ;
    if (rd32(rd32(self + 0x10u) + 4u) == 0u)
    {
        eax = rd32(self + 0x10u);
        goto L_1011240e;
    }
    eax = rd32(self + 0x10u);
    if (rd32(eax + 8u) == 0u) goto L_1011240e;
    if (rd32(self) == 0u)
    {
        eax = rd32(self);
        goto L_10112408;
    }
    eax = rd32(self);
    if (eax != 2u) goto L_101123b6;
    if (rd8(rd32(rd32(self + 0x10u)) + 8u) != 0u)
    {
        eax = (rd32(self + 0x10u) & 0xffffff00u) | rd8(rd32(rd32(self + 0x10u)) + 8u);
        goto L_10112408;
    }
    eax = (rd32(self + 0x10u) & 0xffffff00u) | rd8(rd32(rd32(self + 0x10u)) + 8u);
L_101123b6: ;
    g->eax = eax;
    t1 = rd32(rd32(self + 0x10u));
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x10110b20u), t1, 0);
    t3 = g->ecx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        goto L_101123e2;
    }
    ecx = t3;
    if (rd32(self) == 1u)
    {
        eax = rd32(self);
        goto L_10112408;
    }
    eax = rd32(self);
    if (eax != 2u) goto L_101123e2;
    if (rd8(rd32(rd32(self + 0x10u)) + 8u) != 0u)
    {
        eax = rd32(rd32(self + 0x10u));
        goto L_10112408;
    }
    eax = rd32(rd32(self + 0x10u));
    if (rd32(eax + 0x50u) == 1u) goto L_10112408;
L_101123e2: ;
    if ((uint8_t)arg1 == 0u)
    {
        if (rd32(rd32(self + 0x10u) + 8u) != 0u)
        {
            eax = rd32(rd32(self + 0x10u) + 8u);
            wr32(self + 0x10u, eax);
        }
    }
    else
    {
        if (rd32(rd32(self + 0x10u) + 4u) != 0u)
        {
            eax = rd32(rd32(self + 0x10u) + 4u);
            wr32(self + 0x10u, eax);
        }
    }
    goto L_1011238e;
L_10112408: ;
    return (eax & 0xffffff00u) | 1u;
L_1011240e: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10112380(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10112380(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
