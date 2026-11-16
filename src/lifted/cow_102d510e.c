/* f_0x102d510e - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d510e(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x102e70c5u), sp0 - 0x14u, 0);
    t1 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg4);
    t2 = cow_fastcall(g, COW_IMG(0x102e70d7u), sp0 - 0x14u, t1, 2, arg4, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    if ((int32_t)t2 < 0)
    {
        eax = t2;
        edx = t4;
    }
    else
    {
        ecx = t3;
        edx = t4;
        wr32(sp0 - 0x1cu, arg8);
        wr32(sp0 - 0x20u, arg7);
        wr32(sp0 - 0x24u, arg6);
        wr32(sp0 - 0x28u, arg5);
        t5 = rd32(sp0 - 8u);
        wr32(sp0 - 0x2cu, t5);
        t6 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x30u, t6);
        wr32(sp0 - 0x34u, arg3);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_stdcall(g, COW_IMG(0x102d447du), 9, arg1, arg2, arg3, t6, t5, arg5, arg6, arg7, arg8);
        t8 = g->edx;
        eax = t7;
        edx = t8;
    }
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x102e72f2u), sp0 - 0x14u, edx, 0);
    t9 = g->edx;
    g->edx = t9;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d510e(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d510e(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
