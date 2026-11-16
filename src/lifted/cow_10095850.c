/* f_0x10095850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10095850(Guest* g)
{
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;

    if (rd8(self + 0xeeu) == 7u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
        goto L_100958f9;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0xeeu);
    if ((uint8_t)eax == 6u) goto L_100958f9;
    if ((uint8_t)eax == 8u) goto L_100958f9;
    if (rd32(self + 0x130u) >> 0x11u & 1u)
    {
        eax = rd32(self + 0x130u) >> 0x11u;
        goto L_100958f9;
    }
    eax = rd32(self + 0x130u) >> 0x11u;
    if (rd16(self + 0x11cu) != 0u) goto L_100958f5;
    if ((int16_t)rd16(self + 0xf2u) > 0) goto L_100958f5;
    t1 = rd32(self + 0x120u);
    if (t1 >> 8u & 1u)
    {
        eax = t1;
        goto L_100958f5;
    }
    eax = t1;
    if (eax >> 7u & 1u)
    {
        eax = eax >> 7u;
        goto L_100958f5;
    }
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, COW_IMG(0x100956c0u), self, 1, 0xffu);
    if ((uint8_t)t2 != 0u)
    {
        eax = t2;
        goto L_100958f5;
    }
    if (rd32(self + 0x170u) == 4u)
    {
        eax = rd32(self + 0x170u);
        goto L_100958f5;
    }
    eax = rd32(self + 0x170u);
    if (eax == 0x1au) goto L_100958f5;
    if (eax == 0x1bu) goto L_100958f5;
    if (eax == 0x1cu) goto L_100958f5;
    if (eax == 0x1du) goto L_100958f5;
    if (eax == 0x1eu) goto L_100958f5;
    if (eax == 0x1fu) goto L_100958f5;
    if (eax == 0x2cu) goto L_100958f5;
    if (eax == 0x31u) goto L_100958f5;
    if ((rd8(self + 0x12cu) & 0x20u) == 0u) goto L_100958f9;
L_100958f5: ;
    return eax & 0xffffff00u;
L_100958f9: ;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10095850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10095850(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
