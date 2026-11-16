/* f_0x102d52ad - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=8 */
uint32_t cow_fn_102d52ad(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
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
    t1 = cow_thiscall(g, COW_IMG(0x102e70c5u), sp0 - 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg4);
    t3 = cow_fastcall(g, COW_IMG(0x102e70d7u), sp0 - 0x14u, t2, 2, arg4, 1u);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)t3 < 0)
    {
        eax = t3;
        edx = t5;
    }
    else
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        wr32(sp0 - 0x1cu, arg8);
        wr32(sp0 - 0x20u, arg7);
        wr32(sp0 - 0x24u, arg6);
        wr32(sp0 - 0x28u, arg5);
        t6 = rd32(sp0 - 8u);
        wr32(sp0 - 0x2cu, t6);
        t7 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x30u, t7);
        wr32(sp0 - 0x34u, arg3);
        wr32(sp0 - 0x38u, arg2);
        wr32(sp0 - 0x3cu, arg1);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t8 = cow_stdcall(g, COW_IMG(0x102d46dbu), 9, arg1, arg2, arg3, t7, t6, arg5, arg6, arg7, arg8);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->esp = sp0 - 0x18u;
    cow_fastcall(g, COW_IMG(0x102e72f2u), sp0 - 0x14u, edx, 0);
    t10 = g->edx;
    g->edx = t10;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102d52ad(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102d52ad(g);
    g->esp = sp0;
    rt_return(g, r, 32u);
}
/* COW_ADAPTER END */
