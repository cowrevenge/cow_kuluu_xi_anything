/* f_0x100f1ac0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_100f1ac0(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    unsigned zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f1aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; in_esi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x2cu); goto E_100f1ace;
    case 0x100f1ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f1ad4;
    case 0x100f1addu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f1add;
    case 0x100f1aecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f1aec;
    case 0x100f1af4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; pf = g->pf; zf = g->zf; sf = g->sf; goto E_100f1af4;
    case 0x100f1b10u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f1b10;
    case 0x100f1b13u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; cf = g->cf; pf = g->pf; zf = g->zf; sf = g->sf; of = g->of; goto E_100f1b13;
    default: break;
    }
#endif

    COW_AT(100f1ac0)
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, sp0 - 0x28u);
    g->eax = sp0 - 0x28u;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x100f1920u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(100f1ace)
    wr32(sp0 - 0x34u, eax);
    g->eax = eax;
    g->esp = sp0 - 0x34u;
    t4 = cow_stdcall(g, COW_IMG(0x100f15d0u), 0);
    eax = t4;
    COW_AT(100f1ad4)
    if ((int32_t)eax < 0)
    {
        esi = eax;
        goto L_100f1b13;
    }
    esi = eax;
    COW_AT(100f1add)
    t5 = rd32(sp0 - 0x28u);
    if (t5 & 1u)
    {
        ecx = t5;
        pf = PARITY(t5 & 1u);
        zf = !(t5 & 1u);
        sf = (int32_t)(t5 & 1u) < 0;
        goto L_100f1af4;
    }
    eax = t5 & 1u;
    COW_AT(100f1aec)
    g->esi = rd32(sp0 - 0x2cu);
    return 0xffffffffu;
L_100f1af4: ;
    COW_AT(100f1af4)
    t6 = rd32(sp0 - 0x24u);
    edx = t6;
    cf = 0u;
    of = 0u;
    { /* shrd ecx, edx, 1 */ { unsigned c = (unsigned)(0x1u) & 31u; if (c) { uint32_t a = ecx, b = edx, r; r = (a >> c) | (b << (32 - c)); cf = (a >> (c - 1)) & 1u; of = ((r ^ a) >> 31) & 1u; zf = (uint32_t)r == 0; sf = ((r) >> 31) & 1u; pf = PARITY(r); ecx = (uint32_t)(r); } } }
    t7 = edx >> 1u & 0xfffu;
    wr32(sp0 - 0x30u, t7);
    wr32(sp0 - 0x34u, ecx);
    wr32(sp0 - 0x38u, arg1);
    g->esp = sp0 - 0x38u;
    cow_stdcall(g, COW_IMG(0x10310981u), 0);
    COW_AT(100f1b10)
L_100f1b13: ;
    COW_AT(100f1b13)
    g->esi = rd32(sp0 - 0x2cu);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f1ac0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f1aceu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1ad4u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x34u;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1addu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1aecu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1af4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        g->esp = sp0 - 0x2cu;
        g->cf = (uint8_t)(0u);
        g->of = (uint8_t)(0u);
        wr32(sp0 - 0x30u, sp0 - 0x28u);
        (void)sp0;
        return 1;
    }
    case 0x100f1b10u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x38u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b13u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        unsigned of;
        unsigned pf;
        unsigned sf;
        unsigned zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        cf = g->cf;
        pf = g->pf;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1ac0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f1ac0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
