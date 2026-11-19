/* f_0x10134990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10134990(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t10;
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
    case 0x1013499du: eax = g->eax; ecx = g->ecx; goto E_1013499d;
    case 0x101349a8u: eax = g->eax; ecx = g->ecx; goto E_101349a8;
    case 0x101349b7u: eax = g->eax; ecx = g->ecx; goto E_101349b7;
    case 0x101349beu: eax = g->eax; ecx = g->ecx; goto E_101349be;
    case 0x101349d5u: eax = g->eax; ecx = g->ecx; goto E_101349d5;
    case 0x101349e2u: eax = g->eax; ecx = g->ecx; goto E_101349e2;
    case 0x101349f9u: eax = g->eax; ecx = g->ecx; goto E_101349f9;
    case 0x10134a06u: eax = g->eax; ecx = g->ecx; goto E_10134a06;
    case 0x10134a1du: eax = g->eax; ecx = g->ecx; goto E_10134a1d;
    case 0x10134a2au: eax = g->eax; ecx = g->ecx; goto E_10134a2a;
    case 0x10134a41u: eax = g->eax; ecx = g->ecx; goto E_10134a41;
    case 0x10134a4eu: eax = g->eax; ecx = g->ecx; goto E_10134a4e;
    case 0x10134a65u: eax = g->eax; ecx = g->ecx; goto E_10134a65;
    case 0x10134a72u: eax = g->eax; ecx = g->ecx; goto E_10134a72;
    case 0x10134a85u: eax = g->eax; ecx = g->ecx; goto E_10134a85;
    case 0x10134a92u: eax = g->eax; ecx = g->ecx; goto E_10134a92;
    case 0x10134aa5u: eax = g->eax; ecx = g->ecx; goto E_10134aa5;
    case 0x10134ab2u: eax = g->eax; ecx = g->ecx; goto E_10134ab2;
    case 0x10134ac5u: eax = g->eax; ecx = g->ecx; goto E_10134ac5;
    case 0x10134ad2u: eax = g->eax; ecx = g->ecx; goto E_10134ad2;
    case 0x10134ae5u: eax = g->eax; ecx = g->ecx; goto E_10134ae5;
    case 0x10134af2u: eax = g->eax; ecx = g->ecx; goto E_10134af2;
    default: break;
    }
#endif

    COW_AT(10134990)
    if (rd32(COW_IMG(0x10663740u)) == 0u) goto L_10134af2;
    eax = rd32(COW_IMG(0x10663740u));
    COW_AT(1013499d)
    if (rd32(eax + 0x60u) == 0u) goto L_10134af2;
    COW_AT(101349a8)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 8u) goto L_10134af2;
    ecx = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    COW_AT(101349b7)
    t1 = rd32(COW_IMG(0x10134af8u) + ecx * 4u);
    switch (t1 - RD)
    {
    case 0x101349beu: goto L_101349be;
    case 0x101349e2u: goto L_101349e2;
    case 0x10134a06u: goto L_10134a06;
    case 0x10134a2au: goto L_10134a2a;
    case 0x10134a4eu: goto L_10134a4e;
    case 0x10134a72u: goto L_10134a72;
    case 0x10134a92u: goto L_10134a92;
    case 0x10134ab2u: goto L_10134ab2;
    case 0x10134ad2u: goto L_10134ad2;
    default: rt_fatal(g, COW_IMG(0x101349b7u), "switch");
    }
    return;
L_101349be: ;
    COW_AT(101349be)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e2cu)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(101349d5)
    t10 = rd32(ecx);
    wr32(sp0 + 4u, 0u);
    g->esp = sp0;
    g->edx = t10;
    cow_tailcall(g, rd32(t10 + 0x58u), eax, ecx, t10);
    return;
L_101349e2: ;
    COW_AT(101349e2)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e4cu)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(101349f9)
    t9 = rd32(ecx);
    wr32(sp0 + 4u, 8u);
    g->esp = sp0;
    g->edx = t9;
    cow_tailcall(g, rd32(t9 + 0x58u), eax, ecx, t9);
    return;
L_10134a06: ;
    COW_AT(10134a06)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e50u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134a1d)
    t8 = rd32(ecx);
    wr32(sp0 + 4u, 0xau);
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, rd32(t8 + 0x58u), eax, ecx, t8);
    return;
L_10134a2a: ;
    COW_AT(10134a2a)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e54u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134a41)
    t7 = rd32(ecx);
    wr32(sp0 + 4u, 0xbu);
    g->esp = sp0;
    g->edx = t7;
    cow_tailcall(g, rd32(t7 + 0x58u), eax, ecx, t7);
    return;
L_10134a4e: ;
    COW_AT(10134a4e)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e58u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134a65)
    t6 = rd32(ecx);
    wr32(sp0 + 4u, 0xcu);
    g->esp = sp0;
    g->edx = t6;
    cow_tailcall(g, rd32(t6 + 0x58u), eax, ecx, t6);
    return;
L_10134a72: ;
    COW_AT(10134a72)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e5cu)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134a85)
    t5 = rd32(ecx);
    wr32(sp0 + 4u, 0xdu);
    g->esp = sp0;
    g->edx = t5;
    cow_tailcall(g, rd32(t5 + 0x58u), eax, ecx, t5);
    return;
L_10134a92: ;
    COW_AT(10134a92)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e60u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134aa5)
    t4 = rd32(ecx);
    wr32(sp0 + 4u, 0xeu);
    g->esp = sp0;
    g->edx = t4;
    cow_tailcall(g, rd32(t4 + 0x58u), eax, ecx, t4);
    return;
L_10134ab2: ;
    COW_AT(10134ab2)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e64u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134ac5)
    t3 = rd32(ecx);
    wr32(sp0 + 4u, 0xfu);
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, rd32(t3 + 0x58u), eax, ecx, t3);
    return;
L_10134ad2: ;
    COW_AT(10134ad2)
    wr32(eax + 0x60u, rd32(COW_IMG(0x10666e68u)));
    if (rd32(COW_IMG(0x105781b0u)) == 0u) goto L_10134af2;
    ecx = rd32(COW_IMG(0x105781b0u));
    COW_AT(10134ae5)
    t2 = rd32(ecx);
    wr32(sp0 + 4u, 0x10u);
    g->esp = sp0;
    g->edx = t2;
    cow_tailcall(g, rd32(t2 + 0x58u), eax, ecx, t2);
    return;
L_10134af2: ;
    COW_AT(10134af2)
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10134990(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013499du:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349a8u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349b7u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349beu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349d5u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101349f9u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a06u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a1du:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a2au:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a41u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a4eu:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a65u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a72u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a85u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134a92u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134aa5u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134ab2u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134ac5u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134ad2u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134ae5u:
    {
        uint32_t eax;
        uint32_t ecx;
        eax = g->eax;
        ecx = g->ecx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10134af2u:
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
void cow_adapter_10134990(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10134990(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
