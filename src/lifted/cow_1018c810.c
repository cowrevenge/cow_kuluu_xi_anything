/* f_0x1018c810 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1018c810(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0xcu) != 0u)
    {
        ecx = rd32(self + 0xcu);
        goto L_1018c820;
    }
    return in_eax & 0xffffff00u;
L_1018c820: ;
    eax = ecx + 0x24u;
    esi = 0u;
L_1018c825: ;
    if (rd8(eax) == 0u) goto L_1018c831;
    if (esi + 1u < 0x40u)
    {
        eax = eax + 1u;
        esi = esi + 1u;
        goto L_1018c825;
    }
    eax = eax + 1u;
    esi = esi + 1u;
L_1018c831: ;
    if (esi != 0x40u) goto L_1018c83b;
    return eax & 0xffffff00u;
L_1018c83b: ;
    if (esi < (uint32_t)(int16_t)rd16(ecx + 0x1cu))
    {
        eax = (uint32_t)(int16_t)rd16(ecx + 0x1cu);
        goto L_1018c848;
    }
    eax = (uint32_t)(int16_t)rd16(ecx + 0x1cu);
    return eax & 0xffffff00u;
L_1018c848: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1009e090u), 3, self, esi, 0u);
    t2 = g->edx;
    t3 = rd16(self + 8u);
    t4 = rd32(self + 0xcu);
    wr16(self + 0xau, (uint16_t)t3);
    wr16(self + 8u, (uint16_t)(((t1 & 0xffff0000u) | t3) + 1u));
    wr8(esi + t4 + 0x24u, 1u);
    g->edx = t2;
    return (((t1 & 0xffff0000u) | t3) + 1u & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018c810(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018c810(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
