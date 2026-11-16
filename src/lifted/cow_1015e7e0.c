/* f_0x1015e7e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_1015e7e0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 16u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x10126510u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        loc_4 = t1;
        goto L_1015e829;
    }
    edx = t2;
    loc_4 = t1;
L_1015e7f1: ;
    wr32(sp0 - 0xcu, sp0 - 4u);
    g->ecx = self;
    g->esp = sp0 - 8u;
    t3 = cow_call_regs(g, COW_IMG(0x10126550u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->ecx;
    t5 = g->edx;
    if (!(rd8(t3 + 0x34u) & 1u))
    {
        eax = t3;
        ecx = t4;
        edx = t5;
        goto L_1015e80d;
    }
    eax = t3;
    ecx = t4;
    edx = t5;
    if (rd8(eax + 0x98u) == 0u) goto L_1015e821;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x98u);
L_1015e80d: ;
    if (rd8(eax + 0x6eu) != 0u) goto L_1015e821;
    ecx = (ecx & 0xffffff00u) | rd8(eax + 0x6eu);
    if (rd8(eax + 0x70u) != 0u) goto L_1015e821;
    if (rd32(eax + 0x10u) != 0xeu) goto L_1015e82b;
L_1015e821: ;
    if (rd32(sp0 - 4u) != 0u) goto L_1015e7f1;
L_1015e829: ;
    eax = 0u;
    loc_8 = in_esi;
L_1015e82b: ;
    g->esi = loc_8;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015e7e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015e7e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
