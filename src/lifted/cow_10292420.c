/* f_0x10292420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10292420(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10292320u), 4, arg1, arg2, arg3, arg4);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == arg3)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebx = t1;
    }
    else
    {
        eax = t1;
        edx = t3;
        ebx = t1;
        if ((rd8(arg4 + 0xcu) & 0x10u) == 0u)
        {
            ecx = arg4;
        }
        else
        {
            g->eax = eax;
            g->ecx = arg4;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bb100u));
            t5 = g->ecx;
            t6 = g->edx;
            g->ecx = t5;
            g->edx = t6;
            g->esp = sp0 - 0x20u;
            t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bb218u), arg3);
            t8 = g->ecx;
            t9 = g->edx;
            eax = t7;
            ecx = t8;
            edx = t9;
        }
    }
    if (rd8(COW_IMG(0x109f8269u)) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x109f8269u));
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x102924b0u), eax, g->ecx, edx, 1, 4, arg1, arg2 * arg3, in_edi, in_esi);
    }
    return ebx;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10292420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10292420(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
