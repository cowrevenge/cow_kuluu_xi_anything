/* f_0x101566e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_101566e0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (rd32(self + 4u) == 2u)
    {
        eax = rd32(self + 4u) - 2u;
        goto L_1015670c;
    }
    eax = rd32(self + 4u) - 2u;
    if (eax != 1u)
    {
        edx = in_edx;
        esi = 0u;
        goto L_10156724;
    }
    eax = eax - 1u;
    if (arg2 <= 8u)
    {
        edx = in_edx;
        esi = 8u;
        goto L_10156724;
    }
    loc_18 = COW_IMG(0x10371eb0u);
L_1015671b: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1, loc_18, arg2);
    t1 = g->edx;
    edx = t1;
    esi = 8u;
L_10156724: ;
    if (arg2 > esi + rd32(self + 0xcu))
    {
        eax = esi + rd32(self + 0xcu);
        goto L_1015673a;
    }
    wr8(arg1, 0u);
    g->edx = edx;
    return 0u;
L_1015670c: ;
    if (arg2 <= 8u)
    {
        edx = in_edx;
        esi = 8u;
        goto L_10156724;
    }
    loc_18 = COW_IMG(0x10371ea4u);
    goto L_1015671b;
L_1015673a: ;
    t2 = rd32(self + 8u);
    g->edx = arg1 + esi;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, arg1 + esi, t2, arg2 - esi);
    t3 = g->edx;
    g->edx = t3;
    return esi + rd32(self + 0xcu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101566e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101566e0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
