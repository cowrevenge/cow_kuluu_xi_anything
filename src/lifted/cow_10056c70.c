/* f_0x10056c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=4 */
uint32_t cow_fn_10056c70(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x10071e90u), in_eax, self, g->edx, 1, 0);
    g->eax = arg3;
    g->edx = arg1;
    t1 = cow_thiscall(g, COW_IMG(0x10056ce0u), self, 4, arg1, arg2, arg4, arg3);
    t2 = g->edx;
    if (arg4 == 0u)
    {
        eax = t1;
        edx = t2;
        esi = t1;
    }
    else
    {
        edx = t2;
        esi = t1;
        if (rd32(rd32(arg4 + 0xcu) + 0xcu) == 0xeu)
        {
            eax = rd32(rd32(arg4 + 0xcu) + 0xcu);
        }
        else
        {
            eax = rd32(rd32(arg4 + 0xcu) + 0xcu);
            edi = rd32(arg4 + 0xcu);
            if (eax != 0xfu)
            {
                if ((int16_t)rd16(edi + 0x1cu) <= 1)
                {
                    eax = 1u;
                }
                else
                {
                    wr32(esi + 0x9cu, 0x3f333333u);
                    wr8(esi + 0x142u, 1u);
                    eax = 1u;
                }
            }
        }
    }
    g->esp = sp0 - 8u;
    cow_fastcall(g, COW_IMG(0x100748c0u), esi, edx, 0);
    t3 = g->edx;
    g->edx = t3;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10056c70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10056c70(g);
    g->esp = sp0;
    rt_return(g, r, 16u);
}
/* COW_ADAPTER END */
