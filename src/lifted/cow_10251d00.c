/* f_0x10251d00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10251d00(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_stdcall(g, COW_IMG(0x102825b0u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    g->ecx = t2;
    g->edx = t3;
    cow_cdecl(g, COW_IMG(0x10285760u), 1, COW_IMG(0x1099d200u));
    t4 = g->ecx;
    t5 = g->edx;
    if (rd32(COW_IMG(0x10669404u)) != 0u)
    {
        ecx = t4;
        edx = t5;
        t6 = rd32(COW_IMG(0x10669408u));
        wr32(COW_IMG(0x10669400u), 0u);
        g->esp = sp0 - 4u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, t6);
        wr32(COW_IMG(0x10669408u), 0u);
        wr32(COW_IMG(0x10669404u), 0u);
    }
    if (rd32(COW_IMG(0x10669410u)) == 0u)
    {
        eax = (rd32(COW_IMG(0x10669410u)) & 0xffffff00u) | 1u;
    }
    else
    {
        eax = (rd32(COW_IMG(0x10669410u)) & 0xffffff00u) | 1u;
        wr32(COW_IMG(0x1066940cu), 0u);
        wr32(COW_IMG(0x10669410u), 0u);
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10251d00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10251d00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
