/* f_0x101e1000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e1000(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self + 0x70u, 2u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101e06c0u), self, 0);
    t1 = g->edx;
    t2 = rd32(rd32(COW_IMG(0x10663740u)) + 0x5cu);
    wr32(self + 0x4cu, t2);
    if (rd32(COW_IMG(0x106634c8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x106634c8u));
        edx = t1;
    }
    else
    {
        eax = rd32(COW_IMG(0x106634c8u));
        ecx = t2;
        edx = t1;
        g->eax = eax;
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, 0x14u);
        t4 = g->edx;
        if (t3 == 0u)
        {
            edx = t4;
            eax = 0u;
        }
        else
        {
            eax = t3;
            edx = t4;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t5 = cow_thiscall(g, COW_IMG(0x101e2dc0u), eax, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
        }
        wr32(COW_IMG(0x106634c8u), eax);
    }
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101e2b60u), rd32(COW_IMG(0x106634c4u)), edx, 3, eax, 0xc8u, 0x30u);
    t7 = rd32(COW_IMG(0x106634d0u));
    wr8(t7 + 4u, 0u);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t7 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101e1077;
    }
    eax = rd32(COW_IMG(0x10456a28u));
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t7 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_101e108d;
    if (ecx == 3u) goto L_101e108d;
L_101e1077: ;
    if (ecx == 0u)
    {
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f2c4u), 1u, ecx);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
L_101e108d: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f2b0u), 1u, 0u);
    t10 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = t10;
    }
    else
    {
        eax = rd32(self + 8u);
        edx = t10;
        wr8(eax + 0x63u, 0u);
    }
    if (rd32(COW_IMG(0x10578204u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578204u));
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x1013e3b0u), eax, ecx, edx, 0, 4, 0u, 1u, 0u, 0u);
        t11 = g->edx;
        edx = t11;
    }
    t12 = rd32(rd32(COW_IMG(0x106634bcu)) + 8u);
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t12, 1u, 1u, 0u, 0u);
    t13 = rd32(rd32(COW_IMG(0x106634c4u)) + 8u);
    g->eax = t13;
    t14 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), rd32(COW_IMG(0x106634c4u)), 2, t13, 0u);
    return (t14 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e1000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e1000(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
