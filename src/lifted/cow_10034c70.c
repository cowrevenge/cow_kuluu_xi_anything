/* f_0x10034c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_10034c70(Guest* g)
{
    double d20;
    double d5;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_b8;
    uint32_t loc_d0;
    uint32_t loc_d4;
    uint32_t loc_d8;
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
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 268u);

    wr32(sp0 - 0xbcu, in_ebx);
    wr32(sp0 - 0xc0u, in_ebp);
    wr32(sp0 - 0xc4u, in_esi);
    wr32(sp0 - 0xc8u, in_edi);
    wr32(sp0 - 0x84u, self);
    g->edx = in_edx;
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t1 = g->edx;
    edx = t1;
    ebx = 2u;
    esi = sp0 - 0x70u;
L_10034c95: ;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10032a40u), esi, 0);
    t2 = g->edx;
    if (ebx != 1u)
    {
        edx = t2;
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        goto L_10034c95;
    }
    edx = t2;
    ebx = 0u;
    esi = sp0 - 0x70u;
L_10034caf: ;
    if (rd32(arg5 + ebx * 4u) == 0u) goto L_10034d8a;
    wr32(sp0 - 0xccu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t3 = cow_thiscall(g, COW_IMG(0x10035270u), self, 1, ebx);
    t4 = g->edx;
    if ((double)rdf32(t3) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        ecx = t3;
        goto L_10034ce7;
    }
    eax = (t3 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(t3), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t3;
    edx = t4;
    d5 = (double)rdf32(ecx + 4u);
    if (d5 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_10034d7d;
L_10034ce7: ;
    wr32(sp0 - 0xccu, ecx);
    wr32(sp0 - 0xd0u, arg2);
    wr32(sp0 - 0xd4u, arg1);
    wr32(sp0 - 0xd8u, arg3);
    g->esp = sp0 - 0xc8u;
    cow_stdcall(g, COW_IMG(0x10034f30u), 4, arg3, arg1, arg2, ecx);
    t6 = rd32(arg4 + 0xcu);
    wr32(sp0 - 0xccu, t6);
    wr32(sp0 - 0xd0u, arg3);
    wr32(sp0 - 0xd4u, arg1);
    cow_thiscall(g, COW_IMG(0x10033360u), esi, 3, arg1, arg3, t6);
    wr32(sp0 - 0xb4u, rd32(esi));
    t7 = rd32(esi + 4u);
    wr32(sp0 - 0xb0u, t7);
    t8 = rd32(esi + 8u);
    wr32(sp0 - 0xacu, t8);
    t9 = rd32(esi + 0xcu);
    wr32(sp0 - 0xa8u, t9);
    g->eax = t9;
    g->edx = t8;
    t10 = cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0xb4u, 0);
    t11 = g->edx;
    wr32(sp0 - 0xccu, sp0 - 0x40u);
    t12 = cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0xb4u, 1, sp0 - 0x40u);
    wr32(sp0 - 0xccu, arg2);
    g->edx = arg2;
    t13 = cow_thiscall(g, COW_IMG(0x10028290u), sp0 - 0x40u, 1, arg2);
    t14 = g->edx;
    g->edx = t14;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t15 = g->edx;
    edx = t15;
    loc_d0 = arg3;
    loc_d4 = arg1;
    loc_d8 = arg3;
L_10034d7d: ;
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        esi = esi + 0x10u;
        goto L_10034caf;
    }
L_10034d8a: ;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xa4u, 0);
    t16 = g->edx;
    g->edx = t16;
    cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0x94u, 0);
    t17 = g->edx;
    wr32(sp0 - 0xb8u, sp0 - 0x70u);
    eax = sp0 - 0x70u;
    edx = t17;
    ebx = 0u;
    edi = self;
    loc_b8 = sp0 - 0x70u;
L_10034da6: ;
    if (rd32(arg5 + ebx * 4u) == 0u) goto L_10034eec;
    wr32(sp0 - 0xccu, ebx);
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t18 = cow_thiscall(g, COW_IMG(0x10035270u), edi, 1, ebx);
    t19 = g->edx;
    if ((double)rdf32(t18) != (double)rdf32(COW_IMG(0x103295d8u)))
    {
        edx = t19;
        goto L_10034dde;
    }
    eax = (t18 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    ecx = t18;
    edx = t19;
    d20 = (double)rdf32(ecx + 4u);
    if (d20 == (double)rdf32(COW_IMG(0x103295d8u)))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d20, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_10034ed7;
    }
L_10034dde: ;
    t21 = rd32(edi + 0xcu);
    esi = rd32(edi + 0xcu) + rd32(arg5 + ebx * 4u) * 0x40u;
    edi = sp0 - 0x108u;
    ecx = 0x10u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    g->esp = sp0 - 0xc8u;
    cow_call_regs(g, COW_IMG(0x10032e70u), t21, sp0 - 0xa4u, g->edx, 0, 16, rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu));
    t22 = rd32(sp0 - 0xa4u);
    wr32(sp0 - 0x94u, t22);
    t23 = rd32(sp0 - 0xa0u);
    wr32(sp0 - 0x90u, t23);
    t24 = rd32(sp0 - 0x98u);
    wr32(sp0 - 0x88u, t24);
    t25 = rd32(sp0 - 0x9cu);
    wr32(sp0 - 0x8cu, t25);
    cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0x94u, 0);
    wr32(sp0 - 0xccu, sp0 - 0xa4u);
    wr32(sp0 - 0xd0u, sp0 - 0xb4u);
    t26 = rd32(sp0 - 0xb8u);
    wr32(sp0 - 0xd4u, t26);
    wr32(sp0 - 0xd8u, sp0 - 0x80u);
    g->eax = sp0 - 0xb4u;
    g->edx = sp0 - 0xa4u;
    g->esp = sp0 - 0xd0u;
    t27 = cow_thiscall(g, COW_IMG(0x10032b50u), sp0 - 0x94u, 2, sp0 - 0x80u, t26);
    t28 = g->edx;
    g->esp = sp0 - 0xc8u;
    t29 = cow_thiscall(g, COW_IMG(0x10032b50u), t27, 2, sp0 - 0xb4u, sp0 - 0xa4u);
    wr32(t26, rd32(t29));
    t30 = rd32(t29 + 4u);
    wr32(t26 + 4u, t30);
    t31 = rd32(t29 + 8u);
    wr32(t26 + 8u, t31);
    t32 = rd32(t29 + 0xcu);
    wr32(t26 + 0xcu, t32);
    g->eax = t32;
    g->edx = t26;
    t33 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t34 = g->edx;
    cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t35 = COW_IMG(0x1045f030u) + rd32(arg5 + ebx * 4u) * 0x34u;
    wr32(sp0 - 0xccu, t35);
    wr32(sp0 - 0xd0u, sp0 - 0x50u);
    g->eax = t35;
    t36 = cow_thiscall(g, COW_IMG(0x10032b50u), t26, 2, sp0 - 0x50u, t35);
    t37 = rd32(arg5 + ebx * 4u);
    wr32(COW_IMG(0x1045f030u) + t37 * 0x34u, rd32(t36));
    t38 = rd32(t36 + 4u);
    wr32(COW_IMG(0x1045f034u) + t37 * 0x34u, t38);
    t39 = rd32(t36 + 8u);
    wr32(COW_IMG(0x1045f038u) + t37 * 0x34u, t39);
    t40 = rd32(t36 + 0xcu);
    wr32(COW_IMG(0x1045f03cu) + t37 * 0x34u, t40);
    g->eax = t40;
    g->edx = COW_IMG(0x1045f030u) + t37 * 0x34u;
    t41 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t42 = g->edx;
    t43 = rd32(sp0 - 0x84u);
    wr32(COW_IMG(0x1045ec28u) + rd32(arg5 + ebx * 4u) * 4u, 0u);
    eax = t41;
    edx = t42;
    edi = t43;
    loc_d0 = sp0 - 0x50u;
    loc_d8 = sp0 - 0x80u;
L_10034ed7: ;
    t44 = rd32(sp0 - 0xb8u) + 0x10u;
    wr32(sp0 - 0xb8u, t44);
    if ((int32_t)(ebx + 1u) < 2)
    {
        ebx = ebx + 1u;
        loc_b8 = t44;
        goto L_10034da6;
    }
L_10034eec: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t45 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t46 = g->edx;
    g->edx = t46;
    t47 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t48 = g->edx;
    eax = t47;
    edx = t48;
    esi = sp0 - 0x50u;
    edi = 2u;
L_10034f07: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t49 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t50 = g->edx;
    if (edi != 1u)
    {
        eax = t49;
        edx = t50;
        esi = esi - 0x10u;
        edi = edi - 1u;
        goto L_10034f07;
    }
    eax = t49;
    edx = t50;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xc8u;
    t51 = cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    t52 = g->edx;
    g->ebx = rd32(sp0 - 0xbcu);
    g->esi = rd32(sp0 - 0xc4u);
    g->edi = rd32(sp0 - 0xc8u);
    g->ebp = rd32(sp0 - 0xc0u);
    g->edx = t52;
    return t51;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10034c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10034c70(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
