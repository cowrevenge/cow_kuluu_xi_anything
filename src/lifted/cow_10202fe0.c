/* f_0x10202fe0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10202fe0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10202ffcu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10202ffc;
    case 0x10203004u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10203004;
    case 0x10203009u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10203009;
    case 0x1020300du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_1020300d;
    case 0x10203013u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10203013;
    case 0x10203019u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x24u); in_esi = rd32(sp0 - 0x20u); in_ebp = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); self = rd32(sp0 - 0x10u); g->ebp = rd32(sp0 - 0x1cu); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x24u); g->esi = rd32(sp0 - 0x20u); goto E_10203019;
    case 0x10203024u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10203024;
    case 0x1020302eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020302e;
    case 0x10203042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10203042;
    case 0x1020304bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020304b;
    case 0x10203062u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10203062;
    case 0x1020306au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020306a;
    case 0x1020306fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020306f;
    case 0x10203098u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_10203098;
    case 0x1020309cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1020309c;
    case 0x102030adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030ad;
    case 0x102030b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030b1;
    case 0x102030bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030ba;
    case 0x102030beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030be;
    case 0x102030cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030cf;
    case 0x102030e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030e0;
    case 0x102030feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102030fe;
    case 0x10203110u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10203110;
    default: break;
    }
#endif

    COW_AT(10202fe0)
    wr32(sp0 - 0x18u, in_ebx);
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x10u, self);
    wr32(sp0 - 0x24u, in_edi);
    if (rd32(COW_IMG(0x106643e8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106643e8u));
        ecx = rd32(COW_IMG(0x106643fcu));
        goto L_10203004;
    }
    eax = rd32(COW_IMG(0x106643e8u));
    ecx = rd32(COW_IMG(0x106643fcu));
    COW_AT(10202ffc)
    wr8(sp0 - 0x11u, 0u);
    if (ecx == 0u) goto L_10203009;
L_10203004: ;
    COW_AT(10203004)
    wr8(sp0 - 0x11u, 1u);
L_10203009: ;
    COW_AT(10203009)
    if (eax == 0u) goto L_10203013;
    COW_AT(1020300d)
    if (ecx != 0u)
    {
        ebp = eax;
        goto L_10203019;
    }
L_10203013: ;
    COW_AT(10203013)
    ebp = rd32(COW_IMG(0x106643e4u));
L_10203019: ;
    COW_AT(10203019)
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = 0u;
    }
    else
    {
        eax = t1;
        edx = t2;
    COW_AT(10203024)
        t3 = rd32(eax + 0x74u);
        wr32(sp0 - 8u, t3);
        esi = rd32(eax + 0x78u);
    }
    COW_AT(1020302e)
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 0u);
    if ((int32_t)rd32(COW_IMG(0x106643e0u)) >= 0)
    {
        ecx = rd32(COW_IMG(0x106643e0u));
    COW_AT(1020306f)
        t7 = rd32(COW_IMG(0x10663af0u) + ecx * 0x7cu);
        wr32(sp0 - 4u, t7);
        t8 = rd16(COW_IMG(0x10663af4u) + ecx * 0x7cu);
        wr32(sp0 - 8u, t8);
        edi = COW_IMG(0x10663adeu) + ecx * 0x7cu;
        ecx = t7;
    }
    else
    {
        ecx = rd32(COW_IMG(0x106643e0u));
    COW_AT(10203042)
        g->esp = sp0 - 0x24u;
        t4 = cow_call_regs(g, COW_IMG(0x101cc550u), eax, g->ecx, g->edx, 1, 0);
        if (t4 == 0u)
        {
    COW_AT(10203098)
            ecx = rd32(sp0 - 4u);
            edi = 0u;
        }
        else
        {
            eax = t4;
    COW_AT(1020304b)
            t5 = rd32(eax + 0x78u);
            wr32(sp0 - 4u, t5);
            t6 = rd32(eax + 0x74u);
            wr32(sp0 - 8u, t6);
            if (rd16(eax + 0x210u) == 0u)
            {
                ecx = t5;
    COW_AT(1020306a)
                edi = eax + 0x7cu;
            }
            else
            {
                ecx = t5;
    COW_AT(10203062)
                edi = eax + 0x214u;
            }
        }
    }
    COW_AT(1020309c)
    if (rd32(COW_IMG(0x106643e8u)) == 0u)
    {
        eax = ecx == esi;
        edx = rd32(COW_IMG(0x106643e8u));
        goto L_102030b1;
    }
    eax = ecx == esi;
    edx = rd32(COW_IMG(0x106643e8u));
    COW_AT(102030ad)
    if (eax != 0u) goto L_102030cf;
L_102030b1: ;
    COW_AT(102030b1)
    if (rd8(COW_IMG(0x103852b0u)) != 1u) goto L_102030e0;
    COW_AT(102030ba)
    if (eax != 0u) goto L_102030cf;
    COW_AT(102030be)
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, ecx);
    g->ebx = 0u;
    g->ecx = rd32(sp0 - 0x10u);
    g->edx = edx;
    t9 = rd32(sp0 - 0x10u);
    g->esp = sp0 - 0x24u;
    t10 = cow_call_regs(g, COW_IMG(0x102031f0u), eax, g->ecx, g->edx, 0, 3, ecx, 1u, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    if ((uint8_t)t10 != 0u)
    {
        edx = t12;
        goto L_102030e0;
    }
    eax = t10;
    ecx = t11;
    edx = t12;
L_102030cf: ;
    COW_AT(102030cf)
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t13 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return t13 & 0xffffff00u;
L_102030e0: ;
    COW_AT(102030e0)
    wr32(sp0 - 0x28u, edi);
    wr32(sp0 - 0x2cu, sp0 - 8u);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x106643f8u)));
    g->eax = rd32(COW_IMG(0x106643f8u));
    t14 = rd32(COW_IMG(0x106643f8u));
    t15 = rd32(COW_IMG(0x106643fcu));
    g->esp = sp0 - 0x24u;
    t16 = cow_thiscall_cdecl(g, ebp, sp0 - 8u, 2, sp0 - 8u, edi);
    if (t15 == 0u)
    {
        eax = t16;
        goto L_10203110;
    }
    eax = t16;
    COW_AT(102030fe)
    t17 = rd32(sp0 - 0x20u);
    t18 = rd32(sp0 - 0x24u);
    wr32(COW_IMG(0x106643fcu), 0u);
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = t17;
    g->edi = t18;
    g->ebp = rd32(sp0 - 0x1cu);
    return eax & 0xffffff00u;
L_10203110: ;
    COW_AT(10203110)
    g->ebx = rd32(sp0 - 0x18u);
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    g->ebp = rd32(sp0 - 0x1cu);
    return (eax & 0xffffff00u) | rd8(sp0 - 0x11u);
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10202fe0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10202ffcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203004u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203009u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020300du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203013u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203019u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x24u);
        in_esi = rd32(sp0 - 0x20u);
        in_ebp = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        self = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203024u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020302eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203042u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = 0u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1020304bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203062u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020306au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020306fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10203098u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020309cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030adu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030b1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030bau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030beu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102030feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10203110u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10202fe0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10202fe0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
