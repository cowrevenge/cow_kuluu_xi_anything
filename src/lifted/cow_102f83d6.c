/* f_0x102f83d6 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f83d6(Guest* g)
{
    double d15;
    double d17;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd32(arg1 + 0x58u) & 1u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102f841b;
    }
    eax = rd32(arg1 + 0x58u);
    wr32(sp0 - 0x18u, COW_IMG(0x10348c4cu));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102ef234u), g->eax, self, in_edx, 1, 2, arg1, COW_IMG(0x10348c4cu));
    rt_fatal(g, COW_IMG(0x102f83f5u), "no way on");
L_102f83fa: ;
    ecx = COW_IMG(0x10348c00u);
    loc_4 = rd32(sp0 - 4u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
    loc_14 = rd32(sp0 - 0x14u);
L_102f83fc: ;
    if (arg3 == 4u) goto L_102f844d;
    wr32(sp0 - 0x18u, COW_IMG(0x10348c30u));
    loc_18 = COW_IMG(0x10348c30u);
L_102f8407: ;
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, loc_18);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t5, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t6 = g->edx;
    edx = t6;
L_102f84d9: ;
L_102f84dc: ;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102f841b: ;
    if ((eax & 4u) == 0u) goto L_102f8426;
    wr32(sp0 - 0x18u, COW_IMG(0x10348c18u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    loc_18 = COW_IMG(0x10348c18u);
    goto L_102f8407;
L_102f8426: ;
    if ((eax & 2u) == 0u) goto L_102f8437;
    wr32(sp0 - 0x18u, COW_IMG(0x10348c00u));
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348c00u));
    t2 = g->edx;
    eax = t1;
    edx = t2;
    goto L_102f83fa;
L_102f8437: ;
    if (arg2 == 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102f83fc;
    }
    if (!(rd32(arg2 + 8u) & 1u))
    {
        eax = rd32(arg2 + 8u);
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102f83fc;
    }
    eax = rd32(arg2 + 8u);
    if ((eax & 0x800u) != 0u)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        loc_c = in_ebx;
        loc_10 = in_esi;
        loc_14 = in_edi;
        goto L_102f83fc;
    }
    wr32(sp0 - 0x18u, COW_IMG(0x10348be8u));
    ecx = self;
    edx = in_edx;
    loc_4 = in_ebp;
    loc_c = in_ebx;
    loc_10 = in_esi;
    loc_14 = in_edi;
    loc_18 = COW_IMG(0x10348be8u);
    goto L_102f8407;
L_102f844d: ;
    wr32(sp0 - 0x18u, 4u);
    wr32(sp0 - 0x1cu, sp0 + 4u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = sp0 + 4u;
    g->ecx = ecx;
    g->esp = sp0 - 0xcu;
    t7 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, edx, 1, 5, arg1, sp0 + 4u, 4u, loc_14, loc_10);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, arg1);
    g->ecx = t8;
    g->esp = sp0 - 0x14u;
    t10 = cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t9, 1, 5, arg1, 0u, arg1, sp0 + 4u, 4u);
    t11 = g->ecx;
    t12 = g->edx;
    if (t10 != 0u)
    {
        edx = t12;
        goto L_102f84dc;
    }
    ecx = t11;
    edx = t12;
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->eax = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t13 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 + 4u);
    t14 = g->edx;
    if (t13 == 0u)
    {
        edx = t14;
        goto L_102f84dc;
    }
    eax = t13;
    ecx = t13;
    edx = t14;
    if ((rd32(arg2 + 8u) & 0x800u) == 0u) goto L_102f84b1;
    wr32(sp0 - 8u, ecx);
    if ((int32_t)ecx >= 0)
    {
        x0 = (double)(int32_t)ecx;
    }
    else
    {
        x0 = (double)(int32_t)ecx;
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    d15 = fabs(fr(g, x0 - rdf64(COW_IMG(0x10348be0u))));
    if ((cow_fsw(g, d15, rdf64(COW_IMG(0x10348bd8u)), 0u) >> 8u & 0x41u) != 0u)
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, rdf64(COW_IMG(0x10348bd8u)), 0u);
        goto L_102f84b1;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d15, rdf64(COW_IMG(0x10348bd8u)), 0u);
    wr32(sp0 - 0x18u, COW_IMG(0x10348b9cu));
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348b9cu));
    t16 = g->edx;
    edx = t16;
    goto L_102f84dc;
L_102f84b1: ;
    wr32(sp0 - 8u, ecx);
    if ((int32_t)ecx >= 0)
    {
        x0 = (double)(int32_t)ecx;
    }
    else
    {
        x0 = (double)(int32_t)ecx;
        x0 = fr(g, x0 + (double)rdf32(COW_IMG(0x10345da4u)));
    }
    wr32(sp0 - 0x18u, ecx);
    wr32(sp0 - 0x1cu, ecx);
    d17 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032c140u)));
    wrf32(arg1 + 0x130u, (float)d17);
    wrf64(sp0 - 0x1cu, d17);
    wr32(sp0 - 0x20u, arg2);
    wr32(sp0 - 0x24u, arg1);
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x102f1e01u), 3, arg1, arg2, cow_dlo(d17));
    t18 = g->edx;
    edx = t18;
    goto L_102f84d9;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102f83d6(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102f83d6(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
