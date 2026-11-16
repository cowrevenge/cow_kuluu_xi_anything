/* f_0x101202d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101202d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t21;
    uint32_t t22;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 4u, self);
    wr32(sp0 - 0x18u, rd32(arg1));
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x101203f0u), self, 1, rd32(arg1));
    t2 = g->edx;
    wr32(sp0 - 0xcu, t1);
    if (t1 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
    }
    else
    {
        edx = t2;
        esi = t1;
        loc_c = t1;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_ebp);
        edi = self;
L_101202ff: ;
        wr32(sp0 - 0x20u, esi);
        g->esp = sp0 - 0x1cu;
        t3 = cow_fastcall(g, COW_IMG(0x10126620u), edi, edx, 1, esi);
        t4 = g->edx;
        if (t3 != 0u)
        {
            edx = t4;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t5 = cow_thiscall(g, COW_IMG(0x10126500u), COW_IMG(0x10621854u), 0);
            t6 = g->edx;
            wr32(sp0 - 8u, t5);
            if (t5 == 0u)
            {
                eax = t5;
                edx = t6;
                goto L_101203ae;
            }
            loc_8 = t5;
L_10120325: ;
            wr32(sp0 - 0x20u, sp0 - 8u);
            g->esp = sp0 - 0x1cu;
            t7 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, sp0 - 8u, 0, 1, sp0 - 8u);
            t8 = g->edx;
            if (t7 == 0u)
            {
                edx = t8;
            }
            else
            {
                edx = t8;
                ebx = t7;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t9 = cow_thiscall(g, COW_IMG(0x1011b310u), ebx, 0);
                t10 = g->ecx;
                t11 = g->edx;
                if (t9 == 0u)
                {
                    edx = t11;
                }
                else
                {
                    ecx = t10;
                    edx = t11;
                    edi = t9;
                    if (rd32(edi) != 0u)
                    {
                        eax = rd32(edi);
                        if (rd8(eax + 0x14u) != 0u)
                        {
                            ebp = 0u;
                            esi = 0u;
L_10120358: ;
                            if (rd32(edi + 4u) != 0u)
                            {
                                eax = rd32(edi + 4u);
                                wr32(sp0 - 0x20u, 0x10u);
                                wr32(sp0 - 0x24u, rd32(arg1));
                                t12 = eax + esi + 4u;
                                wr32(sp0 - 0x28u, t12);
                                g->edx = rd32(arg1);
                                t13 = rd32(arg1);
                                g->esp = sp0 - 0x14u;
                                t14 = cow_cdecl(g, COW_IMG(0x10312980u), 5, t12, t13, 0x10u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
                                t15 = g->edx;
                                if (t14 == 0u)
                                {
                                    edx = t15;
                                    g->esp = sp0 - 0x1cu;
                                    t16 = cow_thiscall(g, COW_IMG(0x1011b310u), ebx, 0);
                                    wr32(esi + rd32(t16 + 4u) + 0x18u, 0u);
                                }
                            }
                            if ((int32_t)(ebp + 1u) < (int32_t)rd8(rd32(edi) + 0x14u))
                            {
                                ebp = ebp + 1u;
                                esi = esi + 0x1cu;
                                goto L_10120358;
                            }
                            edx = rd32(edi);
                            esi = rd32(sp0 - 0xcu);
                        }
                    }
                }
            }
            if (rd32(sp0 - 8u) != 0u) goto L_10120325;
            eax = rd32(sp0 - 8u);
            edi = rd32(sp0 - 4u);
L_101203ae: ;
            if (esi != 0u)
            {
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t17 = cow_thiscall(g, COW_IMG(0x1011dff0u), esi, 0);
                t18 = g->ecx;
                t19 = g->edx;
                wr32(sp0 - 0x20u, esi);
                cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t18, t19, 1, 1, esi);
            }
        }
        wr32(sp0 - 0x20u, rd32(arg1));
        g->edx = rd32(arg1);
        t20 = rd32(arg1);
        g->esp = sp0 - 0x1cu;
        t21 = cow_thiscall(g, COW_IMG(0x101203f0u), edi, 1, t20);
        t22 = g->edx;
        wr32(sp0 - 0xcu, t21);
        if (t21 != 0u)
        {
            edx = t22;
            loc_c = t21;
            goto L_101202fb;
        }
        ebx = rd32(sp0 - 0x18u);
        ebp = rd32(sp0 - 0x1cu);
    }
    g->ebx = ebx;
    g->ebp = ebp;
    return;
L_101202fb: ;
    esi = loc_c;
    goto L_101202ff;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101202d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101202d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
