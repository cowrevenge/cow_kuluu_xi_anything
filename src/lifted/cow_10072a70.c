/* f_0x10072a70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10072a70(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
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
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    if (rd32(self + 0x41u) == 0u)
    {
        eax = rd32(self + 0x41u);
        goto L_10072bb6;
    }
    eax = rd32(self + 0x41u);
    if (eax == 1u) goto L_10072b36;
    eax = eax - 1u;
    if (eax == 1u) goto L_10072a9c;
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    wr32(sp0 - 0x10u, eax);
    edx = in_edx;
    loc_4 = self;
    loc_8 = in_esi;
    loc_c = in_edi;
    loc_10 = eax;
L_10072c16: ;
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t40 = cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, loc_10);
    eax = t40;
L_10072c21: ;
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t41 = rd32(self);
    g->esp = sp0 - 0xcu;
    t42 = cow_thiscall(g, rd32(t41 + 0x18u), self, 1, 1u);
    t43 = g->edx;
    eax = t42;
    edx = t43;
L_10072c2a: ;
    g->edx = edx;
    return eax;
L_10072a9c: ;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    t1 = rd32(self + 0x34u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x101c4a10u), t2, 3, t1, 0u, 0u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((uint8_t)t3 != 0u)
    {
        eax = t3;
        edx = t5;
        goto L_10072c2a;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if (rd8(self + 0x3cu) != 0u) goto L_10072c0c;
    t6 = rd32(self + 0x34u);
    wr32(sp0 - 0x10u, t6);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = rd32(self + 0x38u);
        edx = t6;
        goto L_10072b18;
    }
    eax = rd32(self + 0x38u);
    edx = t6;
    loc_10 = t6;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10074280u), 1, loc_10);
    t7 = rd32(self + 0x3du);
    wr32(sp0 - 0x10u, t7);
    t8 = rd32(self + 0x38u);
    wr32(sp0 - 0x14u, t8);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->eax = t7;
    t9 = cow_thiscall(g, COW_IMG(0x10073430u), rd32(COW_IMG(0x1047d128u)), 3, sp0 - 4u, t8, t7);
    if (rd32(t9) == 0u)
    {
        eax = rd32(t9);
        goto L_10072c21;
    }
    eax = rd32(t9);
    if (rd32(eax) == 0u)
    {
        eax = rd32(eax);
        goto L_10072c21;
    }
    eax = rd32(eax);
    wr8(eax + 0x1au, rd8(eax + 0x1au) | 1u);
    t10 = rd32(self + 0x34u);
    wr32(eax + 0x34u, t10);
    wr32(sp0 - 0x10u, 1u);
    g->eax = eax;
    g->edx = rd32(self);
    t11 = rd32(self);
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, rd32(t11 + 0x18u), self, 1, 1u);
    t13 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t13;
    return t12;
L_10072b18: ;
    wr32(sp0 - 0x14u, COW_IMG(0x10354658u));
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_stdcall(g, COW_IMG(0x10017d20u), 0);
    t14 = g->edx;
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    edx = t14;
    wr32(sp0 - 0x10u, eax);
    loc_10 = eax;
    goto L_10072c16;
L_10072b36: ;
    t15 = rd32(self + 0x34u);
    wr32(sp0 - 0x10u, t15);
    g->eax = t15;
    g->edx = in_edx;
    t16 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0xcu;
    t17 = cow_thiscall(g, COW_IMG(0x101c4ad0u), t16, 1, t15);
    t18 = g->ecx;
    t19 = g->edx;
    if ((uint8_t)t17 != 0u)
    {
        eax = t17;
        edx = t19;
        goto L_10072c2a;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    if (rd8(self + 0x3cu) != 0u) goto L_10072c0c;
    if ((int32_t)rd32(rd32(self + 0x45u) + 4u) <= 0) goto L_10072b94;
    edi = rd32(rd32(self + 0x45u) + 4u);
    wr32(sp0 - 0x10u, edi);
    g->esp = sp0 - 4u;
    t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, edi, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t21 = g->edx;
    wr32(self + 0x38u, t20);
    if (t20 == 0u)
    {
        edx = t21;
        goto L_10072b94;
    }
    eax = t20;
    edx = t21;
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, edi);
    wr32(sp0 - 0x18u, eax);
    t22 = rd32(self + 0x34u);
    wr32(sp0 - 0x1cu, t22);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t23 = cow_thiscall(g, COW_IMG(0x101c46d0u), rd32(COW_IMG(0x10662dccu)), 4, t22, eax, edi, 0u);
    t24 = g->edx;
    if ((int32_t)t23 < 0)
    {
        edx = t24;
        goto L_10072b94;
    }
    edx = t24;
    t25 = rd32(self + 0x41u) + 1u;
    t26 = rd32(sp0 - 0xcu);
    wr32(self + 0x41u, t25);
    g->esi = rd32(sp0 - 8u);
    g->edi = t26;
    g->edx = edx;
    return t25;
L_10072b94: ;
    if (rd32(self + 0x3du) != 0u)
    {
        eax = rd32(self + 0x3du);
        wr32(sp0 - 0x10u, eax);
        g->edx = eax;
        g->esp = sp0 - 0xcu;
        cow_thiscall(g, COW_IMG(0x10074180u), rd32(COW_IMG(0x1047d128u)), 1, eax);
        t27 = g->edx;
        edx = t27;
    }
    wr32(sp0 - 0x10u, 1u);
    g->eax = rd32(self);
    g->edx = edx;
    t28 = rd32(self);
    g->esp = sp0 - 0xcu;
    t29 = cow_thiscall(g, rd32(t28 + 0x18u), self, 1, 1u);
    t30 = g->edx;
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    g->edx = t30;
    return t29;
L_10072bb6: ;
    if (rd8(self + 0x3cu) != 0u)
    {
        edx = in_edx;
        loc_4 = self;
        loc_8 = in_esi;
        loc_c = in_edi;
        goto L_10072c0c;
    }
    if ((int32_t)rd32(COW_IMG(0x1047d138u)) > 16)
    {
        eax = rd32(COW_IMG(0x1047d138u));
        edx = in_edx;
        goto L_10072c2a;
    }
    eax = rd32(COW_IMG(0x1047d138u));
    wr32(sp0 - 0x10u, 0x20u);
    wr32(COW_IMG(0x1047d138u), eax + 1u);
    g->esp = sp0 - 4u;
    t31 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x20u, in_edi, in_esi);
    t32 = g->edx;
    if (t31 == 0u)
    {
        edx = t32;
        eax = 0u;
    }
    else
    {
        eax = t31;
        edx = t32;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t33 = cow_thiscall(g, COW_IMG(0x101be260u), eax, 0);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    }
    wr32(self + 0x45u, eax);
    if (eax == 0u) goto L_10072c0c;
    wr32(sp0 - 0x10u, eax);
    t35 = rd32(self + 0x34u);
    wr32(sp0 - 0x14u, t35);
    g->eax = t35;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t36 = cow_thiscall(g, COW_IMG(0x101c4bc0u), rd32(COW_IMG(0x10662dccu)), 2, t35, eax);
    t37 = g->edx;
    if ((int32_t)t36 < 0)
    {
        edx = t37;
        goto L_10072c0c;
    }
    edx = t37;
    t38 = rd32(self + 0x41u) + 1u;
    t39 = rd32(sp0 - 0xcu);
    wr32(self + 0x41u, t38);
    g->esi = rd32(sp0 - 8u);
    g->edi = t39;
    g->edx = edx;
    return t38;
L_10072c0c: ;
    if (rd32(self + 0x3du) == 0u)
    {
        eax = rd32(self + 0x3du);
        goto L_10072c21;
    }
    eax = rd32(self + 0x3du);
    wr32(sp0 - 0x10u, eax);
    loc_10 = eax;
    goto L_10072c16;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10072a70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10072a70(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
