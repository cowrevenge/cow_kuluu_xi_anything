/* f_0x10080830 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10080830(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008083bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008083b;
    case 0x10080843u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10080843;
    case 0x1008084cu: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008084c;
    case 0x10080865u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10080865;
    case 0x10080881u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10080881;
    case 0x1008088bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1008088b;
    case 0x100808a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100808a1;
    case 0x100808aau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100808aa;
    case 0x100808bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100808bb;
    case 0x100808c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_100808c1;
    default: break;
    }
#endif

    COW_AT(10080830)
    if (rd32(COW_IMG(0x10662da4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10662da4u));
        goto L_10080843;
    }
    COW_AT(1008083b)
    g->esi = in_esi;
    return -arg3;
L_10080843: ;
    COW_AT(10080843)
    if (rd32(COW_IMG(0x1047d490u)) != 1u) goto L_10080865;
    COW_AT(1008084c)
    g->eax = in_eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x101ad820u), ecx, 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->edx = t3;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, COW_IMG(0x1035814cu), t1);
    t4 = g->edx;
    g->esi = in_esi;
    g->edx = t4;
    return arg3;
L_10080865: ;
    COW_AT(10080865)
    t5 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    t6 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x10077ba0u), t6, t5, in_edx, 1, 2, COW_IMG(0x10357ac8u), t5);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        edx = t9;
        goto L_100808bb;
    }
    ecx = t8;
    esi = t7;
    COW_AT(10080881)
    if (rd8(esi + 5u) != 4u)
    {
        eax = 0u;
        goto L_100808aa;
    }
    ecx = (ecx & 0xffffff00u) | rd8(esi + 5u);
    COW_AT(1008088b)
    t10 = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    g->edx = rd32(COW_IMG(0x103551e0u));
    t11 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x10077c30u), t10, ecx, g->edx, 1, 1, t10);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 != 1u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_100808c1;
    }
    COW_AT(100808a1)
    eax = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
L_100808aa: ;
    COW_AT(100808aa)
    t19 = (uint32_t)(int8_t)rd8(esi + 5u);
    g->edx = t19;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x101ad670u), rd32(COW_IMG(0x10662da4u)), 2, t19, eax);
    t20 = g->edx;
    edx = t20;
L_100808bb: ;
    COW_AT(100808bb)
    g->esi = in_esi;
    g->edx = edx;
    return arg3;
L_100808c1: ;
    COW_AT(100808c1)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x65u);
    t16 = g->ecx;
    t17 = g->edx;
    g->edx = t17;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10077e30u), 2, t15, 9u);
    t18 = g->edx;
    g->esi = in_esi;
    g->edx = t18;
    return -arg3;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10080830(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008083bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10080843u:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008084cu:
    {
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10080865u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10080881u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1008088bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100808a1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100808aau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100808bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x100808c1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_10080830(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10080830(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
