/* f_0x100d0d70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_100d0d70(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, in_ebx);
    wr32(sp0 - 8u, in_ebp);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (arg2 != rd32(self + 0x9ecu)) goto L_100d0e74;
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
        esi = rd32(sp0 + 4u);
    }
    else
    {
        esi = rd32(sp0 + 4u);
        wr32(sp0 - 0x14u, esi);
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10085010u), self, 1, esi);
        t1 = g->edx;
        wr32(sp0 - 0x14u, esi);
        g->eax = rd32(self);
        g->edx = t1;
        t2 = rd32(self);
        t3 = cow_thiscall(g, rd32(t2 + 0x290u), self, 1, esi);
        t4 = g->edx;
        eax = t3;
        edx = t4;
    }
    wr32(sp0 - 0x14u, arg2);
    wr32(sp0 - 0x18u, esi);
    g->esp = sp0 - 0x10u;
    cow_fastcall(g, COW_IMG(0x100d0fc0u), self, edx, 2, esi, arg2);
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10084400u), self, 0);
    t7 = g->edx;
    if (t6 != 7u) goto L_100d0e74;
    edx = t7;
    wr32(sp0 - 0x14u, 9u);
    g->esp = sp0 - 0x10u;
    t8 = cow_fastcall(g, COW_IMG(0x10084480u), self, edx, 1, 9u);
    t9 = g->ecx;
    t10 = g->edx;
    if ((t8 & 0xfffu) == 0u) goto L_100d0e74;
    eax = t8 & 0xfffu;
    ecx = t9;
    edx = t10;
    ebp = t8 | 0x9000u;
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t11 = cow_cdecl(g, COW_IMG(0x100c51c0u), 2, 0u, eax);
    t12 = g->edx;
    wr32(sp0 + 4u, t11);
    wr32(sp0 - 0x14u, t11);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->edx = t12;
    cow_stdcall(g, COW_IMG(0x100730e0u), 2, sp0 + 8u, t11);
    t13 = g->edx;
    g->edx = t13;
    t14 = cow_thiscall(g, COW_IMG(0x10071060u), sp0 + 8u, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if ((uint8_t)t14 == 0u)
    {
        ecx = t15;
        edx = t16;
        goto L_100d0e20;
    }
    wr32(sp0 - 0x14u, 1u);
    t17 = rd32(self + 0x9ecu);
    wr32(sp0 - 0x18u, t17);
    wr32(sp0 - 0x1cu, ebp);
    wr32(sp0 - 0x20u, arg2);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x100d0b50u), arg2, self, g->edx, 0, 4, arg2, ebp, t17, 1u);
    g->ebx = rd32(sp0 - 4u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->ebp = rd32(sp0 - 8u);
    return;
L_100d0e20: ;
    wr32(sp0 - 0x14u, 0x20u);
    g->esp = sp0 - 8u;
    t18 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x20u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t19 = g->edx;
    if (t18 != 0u)
    {
        eax = t18;
        edx = t19;
        esi = t18;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t20 = cow_thiscall(g, COW_IMG(0x100814a0u), esi + 4u, 0);
        t21 = g->edx;
        wr32(sp0 - 0x14u, self);
        t22 = rd32(self + 0x9ecu);
        wr32(esi, t22);
        wr32(esi + 0x14u, 0u);
        t23 = cow_thiscall(g, COW_IMG(0x100814f0u), esi + 4u, 1, self);
        wr32(sp0 - 0x14u, 0u);
        wr32(sp0 - 0x18u, self);
        wr32(sp0 - 0x1cu, esi);
        wr32(sp0 - 0x20u, COW_IMG(0x100d0e80u));
        t24 = rd32(sp0 + 4u);
        wr32(esi + 0x10u, 0u);
        wr32(esi + 0x18u, ebp);
        wr32(esi + 0x1cu, t24);
        cow_thiscall(g, COW_IMG(0x100710f0u), sp0 + 8u, 4, COW_IMG(0x100d0e80u), esi, self, 0u);
    }
L_100d0e74: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d0d70(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100d0d70(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
