/* f_0x10319e02 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10319e02(Guest* g)
{
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 280u);

    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x10cu, in_esi);
    wr32(sp0 - 0x110u, sp0 - 0x108u);
    wr32(sp0 - 0x114u, 0x104u);
    g->eax = sp0 - 0x108u;
    g->edx = in_edx;
    g->esp = sp0 - 0x10cu;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329118u)), self, 2, 0x104u, sp0 - 0x108u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        edx = t3;
        esi = 0u;
    }
    else
    {
        ecx = t2;
        edx = t3;
        if (rd8(sp0 - 0x107u) != 0x3au)
        {
            esi = 0u;
        }
        else
        {
            t4 = rd8(sp0 - 0x108u);
            wr32(sp0 - 0x110u, t4);
            g->esp = sp0 - 0x10cu;
            t5 = cow_call_regs(g, COW_IMG(0x10313bb4u), g->eax, ecx, edx, 1, 1, t4);
            t6 = g->edx;
            edx = t6;
            esi = t5 - 0x40u;
        }
    }
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10319e02(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10319e02(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
