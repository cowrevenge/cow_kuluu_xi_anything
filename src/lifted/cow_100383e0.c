/* f_0x100383e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_100383e0(Guest* g)
{
    double d1;
    uint32_t eax;
    uint32_t edx;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 32u);

    if ((int32_t)arg1 < 0)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        if ((int32_t)rd32(sp0 + 8u) >= 0)
        {
            eax = rd32(sp0 + 8u);
            if ((int32_t)eax > 127)
            {
                wr32(sp0 + 8u, 0x7fu);
            }
        }
        else
        {
            wr32(sp0 + 8u, 0u);
        }
        wr32(sp0 - 0x14u, arg3);
        wr32(sp0 - 0x18u, sp0 - 0x10u);
        wr32(sp0 - 0x1cu, arg1);
        wr32(sp0 - 0xcu, 0u);
        d1 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
        wrf32(sp0 - 0x10u, (float)d1);
        wr32(sp0 - 8u, 0u);
        g->eax = arg3;
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x10038440u), 3, arg1, sp0 - 0x10u, arg3);
        t3 = g->edx;
        eax = t2;
        edx = t3;
    }
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100383e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100383e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
