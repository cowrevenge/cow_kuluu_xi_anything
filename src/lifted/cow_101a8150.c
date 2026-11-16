/* f_0x101a8150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101a8150(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 96u);

    if ((uint16_t)arg1 == 0u)
    {
        eax = in_eax;
        edx = arg1;
    }
    else
    {
        wr32(sp0 - 0x58u, in_edi);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x5cu, sp0 - 0x54u);
        wr16(sp0 - 0x4cu, 0x126u);
        wr32(sp0 - 0x48u, (uint16_t)arg1);
        g->eax = sp0 - 0x54u;
        g->edx = (uint16_t)arg1;
        g->esp = sp0 - 0x58u;
        t1 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
