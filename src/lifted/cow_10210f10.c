/* f_0x10210f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=7 */
uint32_t cow_fn_10210f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x14u) != 0u) goto L_10210f22;
    return in_eax & 0xffffff00u;
L_10210f22: ;
    if (rd16(rd32(COW_IMG(0x1057876cu)) + 0x68u) != 0u)
    {
        eax = rd32(COW_IMG(0x1057876cu));
        wr16(eax + 0x68u, 0u);
    }
    wr32(self + 0x18u, arg2);
    wr32(self + 0x14u, arg1);
    wr32(self + 0x1cu, arg3);
    wr32(self + 0x34u, arg5);
    wr8(self + 0x3cu, 0u);
    if ((uint8_t)arg6 != 0u)
    {
        wr8(self + 0x39u, rd8(self + 0x38u));
    }
    else
    {
        wr8(self + 0x39u, 0u);
    }
    wr8(self + 0x3au, 1u);
    if (arg5 == 0u)
    {
        eax = arg5;
        edx = arg3;
    }
    else
    {
        if (rd32(COW_IMG(0x1057847cu)) == 0u)
        {
            eax = arg5;
            edx = arg3;
        }
        else
        {
            ecx = rd32(COW_IMG(0x1057847cu));
            g->eax = arg5;
            g->edx = arg3;
            g->esp = sp0 - 8u;
            t1 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, arg5, 2u);
            t2 = g->edx;
            eax = t1;
            edx = t2;
        }
    }
    wr8(self + 0x3bu, (uint8_t)arg4);
    wr32(self + 0x40u, arg7);
    if (arg7 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        wr8(rd32(self + 8u) + 0x86u, 1u);
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg4;
        t3 = rd32(self + 8u);
        wr8(t3 + 0x86u, 0u);
        edx = t3;
    }
    t4 = -((uint8_t)eax != 0u) + 2u;
    g->eax = t4;
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, COW_IMG(0x102112b0u), self, 1, t4);
    return (t5 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10210f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10210f10(g);
    g->esp = sp0;
    rt_return(g, r, 28u);
}
/* COW_ADAPTER END */
