/* f_0x1000ca00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1000ca00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
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
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd8(self + 0x828u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x828u);
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
        ebp = in_ebp;
        edi = in_edi;
        loc_10 = in_ebx;
        loc_14 = in_esi;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x828u);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x14u;
        t1 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
        t2 = g->edx;
        if ((uint8_t)t1 == 0u)
        {
            eax = t1;
            edx = t2;
            ebx = in_ebx & 0xffffff00u;
            ebp = in_ebp;
            edi = in_edi;
            loc_10 = in_ebx;
            loc_14 = in_esi;
        }
        else
        {
            wr32(sp0 - 0x18u, in_ebp);
            wr32(sp0 - 0x1cu, in_edi);
            wr32(sp0 - 0x20u, sp0 - 8u);
            t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
            wr32(sp0 - 0x24u, t3);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(rd32(t3) + 0x80u), rd32(t3), 2, t3, sp0 - 8u);
            wr32(sp0 - 0x20u, sp0 - 0xcu);
            wr32(sp0 - 0x24u, 0u);
            t4 = rd32(self + 0x194u);
            wr32(sp0 - 0x28u, t4);
            cow_thiscall(g, rd32(rd32(rd32(self + 0x194u)) + 0x3cu), rd32(rd32(self + 0x194u)), 3, t4, 0u, sp0 - 0xcu);
            wr32(sp0 - 0x20u, sp0 - 4u);
            wr32(sp0 - 0x24u, 0u);
            t5 = rd32(self + 0x198u);
            wr32(sp0 - 0x28u, t5);
            cow_thiscall(g, rd32(rd32(rd32(self + 0x198u)) + 0x3cu), rd32(rd32(self + 0x198u)), 3, t5, 0u, sp0 - 4u);
            if (rd32(sp0 - 8u) == rd32(sp0 - 0xcu))
            {
                ecx = rd32(sp0 - 0xcu);
                goto L_1000ca82;
            }
            eax = rd32(sp0 - 8u);
            ecx = rd32(sp0 - 0xcu);
            if (eax != rd32(sp0 - 4u))
            {
                ebx = in_ebx & 0xffffff00u;
                goto L_1000caa3;
            }
L_1000ca82: ;
            t6 = rd32(self + 0x198u);
            wr32(arg1, t6);
            t7 = rd32(self + 0x1a8u);
            wr32(arg2, t7);
            if (rd32(arg1) == 0u)
            {
                eax = t7;
                goto L_1000caa1;
            }
            eax = t7;
            if (eax == 0u) goto L_1000caa1;
            ebx = (in_ebx & 0xffffff00u) | 1u;
L_1000caa3: ;
            wr32(sp0 - 0x20u, ecx);
            g->edx = rd32(ecx);
            t8 = rd32(ecx);
            g->esp = sp0 - 0x1cu;
            cow_thiscall(g, rd32(t8 + 8u), ecx, 1, ecx);
            t9 = g->edx;
            t10 = rd32(sp0 - 4u);
            wr32(sp0 - 0x20u, t10);
            g->edx = t9;
            t11 = rd32(t10);
            cow_thiscall(g, rd32(t11 + 8u), t11, 1, t10);
            t12 = g->ecx;
            t13 = g->edx;
            if ((uint8_t)ebx == 1u)
            {
                ecx = t12;
                edx = t13;
            }
            else
            {
                wr32(sp0 - 0x20u, sp0 - 0xcu);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, rd32(COW_IMG(0x10456d50u)));
                g->edx = rd32(rd32(COW_IMG(0x10456d50u)));
                t14 = rd32(rd32(COW_IMG(0x10456d50u)));
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(t14 + 0x3cu), sp0 - 0xcu, 3, rd32(COW_IMG(0x10456d50u)), 0u, sp0 - 0xcu);
                t15 = g->edx;
                if (rd32(sp0 - 8u) != rd32(sp0 - 0xcu))
                {
                    eax = rd32(sp0 - 0xcu);
                    edx = t15;
                }
                else
                {
                    eax = rd32(sp0 - 0xcu);
                    t16 = rd32(COW_IMG(0x10456d54u));
                    wr32(arg1, t16);
                    t17 = rd32(self + 0x1a8u);
                    wr32(arg2, t17);
                    if (rd32(arg1) == 0u)
                    {
                        edx = t16;
                        goto L_1000caf5;
                    }
                    edx = t16;
                    esi = t17;
                    if (esi == 0u) goto L_1000caf5;
                    ebx = (ebx & 0xffffff00u) | 1u;
                }
L_1000caf7: ;
                wr32(sp0 - 0x20u, eax);
                g->edx = edx;
                t18 = rd32(eax);
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, rd32(t18 + 8u), t18, 1, eax);
                t19 = g->ecx;
                t20 = g->edx;
                ecx = t19;
                edx = t20;
            }
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                ebp = rd32(sp0 - 0x18u);
                edi = rd32(sp0 - 0x1cu);
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
            else
            {
                eax = rd32(sp0 - 8u);
                ebp = rd32(sp0 - 0x18u);
                edi = rd32(sp0 - 0x1cu);
                wr32(sp0 - 0x18u, eax);
                g->eax = eax;
                g->edx = rd32(eax);
                t21 = rd32(eax);
                g->esp = sp0 - 0x14u;
                t22 = cow_thiscall(g, rd32(t21 + 8u), ecx, 1, eax);
                t23 = g->edx;
                eax = t22;
                edx = t23;
                loc_10 = rd32(sp0 - 0x10u);
                loc_14 = rd32(sp0 - 0x14u);
            }
        }
    }
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = edi;
    g->ebp = ebp;
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_1000caa1: ;
    ebx = in_ebx & 0xffffff00u;
    goto L_1000caa3;
L_1000caf5: ;
    ebx = ebx & 0xffffff00u;
    goto L_1000caf7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000ca00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000ca00(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
