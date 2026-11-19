/* f_0x1007d910 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007d910(Guest* g)
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
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1007d920u: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1007d920;
    case 0x1007d932u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d932;
    case 0x1007d93bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d93b;
    case 0x1007d93eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d93e;
    case 0x1007d941u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d941;
    case 0x1007d94bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d94b;
    case 0x1007d955u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d955;
    case 0x1007d96bu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d96b;
    case 0x1007d984u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d984;
    case 0x1007d98eu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d98e;
    case 0x1007d9a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d9a1;
    case 0x1007d9abu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d9ab;
    case 0x1007d9b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_1007d9b0;
    default: break;
    }
#endif

    COW_AT(1007d910)
    if (rd32(rd32(COW_IMG(0x103551e0u)) + 4u) == 0u)
    {
        eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
        edx = in_edx;
        goto L_1007d9a1;
    }
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    COW_AT(1007d920)
    g->esp = sp0;
    t1 = cow_call_regs(g, COW_IMG(0x10077ba0u), eax, self, in_edx, 1, 2, COW_IMG(0x10357a54u), eax);
    t2 = g->edx;
    if (t1 == 0u)
    {
        edx = t2;
        goto L_1007d9b0;
    }
    eax = t1;
    edx = t2;
    COW_AT(1007d932)
    if ((uint32_t)(int8_t)rd8(eax + 5u) == 0u)
    {
        eax = (uint32_t)(int8_t)rd8(eax + 5u);
        goto L_1007d9a1;
    }
    eax = (uint32_t)(int8_t)rd8(eax + 5u);
    COW_AT(1007d93b)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_1007d955;
    }
    eax = eax - 1u;
    COW_AT(1007d93e)
    if (eax != 1u) goto L_1007d9b0;
    eax = eax - 1u;
    COW_AT(1007d941)
    if (rd32(COW_IMG(0x10664494u)) == 0u) goto L_1007d9b0;
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1007d94b)
    g->edx = edx;
    g->esp = sp0;
    cow_stdcall(g, COW_IMG(0x1020c3e0u), 0);
    t3 = g->edx;
    g->edx = t3;
    return arg3;
L_1007d955: ;
    COW_AT(1007d955)
    t4 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = t4;
    t5 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x10077c30u), eax, t5, g->edx, 1, 1, t4);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 != 0u)
    {
        edx = t8;
        goto L_1007d984;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    COW_AT(1007d96b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t10 = g->ecx;
    t11 = g->edx;
    g->edx = t11;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t9, 9u);
    t12 = g->edx;
    g->edx = t12;
    return -arg3;
L_1007d984: ;
    COW_AT(1007d984)
    if (rd32(COW_IMG(0x10664494u)) == 0u) goto L_1007d9b0;
    ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1007d98e)
    t13 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x1020c410u), g->eax, g->ecx, t13, 0, 1, t13);
    t14 = g->edx;
    g->edx = t14;
    return arg3;
L_1007d9a1: ;
    COW_AT(1007d9a1)
    if (rd32(COW_IMG(0x10664494u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10664494u));
    COW_AT(1007d9ab)
        g->edx = edx;
        g->esp = sp0;
        cow_thiscall(g, COW_IMG(0x1020c390u), ecx, 0);
        t15 = g->edx;
        edx = t15;
    }
L_1007d9b0: ;
    COW_AT(1007d9b0)
    g->edx = edx;
    return arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1007d910(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1007d920u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1007d932u:
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
    case 0x1007d93bu:
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
    case 0x1007d93eu:
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
    case 0x1007d941u:
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
    case 0x1007d94bu:
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
    case 0x1007d955u:
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
    case 0x1007d96bu:
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
    case 0x1007d984u:
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
    case 0x1007d98eu:
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
    case 0x1007d9a1u:
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
    case 0x1007d9abu:
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
    case 0x1007d9b0u:
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
void cow_adapter_1007d910(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1007d910(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
