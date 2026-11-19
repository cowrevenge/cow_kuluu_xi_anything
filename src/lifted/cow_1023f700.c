/* f_0x1023f700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023f700(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1023f70cu: eax = g->eax; self = g->ecx; goto E_1023f70c;
    case 0x1023f719u: self = g->ecx; goto E_1023f719;
    case 0x1023f720u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1023f720;
    case 0x1023f730u: eax = g->eax; self = g->ecx; edx = g->edx; goto E_1023f730;
    case 0x1023f73bu: eax = g->eax; self = g->ecx; goto E_1023f73b;
    case 0x1023f755u: eax = g->eax; self = g->ecx; goto E_1023f755;
    case 0x1023f75cu: eax = g->eax; self = g->ecx; goto E_1023f75c;
    case 0x1023f771u: eax = g->eax; edx = g->edx; goto E_1023f771;
    default: break;
    }
#endif

    COW_AT(1023f700)
    if (rd32(self + 0x18u) == 1u)
    {
        eax = rd32(self + 0x18u);
        edx = 1u;
        goto L_1023f771;
    }
    COW_AT(1023f70c)
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = 1u;
        goto L_1023f771;
    }
    COW_AT(1023f719)
    t1 = rd32(COW_IMG(0x1023f774u) + (uint32_t)(int16_t)arg1 * 4u - 0xcu);
    switch (t1 - RD)
    {
    case 0x1023f720u: goto L_1023f720;
    case 0x1023f73bu: goto L_1023f73b;
    case 0x1023f755u: goto L_1023f755;
    case 0x1023f771u: eax = (uint32_t)(int16_t)arg1 - 3u; edx = 1u; goto L_1023f771;
    default: rt_fatal(g, COW_IMG(0x1023f719u), "switch");
    }
    return 0;
L_1023f720: ;
    COW_AT(1023f720)
    t9 = (uint32_t)(int16_t)arg2 - 1u;
    t10 = rd32(self + 0x30u);
    wr32(self + 0x2cu, t9);
    if ((uint32_t)(int16_t)arg2 - 1u == t10)
    {
        eax = t9;
        edx = t10;
        goto L_1023f771;
    }
    eax = t9;
    edx = t10;
    COW_AT(1023f730)
    wr32(self + 0x30u, eax);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t11 = cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1023f73b: ;
    COW_AT(1023f73b)
    t5 = rd32(self + 8u);
    wr32(self + 0x18u, 1u);
    wr8(t5 + 0x5du, 1u);
    t6 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x2cu, t6);
    g->eax = t5;
    g->edx = t6;
    g->esp = sp0;
    t7 = cow_thiscall(g, COW_IMG(0x10037b90u), self, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_1023f755: ;
    COW_AT(1023f755)
    if (rd32(self + 0x14u) != 0u)
    {
        eax = rd32(self + 0x14u);
        edx = 1u;
    }
    else
    {
    COW_AT(1023f75c)
        t2 = rd32(self + 8u);
        wr32(self + 0x18u, 1u);
        wr8(t2 + 0x5du, 1u);
        wr32(self + 0x2cu, 0xffffffffu);
        g->eax = t2;
        g->edx = 1u;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_1023f771: ;
    COW_AT(1023f771)
    g->edx = edx;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1023f700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1023f70cu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023f719u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t self;
        self = g->ecx;
        g->esp = sp0;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023f720u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023f730u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        g->esp = sp0;
        (void)sp0;
        return 1;
    }
    case 0x1023f73bu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023f755u:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023f75cu:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = 1u;
        (void)sp0;
        return 1;
    }
    case 0x1023f771u:
    {
        uint32_t eax;
        uint32_t edx;
        eax = g->eax;
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
void cow_adapter_1023f700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1023f700(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
