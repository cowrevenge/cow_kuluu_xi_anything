/* f_0x1012dd70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1012dd70(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 48u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, arg1);
    wr32(sp0 - 0x24u, sp0 - 8u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    g->ebx = 0u;
    g->edi = arg1;
    g->eax = sp0 - 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 8u, arg1, 1u, 1u);
    t3 = g->edx;
    if (rd8(self + 0x14cu) == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1012ddec;
    }
    eax = t2;
    edx = t3;
    if (rd32(self + 0x148u) != arg1) goto L_1012ddec;
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0x78u);
    t4 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x20u, t4);
    t5 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x24u, t5);
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x101c6060u), eax, arg2, g->edx, 1, 4, t5, t4, 0x78u, 1u);
    t7 = g->edx;
    wr32(sp0 - 0x28u, t6);
    g->edx = t7;
    g->esp = sp0 - 0x24u;
    t8 = cow_call_regs(g, COW_IMG(0x101c6020u), t6, arg2, g->edx, 1, 1, t6);
    t9 = g->edx;
    wr32(sp0 - 0x2cu, t8);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, COW_IMG(0x101c60e0u), rd32(self + 0x138u), 6, t8, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u), rd32(sp0 - 0x20u), 0x78u, 1u);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
L_1012ddec: ;
    wr32(sp0 - 0x18u, 0x80808080u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t10 = cow_call_regs(g, COW_IMG(0x101c5e50u), eax, arg2, g->edx, 0, 1, 0u);
    t11 = g->edx;
    wr32(sp0 - 0x20u, t10);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 6u);
    wr32(sp0 - 0x24u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 8u);
    wr32(sp0 - 0x28u, t13);
    cow_cdecl(g, COW_IMG(0x10129f00u), 3, t13, t12, t10);
    g->ebx = in_ebx;
    g->edi = in_edi;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012dd70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012dd70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
