/* f_0x102ea716 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102ea716(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t loc_c;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    t1 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x10u;
    t2 = cow_fastcall(g, COW_IMG(0x102ea642u), t1, in_edx, 0);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
    }
    else
    {
        edx = t3;
        esi = t1;
        t4 = rd32(esi + 0x2cu);
        wr32(sp0 - 0x14u, t4);
        t5 = rd32(esi + 0x28u);
        wr32(sp0 - 0x18u, t5);
        t6 = rd32(esi + 8u);
        wr32(sp0 - 0x1cu, t6);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x7cu), rd32(rd32(esi + 8u)), 3, t6, t5, t4);
        t7 = g->edx;
        t8 = rd32(esi + 0x470u);
        wr32(sp0 - 0x14u, t8);
        t9 = rd32(esi + 8u);
        wr32(sp0 - 0x18u, t9);
        g->edx = t7;
        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0xd8u), rd32(rd32(esi + 8u)), 2, t9, t8);
        t10 = g->edx;
        if (rd32(esi + 0x28u) == 0u)
        {
            edx = t10;
        }
        else
        {
            eax = rd32(esi + 0x28u);
            edx = t10;
            wr32(sp0 - 0x14u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t11 = g->edx;
            wr32(esi + 0x28u, 0u);
            edx = t11;
        }
        if (rd32(esi + 0x2cu) != 0u)
        {
            eax = rd32(esi + 0x2cu);
            wr32(sp0 - 0x14u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
            t12 = g->edx;
            wr32(esi + 0x2cu, 0u);
            edx = t12;
        }
        if (rd32(esi + 0x460u) != 1u)
        {
            wr32(sp0 - 0x14u, in_edi);
            wr32(sp0 - 8u, 2u);
            edi = esi + 0x38u;
            loc_14 = in_edi;
            loc_8 = 2u;
L_102ea797: ;
            if (rd32(edi) != 0u)
            {
                eax = rd32(edi);
                if (rd32(edi + 0x10u) == 0u)
                {
                    if (rd32(edi + 8u) != 0u)
                    {
                        wr32(sp0 - 0x18u, sp0 + 4u);
                        wr32(sp0 - 0x1cu, 0u);
                        wr32(sp0 - 0x20u, eax);
                        g->edx = sp0 + 4u;
                        g->esp = sp0 - 0x14u;
                        cow_thiscall(g, rd32(rd32(eax) + 0x3cu), rd32(eax), 3, eax, 0u, sp0 + 4u);
                        t14 = g->edx;
                        wr32(sp0 - 0x18u, 0u);
                        t15 = rd32(sp0 + 4u);
                        wr32(sp0 - 0x1cu, t15);
                        wr32(sp0 - 0x20u, 0u);
                        wr32(sp0 - 0x24u, 0u);
                        t16 = rd32(edi + 8u);
                        wr32(sp0 - 0x28u, t16);
                        t17 = rd32(esi + 8u);
                        wr32(sp0 - 0x2cu, t17);
                        g->edx = t14;
                        cow_thiscall(g, rd32(rd32(rd32(esi + 8u)) + 0x70u), rd32(rd32(esi + 8u)), 6, t17, t16, 0u, 0u, t15, 0u);
                        t18 = g->edx;
                        if (rd32(sp0 + 4u) == 0u)
                        {
                            edx = t18;
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_8 = rd32(sp0 - 8u);
                        }
                        else
                        {
                            eax = rd32(sp0 + 4u);
                            edx = t18;
                            wr32(sp0 - 0x18u, eax);
                            g->edx = edx;
                            g->esp = sp0 - 0x14u;
                            cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
                            t19 = g->edx;
                            wr32(sp0 + 4u, 0u);
                            edx = t19;
                            loc_14 = rd32(sp0 - 0x14u);
                            loc_8 = rd32(sp0 - 8u);
                        }
                    }
                }
                if (rd32(edi) != 0u)
                {
                    eax = rd32(edi);
                    wr32(sp0 - 0x18u, eax);
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
                    t20 = g->edx;
                    wr32(edi, 0u);
                    edx = t20;
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_8 = rd32(sp0 - 8u);
                }
            }
            wr32(sp0 - 8u, loc_8 - 1u);
            if (loc_8 != 1u)
            {
                edi = edi + 4u;
                loc_8 = loc_8 - 1u;
                goto L_102ea797;
            }
            edi = loc_14;
        }
        else
        {
            if (rd32(esi + 0x34u) == 0u)
            {
                edi = in_edi;
            }
            else
            {
                eax = rd32(esi + 0x34u);
                wr32(sp0 - 0x14u, eax);
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
                t13 = g->edx;
                wr32(esi + 0x34u, 0u);
                edx = t13;
                edi = in_edi;
            }
        }
        wr32(esi + 0x460u, 0u);
        eax = 0u;
        loc_4 = rd32(sp0 - 4u);
        loc_c = rd32(sp0 - 0xcu);
        loc_10 = rd32(sp0 - 0x10u);
    }
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102ea716(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102ea716(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
