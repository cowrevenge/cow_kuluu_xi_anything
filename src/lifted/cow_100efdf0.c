/* f_0x100efdf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100efdf0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_6c;
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 132u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100efe13u: eax = g->eax; edx = g->edx; edi = g->edi; loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); goto E_100efe13;
    case 0x100efe25u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe25;
    case 0x100efe2cu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe2c;
    case 0x100efe34u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe34;
    case 0x100efe3eu: edx = g->edx; edi = g->edi; goto E_100efe3e;
    case 0x100efe46u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe46;
    case 0x100efe6fu: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe6f;
    case 0x100efe75u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe75;
    case 0x100efe7au: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe7a;
    case 0x100efe91u: eax = g->eax; edx = g->edx; edi = g->edi; goto E_100efe91;
    default: break;
    }
#endif

    COW_AT(100efdf0)
    wr32(sp0 - 0x6cu, in_ebx);
    wr32(sp0 - 0x70u, in_ebp);
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, in_edi);
    t1 = rd32(COW_IMG(0x104df770u));
    wr32(t1 + 0x136acu, 0u);
    eax = t1;
    edx = in_edx;
    edi = 0u;
    loc_6c = in_ebx;
    loc_70 = in_ebp;
    loc_74 = in_esi;
    loc_78 = in_edi;
L_100efe13: ;
    COW_AT(100efe13)
    wr32(sp0 - 0x7cu, sp0 - 0x68u);
    wr32(sp0 - 0x80u, edi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x78u;
    t2 = cow_cdecl(g, COW_IMG(0x1030ffe1u), 2, edi, sp0 - 0x68u);
    t3 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t3;
        goto L_100efe6f;
    }
    eax = t2;
    edx = t3;
    COW_AT(100efe25)
    if (!(rd8(sp0 - 0x68u) & 1u)) goto L_100efe6f;
    COW_AT(100efe2c)
    if (rd16(sp0 - 0x66u) != 1u) goto L_100efe6f;
    COW_AT(100efe34)
    if (rd32(sp0 - 0x60u) != arg1)
    {
        eax = 0u;
        edx = rd32(sp0 - 0x60u);
        goto L_100efe6f;
    }
    edx = rd32(sp0 - 0x60u);
    COW_AT(100efe3e)
    if (rd32(sp0 - 0x5cu) != 0u)
    {
        eax = 0u;
        goto L_100efe6f;
    }
    COW_AT(100efe46)
    if (rd32(sp0 - 0x64u) == (((uint32_t)(uint16_t)arg2 << 8u | (arg3 & 0xffff0000u)) << 8u | (uint16_t)arg3))
    {
        eax = rd32(sp0 - 0x64u);
        goto L_100efe75;
    }
    eax = rd32(sp0 - 0x64u);
    edx = ((uint32_t)(uint16_t)arg2 << 8u | (arg3 & 0xffff0000u)) << 8u | (uint16_t)arg3;
L_100efe6f: ;
    COW_AT(100efe6f)
    if ((int32_t)(edi + 1u) < 64)
    {
        edi = edi + 1u;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        goto L_100efe13;
    }
    edi = edi + 1u;
L_100efe75: ;
    COW_AT(100efe75)
    if (edi != 0x40u) goto L_100efe91;
    COW_AT(100efe7a)
    t4 = rd32(sp0 - 0x70u);
    t5 = rd32(sp0 - 0x74u);
    t6 = rd32(sp0 - 0x78u);
    wr32(rd32(COW_IMG(0x104df770u)) + 0x136acu, 0xffffffffu);
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = t5;
    g->edi = t6;
    g->ebp = t4;
    return 0xffffffffu;
L_100efe91: ;
    COW_AT(100efe91)
    g->ebx = rd32(sp0 - 0x6cu);
    g->esi = rd32(sp0 - 0x74u);
    g->edi = rd32(sp0 - 0x78u);
    g->ebp = rd32(sp0 - 0x70u);
    return edi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100efdf0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100efe13u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x100efe25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe2cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe34u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edi;
        uint32_t edx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->eax = 0u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe46u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe6fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        g->ebx = arg1;
        g->ebp = arg2;
        g->esi = arg3;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe75u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe7au:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    case 0x100efe91u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x7cu, sp0 - 0x68u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100efdf0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100efdf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
