/* f_0x100d2220 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d2220(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
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
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        ebp = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100d2448;
    }
    eax = t1;
    edx = t2;
    if ((int32_t)eax <= 1) goto L_100d2243;
    if (eax != 6u)
    {
        ebp = in_ebp;
        loc_10 = in_ebx;
        loc_14 = in_esi;
        loc_18 = in_edi;
        goto L_100d2448;
    }
L_100d2243: ;
    if ((int32_t)arg1 < 280) goto L_100d2271;
    wr32(sp0 - 0x1cu, arg1);
    g->eax = rd32(self);
    g->edx = edx;
    t3 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t4 = cow_thiscall(g, rd32(t3 + 0xccu), self, 0);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x20u, t4);
    wr32(sp0 - 0x24u, COW_IMG(0x1035f9c0u));
    g->esp = sp0 - 0x24u;
    cow_stdcall(g, COW_IMG(0x10017d30u), 0);
    return;
L_100d2271: ;
    wr32(sp0 - 0x1cu, in_ebp);
    g->eax = eax;
    g->edx = rd32(self);
    t7 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t8 = cow_thiscall(g, rd32(t7 + 0x3d8u), self, 0);
    t9 = g->edx;
    if ((int32_t)arg1 >= 70)
    {
        eax = (t8 & 0xffffff00u) | rd8(t8 + 9u) == 1u;
        edx = t9;
        if ((int32_t)arg1 >= 140)
        {
            if ((int32_t)arg1 >= 210)
            {
                if ((uint8_t)eax != 0u)
                {
                    ebx = arg1 + 0x18ed3u;
                    ebp = arg1 + 0x18e8du;
                }
                else
                {
                    ebx = arg1 + 0x18f19u;
                    ebp = arg1 + 0x18e8du;
                }
            }
            else
            {
                if ((uint8_t)eax == 0u)
                {
                    ebx = arg1 + 0x15711u;
                    ebp = arg1 + 0x15685u;
                }
                else
                {
                    ebx = arg1 + 0x156cbu;
                    ebp = arg1 + 0x15685u;
                }
            }
        }
        else
        {
            if ((uint8_t)eax == 0u)
            {
                ebx = arg1 + 0xef7fu;
                ebp = arg1 + 0xeef3u;
            }
            else
            {
                ebx = arg1 + 0xef39u;
                ebp = arg1 + 0xeef3u;
            }
        }
    }
    else
    {
        eax = (t8 & 0xffffff00u) | rd8(t8 + 9u) == 1u;
        edx = t9;
        if ((uint8_t)eax == 0u)
        {
            ebx = arg1 + 0x8054u;
            ebp = arg1 + 0x7fc8u;
        }
        else
        {
            ebx = arg1 + 0x800eu;
            ebp = arg1 + 0x7fc8u;
        }
    }
    wr32(sp0 - 0x20u, ebp);
    wr32(sp0 - 0x24u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 8u, ebp);
    t11 = g->edx;
    wr32(sp0 - 0xcu, rd32(t10));
    if (rd32(t10) == 0u)
    {
        eax = rd32(t10);
    }
    else
    {
        eax = rd32(t10);
        edx = t11;
        loc_c = rd32(t10);
        wr32(sp0 - 0x20u, 2u);
        wr32(sp0 - 0x24u, ebp);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t12 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 1u, ebp, 2u);
        t13 = g->edx;
        g->edx = t13;
        t14 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
        t15 = g->ecx;
        t16 = g->edx;
        if ((uint8_t)t14 == 0u)
        {
            eax = t14;
            ecx = t15;
            edx = t16;
            wr32(sp0 - 0x20u, 0x14u);
            g->eax = eax;
            g->esp = sp0 - 0x14u;
            t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
            t21 = g->edx;
            if (t20 == 0u)
            {
                eax = t20;
                edx = t21;
                esi = 0u;
            }
            else
            {
                eax = t20;
                edx = t21;
                esi = t20;
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
                t22 = g->edx;
                wr32(sp0 - 0x20u, self);
                t23 = rd32(self + 0x9ecu);
                wr32(esi, t23);
                g->eax = t23;
                g->edx = t22;
                t24 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
                t25 = g->edx;
                wr32(esi + 0x10u, 1u);
                eax = t24;
                edx = t25;
            }
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x24u, self);
            wr32(sp0 - 0x28u, esi);
            wr32(sp0 - 0x2cu, COW_IMG(0x100d1400u));
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t26 = cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), esi, self, 0u);
            eax = t26;
        }
        else
        {
            eax = t14;
            t17 = rd32(self + 0x9ecu);
            wr32(sp0 - 0x20u, t17);
            t18 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x24u, t18);
            g->eax = eax;
            g->esp = sp0 - 0x1cu;
            t19 = cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t18, t17);
            eax = t19;
        }
    }
    g->eax = eax;
    g->edx = rd32(self);
    t27 = rd32(self);
    g->esp = sp0 - 0x1cu;
    t28 = cow_thiscall(g, rd32(t27 + 0x3d8u), self, 0);
    t29 = g->ecx;
    t30 = g->edx;
    if ((int8_t)rd8(t28 + 9u) <= 0)
    {
        ebp = rd32(sp0 - 0x1cu);
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100d2448;
    }
    edx = t30;
    ebp = rd32(sp0 - 0x1cu);
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t31 = cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 - 4u, ebx);
    t32 = g->edx;
    wr32(sp0 - 0xcu, rd32(t31));
    if (rd32(t31) == 0u)
    {
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        goto L_100d2448;
    }
    eax = rd32(t31);
    edx = t32;
    loc_c = rd32(t31);
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, ebx);
    wr32(sp0 - 0x24u, 2u);
    wr32(sp0 - 0x28u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t33 = cow_thiscall(g, COW_IMG(0x100d4410u), self, 4, eax, 2u, ebx, 2u);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0xcu, 0);
    t36 = g->ecx;
    t37 = g->edx;
    if ((uint8_t)t35 == 0u)
    {
        eax = t35;
        ecx = t36;
        edx = t37;
        goto L_100d2401;
    }
    eax = t35;
    t38 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x1cu, t38);
    t39 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x20u, t39);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100d1450u), self, 2, t39, t38);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = ebp;
    return;
L_100d2401: ;
    wr32(sp0 - 0x1cu, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t40 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t41 = g->edx;
    if (t40 == 0u)
    {
        eax = t40;
        edx = t41;
        esi = 0u;
    }
    else
    {
        eax = t40;
        edx = t41;
        esi = t40;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
        t42 = g->edx;
        wr32(sp0 - 0x1cu, self);
        t43 = rd32(self + 0x9ecu);
        wr32(esi, t43);
        g->eax = t43;
        g->edx = t42;
        t44 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
        t45 = g->edx;
        wr32(esi + 0x10u, 2u);
        eax = t44;
        edx = t45;
    }
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, self);
    wr32(sp0 - 0x24u, esi);
    wr32(sp0 - 0x28u, COW_IMG(0x100d1400u));
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x100710f0u), sp0 - 0xcu, 4, COW_IMG(0x100d1400u), esi, self, 0u);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
    loc_18 = rd32(sp0 - 0x18u);
L_100d2448: ;
    g->ebx = loc_10;
    g->esi = loc_14;
    g->edi = loc_18;
    g->ebp = ebp;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d2220(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d2220(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
