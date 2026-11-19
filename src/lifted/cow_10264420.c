/* f_0x10264420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10264420(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10264438u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264438;
    case 0x1026443fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026443f;
    case 0x1026444eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1026444e;
    case 0x10264459u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10264459;
    default: break;
    }
#endif

    COW_AT(10264420)
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_stdcall(g, rd32(COW_IMG(0x103291b8u)), 4, 0u, 0u, 0u, 0u);   /* kernel32.dll!CreateEventA */
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t3;
        esi = t1;
        goto L_1026443f;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10264438)
    g->esp = sp0;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10266ad0u), eax, ecx, edx);
L_1026443f: ;
    COW_AT(1026443f)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t4 = cow_fastcall(g, COW_IMG(0x10264480u), self, edx, 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    if ((int32_t)t4 >= 0)
    {
        eax = t4;
        ecx = t5;
        edx = t6;
        loc_c = esi;
        goto L_10264459;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    edi = t4;
    loc_c = esi;
    COW_AT(1026444e)
    g->esp = sp0 - 8u;
    cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, loc_c);   /* kernel32.dll!CloseHandle */
    g->esi = in_esi;
    g->edi = in_edi;
    return edi;
L_10264459: ;
    COW_AT(10264459)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_call_regs(g, COW_IMG(0x10264ba0u), g->eax, ecx, edx, 1, 1, loc_c);
    t8 = g->ecx;
    t9 = g->edx;
    cow_stdcall(g, rd32(COW_IMG(0x10329104u)), 1, esi);   /* kernel32.dll!CloseHandle */
    g->esi = in_esi;
    g->edi = in_edi;
    return ((int32_t)t7 >= 0) - 1u & t7;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10264420(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10264438u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026443fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1026444eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x10264459u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 0xcu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10264420(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10264420(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
