/* f_0x10085510 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10085510(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (rd32(self + 0x68u) == 0u)
    {
        edx = in_edx;
        goto L_10085553;
    }
    esi = rd32(self + 0x68u);
    edx = in_edx;
L_1008551d: ;
    g->eax = rd32(esi);
    g->edx = edx;
    t1 = rd32(esi);
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, rd32(t1 + 0x18u), esi, 0);
    t3 = g->edx;
    if (t2 == 0u)
    {
        edx = t3;
        goto L_1008554c;
    }
    eax = t2;
    g->eax = eax;
    g->edx = rd32(esi);
    t4 = rd32(esi);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall_cdecl(g, rd32(t4 + 0x18u), esi, 1, COW_IMG(0x1032b108u));
    t6 = g->edx;
    t7 = cow_fastcall(g, COW_IMG(0x1002c8f0u), t5, t6, 1, COW_IMG(0x1032b108u));
    t8 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        edx = t8;
        goto L_1008554c;
    }
    edx = t8;
    if (rd32(esi + 0xc4u) == rd32(arg1 + 0x14u)) goto L_1008555a;
L_1008554c: ;
    if (rd32(esi + 0x2cu) != 0u)
    {
        esi = rd32(esi + 0x2cu);
        goto L_1008551d;
    }
L_10085553: ;
    g->edx = edx;
    return 0u;
L_1008555a: ;
    g->edx = edx;
    return esi - 0x30u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10085510(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10085510(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
