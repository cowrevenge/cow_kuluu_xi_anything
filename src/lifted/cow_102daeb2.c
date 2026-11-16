/* f_0x102daeb2 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=6 */
uint32_t cow_fn_102daeb2(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg6 = rd32(g->esp + 0x18u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg1 != 0u)
    {
        if (arg6 != 0u)
        {
            g->esp = sp0 - 8u;
            t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x494u, in_edi, in_esi);
            t2 = g->edx;
            if (t1 == 0u)
            {
                edx = t2;
                esi = 0u;
            }
            else
            {
                eax = t1;
                edx = t2;
                g->edx = edx;
                g->esp = sp0 - 0x10u;
                t3 = cow_thiscall(g, COW_IMG(0x102ea02eu), eax, 0);
                t4 = g->edx;
                edx = t4;
                esi = t3;
            }
            if (esi != 0u)
            {
                g->esp = sp0 - 0x10u;
                t5 = cow_fastcall(g, COW_IMG(0x102e88feu), esi, edx, 6, arg1, arg2, 1u, arg3, arg4, arg5);
                t6 = g->edx;
                if ((int32_t)t5 >= 0)
                {
                    edx = t6;
                    wr32(arg6, esi);
                    eax = 0u;
                }
                else
                {
                    edx = t6;
                    edi = t5;
                    g->esp = sp0 - 0x10u;
                    cow_fastcall(g, COW_IMG(0x102da79fu), esi, edx, 1, 1u);
                    t7 = g->edx;
                    eax = edi;
                    edx = t7;
                }
            }
            else
            {
                eax = 0x8007000eu;
            }
        }
        else
        {
            eax = 0x8876086cu;
            edx = in_edx;
        }
    }
    else
    {
        eax = 0x8876086cu;
        edx = in_edx;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102daeb2(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102daeb2(g);
    g->esp = sp0;
    rt_return(g, r, 24u);
}
/* COW_ADAPTER END */
