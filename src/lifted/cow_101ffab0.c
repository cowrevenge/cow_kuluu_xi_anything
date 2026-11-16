/* f_0x101ffab0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101ffab0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 48u);

    wr8(COW_IMG(0x10663ac8u), 0u);
    if (arg3 == 0u) goto L_101ffb28;
    if (arg3 == 1u) goto L_101ffb0f;
    if (arg3 - 1u == 9u) goto L_101ffafe;
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, 0x70u);
    wr32(sp0 - 0x2cu, 0xau);
    g->eax = arg3 - 0xau;
    g->ecx = arg3;
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x70u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x28u, t1);
    wr32(sp0 - 0x2cu, sp0 - 0x20u);
    g->edx = t3;
    g->esp = sp0 - 0x18u;
    t4 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x20u, t1, arg3, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t5 = g->edx;
    wr32(sp0 - 0x24u, sp0 - 0x20u);
    g->edx = t5;
    g->esp = sp0 - 0x20u;
    t6 = cow_thiscall(g, COW_IMG(0x10129eb0u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x20u);
    t7 = g->edx;
    g->edx = t7;
    return (t6 & 0xffffff00u) | 1u;
L_101ffafe: ;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t8 = cow_call_regs(g, COW_IMG(0x101ff9e0u), arg3 - 0xau, rd32(COW_IMG(0x10663ab8u)), g->edx, 1, 0);
    t9 = g->edx;
    g->edx = t9;
    return (t8 & 0xffffff00u) | 1u;
L_101ffb0f: ;
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
        edx = in_edx;
        goto L_101ffb51;
    }
    eax = rd32(COW_IMG(0x105781f8u));
    wr32(sp0 - 0x24u, 0x10u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t10 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 0x10u);
    t11 = g->edx;
    g->edx = t11;
    return (t10 & 0xffffff00u) | 1u;
L_101ffb28: ;
    if (arg1 != 0u) goto L_101ffb41;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t12 = cow_call_regs(g, COW_IMG(0x101ff9a0u), arg1, rd32(COW_IMG(0x10663ab8u)), g->edx, 1, 0);
    t13 = g->edx;
    g->edx = t13;
    return (t12 & 0xffffff00u) | 1u;
L_101ffb41: ;
    wr32(sp0 - 0x24u, 0xa1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t14 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xa1u);
    t15 = g->edx;
    eax = t14;
    edx = t15;
L_101ffb51: ;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ffab0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ffab0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
