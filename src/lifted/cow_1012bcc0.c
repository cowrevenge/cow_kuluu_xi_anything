/* f_0x1012bcc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1012bcc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1012bcdbu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bcdb;
    case 0x1012bce5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bce5;
    case 0x1012bce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bce9;
    case 0x1012bceeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bcee;
    case 0x1012bd0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1012bd0e;
    default: break;
    }
#endif

    COW_AT(1012bcc0)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
        edx = in_edx;
    }
    else
    {
    COW_AT(1012bcc8)
        if (rd32(COW_IMG(0x1057876cu)) == 0u)
        {
            eax = (in_eax & 0xffffff00u) | (uint8_t)arg2;
            edx = in_edx;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012bcd2)
            g->esp = sp0;
            t1 = cow_call_regs(g, COW_IMG(0x101597f0u), (in_eax & 0xffffff00u) | (uint8_t)arg2, ecx, in_edx, 1, 0);
            t2 = g->edx;
            if (t1 == 0u)
            {
                eax = t1;
                edx = t2;
            }
            else
            {
                eax = t1;
                edx = t2;
    COW_AT(1012bcdb)
                if (rd32(COW_IMG(0x1057876cu)) != 0u)
                {
                    ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012bce9)
                    g->esp = sp0;
                    t3 = cow_call_regs(g, COW_IMG(0x101597f0u), eax, ecx, edx, 1, 0);
                    t4 = g->ecx;
                    t5 = g->edx;
                    eax = t3;
                    ecx = t4;
                    edx = t5;
                }
                else
                {
                    ecx = rd32(COW_IMG(0x1057876cu));
    COW_AT(1012bce5)
                    eax = 0u;
                }
    COW_AT(1012bcee)
                g->edx = edx;
                g->esp = sp0;
                t6 = cow_call_regs(g, COW_IMG(0x1007bf30u), eax, g->ecx, g->edx, 1, 5, eax, 1u, 0u, 0u, 0u);
                t7 = g->edx;
                g->edx = t7;
                t8 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1036f5b4u));
                t9 = g->edx;
                eax = t8;
                edx = t9;
            }
        }
    }
    COW_AT(1012bd0e)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1012bcc0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1012bcdbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012bce5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012bce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012bceeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1012bd0eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     1012bcc8: holds in_eax, which no location here says
     1012bcd2: holds in_eax, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1012bcc0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1012bcc0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
