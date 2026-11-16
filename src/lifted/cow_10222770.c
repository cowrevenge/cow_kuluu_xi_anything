/* f_0x10222770 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_10222770(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u) goto L_10222781;
    return arg1 & 0xffffff00u;
L_10222781: ;
    wr32(self + 0x14u, arg1);
    wr32(self + 0x18u, arg2);
    wr32(self + 0x1cu, arg3);
    wr32(self + 0x20u, arg4);
    wr32(self + 0x24u, arg6);
    g->eax = arg6;
    g->edx = arg4;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1038610cu), 1u, 0u);
    t2 = g->edx;
    if (rd32(self + 8u) == 0u)
    {
        eax = t1;
    }
    else
    {
        eax = t1;
        ecx = rd32(self + 8u);
        edx = t2;
        if ((uint8_t)arg5 != 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg5;
        }
        else
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg5;
            g->esp = sp0 - 4u;
            t3 = cow_call_regs(g, COW_IMG(0x10118e90u), eax, ecx, g->edx, 0, 1, 2u);
            eax = t3;
        }
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10222770(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10222770(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
