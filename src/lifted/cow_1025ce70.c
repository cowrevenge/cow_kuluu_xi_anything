/* f_0x1025ce70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1025ce70(Guest* g)
{
    double d16;
    double d17;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 40u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1025ceb8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1025ceb8;
    case 0x1025cefau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_esi = rd32(sp0 - 0x18u); in_ebp = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); x0 = ST(0); g->ebp = rd32(sp0 - 0x14u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x18u); goto E_1025cefa;
    default: break;
    }
#endif

    COW_AT(1025ce70)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    wr32(sp0 - 0x20u, sp0 - 8u);
    t1 = (sp0 - 8u & 0xffff0000u) | rd16(rd32(sp0 + 4u));
    wr32(sp0 - 0x24u, t1);
    g->edx = t1;
    t2 = rd32(self + 4u);
    t3 = rd32(sp0 + 4u);
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(t2) + 0x18u), t2, 2, t1, sp0 - 8u);
    t4 = g->ecx;
    t5 = g->edx;
    t6 = rd8(sp0 - 4u);
    t7 = rd32(sp0 + 0xcu);
    wrf32(sp0 + 4u, (float)(double)(int32_t)t7);
    wr32(sp0 + 0xcu, (uint32_t)(int8_t)t6);
    d8 = (double)rdf32(sp0 + 4u);
    d9 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu));
    if (d8 < d9)
    {
        edx = t5;
        edi = 0u;
        x0 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu));
        goto L_1025cefa;
    }
    eax = ((uint32_t)(int8_t)t6 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 1u);
    ecx = t4;
    edx = t5;
    ebx = 0u;
    ebp = t3;
    edi = 0u;
    x0 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu));
L_1025ceb8: ;
    COW_AT(1025ceb8)
    fpush(g, x0);
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x10311c6cu), eax, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0xcu, ebx + t10);
    t11 = (sp0 - 8u & 0xffff0000u) | rd16(ebp + edi * 2u + 2u);
    wr32(sp0 - 0x24u, t11);
    g->eax = t11;
    g->edx = rd32(rd32(self + 4u));
    t12 = rd32(rd32(self + 4u));
    t13 = cow_thiscall(g, rd32(t12 + 0x18u), rd32(self + 4u), 2, t11, sp0 - 8u);
    t14 = g->edx;
    t15 = (uint32_t)(int8_t)rd8(sp0 - 4u);
    wr32(sp0 + 0xcu, t15);
    d16 = fr(g, (double)(int32_t)rd32(sp0 - 0xcu) + fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu)));
    d17 = (double)rdf32(sp0 + 4u);
    if ((cow_fsw(g, d16, d17, 1u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d16, d17, 1u) & 0x4100u;
        ecx = t15;
        edx = t14;
        ebx = ebx + t10;
        edi = edi + 1u;
        x0 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu));
        goto L_1025ceb8;
    }
    edx = t14;
    edi = edi + 1u;
    x0 = fr(g, (double)(int32_t)rd32(sp0 + 0xcu) * (double)rdf32(self + 0xcu));
L_1025cefa: ;
    COW_AT(1025cefa)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1025ce70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1025ceb8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1025cefau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_esi = rd32(sp0 - 0x18u);
        in_ebp = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        x0 = ST(0);
        g->esp = sp0 - 0x1cu;
        wr32(sp0 - 0x20u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1025ce70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1025ce70(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
