/* f_0x10195900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10195900(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 3336u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10195933u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcf4u); g->esi = rd32(sp0 - 0xcf4u); goto E_10195933;
    case 0x1019593bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcf4u); g->esi = rd32(sp0 - 0xcf4u); goto E_1019593b;
    case 0x10195946u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcf4u); g->esi = rd32(sp0 - 0xcf4u); goto E_10195946;
    case 0x1019594eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 0xcf4u); g->esi = rd32(sp0 - 0xcf4u); goto E_1019594e;
    case 0x10195958u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 0xcf4u); g->esi = rd32(sp0 - 0xcf4u); goto E_10195958;
    case 0x1019595du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1019595d;
    case 0x1019597eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_1019597e;
    case 0x10195988u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; goto E_10195988;
    default: break;
    }
#endif

    COW_AT(10195900)
    wr32(sp0 - 0xcf4u, in_esi);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, 0xa2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcf4u;
    t1 = cow_call_regs(g, COW_IMG(0x10193830u), in_eax, g->ecx, g->edx, 1, 2, 0xa2u, 0u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0xd00u, 2u);
    wr32(sp0 - 0xd04u, 0xa2u);
    g->esp = sp0 - 0xcfcu;
    cow_call_regs(g, COW_IMG(0x10193830u), t1, g->ecx, g->edx, 1, 2, 0xa2u, 2u);
    wr32(sp0 - 0xcf0u, 5u);
    eax = 0u;
    edx = 1u;
L_10195933: ;
    COW_AT(10195933)
    if ((int32_t)edx >= 828) goto L_10195958;
    COW_AT(1019593b)
    if (rd32(eax + rd32(self + 4u) + 0xcu) == 4u)
    {
        ecx = eax + rd32(self + 4u);
    COW_AT(10195946)
        t4 = rd32(ecx + 8u);
        wr32(edx * 4u + sp0 - 0xcf0u, t4);
        edx = edx + 1u;
    }
    COW_AT(1019594e)
    if ((int32_t)(eax + 0x2cu) < 9108)
    {
        eax = eax + 0x2cu;
        goto L_10195933;
    }
L_10195958: ;
    COW_AT(10195958)
    if ((int32_t)edx <= 0) goto L_10195988;
    COW_AT(1019595d)
    wr32(sp0 - 0xcf4u, 0u);
    wr32(sp0 - 0xcf8u, 0u);
    wr32(sp0 - 0xcfcu, edx << 2u);
    wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
    wr32(sp0 - 0xd04u, COW_IMG(0x10379a08u));
    g->eax = sp0 - 0xcf0u;
    g->esp = sp0 - 0xcf0u;
    t5 = cow_thiscall(g, COW_IMG(0x101c4920u), rd32(COW_IMG(0x10662dccu)), 5, COW_IMG(0x10379a08u), sp0 - 0xcf0u, edx << 2u, 0u, 0u);
    if ((int32_t)t5 >= 0) goto L_10195988;
    eax = t5;
    COW_AT(1019597e)
    g->esi = in_esi;
    return 0xffffffffu;
L_10195988: ;
    COW_AT(10195988)
    g->esi = in_esi;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10195900(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10195933u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x1019593bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x10195946u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x1019594eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x10195958u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 0xcf4u);
        g->esp = sp0 - 0xcf4u;
        (void)sp0;
        return 1;
    }
    case 0x1019595du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcf0u;
        (void)sp0;
        return 1;
    }
    case 0x1019597eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcf0u;
        wr32(sp0 - 0xd00u, sp0 - 0xcf0u);
        (void)sp0;
        return 1;
    }
    case 0x10195988u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0xcf0u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10195900(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10195900(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
