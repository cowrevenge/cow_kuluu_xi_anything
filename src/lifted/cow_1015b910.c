/* f_0x1015b910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_1015b910(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 16u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1015b91eu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_1015b91e;
    case 0x1015b92du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1015b92d;
    case 0x1015b92eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; loc_8 = rd32(sp0 - 8u); goto E_1015b92e;
    case 0x1015b946u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_1015b946;
    case 0x1015b957u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; goto E_1015b957;
    case 0x1015b95fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_1015b95f;
    case 0x1015b960u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_1015b960;
    default: break;
    }
#endif

    COW_AT(1015b910)
    wr32(sp0 - 4u, in_edi);
    if ((int32_t)rd32(sp0 + 4u) > 131072)
    {
        eax = rd32(sp0 + 4u);
        edx = in_edx;
        esi = in_esi;
        loc_4 = in_edi;
    }
    else
    {
        eax = rd32(sp0 + 4u);
    COW_AT(1015b91e)
        wr32(sp0 - 8u, 0x1eu);
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10126670u), self, 1, 0x1eu);
        t2 = g->edx;
        wr32(sp0 + 4u, t1);
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            esi = in_esi;
            loc_4 = in_edi;
        }
        else
        {
            edx = t2;
    COW_AT(1015b92d)
            wr32(sp0 - 8u, in_esi);
            loc_8 = in_esi;
L_1015b92e: ;
    COW_AT(1015b92e)
            wr32(sp0 - 0xcu, sp0 + 4u);
            g->eax = sp0 + 4u;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 + 4u);
            t4 = g->edx;
            if (rd32(t3 + 0x150cu) == 0u)
            {
                edx = t4;
            }
            else
            {
                eax = t3;
                ecx = rd32(t3 + 0x150cu);
                esi = t3;
    COW_AT(1015b946)
                wr32(sp0 - 0xcu, 1u);
                g->edx = rd32(ecx);
                t5 = rd32(ecx);
                g->esp = sp0 - 8u;
                cow_thiscall(g, rd32(t5 + 0x18u), ecx, 1, 1u);
                t6 = g->edx;
                wr32(esi + 0x150cu, 0u);
                edx = t6;
            }
    COW_AT(1015b957)
            if (rd32(sp0 + 4u) != 0u)
            {
                loc_8 = rd32(sp0 - 8u);
                goto L_1015b92e;
            }
            eax = rd32(sp0 + 4u);
    COW_AT(1015b95f)
            esi = rd32(sp0 - 8u);
            loc_4 = rd32(sp0 - 4u);
        }
    }
    COW_AT(1015b960)
    g->esi = esi;
    g->edi = loc_4;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1015b910(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1015b91eu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x1015b92du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1015b92eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015b946u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        wr32(sp0 - 0xcu, sp0 + 4u);
        (void)sp0;
        return 1;
    }
    case 0x1015b957u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015b95fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1015b960u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b910(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1015b910(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
