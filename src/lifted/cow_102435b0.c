/* f_0x102435b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102435b0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    eax = in_eax;
    edx = in_edx;
    edi = COW_IMG(0x10480af0u);
L_102435b7: ;
    if (rd32(edi) != 0u)
    {
        esi = rd32(edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1008a7b0u), esi, 0);
        t2 = g->ecx;
        t3 = g->edx;
        g->edx = t3;
        t4 = cow_cdecl(g, COW_IMG(0x1002c8b0u), 1, esi);
        t5 = g->edx;
        wr32(edi, 0u);
        eax = t4;
        edx = t5;
    }
    if ((int32_t)(edi + 4u) < (int32_t)COW_IMG(0x10480b30u))
    {
        edi = edi + 4u;
        goto L_102435b7;
    }
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102435b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102435b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
