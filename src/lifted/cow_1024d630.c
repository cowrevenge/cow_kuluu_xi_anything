/* f_0x1024d630 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1024d630(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1024d646u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d646;
    case 0x1024d659u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->ebx = rd32(sp0 - 4u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_1024d659;
    default: break;
    }
#endif

    COW_AT(1024d630)
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = 4u;
    esi = arg1 + 0x78u;
    edi = arg1 + 0x160u;
L_1024d646: ;
    COW_AT(1024d646)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10251390u), eax, g->ecx, g->edx, 1, 6, edi, esi, in_edi, in_esi, in_ebp, in_ebx);
    t2 = g->ecx;
    t3 = g->edx;
    if (ebx != 1u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = ebx - 1u;
        esi = esi + 4u;
        edi = edi + 0x1cu;
        goto L_1024d646;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(1024d659)
    g->ebp = arg1;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t4 = cow_cdecl(g, COW_IMG(0x1024d420u), 1, arg1);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_cdecl(g, COW_IMG(0x1024d2e0u), 3, arg1, 0u, arg1);
    t8 = g->edx;
    g->edx = t8;
    t9 = rd32(COW_IMG(0x10662dccu));
    t10 = cow_thiscall(g, COW_IMG(0x101c4d30u), t9, 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    g->esp = sp0 - 8u;
    t13 = cow_call_regs(g, COW_IMG(0x1024d6d0u), t10, g->ecx, g->edx, 1, 3, arg1, in_edi, in_esi);
    t14 = g->edx;
    g->edx = t14;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x101c4d40u), rd32(COW_IMG(0x10662dccu)), 0);
    t15 = g->edx;
    t16 = rd32(arg1 + 0xcu);
    t17 = rd32(arg1 + 8u);
    cow_cdecl(g, COW_IMG(0x1024d560u), 3, arg1, t17, t16);
    t18 = rd32(arg1 + 0xcu);
    t19 = rd32(arg1 + 8u);
    wr32(arg1 + 4u, 1u);
    t20 = t18 * 2u + rd32(COW_IMG(0x10389538u) + t19 * 4u) + 4u;
    cow_cdecl(g, COW_IMG(0x10252630u), 5, arg1 + 0xccu, t20, arg1, t17, t16);
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1024d630(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1024d646u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024d659u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = arg1;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1024d630(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1024d630(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
