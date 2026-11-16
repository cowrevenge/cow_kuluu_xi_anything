/* f_0x100d4470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_100d4470(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x7e4u) != 0u)
    {
        esi = rd32(self + 0x7e4u);
        edx = in_edx;
L_100d4484: ;
        if (arg1 != rd32(esi + 0x1cu))
        {
            edi = rd32(esi + 4u);
        }
        else
        {
            eax = rd32(esi + 0x1cu);
            edi = rd32(esi + 4u);
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_thiscall(g, COW_IMG(0x1002c800u), esi, 1, self + 0x7e4u);
            t1 = g->edx;
            g->edx = t1;
            cow_thiscall(g, rd32(rd32(esi) + 0x18u), esi, 1, 1u);
            t2 = g->edx;
            edx = t2;
        }
        if (edi != 0u)
        {
            esi = edi;
            goto L_100d4484;
        }
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d4470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d4470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
