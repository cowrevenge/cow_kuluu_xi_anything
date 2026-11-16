/* f_0x102b3d20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102b3d20(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(arg1 + 0x14u) != rd32(arg1 + 0x18u))
    {
        ecx = rd32(arg1 + 0x18u);
    }
    else
    {
        eax = rd32(arg1 + 0x14u);
        t1 = eax + rd32(arg1 + 0x1cu);
        g->ecx = t1;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x102b3b20u), 2, arg1, t1);
        t2 = g->ecx;
        ecx = t2;
    }
    if (rd32(arg1 + 0x14u) == arg2)
    {
        edx = rd32(arg1 + 0x14u) - arg2;
    }
    else
    {
        edx = rd32(arg1 + 0x14u) - arg2;
        t3 = rd32(arg1 + 0x20u);
        t4 = t3 * arg2 + rd32(arg1 + 0x24u);
        t5 = rd32(arg1 + 0x24u) + (arg2 + 1u) * t3;
        g->ecx = rd32(arg1 + 0x24u);
        g->edx = t5;
        t6 = rd32(arg1 + 0x24u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10314a10u), 5, t5, t4, t3 * edx, in_ebx, in_edi);
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x102b3c30u), 3, arg1, arg2, arg3);
    t9 = rd32(arg1 + 0x14u) + 1u;
    wr32(arg1 + 0x14u, t9);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b3d20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b3d20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
