/* f_0x1026ec10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1026ec10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((int8_t)(rd32(arg1 + 0xa8u) >> 8u) >= 0)
    {
        eax = rd32(arg1 + 0xa8u);
    }
    else
    {
        eax = rd32(arg1 + 0xa8u);
    }
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x10273700u), 1, arg1);
    t1 = g->ecx;
    t2 = g->edx;
    g->edx = t2;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10273830u), 2, arg1, arg2);
    t3 = g->edx;
    t4 = rd32(COW_IMG(0x1099aeccu)) + 1u;
    t5 = rd32(COW_IMG(0x1099aec8u));
    t6 = rd32(COW_IMG(0x1099aeccu));
    wr32(COW_IMG(0x1099aeccu), t4);
    if ((int32_t)(t6 + 1u) <= (int32_t)t5)
    {
        eax = t4;
        ecx = t5;
        edx = t3;
        esi = t6;
        goto L_1026ec68;
    }
    eax = t4;
    ecx = t5;
    edx = t3;
    g->eax = eax;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b19d0u), ecx);
    return 0xffffffffu;
L_1026ec68: ;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102703e0u), 3, esi, 6u, 1u);
    t8 = rd32(COW_IMG(0x1099aed0u));
    wr32(esi * 0xacu + t8 + 4u, rd32(COW_IMG(0x103b19c0u)));
    wr32(esi * 0xacu + t8 + 8u, rd32(COW_IMG(0x103b19c4u)));
    wr32(esi * 0xacu + t8 + 0xcu, rd32(COW_IMG(0x103b19c8u)));
    wr32(esi * 0xacu + t8 + 0x10u, rd32(COW_IMG(0x103b19ccu)));
    wr32(esi * 0xacu + rd32(COW_IMG(0x1099aed0u)) + 0xa8u, arg1);
    return rd32(COW_IMG(0x1099aeccu)) - 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1026ec10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1026ec10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
