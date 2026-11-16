/* f_0x101ed300 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101ed300(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        eax = in_eax;
        edx = rd32(self + 8u);
        goto L_101ed384;
    }
    edx = rd32(self + 8u);
    if ((int32_t)(uint8_t)arg1 >= (int16_t)rd16(self + 4u))
    {
        eax = (uint32_t)(int16_t)rd16(self + 4u);
        goto L_101ed384;
    }
    if (rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u) == 0u)
    {
        eax = (uint8_t)arg1 * 8u - (uint8_t)arg1;
        goto L_101ed384;
    }
    esi = rd32(edx + (uint8_t)arg1 * 0x54u + 0x48u);
    g->edx = rd16(esi);
    t1 = rd16(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t1);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_101ed384;
    }
    eax = t2;
    g->eax = eax;
    g->edx = rd32(self);
    t4 = rd32(self);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x20u), self, 2, esi, eax);
    t6 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        edx = t6;
        goto L_101ed384;
    }
    eax = t5;
    edx = t6;
    if (eax == 0x80404040u) goto L_101ed384;
    wr8(self + 0x10u, 1u);
    t7 = rd8(esi + 2u);
    wr8(self + 0x11u, (uint8_t)t7);
    t8 = rd32(esi + 4u);
    g->eax = (eax & 0xffffff00u) | t7;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x1013a870u), rd32(COW_IMG(0x10578200u)), 5, 1u, t8, COW_IMG(0x101ed390u), esi, 0u);
    t10 = g->edx;
    g->edx = t10;
    return (t9 & 0xffffff00u) | 1u;
L_101ed384: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ed300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ed300(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
