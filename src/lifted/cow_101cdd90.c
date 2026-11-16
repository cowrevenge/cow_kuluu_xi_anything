/* f_0x101cdd90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_101cdd90(Guest* g)
{
    double d11;
    double d15;
    double d19;
    double d23;
    double d24;
    double d25;
    double d28;
    double d31;
    double d47;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 0x14u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x101cebe0u), self, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = rd32(sp0 + 4u);
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x18u, in_ebx);
        wr32(sp0 - 0x1cu, in_edi);
        wr32(sp0 - 0x20u, eax);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t8 = cow_cdecl(g, COW_IMG(0x101cce50u), 1, eax);
        t9 = g->ecx;
        t10 = g->edx;
        g->ecx = t9;
        g->edx = t10;
        d11 = fr(g, (double)(int32_t)arg3 - (double)rdf32(t8 + 4u));
        fpush(g, d11);
        t12 = cow_call_regs(g, COW_IMG(0x10311c6cu), t8, g->ecx, g->edx, 1, 0);
        t13 = g->ecx;
        t14 = g->edx;
        g->ecx = t13;
        g->edx = t14;
        d15 = fr(g, (double)(int32_t)rd32(sp0 + 0x10u) - (double)rdf32(t8 + 8u));
        fpush(g, d15);
        t16 = cow_call_regs(g, COW_IMG(0x10311c6cu), t12, g->ecx, g->edx, 1, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 + 0x10u, t16);
        g->edx = t18;
        d19 = fr(g, (double)(int32_t)arg2 - (double)rdf32(t8));
        fpush(g, d19);
        t20 = cow_call_regs(g, COW_IMG(0x10311c6cu), t16, g->ecx, g->edx, 1, 0);
        t21 = g->edx;
        wr32(sp0 + 4u, t20);
        t22 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, -t12);
        wr32(sp0 - 4u, 0x3f800000u);
        d23 = (double)(float)fr(g, (double)(int32_t)t22 * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 - 0x10u, (float)d23);
        d24 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 4u) * (double)rdf32(COW_IMG(0x10337e28u)));
        wrf32(sp0 - 0xcu, (float)d24);
        d25 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x10329a30u)));
        wrf32(sp0 - 8u, (float)d25);
        g->edx = t21;
        t26 = cow_thiscall(g, COW_IMG(0x101ceaf0u), self, 0);
        t27 = g->edx;
        wr32(sp0 + 0x10u, t26);
        d28 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(sp0 - 0x10u));
        wrf32(sp0 - 0x10u, (float)d28);
        g->edx = t27;
        t29 = cow_thiscall(g, COW_IMG(0x101ceb40u), self, 0);
        t30 = g->edx;
        wr32(sp0 + 0x10u, t29);
        d31 = (double)(float)fr(g, fr(g, (double)(int32_t)rd32(sp0 + 0x10u) * (double)rdf32(COW_IMG(0x1032b15cu))) + (double)rdf32(sp0 - 8u));
        wrf32(sp0 - 8u, (float)d31);
        eax = t29;
        edx = t30;
    }
    else
    {
        eax = rd32(sp0 + 4u);
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x18u, eax);
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t4 = cow_cdecl(g, COW_IMG(0x101cce90u), 1, eax);
        t5 = rd32(arg2 * 0x10u + t4);
        wr32(sp0 - 0x10u, t5);
        t6 = rd32(arg2 * 0x10u + t4 + 4u);
        wr32(sp0 - 0xcu, t6);
        t7 = rd32(arg2 * 0x10u + t4 + 8u);
        wr32(sp0 - 8u, t7);
        wr32(sp0 - 4u, 0x3f800000u);
        eax = arg2 * 0x10u + t4;
        edx = t7;
        loc_10 = t5;
        loc_c = t6;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t32 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
    t33 = g->edx;
    if (t32 == 0u)
    {
        eax = t32;
        edx = t33;
        goto L_101cde9d;
    }
    eax = t32;
    edx = t33;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t34 = cow_call_regs(g, COW_IMG(0x101cda30u), eax, self, g->edx, 1, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
L_101cded0: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100ab830u), eax, 1, sp0 - 0x10u);
    t46 = g->edx;
    edx = t46;
L_101cded7: ;
    if (rd32(self + 0x64u) != 0u)
    {
        eax = rd32(self + 0x64u);
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, eax + 0x34u);
        d47 = (double)(float)fr(g, (double)rdf32(sp0 - 0xcu) - (double)rdf32(COW_IMG(0x1032b15cu)));
        wrf32(sp0 - 0xcu, (float)d47);
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10026e90u), 2, eax + 0x34u, sp0 - 0x10u);
        t48 = rd32(sp0 - 0x10u);
        t49 = rd32(self + 0x64u);
        wr32(t49 + 0x734u, t48);
        t50 = rd32(sp0 - 0xcu);
        wr32(t49 + 0x738u, t50);
        t51 = rd32(sp0 - 8u);
        wr32(t49 + 0x73cu, t51);
        t52 = rd32(sp0 - 4u);
        wr32(t49 + 0x740u, t52);
    }
    g->esi = rd32(sp0 - 0x14u);
    return;
L_101cde9d: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t36 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, self, g->edx, 1, 0);
    t37 = g->ecx;
    t38 = g->edx;
    if (t36 == 0u)
    {
        eax = t36;
        ecx = t37;
        edx = t38;
        goto L_101cdebb;
    }
    eax = t36;
    ecx = t37;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->edx = sp0 - 0x10u;
    g->esp = sp0 - 0x18u;
    t39 = cow_call_regs(g, COW_IMG(0x101cd9d0u), eax, ecx, g->edx, 1, 0);
    t40 = g->edx;
    g->edx = t40;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x100c3ff0u), t39, 1, sp0 - 0x10u);
    t41 = g->edx;
    edx = t41;
    goto L_101cded7;
L_101cdebb: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t42 = cow_call_regs(g, COW_IMG(0x101cda00u), eax, ecx, g->edx, 1, 0);
    t43 = g->edx;
    if (t42 == 0u)
    {
        edx = t43;
        goto L_101cded7;
    }
    edx = t43;
    wr32(sp0 - 0x18u, sp0 - 0x10u);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t44 = cow_call_regs(g, COW_IMG(0x101cda00u), sp0 - 0x10u, self, g->edx, 1, 0);
    t45 = g->edx;
    eax = t44;
    edx = t45;
    goto L_101cded0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101cdd90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101cdd90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
