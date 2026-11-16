/* f_0x101360e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101360e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_1013611e;
    }
    eax = rd32(self + 8u);
    t1 = (eax & 0xffff0000u) | rd16(eax + 0x4cu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_stdcall(g, COW_IMG(0x10131680u), 1, t1);
    t3 = g->edx;
    if (rd16(self + (uint32_t)(int16_t)t2 * 4u + 0x7au) != 0u)
    {
        eax = (uint32_t)(int16_t)t2;
        ecx = rd32(COW_IMG(0x10578204u));
        edx = t3;
        esi = (self & 0xffff0000u) | rd16(self + (uint32_t)(int16_t)t2 * 4u + 0x7au);
        goto L_10136114;
    }
    eax = (uint32_t)(int16_t)t2;
    ecx = rd32(COW_IMG(0x10578204u));
    edx = t3;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x1013e2f0u), eax, ecx, g->edx, 0, 2, 0u, 0u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_10136114: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t6 = cow_thiscall(g, COW_IMG(0x1013e200u), ecx, 4, esi, 0u, 3u, 0u);
    t7 = g->edx;
    eax = t6;
    edx = t7;
L_1013611e: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101360e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101360e0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
