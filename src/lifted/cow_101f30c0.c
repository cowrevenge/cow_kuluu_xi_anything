/* f_0x101f30c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101f30c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f30cdu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101f30cd;
    case 0x101f30d9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101f30d9;
    case 0x101f30e5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101f30e5;
    case 0x101f311eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f311e;
    case 0x101f3122u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f3122;
    case 0x101f313cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f313c;
    case 0x101f3156u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f3156;
    case 0x101f3173u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f3173;
    case 0x101f31b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f31b0;
    case 0x101f31b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f31b7;
    case 0x101f31bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_28 = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0xcu); goto E_101f31bc;
    case 0x101f31d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; in_esi = g->esi; loc_28 = rd32(sp0 - 0x28u); in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_101f31d1;
    default: break;
    }
#endif

    COW_AT(101f30c0)
    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
        edx = in_edx;
        goto L_101f31d1;
    }
    eax = (in_eax & 0xffffff00u) | rd8(sp0 + 8u);
    COW_AT(101f30cd)
    if (arg1 == 0u)
    {
        edx = in_edx;
        goto L_101f31d1;
    }
    COW_AT(101f30d9)
    if (rd16(arg1) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1);
        edx = in_edx;
        goto L_101f31d1;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1);
    COW_AT(101f30e5)
    g->eax = (uint16_t)eax;
    t1 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0xcu;
    t2 = cow_thiscall(g, COW_IMG(0x1015bc40u), t1, 1, (uint16_t)eax);
    t3 = g->ecx;
    t4 = rd8(t2 + 0x1b3u);
    t5 = rd32(t2 + 8u);
    wr8(t2 + 0x1b3u, (uint8_t)(t4 + 1u));
    t6 = rd16(arg1);
    wr8(sp0 + 8u, t6 == 0x201u);
    if ((t5 >> 8u & 0xc0u) != 0u)
    {
        eax = (t2 & 0xffff0000u) | t6;
        edx = t5;
        esi = t2;
        goto L_101f3173;
    }
    eax = (t2 & 0xffff0000u) | t6;
    ecx = (t3 & 0xffffff00u) | t6 == 0x201u;
    edx = t5;
    esi = t2;
    COW_AT(101f311e)
    if ((uint8_t)ecx != 0u) goto L_101f3173;
    COW_AT(101f3122)
    t7 = rd16(esi + 4u);
    g->eax = eax;
    g->ecx = t7;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t8 = cow_cdecl(g, COW_IMG(0x101cb8a0u), 4, eax, t7, arg1 + 0x10u, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((uint8_t)t8 != 0u)
    {
        eax = t8;
        edx = t10;
        goto L_101f3173;
    }
    eax = t8;
    ecx = t9;
    COW_AT(101f313c)
    t11 = rd16(esi + 4u);
    t12 = (eax & 0xffff0000u) | rd16(arg1);
    g->eax = t12;
    g->ecx = ecx;
    g->edx = t11;
    g->esp = sp0 - 0xcu;
    t13 = cow_cdecl(g, COW_IMG(0x101cb990u), 4, t12, t11, arg1 + 0x10u, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 != 0u)
    {
        eax = t13;
        edx = t15;
        goto L_101f3173;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(101f3156)
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t16 = cow_call_regs(g, COW_IMG(0x101f2ff0u), eax, g->ecx, g->edx, 1, 2, arg1, 1u);
    t17 = g->edx;
    t18 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t18 - 1u));
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t17;
    return (t16 & 0xffffff00u) | (uint8_t)(t18 - 1u);
L_101f3173: ;
    COW_AT(101f3173)
    g->eax = eax;
    g->ecx = esi + 0x1b4u;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x30u);
    t20 = g->ecx;
    t21 = g->edx;
    g->edx = t21;
    g->esp = sp0 - 4u;
    t22 = cow_cdecl(g, COW_IMG(0x10312031u), 5, COW_IMG(0x106636c0u), t19, esi + 0x1b4u, in_esi, in_ebp);
    t23 = g->edx;
    if (rd8(sp0 + 8u) == 0u)
    {
        eax = (t22 & 0xffffff00u) | rd8(sp0 + 8u);
        ecx = rd32(COW_IMG(0x10664520u));
        edx = t23;
    COW_AT(101f31b7)
        loc_28 = COW_IMG(0x101f2ff0u);
    }
    else
    {
        eax = (t22 & 0xffffff00u) | rd8(sp0 + 8u);
        ecx = rd32(COW_IMG(0x10664520u));
        edx = t23;
    COW_AT(101f31b0)
        loc_28 = COW_IMG(0x101f3040u);
    }
    COW_AT(101f31bc)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t24 = cow_thiscall(g, COW_IMG(0x10210e30u), ecx, 7, loc_28, arg1, COW_IMG(0x106636c0u), 0u, 0u, 1u, 0u);
    t25 = g->edx;
    t26 = rd8(esi + 0x1b3u);
    wr8(esi + 0x1b3u, (uint8_t)(t26 - 1u));
    eax = (t24 & 0xffffff00u) | (uint8_t)(t26 - 1u);
    edx = t25;
L_101f31d1: ;
    COW_AT(101f31d1)
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f30c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f30cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101f30d9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f30e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f311eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f3122u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f313cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->ebp = arg1 + 0x10u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f3156u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f3173u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f31b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, arg1);
        wr32(sp0 - 0x20u, COW_IMG(0x106636c0u));
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f31b7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x24u;
        wr32(sp0 - 0x24u, arg1);
        wr32(sp0 - 0x20u, COW_IMG(0x106636c0u));
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f31bcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        wr32(sp0 - 0x24u, arg1);
        wr32(sp0 - 0x20u, COW_IMG(0x106636c0u));
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x10u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x101f31d1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_28;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        loc_28 = rd32(sp0 - 0x28u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f30c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f30c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
