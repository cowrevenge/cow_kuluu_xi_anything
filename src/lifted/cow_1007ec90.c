/* f_0x1007ec90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007ec90(Guest* g)
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 532u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007eca2u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_1007eca2;
    case 0x1007ecb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007ecb3;
    case 0x1007ecbau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007ecba;
    case 0x1007ecbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007ecbf;
    case 0x1007ecc4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007ecc4;
    case 0x1007ecf3u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_1007ecf3;
    case 0x1007ed1eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1007ed1e;
    default: break;
    }
#endif

    COW_AT(1007ec90)
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    COW_AT(1007ecf3)
        wr32(sp0 - 0x204u, 0xc4u);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x200u;
        t10 = cow_call_regs(g, COW_IMG(0x10193850u), eax, g->ecx, g->edx, 1, 1, 0xc4u);
        t11 = g->ecx;
        t12 = g->edx;
        wr32(sp0 - 0x204u, t10);
        wr32(sp0 - 0x208u, 0x13fu);
        wr32(sp0 - 0x20cu, 9u);
        g->ecx = t11;
        g->esp = sp0 - 0x204u;
        t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x13fu);
        t14 = g->ecx;
        wr32(sp0 - 0x208u, t13);
        wr32(sp0 - 0x20cu, sp0 - 0x200u);
        g->edx = sp0 - 0x200u;
        g->esp = sp0 - 0x1f8u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t13, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu));
        t15 = g->edx;
        edx = t15;
        esi = in_esi;
    }
    else
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    COW_AT(1007eca2)
        wr32(sp0 - 0x204u, in_esi);
        wr32(sp0 - 0x208u, eax);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x204u;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), self, 1, eax);
        t2 = g->ecx;
        t3 = g->edx;
        if ((int32_t)t1 >= 1)
        {
            eax = t1;
            ecx = t2;
            edx = t3;
            esi = t1;
    COW_AT(1007ecba)
            if ((int32_t)esi > 100)
            {
    COW_AT(1007ecbf)
                esi = 0x64u;
            }
        }
        else
        {
            eax = t1;
            ecx = t2;
            edx = t3;
    COW_AT(1007ecb3)
            esi = 1u;
        }
    COW_AT(1007ecc4)
        wr32(sp0 - 0x208u, esi);
        wr32(sp0 - 0x20cu, 0xc4u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x204u;
        t4 = cow_call_regs(g, COW_IMG(0x10193830u), eax, g->ecx, g->edx, 1, 2, 0xc4u, esi);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(sp0 - 0x208u, esi);
        wr32(sp0 - 0x20cu, 0x13eu);
        wr32(sp0 - 0x210u, 9u);
        g->edx = t6;
        g->esp = sp0 - 0x208u;
        t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x13eu);
        t8 = g->edx;
        wr32(sp0 - 0x20cu, t7);
        wr32(sp0 - 0x210u, sp0 - 0x200u);
        g->edx = t8;
        g->esp = sp0 - 0x1fcu;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, t7, rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
        t9 = g->edx;
        edx = t9;
        esi = rd32(sp0 - 0x204u);
    }
    COW_AT(1007ed1e)
    wr32(sp0 - 0x204u, sp0 - 0x200u);
    g->edx = edx;
    g->esp = sp0 - 0x200u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    t16 = g->edx;
    g->esi = esi;
    g->edx = t16;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007ec90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007eca2u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1007ecb3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        (void)sp0;
        return 1;
    }
    case 0x1007ecbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        (void)sp0;
        return 1;
    }
    case 0x1007ecbfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        (void)sp0;
        return 1;
    }
    case 0x1007ecc4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x204u;
        (void)sp0;
        return 1;
    }
    case 0x1007ecf3u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    case 0x1007ed1eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x200u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1007ec90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007ec90(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
