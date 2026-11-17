/* f_0x10115bb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10115bb0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(arg1 + 0x4f1a8u) == 0u)
    {
        eax = rd32(arg1 + 0x4f1a8u);
        ebx = rd32(arg1 + 0x4f1acu);
        goto L_10115bd3;
    }
    return 0u;
L_10115bd3: ;
    wr32(sp0 - 0x20u, arg1 + 0x2f0d4u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x1026dc10u), self, 3, arg1 + 0x2f0d4u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 >= 0)
    {
        ecx = t2;
        edx = t3;
        goto L_10115bef;
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 0u;
L_10115bef: ;
    wr32(sp0 - 0x20u, sp0 - 0x10u);
    wr32(sp0 - 0x24u, arg1 + 0x2f0d4u);
    g->eax = sp0 - 0x10u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_cdecl(g, COW_IMG(0x1026dbeeu), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x1cu), rd32(sp0 - 0x18u));
    t5 = g->edx;
    wr32(sp0 - 0x28u, ebx);
    wr32(sp0 - 0x2cu, 0x24u);
    t6 = rd32(sp0 - 0x10u);
    wr32(sp0 - 0x30u, t6);
    g->ecx = t6;
    g->esp = sp0 - 0x24u;
    t7 = cow_cdecl(g, COW_IMG(0x10116610u), 3, t6, 0x24u, ebx);
    t8 = g->ecx;
    wr32(sp0 - 0x34u, sp0 - 0x10u);
    wr32(sp0 - 0x38u, arg1 + 0x2f0d4u);
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x1026dc2du), 4, arg1 + 0x2f0d4u, sp0 - 0x10u, rd32(sp0 - 0x30u), 0x24u);
    wr32(arg1 + 0x4f1a8u, 0x13u);
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10115bb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10115bb0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
