/* f_0x1001a6e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=10 */
void cow_fn_1001a6e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg10 = rd32(g->esp + 0x28u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10084620u), arg1, 0);
    t2 = g->edx;
    if (t1 == 0u) goto L_1001a702;
    edx = t2;
    g->eax = rd32(arg1);
    t3 = rd32(arg1);
    g->esp = sp0 - 0xcu;
    t4 = cow_thiscall(g, rd32(t3 + 0x200u), arg1, 0);
    if ((uint8_t)t4 == 0u) goto L_1001a755;
L_1001a702: ;
    if ((int32_t)arg8 >= 0)
    {
        if ((int32_t)arg8 < 7)
        {
            g->eax = arg8 * 5u;
            g->esp = sp0 - 0xcu;
            t5 = cow_thiscall(g, COW_IMG(0x1001ad00u), arg8 * 0x14u + self, 8, arg2, arg3, arg4, arg5, arg6, arg7, arg9, arg10);
            if (arg8 == 0u)
            {
                eax = t5;
                if (arg1 != 0u)
                {
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(rd32(arg1) + 0x1fcu), arg1, 1, arg8);
                }
            }
        }
    }
L_1001a755: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1001a6e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1001a6e0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 40u);
}
/* COW_ADAPTER END */
