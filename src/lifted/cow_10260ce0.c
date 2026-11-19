/* f_0x10260ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10260ce0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10260d0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10260d0c;
    case 0x10260d25u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10260d25;
    case 0x10260d36u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10260d36;
    case 0x10260d5eu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10260d5e;
    case 0x10260d6bu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_10260d6b;
    case 0x10260d6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10260d6f;
    default: break;
    }
#endif

    COW_AT(10260ce0)
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, in_edi);
    wr32(sp0 - 0xcu, sp0 + 0x10u);
    wr32(sp0 - 0x10u, COW_IMG(0x1034a128u));
    wr32(sp0 - 0x14u, 1u);
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x1033fb08u));
    wr32(arg4, 0u);
    g->eax = sp0 + 0x10u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103294a4u)), 5, COW_IMG(0x1033fb08u), arg1, 1u, COW_IMG(0x1034a128u), sp0 + 0x10u);   /* ole32.dll!CoCreateInstance */
    t2 = g->edx;
    if ((int32_t)t1 < 0)
    {
        eax = t1;
        edx = t2;
        loc_4 = in_esi;
        loc_8 = in_edi;
        goto L_10260d6f;
    }
    COW_AT(10260d0c)
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, COW_IMG(0x1033e6e8u));
    wr32(sp0 - 0x14u, arg4);
    g->eax = arg4;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, rd32(rd32(arg4)), sp0 + 4u, 3, arg4, COW_IMG(0x1033e6e8u), sp0 + 4u);
    t4 = g->ecx;
    if ((int32_t)t3 >= 0) goto L_10260d36;
    ecx = t4;
    esi = t3;
    COW_AT(10260d25)
    wr32(sp0 - 0xcu, arg4);
    g->edx = rd32(arg4);
    t5 = rd32(arg4);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t5 + 8u), ecx, 1, arg4);
    t6 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t6;
    return esi;
L_10260d36: ;
    COW_AT(10260d36)
    wr32(sp0 - 0xcu, arg3);
    wr32(sp0 - 0x10u, arg2);
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, rd32(rd32(arg1) + 0xcu), rd32(arg1), 3, arg1, arg2, arg3);
    t8 = g->edx;
    wr32(sp0 - 0xcu, arg1);
    g->edx = t8;
    t9 = rd32(arg1);
    cow_thiscall(g, rd32(t9 + 8u), t9, 1, arg1);
    t10 = g->ecx;
    t11 = g->edx;
    if ((int32_t)t7 >= 0)
    {
        edx = t11;
        goto L_10260d6b;
    }
    ecx = t10;
    esi = t7;
    COW_AT(10260d5e)
    wr32(sp0 - 0xcu, arg4);
    g->edx = rd32(arg4);
    t12 = rd32(arg4);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t12 + 8u), ecx, 1, arg4);
    t13 = g->edx;
    g->esi = rd32(sp0 - 4u);
    g->edi = rd32(sp0 - 8u);
    g->edx = t13;
    return esi;
L_10260d6b: ;
    COW_AT(10260d6b)
    wr32(arg4, arg4);
    eax = 0u;
    loc_4 = rd32(sp0 - 4u);
    loc_8 = rd32(sp0 - 8u);
L_10260d6f: ;
    COW_AT(10260d6f)
    g->esi = loc_4;
    g->edi = loc_8;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10260ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10260d0cu:
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
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = arg4;
        wr32(sp0 - 0xcu, sp0 + 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10260d25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10260d36u:
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
        g->esp = sp0 - 8u;
        g->edi = arg4;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x10260d5eu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10260d6bu:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg4;
        g->edi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10260d6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10260ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10260ce0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
