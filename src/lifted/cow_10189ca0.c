/* f_0x10189ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10189ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_38;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
    uint32_t loc_50;
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
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
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
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_esi);
    wr32(sp0 - 0x50u, in_edi);
    wr32(sp0 - 0x54u, sp0 - 0x40u);
    wr32(sp0 - 0x34u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    cow_thiscall(g, COW_IMG(0x10189c60u), self, 1, sp0 - 0x40u);
    t1 = g->edx;
    wr32(sp0 - 0x54u, 0x6f3c9000u);
    g->edx = t1;
    t2 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x3cu, 1, 0x6f3c9000u);
    t3 = g->edx;
    wr32(sp0 - 0x38u, 0u);
    if (rd32(self + 0xcu) == 0u)
    {
        edi = 0u;
        goto L_10189e01;
    }
    eax = t2;
    edx = t3;
    esi = rd32(self + 0xcu);
    wr32(sp0 - 0x54u, 0x6f646e69u);
    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, sp0 - 0x2cu);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t4 = cow_call_regs(g, COW_IMG(0x100724c0u), eax, esi, g->edx, 0, 3, sp0 - 0x2cu, 1u, 0x6f646e69u);
    t5 = g->edx;
    if (rd32(t4) == 0u)
    {
        eax = rd32(t4);
        edx = t5;
        ebx = 0u;
    }
    else
    {
        eax = rd32(t4);
        edx = t5;
        ebx = rd32(eax);
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t6 = cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t7 = g->edx;
    wr32(sp0 - 0x54u, 0xffffffffu);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0x3du);
    wr32(sp0 - 0x60u, esi);
    g->edx = t7;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, esi, 0x3du, 0u, 0xffffffffu);
    t8 = g->edx;
    wr32(sp0 - 0x54u, 0u);
    g->edx = t8;
    t9 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t10 = g->edx;
    if (t9 == 0u)
    {
        edi = 0u;
        goto L_10189e01;
    }
    edx = t10;
    esi = t9;
    ebp = self;
    edi = 0u;
L_10189d27: ;
    if (rd32(esi + 0x28u) == 0u)
    {
        eax = rd32(esi + 0x28u);
        ecx = 0u;
    }
    else
    {
        eax = rd32(esi + 0x28u);
        ecx = rd32(eax);
    }
    if (ecx != ebx)
    {
        ecx = rd32(COW_IMG(0x1065cb04u));
        goto L_10189d4c;
    }
    ecx = rd32(COW_IMG(0x1065cb04u));
    if (rd32(ecx + 0x1bcu) == 0u)
    {
        edx = rd32(ecx + 0x1bcu);
        goto L_10189de4;
    }
    edx = rd32(ecx + 0x1bcu);
L_10189d4c: ;
    if (ebx == 0u) goto L_10189d68;
    if (eax == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(eax);
    }
    if (eax == ebx) goto L_10189d68;
    if (rd32(ecx + 0x1bcu) != 0u) goto L_10189de4;
    eax = rd32(ecx + 0x1bcu);
L_10189d68: ;
    wr32(sp0 - 0x54u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t11 = cow_call_regs(g, COW_IMG(0x10189bd0u), eax, g->ecx, g->edx, 0, 1, esi);
    t12 = g->edx;
    if ((uint8_t)t11 == 0u)
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        wr32(sp0 - 0x54u, sp0 - 0x28u);
        g->eax = eax;
        g->edx = sp0 - 0x28u;
        t13 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x50u;
        t14 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x28u);
        t15 = g->edx;
        if ((int32_t)rd32(t14) >= (int32_t)t13)
        {
            edx = t15;
        }
        else
        {
            edx = t15;
            wr32(sp0 - 0x54u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0x50u;
            t16 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x24u);
            t17 = g->edx;
            t18 = rd32(sp0 - 0x40u) - rd32(t16);
            wr32(sp0 - 0x54u, t18);
            cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x30u, 1, t18);
            if ((int32_t)rd32(sp0 - 0x30u) >= (int32_t)rd32(sp0 - 0x3cu))
            {
                edx = rd32(sp0 - 0x30u);
            }
            else
            {
                edx = rd32(sp0 - 0x30u);
                wr32(sp0 - 0x54u, sp0 - 0x20u);
                g->eax = sp0 - 0x20u;
                g->edx = edx;
                g->esp = sp0 - 0x50u;
                t19 = cow_thiscall(g, COW_IMG(0x10072180u), esi, 1, sp0 - 0x20u);
                t20 = g->edx;
                t21 = rd32(sp0 - 0x40u) - rd32(t19);
                wr32(sp0 - 0x54u, t21);
                t22 = rd32(t19);
                t23 = cow_thiscall(g, COW_IMG(0x1018bbc0u), sp0 - 0x2cu, 1, t21);
                t24 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x54u, t24);
                g->edx = t24;
                cow_thiscall(g, COW_IMG(0x1018bc40u), sp0 - 0x3cu, 1, t24);
                t25 = g->edx;
                wr32(sp0 - 0x38u, esi);
                edx = t25;
                loc_38 = esi;
            }
        }
        edi = esi;
    }
L_10189de4: ;
    wr32(sp0 - 0x54u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x50u;
    t26 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t27 = g->edx;
    if (t26 != 0u)
    {
        edx = t27;
        esi = t26;
        goto L_10189d23;
    }
    if (rd32(sp0 - 0x38u) != 0u)
    {
        eax = rd32(sp0 - 0x38u);
        goto L_10189e17;
    }
L_10189e01: ;
    if (edi != 0u)
    {
        eax = edi;
        loc_44 = in_ebx;
        loc_48 = in_ebp;
        loc_4c = in_esi;
        loc_50 = in_edi;
        goto L_10189e17;
    }
    wr32(arg1, edi);
    return;
L_10189d23: ;
    ebp = rd32(sp0 - 0x34u);
    goto L_10189d27;
L_10189e17: ;
    t28 = rd32(eax + 0x14u);
    wr32(arg1, t28);
    g->ebx = loc_44;
    g->esi = loc_4c;
    g->edi = loc_50;
    g->ebp = loc_48;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10189ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10189ca0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
