/* f_0x101a03d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101a03d0(Guest* g)
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
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg67 = rd32(sp0 + 0x10cu);
    const uint32_t arg68 = rd32(sp0 + 0x110u);
    const uint32_t arg72 = rd32(sp0 + 0x120u);
    const uint32_t arg73 = rd32(sp0 + 0x124u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a03dbu: ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101a03db;
    case 0x101a03e1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_101a03e1;
    case 0x101a03f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a03f7;
    case 0x101a03fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a03fb;
    case 0x101a0401u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0401;
    case 0x101a040cu: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a040c;
    case 0x101a041eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a041e;
    case 0x101a0422u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0422;
    case 0x101a0431u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0431;
    case 0x101a0437u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0437;
    case 0x101a0446u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0446;
    case 0x101a0455u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0455;
    case 0x101a0460u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0460;
    case 0x101a0469u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0469;
    case 0x101a0481u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0481;
    case 0x101a0487u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0487;
    case 0x101a0496u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a0496;
    case 0x101a049cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a049c;
    case 0x101a04abu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04ab;
    case 0x101a04afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04af;
    case 0x101a04b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04b5;
    case 0x101a04c0u: ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04c0;
    case 0x101a04d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04d3;
    case 0x101a04d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101a04d6;
    default: break;
    }
#endif

    COW_AT(101a03d0)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (arg2 == 1u) goto L_101a03e1;
    COW_AT(101a03db)
    g->esi = in_esi;
    return 0xffffffffu;
L_101a03e1: ;
    COW_AT(101a03e1)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101be470u), sp0 + 0xcu, COW_IMG(0x1066278cu), g->edx, 0, 3, sp0 - 4u, sp0 + 0xcu, 0u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(101a03f7)
    if ((int32_t)eax >= 0) goto L_101a0401;
    COW_AT(101a03fb)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a0401: ;
    COW_AT(101a0401)
    if ((int32_t)arg67 <= 0)
    {
        eax = arg67;
        goto L_101a0437;
    }
    COW_AT(101a040c)
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, arg67);
    t3 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t3);
    g->eax = arg67;
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x101be540u), g->eax, g->ecx, t3, 0, 3, t3, arg67, 0u);
    t5 = g->edx;
    eax = t4;
    edx = t5;
    COW_AT(101a041e)
    if ((int32_t)eax >= 0) goto L_101a0437;
    COW_AT(101a0422)
    t6 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t6);
    g->eax = t6;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t6);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    COW_AT(101a0431)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a0437: ;
    COW_AT(101a0437)
    if (rd32(sp0 + 0x114u) != 0x1400000u)
    {
        ecx = rd32(sp0 + 0x114u);
    }
    else
    {
    COW_AT(101a0446)
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        g->eax = eax;
        g->esp = sp0 - 8u;
        t9 = cow_stdcall(g, COW_IMG(0x101be510u), 1, sp0 + 0xcu);
        eax = t9;
    COW_AT(101a0455)
        if ((int32_t)eax >= (int32_t)rd32(sp0 + 0x114u))
        {
            ecx = rd32(sp0 + 0x114u);
        }
        else
        {
    COW_AT(101a0460)
            wr32(sp0 + 0x114u, eax);
            ecx = eax;
        }
    }
    COW_AT(101a0469)
    wr32(sp0 - 0xcu, ecx);
    wr32(sp0 - 0x10u, arg68);
    t10 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t10);
    g->eax = t10;
    g->edx = arg68;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall(g, COW_IMG(0x101be590u), COW_IMG(0x1066278cu), 3, t10, arg68, ecx);
    t12 = g->edx;
    eax = t11;
    edx = t12;
    COW_AT(101a0481)
    if ((int32_t)eax >= 0)
    {
        esi = eax;
        goto L_101a049c;
    }
    COW_AT(101a0487)
    t13 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t13);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t14 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, edx, 0, 1, t13);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    COW_AT(101a0496)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a049c: ;
    COW_AT(101a049c)
    t16 = rd32(sp0 - 4u);
    wr32(sp0 - 0xcu, t16);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t17 = cow_call_regs(g, COW_IMG(0x101be500u), g->eax, g->ecx, t16, 0, 1, t16);
    t18 = g->edx;
    eax = t17;
    edx = t18;
    COW_AT(101a04ab)
    if ((int32_t)eax >= 0) goto L_101a04b5;
    COW_AT(101a04af)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return 0xffffffffu;
L_101a04b5: ;
    COW_AT(101a04b5)
    if (arg72 != 0u)
    {
    COW_AT(101a04c0)
        wr32(sp0 - 0xcu, arg73);
        wr32(sp0 - 0x10u, esi);
        wr32(sp0 - 0x14u, arg68);
        g->edx = arg68;
        g->esp = sp0 - 8u;
        cow_thiscall_cdecl(g, arg72, arg73, 3, arg68, esi, arg73);
        t19 = g->edx;
        edx = t19;
    COW_AT(101a04d3)
    }
    COW_AT(101a04d6)
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a03d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a03dbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101a03e1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101a03f7u:
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
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a03fbu:
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
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0401u:
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
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a040cu:
    {
        const uint32_t arg67 = rd32(sp0 + 0x10cu);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg67;
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x10u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a041eu:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0422u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0431u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0437u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0446u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0455u:
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
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0460u:
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
        wr32(sp0 - 0xcu, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x101a0469u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0481u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0487u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a0496u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a049cu:
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
        (void)sp0;
        return 1;
    }
    case 0x101a04abu:
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
        (void)sp0;
        return 1;
    }
    case 0x101a04afu:
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
        (void)sp0;
        return 1;
    }
    case 0x101a04b5u:
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
        (void)sp0;
        return 1;
    }
    case 0x101a04c0u:
    {
        const uint32_t arg72 = rd32(sp0 + 0x120u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        g->eax = arg72;
        (void)sp0;
        return 1;
    }
    case 0x101a04d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x101a04d6u:
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
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a03d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a03d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
