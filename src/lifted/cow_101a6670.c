/* f_0x101a6670 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101a6670(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_esi);
    if (rd32(self + 8u) == 0u)
    {
        edi = in_edi;
    }
    else
    {
        if ((int32_t)rd32(self + 0x1cu) < 0)
        {
            edi = in_edi;
        }
        else
        {
            eax = rd32(self + 0x1cu);
            if ((int32_t)eax >= 20)
            {
                edi = in_edi;
            }
            else
            {
                wr32(sp0 - 0x18u, in_edi);
                t1 = rd32(rd32(COW_IMG(0x106627c4u)) + 0x1cu) + rd8(rd32(COW_IMG(0x106627c4u)) + 0x6cu) * 0x14u;
                wr32(sp0 - 0x1cu, t1);
                g->edx = in_edx;
                t2 = rd8(rd32(COW_IMG(0x106627c4u)) + 0x6cu);
                t3 = rd32(self + 0x14u);
                g->esp = sp0 - 0x18u;
                t4 = cow_thiscall(g, COW_IMG(0x101a29f0u), t3, 1, t1);
                t5 = g->ecx;
                t6 = g->edx;
                if (t4 == 0u)
                {
                    ecx = t5;
                    edx = t6;
                    loc_10 = rd32(sp0 - 0x10u) & 0xffffff00u;
                }
                else
                {
                    edx = t6;
                    edi = t1;
                    wr32(sp0 - 0x1cu, edi);
                    t7 = rd32(self + 0x14u);
                    g->esp = sp0 - 0x18u;
                    t8 = cow_thiscall(g, COW_IMG(0x101a29f0u), t7, 1, edi);
                    t9 = g->ecx;
                    eax = t8;
                    ecx = t9;
                    edx = sp0 - 0x10u;
L_101a66c4: ;
                    t10 = rd8(eax);
                    wr8(edx, (uint8_t)t10);
                    if ((uint8_t)t10 != 0u)
                    {
                        eax = eax + 1u;
                        ecx = (ecx & 0xffffff00u) | t10;
                        edx = edx + 1u;
                        goto L_101a66c4;
                    }
                    ecx = (ecx & 0xffffff00u) | t10;
                    edx = edx + 1u;
                }
                if (rd32(self + 0x20u) != 0u)
                {
                    eax = rd32(self + 0x20u);
                    edi = rd32(sp0 - 0x18u);
                }
                else
                {
                    edi = rd32(sp0 - 0x18u);
                    wr32(sp0 - 0x18u, 0x6b4u);
                    g->edx = edx;
                    g->esp = sp0 - 0xcu;
                    t11 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x6b4u, rd32(sp0 - 0x14u), loc_10);
                    t12 = g->edx;
                    if (t11 == 0u)
                    {
                        edx = t12;
                        eax = 0u;
                    }
                    else
                    {
                        eax = t11;
                        wr32(sp0 - 0x18u, 0x114u);
                        wr32(sp0 - 0x1cu, 0xfu);
                        wr32(sp0 - 0x20u, 0x14au);
                        wr32(sp0 - 0x24u, sp0 - 0x10u);
                        wr32(sp0 - 0x28u, COW_IMG(0x101a6660u));
                        wr32(sp0 - 0x2cu, self);
                        wr32(sp0 - 0x30u, 0xfu);
                        wr32(sp0 - 0x34u, 4u);
                        g->edx = sp0 - 0x10u;
                        g->esp = sp0 - 0x14u;
                        t13 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 4u, 0xfu, self, COW_IMG(0x101a6660u), sp0 - 0x10u, 0x14au, 0xfu, 0x114u);
                        t14 = g->edx;
                        eax = t13;
                        edx = t14;
                    }
                    wr32(self + 0x20u, eax);
                }
                g->esp = sp0 - 0x14u;
                cow_call_regs(g, COW_IMG(0x101c68a0u), eax, rd32(COW_IMG(0x10662da0u)), edx, 1, 0);
                t15 = g->edx;
                t16 = rd32(self + 0x20u);
                wr32(sp0 - 0x18u, t16);
                cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t16);
                wr8(rd32(self + 8u) + 0x61u, 0u);
                wr8(rd32(self + 8u) + 0x62u, 0u);
            }
        }
    }
    g->edi = edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6670(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101a6670(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
