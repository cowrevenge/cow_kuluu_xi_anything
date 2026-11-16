/* f_0x10202f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10202f00(Guest* g)
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
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
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
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if (rd32(COW_IMG(0x106643e8u)) == 0u) goto L_10202f39;
    if (rd32(COW_IMG(0x106643fcu)) == 0u) goto L_10202f39;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->esp = sp0 - 8u;
    cow_thiscall_cdecl(g, rd32(COW_IMG(0x106643e4u)), self, 2, sp0 - 8u, 0u);
    return;
L_10202f39: ;
    if (rd32(COW_IMG(0x106643e4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643e4u));
        ecx = self;
        edx = in_edx;
    }
    else
    {
        eax = rd32(COW_IMG(0x106643e4u));
        wr32(sp0 - 0xcu, 0u);
        wr32(sp0 - 0x10u, sp0 - 8u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, eax, sp0 - 8u, 2, sp0 - 8u, 0u);
        t1 = g->ecx;
        t2 = g->edx;
        if (rd32(COW_IMG(0x106643ecu)) == 0u)
        {
            eax = rd32(COW_IMG(0x106643ecu));
            ecx = t1;
            edx = t2;
        }
        else
        {
            eax = rd32(COW_IMG(0x106643ecu));
            wr32(sp0 - 0xcu, 1u);
            t3 = rd32(eax + 8u);
            wr32(sp0 - 0x10u, t3);
            g->eax = eax;
            g->esp = sp0 - 8u;
            t4 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t3, 2, t3, 1u);
            t5 = g->ecx;
            t6 = g->edx;
            if (rd8(COW_IMG(0x106643f0u)) == 0u)
            {
                eax = (t4 & 0xffffff00u) | rd8(COW_IMG(0x106643f0u));
                ecx = t5;
                edx = t6;
                if (rd8(COW_IMG(0x106643f1u)) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643f1u));
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643f1u));
                    if (rd8(COW_IMG(0x106643f2u)) == 0u)
                    {
                        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x106643f2u));
                    }
                    else
                    {
                        wr32(sp0 - 0xcu, 1u);
                        t12 = rd32(rd32(COW_IMG(0x106643ecu)) + 8u);
                        wr32(sp0 - 0x10u, t12);
                        g->edx = rd32(COW_IMG(0x106643ecu));
                        t13 = rd32(COW_IMG(0x106643ecu));
                        g->esp = sp0 - 8u;
                        t14 = cow_call_regs(g, COW_IMG(0x1015e790u), t12, COW_IMG(0x10621838u), g->edx, 0, 2, t12, 1u);
                        t15 = g->ecx;
                        t16 = g->edx;
                        eax = t14;
                        ecx = t15;
                        edx = t16;
                    }
                }
            }
            else
            {
                edx = t6;
                t7 = rd32(rd32(COW_IMG(0x106643ecu)) + 8u);
                wr32(sp0 - 0xcu, t7);
                g->edx = edx;
                t8 = rd32(COW_IMG(0x106643ecu));
                g->esp = sp0 - 8u;
                t9 = cow_call_regs(g, COW_IMG(0x1015e530u), t8, COW_IMG(0x10621838u), g->edx, 0, 1, t7);
                t10 = g->ecx;
                t11 = g->edx;
                eax = t9;
                ecx = t10;
                edx = t11;
            }
        }
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t17 = cow_stdcall(g, COW_IMG(0x10202d10u), 0);
    t18 = g->edx;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    g->edx = t18;
    t19 = cow_thiscall(g, COW_IMG(0x10157780u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    t20 = g->edx;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    cow_thiscall(g, COW_IMG(0x10157860u), rd32(COW_IMG(0x1057876cu)), 2, 0u, 0u);
    wr8(rd32(COW_IMG(0x1057876cu)) + 0x58u, 0u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10202f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10202f00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
