/* f_0x100f1b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f1b20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f1b2au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b2a;
    case 0x100f1b34u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b34;
    case 0x100f1b3bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b3b;
    case 0x100f1b42u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b42;
    case 0x100f1b53u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b53;
    case 0x100f1b5cu: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b5c;
    case 0x100f1b67u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b67;
    case 0x100f1b6fu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b6f;
    case 0x100f1b73u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b73;
    case 0x100f1b77u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b77;
    case 0x100f1b82u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b82;
    case 0x100f1b88u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b88;
    case 0x100f1b95u: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100f1b95;
    default: break;
    }
#endif

    COW_AT(100f1b20)
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_100f1b3b;
    }
    eax = rd32(self + 0x1cu);
L_100f1b2a: ;
    COW_AT(100f1b2a)
    if (rd16(eax + 0x1058u) == 0u) goto L_100f1b5c;
    COW_AT(100f1b34)
    if (rd32(eax + 4u) != 0u)
    {
        eax = rd32(eax + 4u);
        goto L_100f1b2a;
    }
    eax = rd32(eax + 4u);
L_100f1b3b: ;
    COW_AT(100f1b3b)
    if (rd16(self + 0x18u) >= 0x1eu) goto L_100f1b95;
    COW_AT(100f1b42)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 1, 0x1060u);
    t2 = g->edx;
    if (t1 == 0u) goto L_100f1b6f;
    eax = t1;
    edx = t2;
    COW_AT(100f1b53)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x100f29e0u), eax, 0);
    eax = t3;
    COW_AT(100f1b73)
    if (eax != 0u)
    {
    COW_AT(100f1b77)
        wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
        if (rd16(self + 8u) == 0u)
        {
    COW_AT(100f1b82)
            wr16(self + 8u, 1u);
        }
    COW_AT(100f1b88)
        t4 = rd32(self + 0x1cu);
        wr16(self + 0x18u, (uint16_t)(rd16(self + 0x18u) + 1u));
        wr32(eax + 4u, t4);
        wr32(self + 0x1cu, eax);
    }
L_100f1b95: ;
    COW_AT(100f1b95)
    g->esi = in_esi;
    return eax;
L_100f1b5c: ;
    COW_AT(100f1b5c)
    wr16(self + 8u, (uint16_t)(rd16(self + 8u) + 1u));
    if (rd16(self + 8u) != 0u) goto L_100f1b95;
    COW_AT(100f1b67)
    wr16(self + 8u, 1u);
    g->esi = in_esi;
    return eax;
L_100f1b6f: ;
    COW_AT(100f1b6f)
    g->esi = in_esi;
    return 0u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f1b20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f1b2au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f1b34u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f1b3bu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f1b42u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100f1b53u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b5cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b67u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b6fu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b73u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b77u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b82u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b88u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100f1b95u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f1b20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f1b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
