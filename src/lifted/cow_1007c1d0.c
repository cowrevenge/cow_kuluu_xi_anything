/* f_0x1007c1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007c1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(rd32(COW_IMG(0x103551e0u)) + 8u) == 0u)
    {
        eax = 0u;
        ecx = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x103551e0u)) + 8u);
        g->eax = 0u;
        g->esp = sp0;
        t1 = cow_thiscall_cdecl(g, COW_IMG(0x103128b2u), ecx, 1, ecx);
        t2 = g->ecx;
        eax = t1;
        ecx = t2;
    }
    t3 = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    g->ecx = ecx;
    g->edx = rd32(COW_IMG(0x103551e0u));
    t4 = rd32(COW_IMG(0x103551e0u));
    g->esp = sp0;
    t5 = cow_call_regs(g, COW_IMG(0x1007a1c0u), t3, g->ecx, g->edx, 1, 8, t3, 1u, 0u, 0u, eax, 0u, 0u, 0u);
    t6 = g->ecx;
    t7 = g->edx;
    g->edx = t7;
    cow_call_regs(g, COW_IMG(0x1007bf30u), t5, g->ecx, g->edx, 1, 5, t5, eax, 0u, 0u, 0u);
    t8 = g->edx;
    g->edx = t8;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007c1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007c1d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
