/* f_0x10298a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10298a60(Guest* g)
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = arg3;
    t1 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, arg2, 1, 6, arg1, arg2, arg3, arg4, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(COW_IMG(0x109a282du)) == 0u)
    {
        esi = t1;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | rd8(COW_IMG(0x109a282du));
        ecx = t2;
        edx = t3;
        esi = t1;
        t4 = rd8(COW_IMG(0x109a282cu));
        wr8(COW_IMG(0x109f8269u), 0xffu);
        t5 = (eax & 0xffffff00u) | t4;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_call_regs(g, COW_IMG(0x102924a0u), t5, g->ecx, g->edx, 1, 1, t5);
        t7 = g->ecx;
        t8 = g->edx;
        g->esp = sp0 - 4u;
        cow_call_regs(g, COW_IMG(0x102924b0u), t6, g->ecx, t8, 1, 4, arg1, esi, t5, in_edi);
    }
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10298a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10298a60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
