/* f_0x10139250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10139250(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1013925au: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013925a;
    case 0x1013925fu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_1013925f;
    case 0x10139268u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_10139268;
    case 0x1013926bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1013926b;
    case 0x10139275u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_10139275;
    case 0x1013927cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_1013927c;
    case 0x101392a6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101392a6;
    case 0x101392bbu: eax = g->eax; self = g->ecx; in_edx = g->edx; goto E_101392bb;
    case 0x101392c5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101392c5;
    case 0x101392d0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101392d0;
    case 0x101392d7u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101392d7;
    case 0x101392ddu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101392dd;
    case 0x101392ebu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; goto E_101392eb;
    case 0x101392fau: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101392fa;
    case 0x101392feu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_101392fe;
    case 0x10139307u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_10139307;
    case 0x1013930cu: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_8 = rd32(sp0 - 8u); goto E_1013930c;
    default: break;
    }
#endif

    COW_AT(10139250)
    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 2u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 2u;
        goto L_101392bb;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 2u;
    COW_AT(1013925a)
    if (eax == 4u)
    {
        eax = eax - 4u;
        goto L_1013926b;
    }
    eax = eax - 4u;
    COW_AT(1013925f)
    if (eax == 2u)
    {
        eax = eax - 2u;
        ecx = self;
        edx = in_edx;
        goto L_1013930c;
    }
    eax = eax - 2u;
L_10139268: ;
    COW_AT(10139268)
    return eax;
L_1013926b: ;
    COW_AT(1013926b)
    if (rd32(COW_IMG(0x10578484u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10578484u));
        goto L_101392a6;
    }
    ecx = rd32(COW_IMG(0x10578484u));
    COW_AT(10139275)
    if (rd32(ecx + 8u) == 0u)
    {
        eax = rd32(ecx + 8u);
        goto L_101392a6;
    }
    eax = rd32(ecx + 8u);
    COW_AT(1013927c)
    g->esp = sp0;
    cow_call_regs(g, COW_IMG(0x10118db0u), eax, eax, g->edx, 0, 2, 0xau, 0u);
    t1 = rd32(COW_IMG(0x10578484u));
    wr32(sp0 + 8u, 0u);
    t2 = rd32(t1 + 8u);
    wr32(sp0 + 4u, t2);
    g->edx = t1;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t2, COW_IMG(0x10621838u), t1);
L_101392a6: ;
    COW_AT(101392a6)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10151340u), ecx, 1, 0u);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101392bb: ;
    COW_AT(101392bb)
    if (rd16(rd32(self + 8u) + 0x5au) != 2u) goto L_10139268;
    ecx = rd32(self + 8u);
    COW_AT(101392c5)
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) - 1u > 3u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
        edx = in_edx;
        goto L_1013930c;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    COW_AT(101392d0)
    t7 = rd32(COW_IMG(0x10139330u) + eax * 4u);
    switch (t7 - RD)
    {
    case 0x101392d7u: goto L_101392d7;
    case 0x101392ddu: goto L_101392dd;
    case 0x101392ebu: goto L_101392eb;
    case 0x101392fau: goto L_101392fa;
    default: rt_fatal(g, COW_IMG(0x101392d0u), "switch");
    }
    return 0;
L_101392d7: ;
    COW_AT(101392d7)
    loc_8 = 5u;
L_101392fe: ;
    COW_AT(101392fe)
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = rd32(COW_IMG(0x10578484u));
L_10139307: ;
    COW_AT(10139307)
    g->edx = edx;
    g->esp = sp0;
    t8 = cow_call_regs(g, COW_IMG(0x10118db0u), eax, ecx, g->edx, 0, 2, loc_8, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
L_1013930c: ;
    COW_AT(1013930c)
    g->edx = edx;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10037e90u), ecx, 0);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10578484u));
    wr32(sp0 + 8u, 0u);
    t13 = rd32(t12 + 8u);
    wr32(sp0 + 4u, t13);
    g->edx = t11;
    return cow_tailcall(g, COW_IMG(0x1015db80u), t12, COW_IMG(0x10621838u), t11);
L_101392dd: ;
    COW_AT(101392dd)
    eax = rd32(COW_IMG(0x10578484u));
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = in_edx;
    loc_8 = 6u;
    goto L_10139307;
L_101392eb: ;
    COW_AT(101392eb)
    ecx = rd32(rd32(COW_IMG(0x10578484u)) + 8u);
    edx = in_edx;
    loc_8 = 7u;
    goto L_10139307;
L_101392fa: ;
    COW_AT(101392fa)
    loc_8 = 8u;
    goto L_101392fe;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10139250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1013925au:
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
    case 0x1013925fu:
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
    case 0x10139268u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013926bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x10139275u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1013927cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392a6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392bbu:
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
    case 0x101392c5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392d0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392d7u:
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
    case 0x101392ddu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392ebu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edx;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x101392fau:
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
    case 0x101392feu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10139307u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 8u;
        wr32(sp0 - 4u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1013930cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10139250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10139250(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
