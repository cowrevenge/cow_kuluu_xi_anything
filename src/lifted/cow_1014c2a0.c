/* f_0x1014c2a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1014c2a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_1014c2c6;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1014c328;
    }
    t1 = rd32(self + 8u);
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, t1);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), in_edx);
L_1014c2c6: ;
    if ((uint32_t)(int16_t)rd16(sp0 + 8u) == 1u) goto L_1014c305;
    eax = (uint32_t)(int16_t)rd16(sp0 + 8u) - 1u;
    if (eax == 1u) goto L_1014c2f3;
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        edx = in_edx;
        goto L_1014c328;
    }
    eax = eax - 1u;
    if (rd32(COW_IMG(0x106644c0u)) == 0u)
    {
        edx = in_edx;
        goto L_1014c328;
    }
    ecx = rd32(COW_IMG(0x106644c0u));
    wr32(sp0 + 8u, 1u);
    wr32(sp0 + 4u, 1u);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x1020f3a0u), eax, ecx, in_edx);
L_1014c2f3: ;
    if (rd32(COW_IMG(0x10668eccu)) != 0u)
    {
        eax = rd32(COW_IMG(0x10668eccu));
        wr32(eax + 0x68u, 2u);
    }
L_1014c315: ;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103580e0u), 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1014c328: ;
    g->edx = edx;
    return eax;
L_1014c305: ;
    if (rd32(COW_IMG(0x10668eccu)) != 0u)
    {
        eax = rd32(COW_IMG(0x10668eccu));
        wr32(eax + 0x68u, 1u);
    }
    goto L_1014c315;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014c2a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014c2a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
