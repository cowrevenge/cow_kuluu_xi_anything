/* f_0x102982c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102982c0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    int64_t q12;
    int64_t q6;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102982d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102982d2;
    case 0x102982d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_102982d9;
    case 0x1029830au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_1029830a;
    case 0x10298311u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10298311;
    case 0x10298342u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10298342;
    case 0x10298349u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_10298349;
    default: break;
    }
#endif

    COW_AT(102982c0)
    t1 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x13cu);
    g->eax = t1;
    g->edx = in_edx;
    t2 = rd32(t1);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, rd32(t2 + 0x30u), t2, 1, t1);
    t4 = g->ecx;
    t5 = g->edx;
    eax = t3;
    ecx = t4;
    edx = t5;
    COW_AT(102982d2)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 0u);
    COW_AT(102982d9)
    q6 = (int64_t)cow_muls(0x55555556u, rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u));
    t7 = cow_qhi(q6) + (cow_qhi(q6) >> 0x1fu);
    g->eax = cow_qhi(q6) >> 0x1fu;
    g->edx = t7;
    t8 = rd32(COW_IMG(0x1066941cu));
    g->esp = sp0 - 4u;
    t9 = cow_thiscall(g, rd32(rd32(t8) + 0x118u), t8, 4, t8, 4u, 0u, t7);
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    COW_AT(1029830a)
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 1u);
    COW_AT(10298311)
    q12 = (int64_t)cow_muls(0x55555556u, rd32(rd32(COW_IMG(0x1099d200u)) + 0x144u));
    t13 = cow_qhi(q12) + (cow_qhi(q12) >> 0x1fu);
    g->eax = cow_qhi(q12) >> 0x1fu;
    g->edx = t13;
    t14 = rd32(COW_IMG(0x1066941cu));
    g->esp = sp0 - 4u;
    t15 = cow_thiscall(g, rd32(rd32(t14) + 0x118u), t14, 4, t14, 4u, 0u, t13);
    t16 = g->ecx;
    t17 = g->edx;
    eax = t15;
    ecx = t16;
    edx = t17;
    COW_AT(10298342)
    g->eax = eax;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x10297ce0u), g->eax, ecx, edx, 1, 1, 2u);
    t19 = g->edx;
    eax = t18;
    edx = t19;
    COW_AT(10298349)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102982c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102982d2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102982d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1029830au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10298311u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10298342u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10298349u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102982c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102982c0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
