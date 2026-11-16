/* f_0x101a70a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a70a0(Guest* g)
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
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) != 0u)
    {
        eax = rd32(self + 8u);
        t1 = rd8(COW_IMG(0x103d3c84u));
        t2 = rd8(self + 0x20u);
        wr32(sp0 - 0xfu, 0u);
        wr32(sp0 - 0xbu, 0u);
        t3 = (in_edx & 0xffffff00u) | t2;
        wr32(sp0 - 0x18u, t3);
        wr32(sp0 - 7u, 0u);
        wr8(sp0 - 0x10u, (uint8_t)t1);
        wr16(sp0 - 3u, 0u);
        wr8(sp0 - 1u, 0u);
        g->eax = (eax & 0xffffff00u) | t1;
        g->edx = t3;
        t4 = rd32(self + 0x14u);
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x101a8960u), t4, 1, t3);
        t6 = g->ecx;
        t7 = g->edx;
        if (t5 == 0u)
        {
            ecx = t6;
            edx = t7;
            wr8(sp0 - 0x10u, 0u);
        }
        else
        {
            eax = t5;
            edx = t7;
            t8 = (eax & 0xffffff00u) | rd8(self + 0x20u);
            wr32(sp0 - 0x18u, t8);
            g->eax = t8;
            t9 = rd32(self + 0x14u);
            g->esp = sp0 - 0x14u;
            t10 = cow_thiscall(g, COW_IMG(0x101a8960u), t9, 1, t8);
            t11 = g->ecx;
            eax = t10;
            ecx = t11;
            edx = sp0 - 0x10u;
L_101a70f1: ;
            t12 = rd8(eax);
            wr8(edx, (uint8_t)t12);
            if ((uint8_t)t12 != 0u)
            {
                eax = eax + 1u;
                ecx = (ecx & 0xffffff00u) | t12;
                edx = edx + 1u;
                goto L_101a70f1;
            }
            ecx = (ecx & 0xffffff00u) | t12;
            edx = edx + 1u;
        }
        if (rd32(self + 0x1cu) != 0u)
        {
            eax = rd32(self + 0x1cu);
        }
        else
        {
            eax = rd32(self + 0x1cu);
            wr32(sp0 - 0x18u, 0x6b4u);
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
            t14 = g->edx;
            if (t13 == 0u)
            {
                edx = t14;
                eax = 0u;
            }
            else
            {
                eax = t13;
                edx = t14;
                wr32(sp0 - 0x18u, 0x114u);
                wr32(sp0 - 0x1cu, 0xfu);
                wr32(sp0 - 0x20u, 0x14au);
                wr32(sp0 - 0x24u, sp0 - 0x10u);
                wr32(sp0 - 0x28u, COW_IMG(0x101a7090u));
                wr32(sp0 - 0x2cu, self);
                wr32(sp0 - 0x30u, 0xfu);
                wr32(sp0 - 0x34u, 4u);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                t15 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 4u, 0xfu, self, COW_IMG(0x101a7090u), sp0 - 0x10u, 0x14au, 0xfu, 0x114u);
                t16 = g->edx;
                eax = t15;
                edx = t16;
            }
            wr32(self + 0x1cu, eax);
        }
        g->esp = sp0 - 0x14u;
        t17 = cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
        t18 = rd32(self + 0x1cu);
        wr32(sp0 - 0x18u, t18);
        cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t18);
        wr8(rd32(self + 8u) + 0x61u, 0u);
        wr8(rd32(self + 8u) + 0x62u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a70a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a70a0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
