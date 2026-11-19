/* f_0x101a6eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101a6eb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a6ec4u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6ec4;
    case 0x101a6ed3u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6ed3;
    case 0x101a6edau: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6eda;
    case 0x101a6ee6u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6ee6;
    case 0x101a6ee9u: in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6ee9;
    case 0x101a6f04u: eax = g->eax; in_edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f04;
    case 0x101a6f15u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f15;
    case 0x101a6f1cu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f1c;
    case 0x101a6f28u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f28;
    case 0x101a6f34u: eax = g->eax; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f34;
    case 0x101a6f48u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f48;
    case 0x101a6f4fu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f4f;
    case 0x101a6f5au: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f5a;
    case 0x101a6f61u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f61;
    case 0x101a6f6cu: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f6c;
    case 0x101a6f73u: eax = g->eax; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f73;
    case 0x101a6f7cu: eax = g->eax; edx = g->edx; in_esi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 4u); goto E_101a6f7c;
    default: break;
    }
#endif

    COW_AT(101a6eb0)
    if ((uint32_t)(int16_t)arg1 - 3u > 0xeu)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_101a6f7c;
    }
    COW_AT(101a6ec4)
    t1 = rd32(COW_IMG(0x101a6f80u) + rd8(COW_IMG(0x101a6f98u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x101a6ed3u: goto L_101a6ed3;
    case 0x101a6f15u: goto L_101a6f15;
    case 0x101a6f48u: goto L_101a6f48;
    case 0x101a6f5au: goto L_101a6f5a;
    case 0x101a6f6cu: goto L_101a6f6c;
    case 0x101a6f7cu: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_101a6f7c;
    default: rt_fatal(g, COW_IMG(0x101a6eccu), "switch");
    }
    return 0;
L_101a6ed3: ;
    COW_AT(101a6ed3)
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_101a6f04;
    }
    COW_AT(101a6eda)
    if ((uint32_t)(int16_t)arg2 == 0x15u)
    {
        eax = (uint32_t)(int16_t)arg2;
        goto L_101a6f4f;
    }
    COW_AT(101a6ee6)
    if ((uint32_t)(int16_t)arg2 == 0x16u)
    {
        eax = (uint32_t)(int16_t)arg2;
        goto L_101a6f61;
    }
    COW_AT(101a6ee9)
    t11 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x20u, t11);
    g->eax = t11;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t12 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037ab0cu), 1u, 0u);
    t13 = g->edx;
    g->esi = in_esi;
    g->edx = t13;
    return t12;
L_101a6f04: ;
    COW_AT(101a6f04)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t18 = cow_call_regs(g, COW_IMG(0x101c6920u), eax, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    t19 = g->edx;
    g->esi = in_esi;
    g->edx = t19;
    return t18;
L_101a6f15: ;
    COW_AT(101a6f15)
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        goto L_101a6f73;
    }
    eax = rd32(self + 0x1cu);
    COW_AT(101a6f1c)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x101a8a90u), eax, g->ecx, g->edx, 1, 0);
    t3 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t2;
        edx = t3;
    COW_AT(101a6f28)
        t4 = (edx & 0xffffff00u) | rd8(self + 0x24u);
        g->edx = t4;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x101a88d0u), eax, rd32(self + 0x14u), g->edx, 0, 1, t4);
        t5 = g->edx;
        edx = t5;
    }
    COW_AT(101a6f34)
    t6 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t6, 1u);
    t8 = g->edx;
    g->esi = in_esi;
    g->edx = t8;
    return t7;
L_101a6f48: ;
    COW_AT(101a6f48)
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        goto L_101a6f7c;
    }
    eax = rd32(self + 0x1cu);
L_101a6f4f: ;
    COW_AT(101a6f4f)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t16 = cow_call_regs(g, COW_IMG(0x101a7230u), eax, self, g->edx, 1, 0);
    t17 = g->edx;
    g->esi = in_esi;
    g->edx = t17;
    return t16;
L_101a6f5a: ;
    COW_AT(101a6f5a)
    if (rd32(self + 0x1cu) != 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        goto L_101a6f7c;
    }
    eax = rd32(self + 0x1cu);
L_101a6f61: ;
    COW_AT(101a6f61)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t14 = cow_call_regs(g, COW_IMG(0x101a71e0u), eax, self, g->edx, 1, 0);
    t15 = g->edx;
    g->esi = in_esi;
    g->edx = t15;
    return t14;
L_101a6f6c: ;
    COW_AT(101a6f6c)
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = rd32(self + 0x1cu);
        edx = in_edx;
        goto L_101a6f7c;
    }
    eax = rd32(self + 0x1cu);
L_101a6f73: ;
    COW_AT(101a6f73)
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t9 = cow_call_regs(g, COW_IMG(0x101a7170u), eax, self, g->edx, 0, 1, 1u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101a6f7c: ;
    COW_AT(101a6f7c)
    g->esi = in_esi;
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a6eb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a6ec4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x101a6ed3u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6edau:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6ee6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2;
        g->ecx = (uint32_t)(int16_t)arg2 - 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101a6ee9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->eax = (uint32_t)(int16_t)arg2;
        (void)sp0;
        return 1;
    }
    case 0x101a6f04u:
    {
        uint32_t eax;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f15u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f1cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f28u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f34u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f48u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f4fu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f5au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f61u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f6cu:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f73u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101a6f7cu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
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
void cow_adapter_101a6eb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a6eb0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
