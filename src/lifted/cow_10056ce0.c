/* f_0x10056ce0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10056ce0(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10056d09u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d09;
    case 0x10056d1fu: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d1f;
    case 0x10056d21u: ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d21;
    case 0x10056d38u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d38;
    case 0x10056d3fu: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d3f;
    case 0x10056d47u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d47;
    case 0x10056d4eu: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d4e;
    case 0x10056d59u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d59;
    case 0x10056d61u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d61;
    case 0x10056d69u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d69;
    case 0x10056d71u: ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10056d71;
    default: break;
    }
#endif

    COW_AT(10056ce0)
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0x14au, 4u);
    t2 = g->edx;
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x100748f0u), t1, t2, 0);
    t3 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t1 == 0u)
    {
        edx = t3;
    COW_AT(10056d1f)
        esi = 0u;
    }
    else
    {
        edx = t3;
        esi = t1;
    COW_AT(10056d09)
        g->esp = sp0 - 8u;
        t4 = cow_call_regs(g, COW_IMG(0x10057270u), arg3, esi, edx, 0, 3, self, arg4, arg3);
        t5 = g->edx;
        edx = t5;
        esi = t4;
    }
    COW_AT(10056d21)
    t6 = rd32(self + 0x74u);
    wr32(esi + 0x8cu, t6);
    wr32(esi + 0x88u, t6);
    if (arg1 == 0u) goto L_10056d47;
    COW_AT(10056d38)
    if (rd32(arg1 + 0x70u) == 0u) goto L_10056d47;
    ecx = rd32(arg1 + 0x70u);
    COW_AT(10056d3f)
    t7 = rd32(ecx + 0x78u);
    wr32(esi + 0x18u, t7);
    edx = t7;
L_10056d4e: ;
    COW_AT(10056d4e)
    wr32(esi + 0x1cu, 0x4d730000u);
    if (arg1 != 0u)
    {
    COW_AT(10056d59)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10062830u), esi, 1, arg1);
        t8 = g->edx;
        edx = t8;
    }
    COW_AT(10056d61)
    if (arg2 != 0u)
    {
    COW_AT(10056d69)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10062880u), esi, 1, arg2);
        t9 = g->edx;
        edx = t9;
    }
    COW_AT(10056d71)
    wr32(esi + 0x94u, 0u);
    wr32(esi + 0x98u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return esi;
L_10056d47: ;
    COW_AT(10056d47)
    wr32(esi + 0x18u, 0u);
    goto L_10056d4e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10056ce0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10056d09u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10056d1fu:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10056d21u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10056d38u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10056d3fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10056d47u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10056d4eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10056d59u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10056d61u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10056d69u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10056d71u:
    {
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10056ce0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10056ce0(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
