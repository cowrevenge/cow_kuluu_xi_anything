/* f_0x101e5130 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e5130(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t of;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x14u) == 1u)
    {
        eax = rd32(self + 0x14u);
        t1 = rd32(self + 0x2cu);
        g->esp = sp0 - 4u;
        t2 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, t1, g->edx, 0, 1, 0u);
        t3 = g->ecx;
        eax = t2;
        ecx = t3;
        edx = self + 0x34u;
L_101e5160: ;
        t4 = rd8(eax);
        wr8(edx, (uint8_t)t4);
        if ((uint8_t)t4 != 0u)
        {
            eax = eax + 1u;
            ecx = (ecx & 0xffffff00u) | t4;
            edx = edx + 1u;
            goto L_101e5160;
        }
        eax = eax + 1u;
        edx = edx + 1u;
        if (rd32(self + 0x2cu) != 0u)
        {
            ecx = rd32(self + 0x2cu);
            g->eax = eax;
            g->edx = rd32(ecx);
            t5 = rd32(ecx);
            g->esp = sp0 - 4u;
            t6 = cow_thiscall(g, rd32(t5 + 0xcu), ecx, 1, 1u);
            t7 = g->edx;
            wr32(self + 0x2cu, 0u);
            eax = t6;
            edx = t7;
        }
        g->esp = sp0 - 4u;
        cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, 0u);
    }
    else
    {
        eax = rd32(self + 0x14u);
        zf = rd32(self + 0x14u) == 1u;
        sf = (int32_t)(rd32(self + 0x14u) - 1u) < 0;
        of = ((rd32(self + 0x14u) ^ 1u) & (rd32(self + 0x14u) ^ rd32(self + 0x14u) - 1u)) >> 0x1fu;
        if (!(zf || sf != of))
        {
            if ((int32_t)eax <= 4)
            {
                if ((uint8_t)arg1 == 0u)
                {
                    wr8(eax + self + 0x2eu, rd8(self + 0x33u));
                }
            }
        }
    }
    t8 = rd32(self + 8u);
    wr32(self + 0x14u, 0u);
    if (t8 != 0u)
    {
        eax = t8;
        wr8(eax + 0x61u, 1u);
        wr8(rd32(self + 8u) + 0x62u, 1u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e5130(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e5130(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
