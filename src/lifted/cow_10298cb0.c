/* f_0x10298cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10298cb0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 32u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10298ccdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_10298ccd;
    case 0x10298cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_10298ceb;
    case 0x10298d09u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_10298d09;
    case 0x10298d31u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_10298d31;
    case 0x10298d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_10298d45;
    default: break;
    }
#endif

    COW_AT(10298cb0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, COW_IMG(0x102984d0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, t1);
    g->edx = t3;
    t4 = cow_thiscall_cdecl(g, COW_IMG(0x10298730u), t2, 2, t1, arg2);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        goto L_10298ceb;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(10298ccd)
    wr32(sp0 - 0xcu, arg2);
    wr32(sp0 - 0x10u, COW_IMG(0x103bbe60u));
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bbe60u), arg2);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->eax = sp0 - 4u;
    t9 = cow_cdecl(g, COW_IMG(0x10298560u), 3, sp0 - 4u, COW_IMG(0x103bbe60u), arg2);
    g->esi = in_esi;
    return 0xffffffffu;
L_10298ceb: ;
    COW_AT(10298ceb)
    t10 = rd32(sp0 - 4u);
    t11 = rd32(arg1 + 0x20u);
    wr32(arg1 + 0x1cu, t10);
    wr32(arg1 + 0x20u, t11 | 1u);
    if (rd8(COW_IMG(0x103bbde0u)) == 0u)
    {
        loc_8 = in_esi;
    }
    else
    {
        eax = t10;
    COW_AT(10298d09)
        wr32(sp0 - 0xcu, 0u);
        t12 = rd32(eax + 0x28u);
        wr32(sp0 - 0x10u, t12);
        t13 = rd32(eax + 0x24u);
        wr32(sp0 - 0x14u, t13);
        t14 = rd32(eax + 0x20u);
        wr32(sp0 - 0x18u, t14);
        t15 = rd32(eax + 0x1cu);
        wr32(sp0 - 0x1cu, t15);
        g->esi = arg1;
        g->eax = eax;
        g->edx = t15;
        g->esp = sp0 - 8u;
        t16 = cow_thiscall_cdecl(g, COW_IMG(0x10281850u), t14, 5, t15, t14, t13, t12, 0u);
        t17 = g->edx;
        t18 = rd32(sp0 - 4u);
        wr32(arg1 + 0x14u, t16);
        if (rd32(t18 + 0x38u) == 0u)
        {
            loc_8 = in_esi;
        }
        else
        {
            eax = rd32(t18 + 0x38u);
            ecx = t18;
            edx = t17;
    COW_AT(10298d31)
            wr32(sp0 - 0xcu, eax);
            t19 = rd32(ecx + 0x30u);
            wr32(sp0 - 0x10u, t19);
            t20 = rd32(ecx + 0x34u);
            wr32(sp0 - 0x14u, t20);
            g->eax = t19;
            g->esp = sp0 - 8u;
            t21 = cow_cdecl(g, COW_IMG(0x102819f0u), 3, t20, t19, eax);
            wr32(arg1 + 0x18u, t21);
            loc_8 = rd32(sp0 - 8u);
        }
    }
    COW_AT(10298d45)
    g->esi = loc_8;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10298cb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10298ccdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10298cebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10298d09u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10298d31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 8u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10298d45u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10298cb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10298cb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
