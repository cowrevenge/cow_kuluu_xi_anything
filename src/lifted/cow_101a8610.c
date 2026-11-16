/* f_0x101a8610 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101a8610(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint8_t)arg1 < 0x14u) goto L_101a861e;
    g->edx = arg1;
    return in_eax & 0xffffff00u;
L_101a861e: ;
    eax = self + 0x645u;
    esi = 0u;
L_101a862d: ;
    if (rd8(eax - 1u) == 0xffu) goto L_101a8636;
    if (rd8(eax) == (uint8_t)arg1) goto L_101a8641;
L_101a8636: ;
    if ((int32_t)(esi + 1u) < 20)
    {
        eax = eax + 2u;
        esi = esi + 1u;
        goto L_101a862d;
    }
L_101a8653: ;
    t1 = rd8(self + 0x66cu);
    wr8(self + (uint8_t)arg1 * 2u + 0x645u, (uint8_t)t1);
    wr8(self + (uint8_t)arg1 * 2u + 0x644u, rd8(sp0 + 8u));
    wr8(sp0 + 8u, (uint8_t)arg1);
    t2 = rd32(sp0 + 8u);
    wr8(self + 0x66cu, (uint8_t)arg1);
    eax = t2;
    edx = 0u;
L_101a8684: ;
    if ((int32_t)edx < 19) goto L_101a8696;
    wr8(self + (uint8_t)eax * 2u + 0x645u, 0xffu);
L_101a86ab: ;
    if ((int32_t)(edx + 1u) < 20)
    {
        edx = edx + 1u;
        goto L_101a8684;
    }
    edx = edx + 1u;
L_101a86b1: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101a8641: ;
    wr8(esi * 2u + self + 0x645u, rd8(self + (uint8_t)arg1 * 2u + 0x645u));
    goto L_101a8653;
L_101a8696: ;
    if (rd8(self + (uint8_t)eax * 2u + 0x645u) == 0xffu)
    {
        eax = rd8(self + (uint8_t)eax * 2u + 0x645u);
        goto L_101a86b1;
    }
    eax = rd8(self + (uint8_t)eax * 2u + 0x645u);
    wr8(sp0 + 8u, (uint8_t)eax);
    eax = rd32(sp0 + 8u);
    goto L_101a86ab;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a8610(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a8610(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
