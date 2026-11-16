/* f_0x101a6e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101a6e00(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    edx = in_edx;
    edi = 0u;
L_101a6e21: ;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 1u);
    wr32(sp0 - 0x24u, edi + 1u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->ebx = edi + 1u;
    g->edi = edi;
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t1 = cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, edi + 1u, 1u, 1u);
    t2 = g->edx;
    if (rd32(self + 0x1cu) == 0u)
    {
        eax = t1;
        edx = t2;
        ebx = edi + 1u;
        goto L_101a6e71;
    }
    eax = t1;
    ecx = rd32(self + 0x1cu);
    edx = t2;
    ebx = edi + 1u;
    if (rd32(self + 0x20u) != edi) goto L_101a6e71;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 0x4bu);
    t3 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
    wr32(sp0 - 0x24u, t3);
    t4 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x28u, t4);
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x101c6060u), t4, ecx, g->edx, 1, 4, t4, t3, 0x4bu, 1u);
    t6 = g->edx;
    wr32(sp0 - 0x2cu, t5);
    g->edx = t6;
    g->esp = sp0 - 0x28u;
    t7 = cow_call_regs(g, COW_IMG(0x101c6020u), t5, rd32(self + 0x1cu), g->edx, 1, 1, t5);
    t8 = g->edx;
    wr32(sp0 - 0x30u, t7);
    g->edx = t8;
    g->esp = sp0 - 0x18u;
    t9 = cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x1cu), 6, t7, rd32(sp0 - 0x2cu), rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), 0x4bu, 1u);
    t10 = g->edx;
    eax = t9;
    edx = t10;
L_101a6e9c: ;
    if ((int32_t)ebx < 20)
    {
        edi = ebx;
        goto L_101a6e21;
    }
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 0x10u);
    g->edx = edx;
    return eax;
L_101a6e71: ;
    wr32(sp0 - 0x1cu, 0x4bu);
    wr32(sp0 - 0x20u, 0x80808080u);
    wr32(sp0 - 0x24u, edi);
    g->eax = eax;
    g->esp = sp0 - 0x20u;
    t11 = cow_thiscall(g, COW_IMG(0x101a8960u), rd32(self + 0x14u), 1, edi);
    wr32(sp0 - 0x24u, t11);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 6u) + 2u;
    wr32(sp0 - 0x28u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 8u;
    wr32(sp0 - 0x2cu, t13);
    g->edx = t13;
    g->esp = sp0 - 0x18u;
    t14 = cow_thiscall(g, COW_IMG(0x101b9760u), rd32(self + 0x18u), 5, t13, t12, t11, 0x80808080u, 0x4bu);
    t15 = g->edx;
    eax = t14;
    edx = t15;
    goto L_101a6e9c;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101a6e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101a6e00(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
