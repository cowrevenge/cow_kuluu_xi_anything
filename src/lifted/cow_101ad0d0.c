/* f_0x101ad0d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101ad0d0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t sf;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd8(self + rd32(self + 0x888u) + 0x6c3u) != 0x20u)
    {
        eax = rd32(self + 0x888u);
        goto L_101ad0eb;
    }
    return rd32(self + 0xa50u);
L_101ad0eb: ;
    t1 = rd32(self + 0x888u);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t2 = cow_cdecl(g, COW_IMG(0x1018fb00u), 3, self + 0x6c4u, t1, eax - 1u);
    t3 = g->edx;
    if ((int32_t)(eax - 1u - t2) <= 0)
    {
        esi = eax - 1u - t2;
        sf = (int32_t)(eax - 1u - t2) < 0;
        goto L_101ad13d;
    }
    edx = t3;
    esi = eax - 1u - t2;
    eax = t2;
L_101ad10d: ;
    if (rd8(esi + self + 0x6c4u) == 0x20u) goto L_101ad13a;
    if ((int32_t)esi <= 0) goto L_101ad121;
    if (rd8(esi + self + 0x6c3u) == 0x7fu) goto L_101ad13a;
L_101ad121: ;
    t4 = rd32(self + 0x888u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x1018fb00u), 3, self + 0x6c4u, t4, esi);
    t6 = g->edx;
    if ((int32_t)(esi - t5) > 0)
    {
        eax = t5;
        edx = t6;
        esi = esi - t5;
        goto L_101ad10d;
    }
    esi = esi - t5;
L_101ad13b: ;
    sf = (int32_t)esi < 0;
L_101ad13d: ;
    if (sf)
    {
        esi = 0u;
    }
    wr8(esi + self + 0x6c4u, 0u);
    t7 = rd32(self + 0xa54u) + 1u;
    wr32(self + 0x888u, esi);
    g->esp = sp0 - 0xcu;
    t8 = cow_call_regs(g, COW_IMG(0x101ac990u), self + 0x88cu, self, g->edx, 0, 6, self + 0x88cu, t7, self + 0x6c4u, esi, 0u, 0u);
    t9 = rd32(self + 0x888u);
    wr32(self + 0xa50u, t8);
    wr32(self + 0xa58u, t9);
    return t8;
L_101ad13a: ;
    esi = esi + 1u;
    goto L_101ad13b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ad0d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ad0d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
