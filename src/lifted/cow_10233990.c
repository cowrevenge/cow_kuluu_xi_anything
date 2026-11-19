/* f_0x10233990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_10233990(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_98;
    uint32_t loc_9c;
    uint32_t loc_a0;
    uint32_t loc_a4;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 216u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10233a0bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233a0b;
    case 0x10233a10u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233a10;
    case 0x10233a1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233a1c;
    case 0x10233a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; goto E_10233a2f;
    case 0x10233a3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233a3b;
    case 0x10233a40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233a40;
    case 0x10233a6au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10233a6a;
    case 0x10233a6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10233a6b;
    case 0x10233a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10233a75;
    case 0x10233a76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10233a76;
    case 0x10233ab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0xa4u); in_esi = rd32(sp0 - 0xa0u); in_ebp = rd32(sp0 - 0x9cu); in_ebx = rd32(sp0 - 0x98u); g->ebp = rd32(sp0 - 0x9cu); g->ebx = rd32(sp0 - 0x98u); g->edi = rd32(sp0 - 0xa4u); g->esi = rd32(sp0 - 0xa0u); goto E_10233ab1;
    case 0x10233ab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; loc_a4 = rd32(sp0 - 0xa4u); loc_a0 = rd32(sp0 - 0xa0u); loc_9c = rd32(sp0 - 0x9cu); loc_98 = rd32(sp0 - 0x98u); goto E_10233ab8;
    case 0x10233aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10233ace;
    case 0x10233ae4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10233ae4;
    default: break;
    }
#endif

    COW_AT(10233990)
    wr32(sp0 - 0x98u, in_ebx);
    wr32(sp0 - 0x9cu, in_ebp);
    wr32(sp0 - 0xa0u, in_esi);
    wr32(sp0 - 0xa4u, in_edi);
    wr32(sp0 - 0xa8u, 0x3bu);
    wr32(sp0 - 0xacu, 0xcu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xa4u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3bu);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xb0u, 0x3cu);
    wr32(sp0 - 0xb4u, 0xcu);
    wr32(sp0 - 0x94u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0xacu;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x3cu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0xb8u, 0x6du);
    wr32(sp0 - 0xbcu, 0xcu);
    wr32(sp0 - 0x90u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0xb4u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6du);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0xc0u, 0x6eu);
    wr32(sp0 - 0xc4u, 0xcu);
    wr32(sp0 - 0x8cu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0xbcu;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x6eu);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0xc8u, 0x208u);
    wr32(sp0 - 0xccu, 0xcu);
    wr32(sp0 - 0x88u, t10);
    g->ecx = t11;
    g->edx = t12;
    g->esp = sp0 - 0xc4u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x208u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0xd0u, 0x23u);
    wr32(sp0 - 0xd4u, 0u);
    wr32(sp0 - 0x84u, t13);
    g->edx = t15;
    g->esp = sp0 - 0xccu;
    t16 = cow_cdecl(g, COW_IMG(0x10220cf0u), 2, 0u, 0x23u);
    t17 = g->edx;
    wr32(sp0 - 0xa8u, t16);
    wr32(sp0 - 0xacu, 5u);
    wr32(sp0 - 0xb0u, 4u);
    g->ebx = arg1;
    g->edi = self;
    g->edx = t17;
    g->esp = sp0 - 0xa4u;
    t18 = cow_thiscall(g, COW_IMG(0x101170f0u), arg1, 3, 4u, 5u, t16);
    t19 = g->edx;
    if (rd32(COW_IMG(0x10668eccu)) == 0u)
    {
        eax = t18;
        edx = t19;
        ebp = t7;
    }
    else
    {
        eax = t18;
        ecx = rd32(COW_IMG(0x10668eccu));
        edx = t19;
        ebp = t7;
    COW_AT(10233a0b)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t20 = cow_thiscall(g, COW_IMG(0x10233910u), ecx, 0);
        t21 = g->edx;
        eax = t20;
        edx = t21;
    }
    COW_AT(10233a10)
    if (arg2 != 4u) goto L_10233a3b;
    COW_AT(10233a1c)
    wr32(sp0 - 0xa8u, 5u);
    g->eax = eax;
    g->edx = edx;
    t22 = rd32(self + 8u);
    g->esp = sp0 - 0xa4u;
    t23 = cow_thiscall(g, COW_IMG(0x10118bc0u), t22, 1, 5u);
    t24 = g->ecx;
    t25 = g->edx;
    if (t23 != 5u)
    {
        edx = t25;
        goto L_10233ab1;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(10233a2f)
    wr32(sp0 - 0xa8u, 1u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t26 = cow_cdecl(g, COW_IMG(0x102225f0u), 1, 1u);
    t27 = g->edx;
    eax = t26;
    edx = t27;
    loc_98 = rd32(sp0 - 0x98u);
    loc_9c = rd32(sp0 - 0x9cu);
    loc_a0 = rd32(sp0 - 0xa0u);
    loc_a4 = rd32(sp0 - 0xa4u);
L_10233ab8: ;
    COW_AT(10233ab8)
    wr32(sp0 - 0xa8u, eax);
    t36 = rd32(arg2 * 4u + sp0 - 0x94u);
    wr32(sp0 - 0xacu, t36);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0x10u);
    g->ebx = arg1;
    g->edi = self;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t37 = cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, t36, eax);
    t38 = g->edx;
    if (arg2 == 3u)
    {
        eax = t37;
        edx = t38;
    COW_AT(10233ace)
        g->ebx = arg1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0xa4u;
        t39 = cow_thiscall(g, COW_IMG(0x10233560u), self, 0);
        t40 = g->edx;
        wr32(sp0 - 0xa8u, 2u);
        wr32(sp0 - 0xacu, 0u);
        cow_thiscall(g, COW_IMG(0x10150cc0u), rd32(COW_IMG(0x1057847cu)), 2, 0u, 2u);
    }
    COW_AT(10233ae4)
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return;
L_10233a3b: ;
    COW_AT(10233a3b)
    if (arg2 != 2u) goto L_10233ab1;
    COW_AT(10233a40)
    wr8(sp0 - 0x80u, rd8(COW_IMG(0x103d3c84u)));
    edi = sp0 - 0x7fu;
    eax = 0u;
    ecx = 0x1fu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t28 = cow_stdcall(g, COW_IMG(0x10230ad0u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    g->ecx = t29;
    g->edx = t30;
    t31 = cow_stdcall(g, COW_IMG(0x100990c0u), 0);
    t32 = g->ecx;
    t33 = g->edx;
    if ((uint16_t)t31 == 0u)
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        esi = t28;
    }
    else
    {
        eax = t31;
        ecx = t32;
        edx = t33;
        esi = t28;
    COW_AT(10233a6a)
        esi = esi + 1u;
    }
    COW_AT(10233a6b)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xa4u;
    t34 = cow_stdcall(g, COW_IMG(0x100990d0u), 0);
    t35 = g->edx;
    if ((uint16_t)t34 == 0u)
    {
        eax = t34;
        edx = t35;
    }
    else
    {
        eax = t34;
        edx = t35;
    COW_AT(10233a75)
        esi = esi + 1u;
    }
    COW_AT(10233a76)
    wr32(sp0 - 0xa8u, 0x1eu);
    wr32(sp0 - 0xacu, esi);
    wr32(sp0 - 0xb0u, ebp);
    wr32(sp0 - 0xb4u, COW_IMG(0x103869e4u));
    wr32(sp0 - 0xb8u, sp0 - 0x80u);
    g->ebx = arg1;
    g->esp = sp0 - 0xa4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x80u, COW_IMG(0x103869e4u), ebp, esi, 0x1eu);
    wr32(sp0 - 0xa8u, arg3);
    wr32(sp0 - 0xacu, sp0 - 0x80u);
    wr32(sp0 - 0xb0u, 0u);
    wr32(sp0 - 0xb4u, 0x10u);
    g->ebx = arg1;
    g->edi = edi;
    cow_thiscall(g, COW_IMG(0x101171b0u), arg1, 4, 0x10u, 0u, sp0 - 0x80u, arg3);
    g->ebx = rd32(sp0 - 0x98u);
    g->esi = rd32(sp0 - 0xa0u);
    g->edi = rd32(sp0 - 0xa4u);
    g->ebp = rd32(sp0 - 0x9cu);
    return;
L_10233ab1: ;
    COW_AT(10233ab1)
    eax = arg3;
    loc_98 = in_ebx;
    loc_9c = in_ebp;
    loc_a0 = in_esi;
    loc_a4 = in_edi;
    goto L_10233ab8;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10233990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10233a0bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a1cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10233a2fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10233a3bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10233a40u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
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
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a6au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a6bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233a76u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
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
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233ab1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0xa4u);
        in_esi = rd32(sp0 - 0xa0u);
        in_ebp = rd32(sp0 - 0x9cu);
        in_ebx = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10233ab8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_98;
        uint32_t loc_9c;
        uint32_t loc_a0;
        uint32_t loc_a4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        loc_a4 = rd32(sp0 - 0xa4u);
        loc_a0 = rd32(sp0 - 0xa0u);
        loc_9c = rd32(sp0 - 0x9cu);
        loc_98 = rd32(sp0 - 0x98u);
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10233aceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0xa4u;
        g->ebx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10233ae4u:
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
        g->esp = sp0 - 0xa4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10233990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10233990(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
