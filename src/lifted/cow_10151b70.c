/* f_0x10151b70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10151b70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 == 0u)
    {
        eax = (in_eax & 0xffffff00u) | (uint8_t)arg1;
        edx = in_edx;
    }
    else
    {
        if (rd32(self + 0x70u) != 0u)
        {
            eax = rd32(self + 0x70u);
            goto L_10151b89;
        }
        if (rd32(self + 0x78u) == 0u)
        {
            eax = rd32(self + 0x78u);
            edx = in_edx;
            goto L_10151bae;
        }
        eax = rd32(self + 0x78u);
L_10151b89: ;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_thiscall(g, COW_IMG(0x10151340u), self, 1, 0u);
        t2 = g->edx;
        g->edx = t2;
        t3 = cow_stdcall(g, COW_IMG(0x10151d90u), 0);
        t4 = g->edx;
        wr32(self + 0x74u, 0u);
        wr32(self + 0x78u, 0u);
        wr8(self + 0x9cu, 0u);
        eax = t3;
        edx = t4;
    }
L_10151bae: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10151b70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10151b70(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
