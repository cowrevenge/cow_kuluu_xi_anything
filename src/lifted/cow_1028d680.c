/* f_0x1028d680 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1028d680(Guest* g)
{
    uint32_t al_m10;
    uint32_t al_m4;
    uint32_t al_m8;
    uint32_t al_mc;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1028d6b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); al_m8 = rd32(sp1 - 8u); al_m4 = rd32(sp1 - 4u); loc_4 = rd32(sp0 - 4u); goto E_1028d6b7;
    case 0x1028d6bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_m10 = rd32(sp1 - 0x10u); al_mc = rd32(sp1 - 0xcu); al_m8 = rd32(sp1 - 8u); al_m4 = rd32(sp1 - 4u); loc_4 = rd32(sp0 - 4u); goto E_1028d6bc;
    case 0x1028d6d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1028d6d9;
    case 0x1028d6e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; al_m4 = rd32(sp1 - 4u); goto E_1028d6e4;
    default: break;
    }
#endif

    COW_AT(1028d680)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 4u, self);
    wr32(sp1 - 8u, in_ebx);
    wr32(sp1 - 0xcu, in_esi);
    wr32(sp1 - 0x10u, in_edi);
    wr32(sp1 - 0x14u, 0x183u);
    wr32(sp1 - 0x18u, COW_IMG(0x103b98f8u));
    wr32(sp1 - 0x1cu, 1u);
    wr32(sp1 - 0x20u, 0x100u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp1 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10275d60u), 5, 0x100u, 1u, COW_IMG(0x103b98f8u), 0x183u, in_edi);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = rd8(COW_IMG(0x103d3c84u));
    wr8(t1, (uint8_t)t4);
    wr32(sp1 - 4u, 4u);
    eax = (t1 & 0xffffff00u) | t4;
    ecx = t2;
    edx = t3;
    esi = arg1;
    edi = t1;
    loc_4 = in_ebp;
    al_m4 = 4u;
    al_m8 = in_ebx;
    al_mc = in_esi;
    al_m10 = in_edi;
L_1028d6b7: ;
    COW_AT(1028d6b7)
    ebx = 4u;
L_1028d6bc: ;
    COW_AT(1028d6bc)
    wrf64(sp1 - 0x18u, (double)rdf32(esi));
    wr32(sp1 - 0x1cu, edi);
    wr32(sp1 - 0x20u, COW_IMG(0x103ba51cu));
    wr32(sp1 - 0x24u, edi);
    g->ebx = ebx;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp1 - 0x10u;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, edi, COW_IMG(0x103ba51cu), edi, cow_dlo((double)rdf32(esi)), cow_dhi((double)rdf32(esi)));
    t6 = g->ecx;
    t7 = g->edx;
    if (ebx != 1u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        ebx = ebx - 1u;
        esi = esi + 4u;
        loc_4 = rd32(sp0 - 4u);
        al_m4 = rd32(sp1 - 4u);
        al_m8 = rd32(sp1 - 8u);
        al_mc = rd32(sp1 - 0xcu);
        al_m10 = rd32(sp1 - 0x10u);
        goto L_1028d6bc;
    }
    ecx = t6;
    edx = t7;
    esi = esi + 4u;
    COW_AT(1028d6d9)
    t8 = rd32(sp1 - 4u) - 1u;
    t9 = rd32(sp1 - 4u);
    wr32(sp1 - 4u, t8);
    if (t9 != 1u)
    {
        eax = t8;
        loc_4 = rd32(sp0 - 4u);
        al_m4 = t8;
        al_m8 = rd32(sp1 - 8u);
        al_mc = rd32(sp1 - 0xcu);
        al_m10 = rd32(sp1 - 0x10u);
        goto L_1028d6b7;
    }
    COW_AT(1028d6e4)
    g->ebx = rd32(sp1 - 8u);
    g->esi = rd32(sp1 - 0xcu);
    g->edi = rd32(sp1 - 0x10u);
    g->ebp = rd32(sp0 - 4u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1028d680(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff8u;
    switch (at)
    {
    case 0x1028d6b7u:
    {
        uint32_t al_m10;
        uint32_t al_m4;
        uint32_t al_m8;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        al_m8 = rd32(sp1 - 8u);
        al_m4 = rd32(sp1 - 4u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028d6bcu:
    {
        uint32_t al_m10;
        uint32_t al_m4;
        uint32_t al_m8;
        uint32_t al_mc;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m10 = rd32(sp1 - 0x10u);
        al_mc = rd32(sp1 - 0xcu);
        al_m8 = rd32(sp1 - 8u);
        al_m4 = rd32(sp1 - 4u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028d6d9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1028d6e4u:
    {
        uint32_t al_m4;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        al_m4 = rd32(sp1 - 4u);
        g->esp = sp1 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1028d680(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1028d680(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
