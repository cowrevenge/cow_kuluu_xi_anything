/* f_0x10002040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10002040(Guest* g)
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
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10002077u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10002077;
    case 0x10002096u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0xcu); in_esi = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0xcu); g->esi = rd32(sp0 - 8u); goto E_10002096;
    case 0x100020a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100020a7;
    case 0x100020c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100020c8;
    case 0x100020dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100020df;
    case 0x100020e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_100020e7;
    case 0x100020f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_100020f5;
    case 0x100020f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_100020f9;
    case 0x100020ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_100020ff;
    case 0x10002105u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10002105;
    case 0x1000210du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1000210d;
    case 0x1000211bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_4 = rd32(sp0 - 4u); goto E_1000211b;
    default: break;
    }
#endif

    COW_AT(10002040)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 4u, 0u);
    t1 = (in_eax & 0xffff0000u) | (uint16_t)(rd16(arg4 + 0xcu) - rd16(arg4 + 4u));
    wr32(sp0 - 0x1cu, t1);
    t2 = (self & 0xffff0000u) | (uint16_t)(rd16(arg4 + 8u) - rd16(arg4));
    wr32(sp0 - 0x20u, t2);
    g->eax = t1;
    g->edx = in_edx;
    t3 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t3, 5, t2, t1, 0u, 0u, 1u);
    t5 = g->ecx;
    t6 = g->edx;
    if (t4 != 0u)
    {
        ecx = t5;
        esi = t4;
        goto L_10002096;
    }
    eax = t4;
    edx = t6;
    COW_AT(10002077)
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 0x200u);
    wr32(sp0 - 0x20u, 0x200u);
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0xcu;
    t8 = cow_thiscall(g, COW_IMG(0x1000a6e0u), t7, 5, 0x200u, 0x200u, eax, eax, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0u)
    {
        ecx = t9;
        edx = t10;
        esi = t8;
        goto L_100020df;
    }
    ecx = t9;
    esi = t8;
L_10002096: ;
    COW_AT(10002096)
    wr32(sp0 - 0x10u, sp0 - 4u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, esi);
    g->eax = sp0 - 4u;
    g->edx = rd32(esi);
    t11 = rd32(esi);
    g->esp = sp0 - 0xcu;
    t12 = cow_thiscall(g, rd32(t11 + 0x3cu), ecx, 3, esi, 0u, sp0 - 4u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 < 0)
    {
        ecx = t13;
        edx = t14;
        goto L_100020df;
    }
    COW_AT(100020a7)
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 3u);
    wr32(sp0 - 0x18u, arg2);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, arg4);
    wr32(sp0 - 0x28u, 0u);
    t15 = rd32(sp0 - 4u);
    wr32(sp0 - 0x2cu, t15);
    g->eax = t15;
    g->ecx = arg2;
    g->edx = arg1;
    g->esp = sp0 - 0xcu;
    t16 = cow_stdcall(g, COW_IMG(0x102d4535u), 8, t15, 0u, arg4, arg1, 0u, arg2, 3u, 0u);
    t17 = g->ecx;
    t18 = g->edx;
    if ((int32_t)t16 < 0)
    {
        ecx = t17;
        edx = t18;
        goto L_100020df;
    }
    eax = t16;
    COW_AT(100020c8)
    wr32(sp0 - 0x10u, arg4);
    wr32(sp0 - 0x14u, arg3);
    t19 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t19);
    g->eax = eax;
    g->ecx = arg3;
    g->edx = t19;
    g->esp = sp0 - 0x14u;
    t20 = cow_cdecl(g, COW_IMG(0x10002130u), 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 != 0u)
    {
        ecx = t21;
        edx = t22;
        goto L_10002105;
    }
    ecx = t21;
    edx = t22;
L_100020df: ;
    COW_AT(100020df)
    if (rd32(sp0 - 4u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        eax = rd32(sp0 - 4u);
    COW_AT(100020e7)
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        t27 = rd32(eax);
        g->esp = sp0 - 0xcu;
        t28 = cow_thiscall(g, rd32(t27 + 8u), t27, 1, eax);
        t29 = g->ecx;
        wr32(sp0 - 4u, 0u);
        eax = t28;
        ecx = t29;
        loc_4 = 0u;
    }
    COW_AT(100020f5)
    if (esi != 0u)
    {
    COW_AT(100020f9)
        wr32(sp0 - 0x10u, esi);
        g->eax = eax;
        g->esp = sp0 - 0xcu;
        t30 = cow_thiscall(g, rd32(rd32(esi) + 8u), ecx, 1, esi);
        eax = t30;
        loc_4 = rd32(sp0 - 4u);
    }
    COW_AT(100020ff)
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax & 0xffffff00u;
L_10002105: ;
    COW_AT(10002105)
    if (rd32(sp0 - 4u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        loc_4 = rd32(sp0 - 4u);
    }
    else
    {
        eax = rd32(sp0 - 4u);
    COW_AT(1000210d)
        wr32(sp0 - 0x10u, eax);
        g->eax = eax;
        t23 = rd32(eax);
        g->esp = sp0 - 0xcu;
        t24 = cow_thiscall(g, rd32(t23 + 8u), t23, 1, eax);
        t25 = g->ecx;
        wr32(sp0 - 4u, 0u);
        eax = t24;
        ecx = t25;
        loc_4 = 0u;
    }
    COW_AT(1000211b)
    wr32(sp0 - 0x10u, esi);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t26 = cow_thiscall(g, rd32(rd32(esi) + 8u), ecx, 1, esi);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return (t26 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10002040(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10002077u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->edi = arg4;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10002096u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0xcu);
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 0xcu;
        g->edi = arg4;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100020a7u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg4;
        wr32(sp0 - 0x10u, sp0 - 4u);
        (void)sp0;
        return 1;
    }
    case 0x100020c8u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x100020dfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100020e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100020f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100020f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x100020ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10002105u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1000210du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1000211bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10002040(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10002040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
