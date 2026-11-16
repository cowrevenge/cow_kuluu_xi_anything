/* f_0x1031ffb9 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031ffb9(Guest* g)
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

    if (rd32(COW_IMG(0x109b2898u)) != 0u)
    {
        edx = in_edx;
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0;
        t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 1, 0xbu);
        t2 = g->edx;
        if (rd32(COW_IMG(0x109b2898u)) != 0u)
        {
            eax = t1;
            ecx = 0xbu;
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0;
            t3 = cow_thiscall(g, COW_IMG(0x1031fffdu), 0xbu, 0);
            t4 = g->ecx;
            t5 = g->edx;
            wr32(COW_IMG(0x109b2898u), rd32(COW_IMG(0x109b2898u)) + 1u);
            eax = t3;
            ecx = t4;
            edx = t5;
        }
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 1, 0xbu);
        t6 = g->edx;
        edx = t6;
    }
    g->edx = edx;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031ffb9(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031ffb9(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
