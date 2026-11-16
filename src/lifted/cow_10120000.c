/* f_0x10120000 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
uint32_t cow_fn_10120000(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg11 = rd32(g->esp + 0x2cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 4u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    wr32(sp0 - 0xcu, sp0 - 4u);
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, t2, 0, 1, sp0 - 4u);
    if (t3 == 0u)
    {
        eax = t3;
    }
    else
    {
        eax = t3;
        wr32(sp0 - 8u, arg11);
        wr32(sp0 - 0xcu, arg10);
        wr32(sp0 - 0x10u, arg9);
        wr32(sp0 - 0x14u, arg8);
        wr32(sp0 - 0x18u, arg7);
        wr32(sp0 - 0x1cu, arg6);
        wr32(sp0 - 0x20u, arg5);
        wr32(sp0 - 0x24u, arg4);
        wr32(sp0 - 0x28u, arg3);
        wr32(sp0 - 0x2cu, arg2);
        wr32(sp0 - 0x30u, arg1);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t4 = cow_fastcall(g, COW_IMG(0x1011ef60u), eax, arg2, 11, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
        eax = t4;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10120000(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10120000(g);
    g->esp = sp0;
    rt_return(g, r, 44u);
}
/* COW_ADAPTER END */
