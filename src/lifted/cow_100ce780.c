/* f_0x100ce780 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100ce780(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 76u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x24u, 0u);
    if (arg2 != 0x74696e69u)
    {
        edi = arg2;
        loc_2c = in_ebx;
        loc_30 = in_ebp;
        loc_34 = in_esi;
        loc_38 = in_edi;
        loc_24 = 0u;
    }
    else
    {
        wr32(sp0 - 0x3cu, sp0 - 0x20u);
        g->eax = rd32(self);
        t1 = rd32(self);
        g->esp = sp0 - 0x38u;
        t2 = cow_thiscall(g, rd32(t1 + 0x1dcu), self, 1, sp0 - 0x20u);
        if (rd32(t2) == 0u)
        {
            edi = arg2;
            loc_2c = in_ebx;
            loc_30 = in_ebp;
            loc_34 = in_esi;
            loc_38 = in_edi;
            loc_24 = 0u;
        }
        else
        {
            eax = rd32(t2);
            if (rd32(eax) == 0u)
            {
                edi = arg2;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_24 = rd32(sp0 - 0x24u);
            }
            else
            {
                edi = 0x30696e69u;
                loc_2c = rd32(sp0 - 0x2cu);
                loc_30 = rd32(sp0 - 0x30u);
                loc_34 = rd32(sp0 - 0x34u);
                loc_38 = rd32(sp0 - 0x38u);
                loc_24 = rd32(sp0 - 0x24u);
            }
        }
    }
    wr32(sp0 - 0x3cu, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->edx = rd32(self);
    t3 = rd32(self);
    g->esp = sp0 - 0x38u;
    t4 = cow_thiscall(g, rd32(t3 + 0x400u), self, 1, sp0 - 0x20u);
    t5 = g->edx;
    wr32(sp0 - 0x28u, rd32(t4));
    if (rd32(t4) != 0u)
    {
        eax = rd32(t4);
        edx = t5;
        loc_28 = rd32(t4);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t6 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
        t7 = g->edx;
        if ((uint8_t)t6 != 0u)
        {
            edx = t7;
            if (rd32(sp0 - 0x28u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
                eax = rd32(eax);
            }
            esi = rd32(eax + 0x14u);
L_100ce7f7: ;
            if (esi == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(esi);
            }
            wr32(sp0 - 0x3cu, arg3);
            wr32(sp0 - 0x40u, edi);
            wr32(sp0 - 0x44u, arg1);
            wr32(sp0 - 0x48u, eax);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, edi, arg3);
            t8 = g->edx;
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                edx = t8;
                goto L_100ce836;
            }
            edx = t8;
L_100ce81a: ;
            wr32(sp0 - 0x3cu, 0u);
            t9 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t9);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t10 = g->edx;
            if (rd32(sp0 - 8u) != 0u)
            {
                edx = t10;
                goto L_100ce81a;
            }
            eax = rd32(sp0 - 8u);
            edx = t10;
L_100ce836: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t11 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
            t12 = g->edx;
            if (t11 == 0u) goto L_100ce855;
            eax = t11;
            edx = t12;
            if (eax == rd32(esi)) goto L_100ce855;
            t13 = rd32(COW_IMG(0x1047d130u)) - 1u;
            t14 = rd32(eax + 0x14u);
            wr32(COW_IMG(0x1047d130u), t13);
            esi = t14;
            goto L_100ce7f7;
        }
    }
L_100ce855: ;
    wr32(sp0 - 0x3cu, sp0 + 0xcu);
    g->eax = sp0 + 0xcu;
    g->edx = rd32(self);
    t15 = rd32(self);
    g->esp = sp0 - 0x38u;
    t16 = cow_thiscall(g, rd32(t15 + 0x1dcu), self, 1, sp0 + 0xcu);
    t17 = g->edx;
    wr32(sp0 - 0x28u, rd32(t16));
    if (rd32(t16) == 0u)
    {
        edx = t17;
        goto L_100ce8f2;
    }
    eax = rd32(t16);
    edx = t17;
    loc_28 = rd32(t16);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t18 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        edx = t19;
        goto L_100ce8f2;
    }
    edx = t19;
    if (rd32(sp0 - 0x28u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(sp0 - 0x28u);
        eax = rd32(eax);
    }
    esi = rd32(eax + 0x14u);
L_100ce890: ;
    if (esi == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(esi);
    }
    wr32(sp0 - 0x3cu, arg3);
    wr32(sp0 - 0x40u, arg2);
    wr32(sp0 - 0x44u, arg1);
    wr32(sp0 - 0x48u, eax);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, arg2, arg3);
    t20 = g->edx;
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        edx = t20;
        goto L_100ce8d3;
    }
    edx = t20;
L_100ce8b7: ;
    wr32(sp0 - 0x3cu, 0u);
    t21 = rd32(sp0 - 0x24u) + 1u;
    wr32(sp0 - 0x24u, t21);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t22 = g->edx;
    if (rd32(sp0 - 8u) != 0u)
    {
        edx = t22;
        goto L_100ce8b7;
    }
    eax = rd32(sp0 - 8u);
    edx = t22;
L_100ce8d3: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t23 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
    t24 = g->edx;
    if (t23 == 0u)
    {
        edx = t24;
        goto L_100ce8f6;
    }
    eax = t23;
    edx = t24;
    if (eax == rd32(esi)) goto L_100ce8f6;
    t25 = rd32(COW_IMG(0x1047d130u)) - 1u;
    t26 = rd32(eax + 0x14u);
    wr32(COW_IMG(0x1047d130u), t25);
    esi = t26;
    goto L_100ce890;
L_100ce8f2: ;
L_100ce8f6: ;
    if (rd32(self + 0x7e4u) == 0u) goto L_100ce996;
    ebx = rd32(self + 0x7e4u);
L_100ce904: ;
    t27 = rd32(ebx + 0x1cu);
    wr32(sp0 - 0x28u, t27);
    if (rd32(ebx + 0x1cu) != 0u)
    {
        eax = t27;
        loc_28 = t27;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t28 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 - 0x28u, 0);
        t29 = g->edx;
        if ((uint8_t)t28 == 0u)
        {
            edx = t29;
        }
        else
        {
            if (rd32(sp0 - 0x28u) == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(sp0 - 0x28u);
                eax = rd32(eax);
            }
            esi = rd32(eax + 0x14u);
L_100ce92d: ;
            if (esi == 0u)
            {
                eax = 0u;
            }
            else
            {
                eax = rd32(esi);
            }
            wr32(sp0 - 0x3cu, arg3);
            wr32(sp0 - 0x40u, arg2);
            wr32(sp0 - 0x44u, arg1);
            wr32(sp0 - 0x48u, eax);
            g->edx = arg2;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, eax, arg1, arg2, arg3);
            t30 = g->edx;
            if (rd32(sp0 - 8u) == 0u)
            {
                eax = rd32(sp0 - 8u);
                edx = t30;
                goto L_100ce96c;
            }
            edx = t30;
L_100ce950: ;
            wr32(sp0 - 0x3cu, 0u);
            t31 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t31);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
            t32 = g->edx;
            if (rd32(sp0 - 8u) != 0u)
            {
                edx = t32;
                goto L_100ce950;
            }
            eax = rd32(sp0 - 8u);
            edx = t32;
L_100ce96c: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t33 = cow_thiscall(g, COW_IMG(0x10072270u), rd32(esi), 0);
            t34 = g->edx;
            if (t33 == 0u)
            {
                edx = t34;
                goto L_100ce98b;
            }
            eax = t33;
            edx = t34;
            if (eax == rd32(esi)) goto L_100ce98b;
            t35 = rd32(COW_IMG(0x1047d130u)) - 1u;
            t36 = rd32(eax + 0x14u);
            wr32(COW_IMG(0x1047d130u), t35);
            esi = t36;
            goto L_100ce92d;
        }
    }
L_100ce98b: ;
    if (rd32(ebx + 4u) != 0u)
    {
        ebx = rd32(ebx + 4u);
        goto L_100ce904;
    }
L_100ce996: ;
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    return rd32(sp0 - 0x24u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ce780(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ce780(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
