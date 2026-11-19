/* f_0x1027ce20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1027ce20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t2;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 184u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1027ce3bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1027ce3b;
    case 0x1027ce5du: in_eax = g->eax; self = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 0x98u); in_esi = rd32(sp0 - 0x94u); in_ebx = rd32(sp0 - 0x90u); g->ebx = rd32(sp0 - 0x90u); g->edi = rd32(sp0 - 0x98u); g->esi = rd32(sp0 - 0x94u); goto E_1027ce5d;
    case 0x1027ce86u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027ce86;
    case 0x1027ceb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027ceb2;
    case 0x1027ceb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027ceb6;
    case 0x1027ced0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027ced0;
    case 0x1027cef7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1027cef7;
    default: break;
    }
#endif

    COW_AT(1027ce20)
    wr32(sp0 - 0x90u, in_ebx);
    wr32(sp0 - 0x94u, in_esi);
    wr32(sp0 - 0x98u, in_edi);
    if (arg2 != arg3) goto L_1027ce5d;
    COW_AT(1027ce3b)
    wr32(sp0 - 0x9cu, arg4);
    wr32(sp0 - 0xa0u, arg5);
    g->eax = arg4;
    g->edx = in_edx;
    g->esp = sp0 - 0x98u;
    t1 = cow_cdecl(g, COW_IMG(0x10274670u), 2, arg5, arg4);
    t2 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t2;
    return t1;
L_1027ce5d: ;
    COW_AT(1027ce5d)
    wr32(sp0 - 0x9cu, sp0 - 0x80u);
    g->eax = in_eax;
    g->ecx = self;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x98u;
    t3 = cow_cdecl(g, COW_IMG(0x1027eb10u), 1, sp0 - 0x80u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0xa0u, arg2);
    wr32(sp0 - 0xa4u, arg1);
    g->esp = sp0 - 0x94u;
    t6 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, arg2, sp0 - 0x80u, in_edi);
    eax = t6 * 0x9cu + rd32(arg1 + 0x24u);
    esi = arg2;
L_1027ce86: ;
    COW_AT(1027ce86)
    wr32(sp0 - 0x9cu, sp0 - 0x80u);
    wr32(sp0 - 0xa0u, eax + 0x1cu);
    wr32(sp0 - 0xa4u, sp0 - 0x40u);
    g->edx = sp0 - 0x40u;
    g->esp = sp0 - 0x98u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x40u, eax + 0x1cu, sp0 - 0x80u);
    t7 = g->edx;
    wr32(sp0 - 0xa8u, sp0 - 0x40u);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    g->cf = g->cf;
    g->pf = g->pf;
    g->af = g->af;
    g->zf = g->zf;
    g->sf = g->sf;
    g->of = g->of;
    g->eax = sp0 - 0x40u;
    g->ecx = sp0 - 0x80u;
    g->edx = t7;
    t8 = cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x80u, sp0 - 0x40u, sp0 - 0x40u, rd32(sp0 - 0xa0u), sp0 - 0x80u);
    t9 = g->ecx;
    t10 = g->edx;
    if (rd32(esi + 0x68u) == arg3) goto L_1027ced0;
    eax = t8;
    ecx = t9;
    edx = t10;
    esi = rd32(esi + 0x68u);
    COW_AT(1027ceb2)
    if (esi == 0u) goto L_1027cef7;
    COW_AT(1027ceb6)
    wr32(sp0 - 0x9cu, esi);
    wr32(sp0 - 0xa0u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x90u;
    t11 = cow_cdecl(g, COW_IMG(0x1027c920u), 4, arg1, esi, rd32(sp0 - 0x98u), rd32(sp0 - 0x94u));
    eax = t11 * 0x9cu + rd32(arg1 + 0x24u);
    goto L_1027ce86;
L_1027ced0: ;
    COW_AT(1027ced0)
    wr32(sp0 - 0x9cu, arg4);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    wr32(sp0 - 0xa4u, arg5);
    g->eax = arg5;
    g->edx = sp0 - 0x80u;
    g->esp = sp0 - 0x98u;
    t15 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, arg5, sp0 - 0x80u, arg4);
    t16 = g->edx;
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->edx = t16;
    return t15;
L_1027cef7: ;
    COW_AT(1027cef7)
    wr32(sp0 - 0x9cu, arg4);
    wr32(sp0 - 0xa0u, sp0 - 0x80u);
    wr32(sp0 - 0xa4u, sp0 - 0x8cu);
    g->eax = sp0 - 0x8cu;
    g->esp = sp0 - 0x98u;
    t12 = cow_cdecl(g, COW_IMG(0x1027ef40u), 3, sp0 - 0x8cu, sp0 - 0x80u, arg4);
    wr32(sp0 - 0xa8u, arg5);
    wr32(sp0 - 0xacu, sp0 - 0x8cu);
    wr32(sp0 - 0xb0u, arg3);
    wr32(sp0 - 0xb4u, arg1);
    g->edx = sp0 - 0x8cu;
    g->esp = sp0 - 0xa4u;
    t13 = cow_cdecl(g, COW_IMG(0x1027cf30u), 4, arg1, arg3, sp0 - 0x8cu, arg5);
    t14 = g->edx;
    g->ebx = rd32(sp0 - 0x90u);
    g->esi = rd32(sp0 - 0x94u);
    g->edi = rd32(sp0 - 0x98u);
    g->edx = t14;
    return t13;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1027ce20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1027ce3bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x98u;
        (void)sp0;
        return 1;
    }
    case 0x1027ce5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 0x98u);
        in_esi = rd32(sp0 - 0x94u);
        in_ebx = rd32(sp0 - 0x90u);
        g->esp = sp0 - 0x98u;
        g->ebx = arg3;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1027ce86u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1027ceb2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebx = arg3;
        g->edi = arg1;
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ceb6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebx = arg3;
        g->edi = arg1;
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027ced0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    case 0x1027cef7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x98u;
        g->ebx = arg3;
        g->edi = arg1;
        wr32(sp0 - 0xacu, sp0 - 0x80u);
        wr32(sp0 - 0xa8u, sp0 - 0x40u);
        wr32(sp0 - 0xa4u, sp0 - 0x40u);
        wr32(sp0 - 0x9cu, sp0 - 0x80u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1027ce20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1027ce20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
