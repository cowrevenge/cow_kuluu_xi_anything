/* f_0x102886a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102886a0(Guest* g)
{
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((arg1 & 0xfu) == 0u)
    {
        edi = arg1;
    }
    else
    {
        if (rd32(COW_IMG(0x109a2788u)) == 0u)
        {
            esi = 0x10u - (arg1 & 0xfu);
        }
        else
        {
            edx = rd32(COW_IMG(0x109a2788u));
            t1 = 0x10u - (arg1 & 0xfu);
            g->ecx = self;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t2 = cow_cdecl(g, COW_IMG(0x10288680u), 1, arg1);
            t3 = g->ecx;
            t4 = g->edx;
            g->esp = sp0 - 4u;
            cow_call_regs(g, COW_IMG(0x10314d95u), g->eax, g->ecx, t4, 1, 5, t4, COW_IMG(0x103b8ec8u), t2, t1, in_esi);
            esi = t1;
        }
        if (esi == 0u)
        {
            edi = arg1;
        }
        else
        {
            edi = arg1 + esi;
        }
    }
    return edi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102886a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102886a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
