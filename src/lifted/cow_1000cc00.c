/* f_0x1000cc00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_1000cc00(Guest* g)
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
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_call_regs(g, COW_IMG(0x1000ca00u), sp0 - 8u, self, g->edx, 0, 2, sp0 - 4u, sp0 - 8u);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u) goto L_1000cccc;
    eax = t1;
    edx = t2;
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_edi);
    t3 = rd32(self + 0x810u);
    wr32(self + 0x810u, 0u);
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, COW_IMG(0x1000cf20u), self, 0);
    wr32(sp0 - 0x1cu, arg5);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    t4 = rd32(self + 0xcu);
    wr32(sp0 - 0x30u, t4);
    g->eax = t4;
    g->edx = rd32(rd32(self + 0xcu));
    t5 = rd32(rd32(self + 0xcu));
    t6 = cow_thiscall(g, rd32(t5 + 0x11cu), arg1, 6, t4, arg1, arg2, arg3, arg4, arg5);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1000cf90u), self, 0);
    t9 = g->edx;
    wr32(self + 0x810u, 1u);
    cow_thiscall(g, COW_IMG(0x1000cf20u), self, 0);
    t10 = rd32(sp0 - 8u);
    wr32(sp0 - 0x1cu, t10);
    wr32(sp0 - 0x20u, 0u);
    t11 = rd32(sp0 - 4u);
    wr32(sp0 - 0x24u, t11);
    g->ebx = arg5;
    cow_thiscall(g, COW_IMG(0x10009e20u), self, 3, t11, 0u, t10);
    wr32(sp0 - 0x1cu, arg5);
    wr32(sp0 - 0x20u, arg4);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, arg2);
    wr32(sp0 - 0x2cu, arg1);
    t12 = rd32(self + 0xcu);
    wr32(sp0 - 0x30u, t12);
    g->eax = t12;
    g->edx = arg1;
    t13 = cow_thiscall(g, rd32(rd32(rd32(self + 0xcu)) + 0x11cu), rd32(rd32(self + 0xcu)), 6, t12, arg1, arg2, arg3, arg4, arg5);
    t14 = g->edx;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    g->edx = t14;
    t15 = cow_thiscall(g, COW_IMG(0x1000a290u), self, 2, 0u, 0u);
    t16 = g->edx;
    cow_thiscall(g, COW_IMG(0x1000cf90u), self, 0);
    wr32(self + 0x810u, t3);
    g->ebx = in_ebx;
    return t13;
L_1000cccc: ;
    wr32(sp0 - 0x10u, arg5);
    wr32(sp0 - 0x14u, arg4);
    wr32(sp0 - 0x18u, arg3);
    wr32(sp0 - 0x1cu, arg2);
    wr32(sp0 - 0x20u, arg1);
    t17 = rd32(self + 0xcu);
    wr32(sp0 - 0x24u, t17);
    g->eax = rd32(rd32(self + 0xcu));
    t18 = rd32(rd32(self + 0xcu));
    g->esp = sp0 - 0xcu;
    t19 = cow_thiscall(g, rd32(t18 + 0x11cu), arg1, 6, t17, arg1, arg2, arg3, arg4, arg5);
    g->ebx = in_ebx;
    return t19;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000cc00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000cc00(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
