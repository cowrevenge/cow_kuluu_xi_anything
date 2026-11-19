/* f_0x103182ff - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_103182ff(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 88u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10318352u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10318352;
    case 0x10318356u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10318356;
    case 0x1031835au: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_1031835a;
    case 0x10318361u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10318361;
    case 0x10318364u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10318364;
    case 0x10318378u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x38u); in_esi = rd32(sp0 - 0x34u); in_ebx = rd32(sp0 - 0x30u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x30u); g->edi = rd32(sp0 - 0x38u); g->esi = rd32(sp0 - 0x34u); goto E_10318378;
    case 0x1031838du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_1031838d;
    default: break;
    }
#endif

    COW_AT(103182ff)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x30u, in_ebx);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    wr32(sp0 - 0x3cu, sp0 - 0x2cu);
    wr32(sp0 - 0x40u, sp0 - 0x14u);
    wr32(sp0 - 0x44u, self);
    wr32(sp0 - 0x48u, self);
    wrf64(sp0 - 0x48u, rdf64(arg1));
    g->edx = in_edx;
    d1 = rdf64(arg1);
    g->esp = sp0 - 0x38u;
    cow_thiscall_cdecl(g, COW_IMG(0x103239dcu), self, 4, cow_dlo(d1), cow_dhi(d1), sp0 - 0x14u, sp0 - 0x2cu);
    t2 = g->ecx;
    t3 = g->edx;
    t4 = arg2 + (rd32(sp0 - 0x14u) == 0x2du);
    wr32(sp0 - 0x4cu, sp0 - 0x14u);
    wr32(sp0 - 0x50u, arg3);
    wr32(sp0 - 0x54u, t4);
    g->ecx = t2;
    g->edx = t3;
    t5 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x40u;
    cow_cdecl(g, COW_IMG(0x10323965u), 5, t4, arg3, sp0 - 0x14u, rd32(sp0 - 0x48u), rd32(sp0 - 0x44u));
    t6 = g->ecx;
    t7 = g->edx;
    if ((int32_t)(rd32(sp0 - 0x10u) - 1u) < -4)
    {
        ecx = (t6 & 0xffffff00u) | (int32_t)(t5 - 1u) < (int32_t)(rd32(sp0 - 0x10u) - 1u);
        edx = t7;
        goto L_10318378;
    }
    eax = rd32(sp0 - 0x10u) - 1u;
    ecx = (t6 & 0xffffff00u) | (int32_t)(t5 - 1u) < (int32_t)(rd32(sp0 - 0x10u) - 1u);
    edx = t7;
    edi = t4;
    COW_AT(10318352)
    if ((int32_t)eax >= (int32_t)arg3) goto L_10318378;
    COW_AT(10318356)
    if ((uint8_t)ecx == 0u) goto L_10318364;
L_1031835a: ;
    COW_AT(1031835a)
    if (rd8(edi) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(edi);
        edi = edi + 1u;
        goto L_1031835a;
    }
    eax = (eax & 0xffffff00u) | rd8(edi);
    edi = edi + 1u;
    COW_AT(10318361)
    wr8(edi - 2u, rd8(edi - 2u) & (uint8_t)eax);
L_10318364: ;
    COW_AT(10318364)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x14u);
    wr32(sp0 - 0x44u, arg3);
    wr32(sp0 - 0x48u, arg2);
    g->esp = sp0 - 0x30u;
    cow_cdecl(g, COW_IMG(0x10318258u), 6, arg2, arg3, sp0 - 0x14u, 1u, in_edi, in_esi);
L_1031838d: ;
    COW_AT(1031838d)
    g->ebx = rd32(sp0 - 0x30u);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 4u);
    return;
L_10318378: ;
    COW_AT(10318378)
    wr32(sp0 - 0x3cu, 1u);
    wr32(sp0 - 0x40u, sp0 - 0x14u);
    wr32(sp0 - 0x44u, arg4);
    wr32(sp0 - 0x48u, arg3);
    wr32(sp0 - 0x4cu, arg2);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10318141u), g->eax, g->ecx, edx, 1, 7, arg2, arg3, arg4, sp0 - 0x14u, 1u, in_edi, in_esi);
    goto L_1031838d;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_103182ff(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10318352u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10318356u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1031835au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10318361u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10318364u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x10318378u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x38u);
        in_esi = rd32(sp0 - 0x34u);
        in_ebx = rd32(sp0 - 0x30u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x38u;
        g->ebx = arg3;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x4cu, sp0 - 0x14u);
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        wr32(sp0 - 0x3cu, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x1031838du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x38u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x40u, sp0 - 0x14u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_103182ff(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_103182ff(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
