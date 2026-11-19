/* f_0x10220d90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10220d90(Guest* g)
{
    uint32_t ebp;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10220d99u: in_ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10220d99;
    case 0x10220da8u: ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10220da8;
    case 0x10220dccu: ebp = g->ebp; esi = g->esi; in_edi = rd32(sp0 - 0x10u); in_esi = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0xcu); goto E_10220dcc;
    case 0x10220dcfu: in_ebx = g->ebx; ebp = g->ebp; in_esi = g->esi; in_edi = g->edi; in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); goto E_10220dcf;
    default: break;
    }
#endif

    COW_AT(10220d90)
    if ((int32_t)arg4 > 0)
    {
    COW_AT(10220d99)
        ebp = arg4;
        esi = arg1;
L_10220da8: ;
    COW_AT(10220da8)
        t1 = arg3 + rd32(esi + 8u);
        t2 = arg2 + rd32(esi + 4u);
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10129f00u), 5, t2, t1, rd32(esi), 0u, 0x80808080u);
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            esi = esi + 0xcu;
            goto L_10220da8;
        }
    COW_AT(10220dcc)
    }
    COW_AT(10220dcf)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10220d90(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10220d99u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->ebp = arg4;
        (void)sp0;
        return 1;
    }
    case 0x10220da8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = arg2;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10220dccu:
    {
        uint32_t ebp;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        ebp = g->ebp;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x10u);
        in_esi = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10220dcfu:
    {
        uint32_t ebp;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        in_ebx = g->ebx;
        ebp = g->ebp;
        in_esi = g->esi;
        in_edi = g->edi;
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10220d90(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10220d90(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
