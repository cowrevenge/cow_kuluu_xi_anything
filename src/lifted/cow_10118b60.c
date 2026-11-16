/* f_0x10118b60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_10118b60(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 20u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    wr32(sp0 - 0xcu, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self + 0x14u, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        eax = t1;
        loc_4 = t1;
        goto L_10118bad;
    }
    edx = t2;
    loc_4 = t1;
L_10118b79: ;
    wr32(sp0 - 0x10u, sp0 - 4u);
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->edx;
    if (rd16(t3) != 1u)
    {
        edx = t4;
        goto L_10118b93;
    }
    eax = t3;
    edx = t4;
    if ((uint32_t)(int16_t)rd16(eax + 0x3au) == arg2) goto L_10118ba1;
L_10118b93: ;
    if (rd32(sp0 - 4u) != 0u) goto L_10118b79;
    eax = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    g->edi = rd32(sp0 - 0xcu);
    return eax;
L_10118ba1: ;
    wr32(sp0 - 0x10u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t5 = cow_stdcall(g, COW_IMG(0x10119970u), 1, arg1);
    eax = t5;
L_10118bad: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10118b60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10118b60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
