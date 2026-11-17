/* f_0x1003eb60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1003eb60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    if (rd32(self + 0x104u) == 0u)
    {
        eax = 0u;
    }
    else
    {
        eax = rd32(self + 0x104u);
        eax = rd32(eax);
    }
    if ((int32_t)rd16(self + 0x170u) < (int16_t)rd16(eax + 0x32u))
    {
        edx = rd16(self + 0x170u);
    }
    else
    {
        edx = rd16(self + 0x170u);
        wr16(self + 0x170u, 0u);
    }
    if ((int32_t)rd16(self + 0x170u) <= 0)
    {
        esi = eax + 0x48u;
        eax = rd16(self + 0x170u);
        goto L_1003ebb0;
    }
    esi = eax + 0x48u;
    eax = rd16(self + 0x170u);
L_1003eb9e: ;
    if (eax != 1u)
    {
        eax = eax - 1u;
        esi = esi + rd8(esi + 2u) * 0x90u + 4u;
        goto L_1003eb9e;
    }
    eax = eax - 1u;
    esi = esi + rd8(esi + 2u) * 0x90u + 4u;
L_1003ebb0: ;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10045d40u), self, 0);
    t1 = rd8(esi + 2u) * 6u;
    g->eax = t1;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t2 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t3 = cow_thiscall(g, rd32(t2 + 0x90u), rd32(COW_IMG(0x1047cf7cu)), 5, COW_IMG(0x1047bbc8u), esi + 4u, 0x18u, t1, self + 0xa0u);
    t4 = g->edx;
    g->edx = t4;
    return t3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003eb60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003eb60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
