/* f_0x102228b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_102228b0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) == 5u) goto L_102228d9;
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 5u;
    if (eax == 1u) goto L_102228e4;
    eax = eax - 1u;
    if (rd32(self + 0x1cu) == 0u)
    {
        edx = in_edx;
        goto L_1022291b;
    }
    esi = rd32(self + 0x1cu);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, esi, 1u);
    t2 = g->edx;
    g->edx = t2;
    return t1;
L_102228d9: ;
    if ((uint32_t)(int16_t)arg2 == 1u) goto L_102228eb;
    if ((uint32_t)(int16_t)arg2 != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 2u;
        edx = in_edx;
        goto L_1022291b;
    }
L_102228e4: ;
    wr8(sp0 + 4u, 0u);
L_102228f0: ;
    if (rd32(self + 0x14u) == 0u)
    {
        eax = rd32(self + 0x14u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x14u);
        t3 = rd32(sp0 + 4u);
        t4 = rd32(self + 0x18u);
        g->eax = eax;
        g->edx = t4;
        g->esp = sp0 - 4u;
        t5 = cow_thiscall_cdecl(g, eax, t3, 2, t4, t3);
        t6 = g->edx;
        wr32(self + 0x14u, 0u);
        eax = t5;
        edx = t6;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t7 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x1038610cu));
    t8 = g->edx;
    eax = t7;
    edx = t8;
L_1022291b: ;
    g->edx = edx;
    return eax;
L_102228eb: ;
    wr8(sp0 + 4u, 1u);
    goto L_102228f0;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102228b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102228b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
