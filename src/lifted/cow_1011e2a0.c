/* f_0x1011e2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1011e2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd16(self + 0x3cu) == 0u)
    {
        eax = in_eax;
        goto L_1011e2c6;
    }
    edx = in_edx;
    esi = 0u;
L_1011e2ac: ;
    if (rd32(esi * 4u + rd32(self + 0x20u)) == 0u)
    {
        eax = rd32(self + 0x20u);
    }
    else
    {
        eax = rd32(self + 0x20u);
        ecx = rd32(esi * 4u + rd32(self + 0x20u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x10120070u), ecx, 0);
        t2 = g->edx;
        eax = t1;
        edx = t2;
    }
    if ((int32_t)(esi + 1u) < (int32_t)rd16(self + 0x3cu))
    {
        esi = esi + 1u;
        goto L_1011e2ac;
    }
L_1011e2c6: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1011e2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1011e2a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
