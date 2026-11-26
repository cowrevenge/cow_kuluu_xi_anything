/* f_0x101fb440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_101fb440(Guest* g)
{
    double d5;
    double d7;
    uint32_t eax;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t6;
    uint32_t t8;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101fb44au: eax = g->eax; self = rd32(sp0 - 4u); goto E_101fb44a;
    case 0x101fb450u: eax = g->eax; self = g->ecx; loc_4 = rd32(sp0 - 4u); goto E_101fb450;
    case 0x101fb4a2u: eax = g->eax; loc_4 = rd32(sp0 - 4u); goto E_101fb4a2;
    default: break;
    }
#endif

    COW_AT(101fb440)
    if (rd32(COW_IMG(0x10663888u)) != 0u)
    {
        eax = rd32(COW_IMG(0x10663888u));
        goto L_101fb450;
    }
    eax = rd32(COW_IMG(0x10663888u));
    COW_AT(101fb44a)
    return eax & 0xffffff00u;
L_101fb450: ;
    COW_AT(101fb450)
    t1 = (uint32_t)(int16_t)rd16(self + 0x6au);
    t2 = (uint32_t)(int16_t)rd16(sp0 + 0x10u);
    t3 = rd16(self + 0x68u);
    wr32(sp0 + 0x10u, t2);
    t4 = rd32(eax + 0xfcu);
    d5 = fr(g, (double)(int32_t)t1 + (double)(int32_t)rd32(sp0 + 0x10u));
    wr32(sp0 + 0x10u, (uint32_t)(int16_t)t3);
    t6 = rd32(sp0 + 0x10u);
    wr32(sp0 + 0x10u, (uint32_t)(int16_t)arg3);
    d7 = (double)(float)fr(g, (double)(int32_t)t6 + (double)(int32_t)rd32(sp0 + 0x10u));
    g->eax = t4;
    g->esp = sp0 - 4u;
    COW_RET(0x101fb4a2u);
    t8 = cow_cdecl(g, COW_IMG(0x101f7570u), 5, t4, arg1, arg2, cow_f2bits(d7), cow_f2bits((double)(float)d5));
    eax = t8;
    loc_4 = t1;
    COW_AT(101fb4a2)
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101fb440(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101fb44au:
    {
        uint32_t eax;
        uint32_t self;
        eax = g->eax;
        self = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fb450u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t loc_4;
        eax = g->eax;
        self = g->ecx;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x101fb4a2u:
    {
        uint32_t eax;
        uint32_t loc_4;
        eax = g->eax;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101fb440(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101fb440(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
