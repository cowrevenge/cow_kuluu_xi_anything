/* f_0x10017690 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10017690(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100176a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176a5;
    case 0x100176aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176ae;
    case 0x100176b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176b8;
    case 0x100176c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176c3;
    case 0x100176cau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176ca;
    case 0x100176d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176d2;
    case 0x100176d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176d6;
    case 0x100176e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176e0;
    case 0x100176e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176e3;
    case 0x100176ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176ec;
    case 0x100176f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176f3;
    case 0x100176f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_100176f4;
    default: break;
    }
#endif

    COW_AT(10017690)
    t1 = rd32(COW_IMG(0x10456a28u));
    wr32(t1, 0xb0u);
    g->eax = t1;
    g->edx = in_edx;
    t2 = cow_thiscall(g, COW_IMG(0x1015d9e0u), COW_IMG(0x10621838u), 0);
    t3 = g->ecx;
    t4 = g->edx;
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100176a5)
    if (rd8(COW_IMG(0x104638f5u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104638f5u));
    COW_AT(100176ae)
        if (rd32(COW_IMG(0x1046393cu)) == 0u)
        {
            ecx = rd32(COW_IMG(0x1046393cu));
        }
        else
        {
            ecx = rd32(COW_IMG(0x1046393cu));
    COW_AT(100176b8)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0;
            t5 = cow_stdcall(g, COW_IMG(0x10246790u), 3, 0xffffffffu, 0u, 0u);
            t6 = g->ecx;
            t7 = g->edx;
            eax = t5;
            ecx = t6;
            edx = t7;
        }
    }
    COW_AT(100176c3)
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x100f76d0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(100176ca)
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0;
    t11 = cow_call_regs(g, COW_IMG(0x101151e0u), g->eax, g->ecx, edx, 1, 0);
    t12 = g->ecx;
    t13 = g->edx;
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100176d2)
    if ((int32_t)eax < 0)
    {
    COW_AT(100176d6)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t14 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        t15 = g->ecx;
        t16 = g->edx;
        eax = t14;
        ecx = t15;
        edx = t16;
    COW_AT(100176e0)
    }
    COW_AT(100176e3)
    if (rd8(COW_IMG(0x10456a50u)) == 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x10456a50u));
    COW_AT(100176ec)
        g->esp = sp0;
        cow_cdecl(g, COW_IMG(0x10310f85u), 1, 0u);
    COW_AT(100176f3)
    }
    COW_AT(100176f4)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10017690(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100176a5u:
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
    case 0x100176aeu:
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
    case 0x100176b8u:
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
    case 0x100176c3u:
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
    case 0x100176cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100176d2u:
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
    case 0x100176d6u:
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
    case 0x100176e0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100176e3u:
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
    case 0x100176ecu:
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
    case 0x100176f3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        g->esp = sp0 - 4u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x100176f4u:
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
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10017690(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10017690(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
