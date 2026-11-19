/* f_0x10306498 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10306498(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
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
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x103064fau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_103064fa;
    case 0x10306543u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); goto E_10306543;
    default: break;
    }
#endif

    COW_AT(10306498)
    g->eax = rd32(in_eax + 4u);
    g->edx = in_edx;
    t1 = rd32(in_eax + 4u);
    t2 = rd32(in_eax + 0x19cu);
    g->esp = sp0 - 0x18u;
    t3 = cow_thiscall(g, rd32(t1), self, 3, in_eax, 1u, 0x400u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(t2 + 0x10u, t3);
    g->eax = rd32(in_eax + 4u);
    g->edx = t5;
    t6 = rd32(in_eax + 4u);
    t7 = cow_thiscall(g, rd32(t6), t4, 3, in_eax, 1u, 0x400u);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(t2 + 0x14u, t7);
    g->eax = rd32(in_eax + 4u);
    g->edx = t9;
    t10 = rd32(in_eax + 4u);
    t11 = cow_thiscall(g, rd32(t10), t8, 3, in_eax, 1u, 0x400u);
    t12 = g->ecx;
    t13 = g->edx;
    wr32(t2 + 0x18u, t11);
    g->eax = rd32(in_eax + 4u);
    t14 = rd32(in_eax + 4u);
    t15 = cow_thiscall_cdecl(g, rd32(t14), t12, 3, in_eax, 1u, 0x400u);
    wr32(t2 + 0x1cu, t15);
    eax = 0u;
    ecx = 0x2c8d00u;
    edx = 0x5b6900u;
    esi = t2;
    loc_8 = 0xff4d0b80u;
    loc_c = 0xff1daf00u;
L_103064fa: ;
    COW_AT(103064fa)
    wr32(eax + rd32(esi + 0x10u), (uint32_t)((int32_t)loc_8 >> 0x10u));
    wr32(eax + rd32(esi + 0x14u), (uint32_t)((int32_t)loc_c >> 0x10u));
    wr32(eax + rd32(esi + 0x18u), edx);
    wr32(eax + rd32(esi + 0x1cu), ecx);
    if ((int32_t)(ecx - 0x581au) >= -2831590)
    {
        eax = eax + 4u;
        ecx = ecx - 0x581au;
        edx = edx - 0xb6d2u;
        loc_8 = loc_8 + 0x166e9u;
        loc_c = loc_c + 0x1c5a2u;
        goto L_103064fa;
    }
    edx = edx - 0xb6d2u;
    COW_AT(10306543)
    g->ebx = arg5;
    g->esi = arg4;
    g->edi = arg3;
    g->edx = edx;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10306498(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x103064fau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 + 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10306543u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_8;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 + 0xcu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10306498(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10306498(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
