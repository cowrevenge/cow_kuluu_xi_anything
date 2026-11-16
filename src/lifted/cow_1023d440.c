/* f_0x1023d440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1023d440(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 0x18u) == 1u)
    {
        eax = in_eax;
        edx = in_edx;
        goto L_1023d48a;
    }
    if ((uint32_t)(int16_t)arg1 - 3u > 6u)
    {
        eax = (uint32_t)(int16_t)arg1 - 3u;
        edx = in_edx;
        goto L_1023d48a;
    }
    t1 = rd32(COW_IMG(0x1023d490u) + rd8(COW_IMG(0x1023d49cu) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t1 - RD)
    {
    case 0x1023d465u: ecx = rd8(COW_IMG(0x1023d49cu) + (uint32_t)(int16_t)arg1 - 3u); goto L_1023d465;
    case 0x1023d46eu: ecx = rd8(COW_IMG(0x1023d49cu) + (uint32_t)(int16_t)arg1 - 3u); goto L_1023d46e;
    case 0x1023d48au: eax = (uint32_t)(int16_t)arg1 - 3u; edx = in_edx; goto L_1023d48a;
    default: rt_fatal(g, COW_IMG(0x1023d45eu), "switch");
    }
    return 0;
L_1023d465: ;
    g->eax = (uint32_t)(int16_t)arg1 - 3u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_1023d46e: ;
    g->esp = sp0 - 4u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t2 = rd32(self + 8u);
    wr32(self + 0x18u, 1u);
    t3 = (uint32_t)(int16_t)arg2 - 1u;
    wr32(self + 0x1cu, t3);
    wr8(t2 + 0x5du, 1u);
    eax = t2;
    edx = t3;
L_1023d48a: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1023d440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1023d440(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
