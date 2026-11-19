/* f_0x10282cd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10282cd0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t2;
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
    case 0x10282ce4u: eax = g->eax; ecx = g->ecx; goto E_10282ce4;
    case 0x10282d2bu: eax = g->eax; ecx = g->ecx; goto E_10282d2b;
    default: break;
    }
#endif

    COW_AT(10282cd0)
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) != 0u)
    {
        eax = rd32(COW_IMG(0x1066941cu));
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
        goto L_10282d2b;
    }
    eax = rd32(COW_IMG(0x1066941cu));
    COW_AT(10282ce4)
    t1 = rd32(eax);
    g->esp = sp0;
    cow_thiscall(g, rd32(t1 + 0xc8u), t1, 3, eax, 0x1bu, 1u);
    t2 = g->ecx;
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t3 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t3 + 0xc8u), t2, 3, rd32(COW_IMG(0x1066941cu)), 0xabu, 1u);
    t4 = g->edx;
    t5 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t5 + 0xc8u), t5, 3, rd32(COW_IMG(0x1066941cu)), 0x13u, 6u);
    t6 = g->ecx;
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t7 = rd32(COW_IMG(0x1066941cu));
    t8 = rd32(rd32(COW_IMG(0x1066941cu)));
    t9 = cow_thiscall(g, rd32(t8 + 0xc8u), t6, 3, t7, 0x14u, 5u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_10282d2b: ;
    COW_AT(10282d2b)
    g->esp = sp0;
    cow_thiscall(g, rd32(rd32(eax) + 0xfcu), ecx, 4, eax, ecx, 1u, 0xdu);
    t11 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t11, 2u, 1u);
    t12 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t12, 3u, 2u);
    t13 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t13, 4u, 2u);
    t14 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xfcu), rd32(rd32(COW_IMG(0x1066941cu))), 4, rd32(COW_IMG(0x1066941cu)), t14, 5u, 2u);
    t15 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u);
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = t15;
    t16 = rd32(COW_IMG(0x1066941cu));
    t17 = cow_thiscall(g, rd32(rd32(t16) + 0xfcu), rd32(t16), 4, t16, t15, 6u, 1u);
    t18 = g->edx;
    g->edx = t18;
    return t17;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10282cd0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10282ce4u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10282d2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10282cd0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10282cd0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
