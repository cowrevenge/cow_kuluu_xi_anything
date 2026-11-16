/* f_0x1013af90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013af90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 544u);

    wr32(sp0 - 0x204u, in_esi);
    if ((uint16_t)arg2 == 0u)
    {
        eax = in_eax;
        goto L_1013b003;
    }
    wr32(sp0 - 0x208u, 0x3eu);
    g->edx = in_edx;
    t1 = rd32(self + 0x14u);
    g->esp = sp0 - 0x204u;
    t2 = cow_thiscall(g, COW_IMG(0x101c8450u), t1, 1, 0x3eu);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t4;
        goto L_1013afd7;
    }
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x208u, (uint16_t)arg2);
    wr32(sp0 - 0x20cu, COW_IMG(0x1036fdccu));
    wr32(sp0 - 0x210u, arg1);
    g->esp = sp0 - 0x1fcu;
    t5 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, COW_IMG(0x1036fdccu), (uint16_t)arg2, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    g->esi = rd32(sp0 - 0x204u);
    return t5;
L_1013afd7: ;
    wr32(sp0 - 0x208u, eax);
    wr32(sp0 - 0x20cu, COW_IMG(0x1036fdc4u));
    wr32(sp0 - 0x210u, sp0 - 0x200u);
    g->ecx = sp0 - 0x200u;
    g->esp = sp0 - 0x1fcu;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x1036fdc4u), eax, rd32(sp0 - 0x204u), rd32(sp0 - 0x200u));
    t6 = g->ecx;
    wr32(sp0 - 0x214u, (uint16_t)arg2);
    wr32(sp0 - 0x218u, sp0 - 0x200u);
    wr32(sp0 - 0x21cu, arg1);
    g->esp = sp0 - 0x208u;
    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, arg1, sp0 - 0x200u, (uint16_t)arg2, sp0 - 0x200u, COW_IMG(0x1036fdc4u));
    eax = t7;
L_1013b003: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013af90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013af90(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
