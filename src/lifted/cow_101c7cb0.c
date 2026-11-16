/* f_0x101c7cb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101c7cb0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, arg1);
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x101c7b80u), self, 1, arg1);
    if (t1 == 0u)
    {
        eax = t1;
    }
    else
    {
        edx = t1;
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, sp0 - 0x10u);
        wr32(sp0 - 0x24u, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x101c7a90u), sp0 - 0x10u, g->ecx, g->edx, 0, 3, arg1, sp0 - 0x10u, 0u);
        t2 = g->edx;
        wr32(sp0 - 0x1cu, 0x80808080u);
        t3 = rd32(sp0 - 4u);
        wr32(sp0 - 0x20u, t3);
        t4 = rd32(sp0 - 8u);
        wr32(sp0 - 0x24u, t4);
        t5 = rd32(sp0 - 0xcu);
        wr32(sp0 - 0x28u, t5);
        t6 = rd32(sp0 - 0x10u);
        wr32(sp0 - 0x2cu, t6);
        wr32(sp0 - 0x30u, 0xfu);
        wr32(sp0 - 0x34u, 0x1fu);
        wr32(sp0 - 0x38u, arg3);
        wr32(sp0 - 0x3cu, arg2);
        g->eax = arg2;
        t7 = cow_fastcall(g, COW_IMG(0x10253f80u), t2, t2, 9, arg2, arg3, 0x1fu, 0xfu, t6, t5, t4, t3, 0x80808080u);
        eax = t7;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c7cb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c7cb0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
