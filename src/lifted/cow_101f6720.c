/* f_0x101f6720 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101f6720(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        goto L_101f67b0;
    }
    eax = rd32(self + 8u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x1015edd0u), eax, COW_IMG(0x10621838u), g->edx, 0, 1, eax);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101f67b0;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x101f7100u), self, 0);
    if (rd32(self + 0x38u) == 0u)
    {
        eax = t3;
        edx = rd32(self + 0x38u);
        goto L_101f6779;
    }
    eax = t3;
    edx = rd32(self + 0x38u);
    if ((int32_t)eax < 0) goto L_101f6779;
    if ((int32_t)eax >= (int16_t)rd16(self + 0x20u)) goto L_101f6779;
    t4 = rd32(eax * 0x54u + edx + 0x4cu);
    g->eax = eax * 0x15u;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t4, 2u);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_101f6779: ;
    if (rd16(self + 0x20u) != 0u) goto L_101f6799;
    if (rd32(self + 0x40u) == 0u) goto L_101f6799;
    esi = rd32(self + 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, esi, 2u);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_101f6799: ;
    if ((uint8_t)arg1 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 4u;
        t9 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, 0u, 2u);
        t10 = g->edx;
        eax = t9;
        edx = t10;
    }
L_101f67b0: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101f6720(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101f6720(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
