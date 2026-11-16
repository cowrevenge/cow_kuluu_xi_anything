/* f_0x1007a640 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007a640(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->edx = in_edx;
    t1 = cow_call_regs(g, COW_IMG(0x101cbdf0u), in_eax, g->ecx, g->edx, 1, 1, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
    }
    else
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0;
        t4 = cow_cdecl(g, COW_IMG(0x10083ee0u), 2, 0xffffffffu, 0u);
        t5 = g->edx;
        if (rd32(COW_IMG(0x1057876cu)) == 0u)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            ecx = rd32(COW_IMG(0x1057876cu));
            edx = t5;
            if (eax != 0u)
            {
                g->esp = sp0;
                cow_fastcall(g, COW_IMG(0x10157b40u), ecx, edx, 3, eax, 1u, 0u);
                t6 = g->edx;
                edx = t6;
            }
        }
    }
    g->edx = edx;
    return arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007a640(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007a640(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
