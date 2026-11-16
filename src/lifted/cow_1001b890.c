/* f_0x1001b890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=11 */
void cow_fn_1001b890(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
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

    wr32(self + 0x14c8u, arg9);
    wr8(self + 0x14a4u, 0u);
    wr32(self + 0x14a0u, 0u);
    wr32(self + 0x14a8u, 0u);
    wr32(self + 0x14acu, 0u);
    wr32(self + 0x14b0u, 0u);
    wr32(self + 0x14b4u, 0u);
    wr32(self + 0x14c4u, 0u);
    wr32(self + 0x14c0u, arg1);
    g->eax = self + 0x14ccu;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x14ccu, arg3);
    g->edx = self + 0x14dcu;
    g->esp = sp0 - 0x10u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x14dcu, arg4);
    t2 = g->edx;
    g->ecx = self + 0x14ecu;
    g->esp = sp0 - 0x18u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x14ecu, arg5);
    t3 = g->ecx;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x14fcu, arg6);
    wr32(self + 0x150cu, arg7);
    wr32(self + 0x1510u, arg8);
    wr32(self + 0x1518u, 0u);
    wr32(self + 0x1514u, 0u);
    wr32(self + 0x151cu, arg10);
    g->edx = self + 0x1520u;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10026e90u), 2, self + 0x1520u, arg11);
    t4 = g->edx;
    wr32(self + 0x14b8u, 0u);
    wr32(self + 0x14bcu, arg2);
    if (rd32(self + 0x14c0u) != 0u)
    {
        eax = rd32(self + 0x14c0u);
        edx = t4;
        if (rd32(eax) != 0u)
        {
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10071e90u), eax, rd32(eax), g->edx, 1, 0);
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001b890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001b890(g);
    g->esp = sp0;
    rt_return(g, g->eax, 44u);
}
/* COW_ADAPTER END */
