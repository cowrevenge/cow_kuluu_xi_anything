/* f_0x101c70d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c70d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c70d8u: eax = g->eax; self = g->ecx; goto E_101c70d8;
    case 0x101c70ddu: eax = g->eax; self = g->ecx; goto E_101c70dd;
    case 0x101c70ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101c70eb;
    case 0x101c70f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101c70f3;
    case 0x101c70fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101c70fc;
    case 0x101c7101u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101c7101;
    case 0x101c7126u: eax = g->eax; ecx = g->ecx; edx = g->edx; goto E_101c7126;
    default: break;
    }
#endif

    COW_AT(101c70d0)
    if ((int32_t)arg2 < 0) goto L_101c7126;
    COW_AT(101c70d8)
    if ((int32_t)arg2 >= 2) goto L_101c7126;
    COW_AT(101c70dd)
    g->eax = arg1;
    g->edx = arg2;
    g->esp = sp0;
    t1 = cow_thiscall(g, COW_IMG(0x101c6c90u), self, 1, arg1);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101c70f3;
    }
    COW_AT(101c70eb)
    return 1u;
L_101c70f3: ;
    COW_AT(101c70f3)
    if (edx == 0u)
    {
        ecx = COW_IMG(0x1037ce68u);
    }
    else
    {
    COW_AT(101c70fc)
        ecx = COW_IMG(0x1037ce4cu);
    }
    COW_AT(101c7101)
    t3 = (uint32_t)(int16_t)rd16(eax + 4u);
    t4 = (uint32_t)(int16_t)rd16(eax + 6u);
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, arg3, COW_IMG(0x1037ce54u), t4, rd32(eax), t3);
    return 0u;
L_101c7126: ;
    COW_AT(101c7126)
    return 2u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c70d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c70d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c70ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        g->esp = sp0;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c70ebu:
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
    case 0x101c70f3u:
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
    case 0x101c70fcu:
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
    case 0x101c7101u:
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
    case 0x101c7126u:
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
void cow_adapter_101c70d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c70d0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
