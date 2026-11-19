/* f_0x101f7730 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101f7730(Guest* g)
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101f773du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f773d;
    case 0x101f7744u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f7744;
    case 0x101f7754u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f7754;
    case 0x101f775bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f775b;
    case 0x101f77ccu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f77cc;
    case 0x101f77ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f77dd;
    case 0x101f77e5u: eax = g->eax; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f77e5;
    case 0x101f77edu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f77ed;
    case 0x101f77f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f77f4;
    case 0x101f7800u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f7800;
    case 0x101f7807u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x14u); g->esi = rd32(sp0 - 0x14u); goto E_101f7807;
    default: break;
    }
#endif

    COW_AT(101f7730)
    if (rd32(COW_IMG(0x104dfd98u)) != 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        goto L_101f7744;
    }
    eax = rd32(COW_IMG(0x104dfd98u));
    COW_AT(101f773d)
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_101f7744: ;
    COW_AT(101f7744)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10081550u), COW_IMG(0x1047d600u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        edx = t2;
        esi = t1;
        goto L_101f775b;
    }
    eax = t1;
    edx = t2;
    COW_AT(101f7754)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f775b: ;
    COW_AT(101f775b)
    g->eax = rd32(esi);
    t3 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, rd32(t3 + 0x1bcu), esi, 0);
    t5 = rd32(t4);
    t6 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t7 = rd32(t6 + 4u);
    g->eax = t7;
    t8 = cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    t9 = rd32(t8 + 8u);
    cow_thiscall(g, rd32(rd32(esi) + 0x1bcu), esi, 0);
    g->eax = t5;
    g->edx = t7;
    t10 = rd32(COW_IMG(0x10631f24u));
    t11 = rd32(rd32(COW_IMG(0x104dfd98u)) + 0x3c350u);
    t12 = cow_thiscall(g, COW_IMG(0x101811d0u), t10, 3, t5, t7, t9);
    t13 = g->ecx;
    t14 = g->edx;
    t15 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, t13, t14, 1, 3, t11, t12, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((int32_t)t15 >= 0)
    {
        eax = t15;
        edx = t17;
        goto L_101f7807;
    }
    eax = t15;
    ecx = t16;
    edx = t17;
    esi = t11;
    COW_AT(101f77cc)
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t18 = cow_call_regs(g, COW_IMG(0x101f7430u), g->eax, ecx, edx, 1, 3, esi, 0u, 0u);
    t19 = g->edx;
    if ((int32_t)t18 >= 0)
    {
        eax = t18;
        edx = t19;
        goto L_101f7807;
    }
    eax = t18;
    edx = t19;
    COW_AT(101f77dd)
    if (arg1 == 0u) goto L_101f7800;
    COW_AT(101f77e5)
    if (rd16(arg1) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(arg1);
        goto L_101f7800;
    }
    eax = (eax & 0xffff0000u) | rd16(arg1);
    ecx = arg1;
L_101f77ed: ;
    COW_AT(101f77ed)
    if (esi == (uint32_t)(int16_t)eax)
    {
        edx = (uint32_t)(int16_t)eax;
        goto L_101f7807;
    }
    edx = (uint32_t)(int16_t)eax;
    COW_AT(101f77f4)
    if (rd16(ecx + 2u) != 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
        ecx = ecx + 2u;
        goto L_101f77ed;
    }
    eax = (eax & 0xffff0000u) | rd16(ecx + 2u);
L_101f7800: ;
    COW_AT(101f7800)
    g->esi = in_esi;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101f7807: ;
    COW_AT(101f7807)
    g->esi = in_esi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101f7730(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101f773du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f7744u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f7754u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f775bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f77ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f77ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f77e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ecx = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101f77edu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f77f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f7800u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101f7807u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101f7730(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101f7730(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
