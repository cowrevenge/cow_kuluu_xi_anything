/* f_0x1020dae0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1020dae0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(COW_IMG(0x10664494u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1020db77;
    }
    ecx = rd32(COW_IMG(0x10664494u));
    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1020db77;
    }
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        goto L_1020db4e;
    }
    eax = rd32(self + 0x14u);
    zf = rd32(self + 0x14u) == 0u;
    if (zf)
    {
        edx = in_edx;
        goto L_1020db77;
    }
    if (eax > 2u)
    {
        edx = in_edx;
        goto L_1020db77;
    }
    g->ecx = ecx;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10108070u), 1, ecx + 0x5cu);
    t1 = g->ecx;
    t2 = g->edx;
    t3 = (uint32_t)(int16_t)arg2 + rd32(self + 0x18u);
    g->edx = t2;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x10108040u), 2, ecx + 0x5cu, t3);
    t5 = g->edx;
    g->edx = t5;
    g->esp = sp0 - 8u;
    t6 = cow_call_regs(g, COW_IMG(0x1020a9d0u), t4, rd32(COW_IMG(0x10664494u)), g->edx, 0, 6, 1u, ecx + 0x5cu, 1u, 0u, 0u, 0u);
    t7 = g->edx;
    t8 = rd32(self + 8u);
    g->edx = t7;
    t9 = cow_call_regs(g, COW_IMG(0x1015e790u), t6, COW_IMG(0x10621838u), g->edx, 0, 2, t8, 1u);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1020db4e: ;
    t11 = rd8(self + 0x18u);
    t12 = rd32(COW_IMG(0x10663484u));
    wr8(t12 + 0x16u, 2u);
    wr8(t12 + 0x17u, (uint8_t)((uint8_t)arg2 + t11));
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1036f868u), 1u, 0u);
    t14 = g->edx;
    eax = t13;
    edx = t14;
L_1020db77: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1020dae0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1020dae0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
