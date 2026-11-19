/* f_0x1003d160 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=1 */
void cow_fn_1003d160(Guest* g)
{
    double d1;
    double d4;
    double d5;
    double d6;
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t2;
    uint32_t t3;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 24u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1003d16eu: eax = g->eax; ecx = g->ecx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1003d16e;
    case 0x1003d173u: eax = g->eax; ecx = g->ecx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d173;
    case 0x1003d186u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1003d186;
    case 0x1003d18du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1003d18d;
    case 0x1003d1a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 8u); goto E_1003d1a2;
    case 0x1003d1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1ac;
    case 0x1003d1b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1b1;
    case 0x1003d1beu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1be;
    case 0x1003d1c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1c2;
    case 0x1003d1d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1d3;
    case 0x1003d1e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1e4;
    case 0x1003d1e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1e8;
    case 0x1003d1f9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d1f9;
    case 0x1003d20au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 8u); self = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1003d20a;
    default: break;
    }
#endif

    COW_AT(1003d160)
    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((int32_t)rd32(rd32(self + 0x74u) + 0x74u) < 0)
    {
        eax = rd32(rd32(self + 0x74u) + 0x74u);
        ecx = rd32(self + 0x74u);
        goto L_1003d186;
    }
    eax = rd32(rd32(self + 0x74u) + 0x74u);
    ecx = rd32(self + 0x74u);
    COW_AT(1003d16e)
    if ((int32_t)eax > 4) goto L_1003d186;
    COW_AT(1003d173)
    wr32(sp0 - 0xcu, eax);
    wr32(sp0 - 0x10u, arg1);
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x1003d0b0u), 2, arg1, eax);
    d1 = cow_take_float(g);
    g->esi = in_esi;
    fpush(g, d1);
    return;
L_1003d186: ;
    COW_AT(1003d186)
    if (rd32(ecx + 0x78u) != 0u)
    {
        edx = rd32(ecx + 0x78u);
    }
    else
    {
    COW_AT(1003d18d)
        wr32(sp0 - 0xcu, eax);
        wr32(sp0 - 0x10u, 0x19u);
        wr32(sp0 - 0x14u, sp0 - 4u);
        g->eax = eax;
        g->edx = sp0 - 4u;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, COW_IMG(0x10072290u), ecx, 3, sp0 - 4u, 0x19u, eax);
        t3 = g->edx;
        wr32(rd32(self + 0x74u) + 0x78u, rd32(t2));
        edx = t3;
    }
    COW_AT(1003d1a2)
    if (rd32(rd32(self + 0x74u) + 0x78u) == 0u) goto L_1003d20a;
    eax = rd32(rd32(self + 0x74u) + 0x78u);
    esi = rd32(self + 0x74u);
    COW_AT(1003d1ac)
    if (rd32(eax) == 0u) goto L_1003d20a;
    COW_AT(1003d1b1)
    if ((rd32(esi + 0x70u) & 0x200000u) == 0u)
    {
        esi = rd32(esi + 0x78u);
        goto L_1003d1e4;
    }
    eax = rd32(esi + 0x70u);
    esi = rd32(esi + 0x78u);
    COW_AT(1003d1be)
    if (esi == 0u) goto L_1003d1d3;
    COW_AT(1003d1c2)
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x100547a0u), eax, rd32(esi), g->edx, 0, 1, arg1);
    d4 = cow_take_float(g);
    g->esi = in_esi;
    fpush(g, d4);
    return;
L_1003d1d3: ;
    COW_AT(1003d1d3)
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x100547a0u), eax, 0u, g->edx, 0, 1, arg1);
    d5 = cow_take_float(g);
    g->esi = in_esi;
    fpush(g, d5);
    return;
L_1003d1e4: ;
    COW_AT(1003d1e4)
    if (esi == 0u) goto L_1003d1f9;
    COW_AT(1003d1e8)
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10054500u), arg1, rd32(esi), g->edx, 0, 1, arg1);
    d6 = cow_take_float(g);
    g->esi = in_esi;
    fpush(g, d6);
    return;
L_1003d1f9: ;
    COW_AT(1003d1f9)
    wr32(sp0 - 0xcu, arg1);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10054500u), arg1, 0u, g->edx, 0, 1, arg1);
    d7 = cow_take_float(g);
    g->esi = in_esi;
    fpush(g, d7);
    return;
L_1003d20a: ;
    COW_AT(1003d20a)
    g->esi = in_esi;
    fpush(g, (double)rdf32(sp0 + 4u));
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1003d160(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1003d16eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003d173u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d186u:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003d18du:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003d1a2u:
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
        in_esi = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1003d1acu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1e4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1e8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d1f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1003d20au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 8u);
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1003d160(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1003d160(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
