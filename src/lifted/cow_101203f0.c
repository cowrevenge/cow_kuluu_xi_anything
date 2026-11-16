/* f_0x101203f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_101203f0(Guest* g)
{
    uint32_t ebp;
    uint32_t ebx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    t1 = rd32(self + 0x10u);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t3 = g->edx;
    wr32(sp0 - 4u, t2);
    if ((int32_t)t1 <= 0)
    {
        loc_4 = t2;
        goto L_10120433;
    }
    edx = t3;
    ebx = 0u;
    ebp = t1;
    loc_4 = t2;
L_10120409: ;
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->esp = sp0 - 0x14u;
    t4 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    wr32(sp0 - 0x18u, 0x10u);
    wr32(sp0 - 0x1cu, t4 + 0x24u);
    wr32(sp0 - 0x20u, arg1);
    g->ebx = ebx;
    g->esp = sp0 - 0xcu;
    t5 = cow_call_regs(g, COW_IMG(0x10325d40u), g->eax, g->ecx, arg1, 1, 5, arg1, t4 + 0x24u, 0x10u, in_edi, in_esi);
    t6 = g->edx;
    if (t5 == 0u)
    {
        esi = t4;
        goto L_1012043d;
    }
    edx = t6;
    if ((int32_t)(ebx + 1u) < (int32_t)ebp)
    {
        ebx = ebx + 1u;
        goto L_10120409;
    }
L_10120433: ;
    g->ebx = in_ebx;
    return 0u;
L_1012043d: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101203f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101203f0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
