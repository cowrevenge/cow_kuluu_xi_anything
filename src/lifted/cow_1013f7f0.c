/* f_0x1013f7f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1013f7f0(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if ((uint16_t)arg1 != 5u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1013f861;
    }
    if ((uint32_t)(int16_t)arg2 - 1u > 4u)
    {
        eax = (uint32_t)(int16_t)arg2 - 1u;
        edx = in_edx;
        goto L_1013f861;
    }
    t1 = rd32(COW_IMG(0x1013f864u) + (uint32_t)(int16_t)arg2 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x1013f80au: goto L_1013f80a;
    case 0x1013f81bu: goto L_1013f81b;
    case 0x1013f82cu: goto L_1013f82c;
    case 0x1013f844u: goto L_1013f844;
    case 0x1013f855u: goto L_1013f855;
    default: rt_fatal(g, COW_IMG(0x1013f803u), "switch");
    }
    return 0;
L_1013f80a: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t13 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 1u, 0u, 1u);
    t14 = g->edx;
    g->edx = t14;
    return t13;
L_1013f81b: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t11 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 3u, 0u, 1u);
    t12 = g->edx;
    g->edx = t12;
    return t11;
L_1013f82c: ;
    g->ecx = self;
    g->esp = sp0;
    t6 = cow_call_regs(g, COW_IMG(0x101cc0d0u), (uint32_t)(int16_t)arg2 - 1u, g->ecx, in_edx, 1, 2, 0x7fu, 0u);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        edx = t8;
        goto L_1013f861;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t9 = cow_stdcall(g, COW_IMG(0x1013f880u), 0);
    t10 = g->edx;
    g->edx = t10;
    return t9;
L_1013f844: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t4 = cow_cdecl(g, COW_IMG(0x10222b90u), 3, 2u, 0u, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1013f855: ;
    g->eax = (uint32_t)(int16_t)arg2 - 1u;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_cdecl(g, COW_IMG(0x10226490u), 2, 1u, 0u);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_1013f861: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013f7f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1013f7f0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
