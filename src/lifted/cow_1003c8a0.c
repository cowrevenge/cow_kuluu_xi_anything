/* f_0x1003c8a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1003c8a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    g->ecx = self;
    g->esp = sp0 - 4u;
    t1 = cow_call_regs(g, COW_IMG(0x100852f0u), g->eax, g->ecx, in_edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    cow_call_regs(g, COW_IMG(0x10085310u), g->eax, g->ecx, t3, 1, 0);
    t4 = g->edx;
    if (rd32(COW_IMG(0x1047b980u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1047b980u));
        edx = t4;
        g->esp = sp0 - 4u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        wr32(COW_IMG(0x1047b980u), 0u);
    }
    t5 = rd32(self + 0x70u);
    if ((uint8_t)t5 + (t5 >> 0x13u & 1u) + (t5 >> 0x14u & 1u) != 1u)
    {
        eax = (uint8_t)t5;
        edx = t5 >> 0x13u & 1u;
        goto L_1003c900;
    }
    edx = t5 >> 0x13u & 1u;
    if (arg1 != 0u)
    {
        eax = arg1;
        goto L_1003c900;
    }
    g->esp = sp0 - 4u;
    cow_call_regs(g, COW_IMG(0x1003c970u), arg1, self, g->edx, 0, 1, 0u);
    return 0u;
L_1003c900: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x1003b7b0u), self + 0x30u, 1, arg2);
    t7 = g->edx;
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x1003b830u), self + 0x30u, 1, arg3);
    t9 = g->ecx;
    t10 = g->edx;
    g->edx = t10;
    g->esp = sp0 - 0x14u;
    t11 = cow_cdecl(g, COW_IMG(0x10028fd0u), 2, 0xc8u, 4u);
    t12 = g->edx;
    g->esp = sp0 - 0x10u;
    t13 = cow_fastcall(g, COW_IMG(0x100748f0u), t11, t12, 0);
    t14 = g->ecx;
    t15 = g->edx;
    wr8(COW_IMG(0x1047d13cu), 1u);
    if (t11 == 0u) goto L_1003c961;
    eax = t13;
    ecx = t14;
    edx = t15;
    esi = t11;
    g->ebx = arg2;
    g->esp = sp0 - 0x10u;
    t16 = cow_call_regs(g, COW_IMG(0x1003cc80u), eax, esi, edx, 0, 4, self, cow_f2bits((double)(float)(double)(int32_t)arg1), arg2, arg3);
    wr32(COW_IMG(0x1047b980u), t16);
    g->ebx = in_ebx;
    return t16;
L_1003c961: ;
    wr32(COW_IMG(0x1047b980u), 0u);
    g->ebx = in_ebx;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003c8a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003c8a0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
