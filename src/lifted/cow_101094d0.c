/* f_0x101094d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101094d0(Guest* g)
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 4u) == 0u)
    {
        eax = in_eax;
        goto L_101094ea;
    }
    esi = rd32(self + 4u);
    if (rd16(esi + 2u) <= 1u)
    {
        eax = (in_eax & 0xffff0000u) | rd16(esi + 2u);
        goto L_101094f6;
    }
    eax = (in_eax & 0xffff0000u) | rd16(esi + 2u);
    wr16(esi + 2u, (uint16_t)(eax - 1u));
    eax = eax - 1u;
L_101094ea: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t9 = cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101094f1: ;
    g->edx = edx;
    return eax;
L_101094f6: ;
    if (esi == 0u) goto L_101094ea;
    if ((uint8_t)arg1 == 0u) goto L_10109524;
    eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    if (esi == 0u) goto L_101094ea;
    t1 = rd32(esi + 4u);
    g->eax = t1;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    g->esp = sp0 - 0xcu;
    t5 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t6 = g->edx;
    g->edx = t6;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x10109100u), self, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10109524: ;
    if (rd32(esi + 4u) == 0u)
    {
        eax = rd32(esi + 4u);
        edx = in_edx;
        goto L_101094f1;
    }
    eax = rd32(esi + 4u);
    wr8(eax, 0u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101094d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101094d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
