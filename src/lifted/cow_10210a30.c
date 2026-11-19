/* f_0x10210a30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10210a30(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_58;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 100u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10210a49u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x58u); goto E_10210a49;
    case 0x10210a50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x58u); goto E_10210a50;
    case 0x10210a67u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x58u); goto E_10210a67;
    case 0x10210a74u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x58u); goto E_10210a74;
    case 0x10210a7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x58u); g->esi = rd32(sp0 - 0x58u); goto E_10210a7b;
    case 0x10210a93u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; goto E_10210a93;
    case 0x10210a96u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = g->edi; loc_58 = rd32(sp0 - 0x58u); goto E_10210a96;
    default: break;
    }
#endif

    COW_AT(10210a30)
    wr32(sp0 - 0x58u, in_esi);
    t1 = rd16(rd32(sp0 + 0xcu) + 4u);
    wr32(sp0 - 0x5cu, t1);
    wr32(sp0 - 0x60u, sp0 + 0xcu);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(sp0 + 0xcu);
    g->esp = sp0 - 0x58u;
    t3 = cow_cdecl(g, COW_IMG(0x100f8a80u), 2, sp0 + 0xcu, t1);
    t4 = g->edx;
    eax = t3;
    edx = t4;
    esi = t2;
    COW_AT(10210a49)
    if ((uint8_t)eax == 0u)
    {
        loc_58 = in_esi;
    }
    else
    {
    COW_AT(10210a50)
        wr32(sp0 - 0x5cu, in_edi);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        if (rd32(esi + 8u) <= 1u)
        {
    COW_AT(10210a74)
            wr16(sp0 - 0x4cu, 0xe7u);
        }
        else
        {
            eax = rd32(esi + 8u);
    COW_AT(10210a67)
            wr16(sp0 - 0x4cu, 0xe6u);
            wr32(sp0 - 0x44u, eax);
        }
    COW_AT(10210a7b)
        wr32(sp0 - 0x5cu, sp0 - 0x54u);
        t5 = rd16(rd32(sp0 + 0xcu) + 0xcu);
        wr32(sp0 - 0x48u, t5);
        g->eax = rd32(sp0 + 0xcu);
        g->edx = t5;
        t6 = rd32(sp0 + 0xcu);
        g->esp = sp0 - 0x58u;
        t7 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    COW_AT(10210a93)
        loc_58 = rd32(sp0 - 0x58u);
    }
    COW_AT(10210a96)
    g->esi = loc_58;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10210a30(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10210a49u:
    {
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10210a50u:
    {
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10210a67u:
    {
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10210a74u:
    {
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10210a7bu:
    {
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
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10210a93u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0x54u);
        (void)sp0;
        return 1;
    }
    case 0x10210a96u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t loc_58;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = g->edi;
        loc_58 = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x60u, sp0 + 0xcu);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10210a30(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10210a30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
