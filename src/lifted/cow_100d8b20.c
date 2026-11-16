/* f_0x100d8b20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100d8b20(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 == 0u)
    {
        edi = 1u;
    }
    else
    {
        t1 = rd32(arg1 + 0x46cu);
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t2 = cow_thiscall(g, rd32(COW_IMG(0x103291c8u)), self, 2, t1, 0x32u);
        t3 = g->edx;
        if (t2 != 0u)
        {
            edi = 1u;
        }
        else
        {
            edx = t3;
            if (rd32(arg1 + 0x460u) != 0u)
            {
                eax = rd32(arg1 + 0x460u);
                edi = 1u;
            }
            else
            {
                eax = rd32(arg1 + 0x460u);
                if (rd32(arg1 + 4u) != 0xffffffffu)
                {
                    edi = 1u;
                }
                else
                {
                    wr16(arg1 + 8u, 2u);
                    wr32(arg1 + 0xcu, arg2);
                    g->eax = eax;
                    g->edx = arg3;
                    g->esp = sp0 - 8u;
                    t4 = cow_thiscall(g, rd32(COW_IMG(0x10329480u)), arg2, 1, arg3);
                    t5 = g->ecx;
                    t6 = g->edx;
                    wr16(arg1 + 0xau, (uint16_t)t4);
                    t7 = rd32(arg1 + 0x470u);
                    wr32(arg1 + 0x460u, 2u);
                    g->eax = t7;
                    g->edx = t6;
                    t8 = cow_thiscall(g, rd32(COW_IMG(0x103291d8u)), t5, 3, t7, 1u, 0u);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                    edi = 0u;
                }
            }
            t10 = rd32(arg1 + 0x46cu);
            g->esp = sp0 - 8u;
            cow_thiscall(g, rd32(COW_IMG(0x103291ccu)), t10, 1, t10);
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d8b20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d8b20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
