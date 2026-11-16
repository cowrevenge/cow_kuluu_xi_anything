/* f_0x10162e20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_10162e20(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int16_t)arg1 > 24) goto L_10162e37;
    if ((int16_t)arg1 < 4) goto L_10162e37;
    wr16(self + 0x4eu, (uint16_t)arg1);
L_10162e3d: ;
    if ((int16_t)rd16(self + 0x4eu) < (int16_t)rd16(self + 0x50u))
    {
        eax = (in_eax & 0xffff0000u) | rd16(self + 0x4eu);
        edx = in_edx;
        goto L_10162e4e;
    }
    eax = (in_eax & 0xffff0000u) | rd16(self + 0x4eu);
    if (rd8(self + 0x58u) != 0u)
    {
        edx = (in_edx & 0xffffff00u) | rd8(self + 0x58u);
        goto L_10162e52;
    }
    edx = (in_edx & 0xffffff00u) | rd8(self + 0x58u);
L_10162e4e: ;
    wr16(self + 0x50u, (uint16_t)eax);
L_10162e52: ;
    g->esp = sp0;
    cow_thiscall(g, COW_IMG(0x10162ef0u), self, 0);
    return;
L_10162e37: ;
    wr16(self + 0x4eu, 0x18u);
    goto L_10162e3d;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10162e20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10162e20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
