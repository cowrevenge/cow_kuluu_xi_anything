/* f_0x1015b970 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1015b970(Guest* g)
{
    uint32_t eax;
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_ebp);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall(g, COW_IMG(0x10126500u), self, 0);
    t2 = g->edx;
    wr32(sp0 - 4u, t1);
    if (t1 == 0u)
    {
        edx = t2;
        loc_4 = t1;
        goto L_1015b9a8;
    }
    eax = t1;
    edx = t2;
    loc_4 = t1;
L_1015b988: ;
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->esp = sp0 - 0x14u;
    t3 = cow_call_regs(g, COW_IMG(0x10126520u), g->eax, g->ecx, edx, 0, 1, sp0 - 4u);
    t4 = g->edx;
    if (arg1 == rd32(t3 + 0x14b0u))
    {
        edx = t4;
        ebx = eax;
        eax = t3;
        esi = t3;
        goto L_1015b9b2;
    }
    edx = t4;
    if (rd32(sp0 - 4u) != 0u)
    {
        eax = rd32(sp0 - 4u);
        goto L_1015b988;
    }
L_1015b9a8: ;
    g->edx = edx;
    return 0u;
L_1015b9b2: ;
    if ((uint8_t)arg2 != 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        wr32(sp0 - 0x18u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t5 = cow_thiscall(g, COW_IMG(0x10126580u), self, 1, ebx);
        t6 = g->edx;
        wr32(sp0 - 0x18u, esi);
        g->edx = t6;
        cow_thiscall(g, COW_IMG(0x101264c0u), self, 1, esi);
        t7 = g->edx;
        edx = t7;
    }
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->ebp = rd32(sp0 - 0xcu);
    g->edx = edx;
    return esi;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1015b970(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1015b970(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
