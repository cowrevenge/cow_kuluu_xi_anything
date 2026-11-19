/* f_0x100f78c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100f78c0(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100f78c5u: eax = g->eax; goto E_100f78c5;
    case 0x100f78ddu: eax = g->eax; goto E_100f78dd;
    case 0x100f78f6u: eax = g->eax; goto E_100f78f6;
    case 0x100f790fu: eax = g->eax; goto E_100f790f;
    case 0x100f7928u: eax = g->eax; goto E_100f7928;
    case 0x100f7941u: eax = g->eax; goto E_100f7941;
    default: break;
    }
#endif

    COW_AT(100f78c0)
    t1 = cow_stdcall(g, COW_IMG(0x100f1920u), 0);
    eax = t1;
    COW_AT(100f78c5)
    t2 = rd32(COW_IMG(0x104df90cu));
    wr32(t2 + 0x18u, eax);
    t3 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x18u);
    t4 = rd32(COW_IMG(0x104df90cu));
    wr32(t4, t3);
    g->eax = t4;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x100f1910u), 0);
    eax = t5;
    COW_AT(100f78dd)
    t6 = rd32(COW_IMG(0x104df90cu));
    wr32(t6 + 0x1cu, eax);
    t7 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x1cu);
    t8 = rd32(COW_IMG(0x104df90cu));
    wr32(t8 + 4u, t7);
    g->eax = t8;
    g->esp = sp0;
    t9 = cow_stdcall(g, COW_IMG(0x100f1940u), 0);
    eax = t9;
    COW_AT(100f78f6)
    t10 = rd32(COW_IMG(0x104df90cu));
    wr32(t10 + 0x20u, eax);
    t11 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x20u);
    t12 = rd32(COW_IMG(0x104df90cu));
    wr32(t12 + 8u, t11);
    g->eax = t12;
    g->esp = sp0;
    t13 = cow_stdcall(g, COW_IMG(0x100f1930u), 0);
    eax = t13;
    COW_AT(100f790f)
    t14 = rd32(COW_IMG(0x104df90cu));
    wr32(t14 + 0x24u, eax);
    t15 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x24u);
    t16 = rd32(COW_IMG(0x104df90cu));
    wr32(t16 + 0xcu, t15);
    g->eax = t16;
    g->esp = sp0;
    t17 = cow_stdcall(g, COW_IMG(0x100f1950u), 0);
    eax = t17;
    COW_AT(100f7928)
    t18 = rd32(COW_IMG(0x104df90cu));
    wr32(t18 + 0x2cu, eax);
    t19 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x2cu);
    t20 = rd32(COW_IMG(0x104df90cu));
    wr32(t20 + 0x14u, t19);
    g->eax = t20;
    g->esp = sp0;
    t21 = cow_stdcall(g, COW_IMG(0x100f1670u), 0);
    eax = t21;
    COW_AT(100f7941)
    wr32(rd32(COW_IMG(0x104df90cu)) + 0x3cu, eax);
    t22 = rd32(rd32(COW_IMG(0x104df90cu)) + 0x3cu);
    t23 = rd32(COW_IMG(0x104df90cu));
    wr32(t23 + 0x38u, t22);
    return (t23 & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100f78c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100f78c5u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f78ddu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f78f6u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f790fu:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f7928u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x100f7941u:
    {
        uint32_t eax;
        eax = g->eax;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100f78c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100f78c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
