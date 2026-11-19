/* f_0x100730e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_100730e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100730e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100730e9;
    case 0x100730edu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100730ed;
    case 0x100730efu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; in_edi = g->edi; goto E_100730ef;
    case 0x100730f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_100730f8;
    case 0x10073103u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10073103;
    case 0x10073108u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10073108;
    case 0x1007310fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1007310f;
    case 0x10073113u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10073113;
    case 0x10073115u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10073115;
    case 0x10073119u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_10073119;
    case 0x1007312eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1007312e;
    case 0x10073150u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10073150;
    case 0x1007316du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1007316d;
    case 0x1007317eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007317e;
    case 0x10073180u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10073180;
    case 0x100731a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_100731a3;
    default: break;
    }
#endif

    COW_AT(100730e0)
    if (rd32(COW_IMG(0x1047cf84u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047cf84u));
    COW_AT(100730ed)
        edx = 0u;
    }
    else
    {
        eax = rd32(COW_IMG(0x1047cf84u));
    COW_AT(100730e9)
        edx = rd32(eax);
    }
    COW_AT(100730ef)
    wr32(sp0 - 4u, in_edi);
    if (edx == 0u)
    {
        loc_4 = in_edi;
        goto L_10073119;
    }
    loc_4 = in_edi;
L_100730f8: ;
    COW_AT(100730f8)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x10072270u), edx, 0);
    t2 = g->edx;
    if (t1 != t2)
    {
        eax = t1;
        edx = t2;
        goto L_10073108;
    }
    eax = t1;
    edx = t2;
    COW_AT(10073103)
    if (rd32(edx + 0x34u) == arg2) goto L_1007316d;
L_10073108: ;
    COW_AT(10073108)
    if (rd32(edx + 0x10u) == 0u)
    {
    COW_AT(10073113)
        edx = 0u;
    }
    else
    {
        edx = rd32(edx + 0x10u);
    COW_AT(1007310f)
        edx = rd32(edx);
    }
    COW_AT(10073115)
    if (edx != 0u)
    {
        loc_4 = rd32(sp0 - 4u);
        goto L_100730f8;
    }
    loc_4 = rd32(sp0 - 4u);
L_10073119: ;
    COW_AT(10073119)
    wr32(sp0 - 8u, 0x4d727400u);
    wr32(sp0 - 0xcu, arg2);
    g->eax = eax;
    g->edx = edx;
    t5 = rd32(COW_IMG(0x1047d140u));
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x10074f30u), t5, 2, arg2, 0x4d727400u);
    t7 = g->ecx;
    t8 = g->edx;
    if (t6 != 0u)
    {
        eax = t6;
        edx = t8;
        goto L_100731a3;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1007312e)
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, 0x49u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t9 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x49u, 4u);
    t10 = g->edx;
    g->esp = sp0 - 8u;
    t11 = cow_fastcall(g, COW_IMG(0x100748f0u), t9, t10, 0);
    t12 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t9 == 0u)
    {
        eax = t11;
        edx = t12;
    COW_AT(1007317e)
        esi = 0u;
    }
    else
    {
        eax = t11;
        edx = t12;
        esi = t9;
    COW_AT(10073150)
        g->esp = sp0 - 8u;
        t13 = cow_call_regs(g, COW_IMG(0x10074740u), eax, esi, edx, 1, 0);
        t14 = g->edx;
        wr32(esi, COW_IMG(0x1032c908u));
        wr32(esi + 0x38u, 0u);
        wr32(esi + 0x45u, 0u);
        eax = t13;
        edx = t14;
    }
    COW_AT(10073180)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t15 = cow_thiscall(g, COW_IMG(0x10074a00u), esi, 0);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, sp0 + 8u);
    g->edx = sp0 + 8u;
    t16 = cow_thiscall(g, COW_IMG(0x10072c30u), esi, 2, sp0 + 8u, arg2);
    t17 = g->edx;
    t18 = rd32(sp0 - 8u);
    t19 = rd32(sp0 - 4u);
    wr32(arg1, rd32(t16));
    g->esi = t18;
    g->edi = t19;
    g->edx = t17;
    return arg1;
L_1007316d: ;
    COW_AT(1007316d)
    wr8(edx + 0x19u, rd8(edx + 0x19u) | 0x80u);
    t3 = rd32(edx + 0x14u);
    t4 = rd32(sp0 - 4u);
    wr32(arg1, t3);
    g->esi = in_esi;
    g->edi = t4;
    g->edx = edx;
    return arg1;
L_100731a3: ;
    COW_AT(100731a3)
    t20 = rd32(eax + 0x3du);
    t21 = rd32(sp0 - 4u);
    wr32(arg1, t20);
    g->esi = in_esi;
    g->edi = t21;
    g->edx = edx;
    return arg1;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100730e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100730e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100730edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100730efu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100730f8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073103u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073108u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007310fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073113u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073115u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073119u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007312eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073150u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1007316du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1007317eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10073180u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x100731a3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100730e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100730e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
