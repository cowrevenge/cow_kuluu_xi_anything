/* f_0x101e19a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_101e19a0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((uint16_t)arg1 != 6u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_101e19f2;
    }
    if (rd8(self + 0x4eu) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x4eu);
        edx = in_edx;
    }
    else
    {
        t1 = rd32(rd32(COW_IMG(0x10578204u)) + 8u);
        g->edx = in_edx;
        t2 = rd32(COW_IMG(0x10578204u));
        g->esp = sp0 - 8u;
        t3 = cow_call_regs(g, COW_IMG(0x1015e790u), t1, COW_IMG(0x10621838u), g->edx, 0, 2, t1, 1u);
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_thiscall(g, COW_IMG(0x1013bf40u), t2, 0);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if ((int16_t)rd16(self + 0x16u) >= 0) goto L_101e19ec;
    t7 = rd32(self + 8u);
    g->edx = edx;
    g->esp = sp0 - 4u;
    t8 = cow_call_regs(g, COW_IMG(0x1015e790u), eax, COW_IMG(0x10621838u), g->edx, 0, 2, t7, 1u);
    t9 = g->edx;
    g->edx = t9;
    return t8;
L_101e19ec: ;
    wr16(self + 0x14u, 0xffffu);
L_101e19f2: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e19a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e19a0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
