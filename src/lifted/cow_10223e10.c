/* f_0x10223e10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10223e10(Guest* g)
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
        if (rd32(self + 0x14u) == 1u) goto L_10223e28;
        eax = rd32(self + 0x14u) - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
            edx = in_edx;
            goto L_10223e46;
        }
        eax = 0x3e5u;
L_10223e2d: ;
        g->eax = eax;
        g->edx = in_edx;
        g->esp = sp0 - 4u;
        t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xeu, eax);
        t2 = g->edx;
        g->edx = t2;
        g->esp = sp0;
        t3 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t1, 2u);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
L_10223e46: ;
    g->edx = edx;
    return eax;
L_10223e28: ;
    eax = 0x39fu;
    goto L_10223e2d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223e10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223e10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
