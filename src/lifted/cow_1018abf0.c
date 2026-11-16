/* f_0x1018abf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1018abf0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
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
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
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
    cow_frame(g, sp0, 60u);

    wr32(sp0 - 0x20u, in_esi);
    wr32(sp0 - 0x24u, in_edi);
    wr32(self, COW_IMG(0x10336814u));
    g->edx = in_edx;
    g->esp = sp0 - 0x24u;
    cow_thiscall(g, COW_IMG(0x100742a0u), sp0 - 0x1cu, 0);
    t1 = g->edx;
    if (rd32(rd32(self + 4u) + 0x20u) == rd32(self + 0x2cu))
    {
        eax = rd32(self + 0x2cu);
        edx = t1;
        g->eax = eax;
        g->esp = sp0 - 0x24u;
        t2 = cow_thiscall(g, COW_IMG(0x1018ad50u), self, 0);
        wr32(t2 + 0x20u, 0u);
    }
    wr32(sp0 - 0x28u, in_ebx);
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 1u);
    t3 = rd32(rd32(self + 4u) + 0x14u);
    wr32(sp0 - 0x38u, t3);
    g->eax = t3;
    g->edx = rd32(self + 4u);
    t4 = rd32(self + 4u);
    g->esp = sp0 - 0x28u;
    t5 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t3, 1u, 0u, 0xffffffffu);
    t6 = g->edx;
    wr32(sp0 - 0x2cu, 0u);
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t8 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        edx = t8;
        ebx = in_ebx & 0xffffff00u;
        goto L_1018ac60;
    }
    eax = t7;
    edx = t8;
L_1018ac49: ;
    if (eax == rd32(self + 0xcu)) goto L_1018ac5e;
    wr32(sp0 - 0x2cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t9 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t10 = g->edx;
    if (t9 != 0u)
    {
        eax = t9;
        edx = t10;
        goto L_1018ac49;
    }
    eax = t9;
    edx = t10;
    ebx = in_ebx & 0xffffff00u;
L_1018ac60: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 5u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x1047d128u)));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, COW_IMG(0x10074310u), sp0 - 0x1cu, 4, rd32(COW_IMG(0x1047d128u)), 5u, 0u, 0xffffffffu);
    t12 = g->edx;
    eax = t11;
    edx = t12;
L_1018ac75: ;
    wr32(sp0 - 0x2cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t13 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if (t13 == 0u)
    {
        eax = t13;
        goto L_1018ac9a;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    if (rd32(eax + 0x64u) != self) goto L_1018ac75;
    wr32(eax + 0x64u, 0u);
    if ((uint8_t)ebx == 0u) goto L_1018ac75;
    wr32(sp0 - 0x2cu, eax);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t16 = cow_call_regs(g, COW_IMG(0x1018abb0u), eax, g->ecx, g->edx, 1, 3, eax, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    t17 = g->edx;
    eax = t16;
    edx = t17;
    goto L_1018ac60;
L_1018ac5e: ;
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_1018ac60;
L_1018ac9a: ;
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 5u);
    t18 = rd32(self + 0xcu);
    wr32(sp0 - 0x38u, t18);
    g->eax = eax;
    g->edx = t18;
    g->esp = sp0 - 0x28u;
    t19 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t18, 5u, 0u, 0xffffffffu);
    t20 = g->edx;
    eax = t19;
    edx = t20;
L_1018acac: ;
    wr32(sp0 - 0x2cu, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t21 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    if (t21 == 0u) goto L_1018acd1;
    eax = t21;
    ecx = t22;
    edx = t23;
    if (rd32(eax + 0x64u) != self) goto L_1018acac;
    wr32(eax + 0x64u, 0u);
    if ((uint8_t)ebx == 0u) goto L_1018acac;
    wr32(sp0 - 0x2cu, eax);
    g->esp = sp0 - 0x20u;
    t24 = cow_call_regs(g, COW_IMG(0x1018abb0u), eax, g->ecx, g->edx, 1, 3, eax, rd32(sp0 - 0x28u), rd32(sp0 - 0x24u));
    eax = t24;
    goto L_1018ac9a;
L_1018acd1: ;
    if (rd32(rd32(self + 4u) + 0x18u) != rd32(self + 0x20u))
    {
        eax = rd32(rd32(self + 4u) + 0x18u);
        edx = rd32(self + 0x20u);
        ebx = rd32(sp0 - 0x28u);
    }
    else
    {
        eax = rd32(rd32(self + 4u) + 0x18u);
        ecx = rd32(self + 4u);
        edx = rd32(self + 0x20u);
        ebx = rd32(sp0 - 0x28u);
        wr32(sp0 - 0x28u, 0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        t25 = cow_thiscall(g, COW_IMG(0x101880c0u), ecx, 1, 0u);
        t26 = g->edx;
        eax = t25;
        edx = t26;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t27 = cow_thiscall(g, COW_IMG(0x1018ada0u), self, 0);
    t28 = g->edx;
    g->edx = t28;
    t29 = cow_thiscall(g, COW_IMG(0x1018ad80u), self, 0);
    t30 = g->edx;
    if (t29 == 0u)
    {
        eax = t29;
        t32 = rd32(self + 8u);
        wr32(sp0 - 0x28u, t32);
        g->edx = t32;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x1018ad60u), self, 1, t32);
        t33 = g->edx;
        edx = t33;
    }
    else
    {
        eax = t29;
        edx = t30;
        t31 = rd32(self + 8u);
        wr32(eax + 8u, t31);
    }
    wr32(sp0 - 0x28u, 0xffffffffu);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 7u);
    t34 = rd32(self + 0xcu);
    wr32(sp0 - 0x34u, t34);
    g->eax = t34;
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t35 = cow_thiscall(g, COW_IMG(0x100742b0u), sp0 - 0x1cu, 4, t34, 7u, 0u, 0xffffffffu);
    t36 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t38 = g->edx;
    if (t37 == 0u)
    {
        eax = t37;
        goto L_1018ad3f;
    }
    eax = t37;
    edx = t38;
L_1018ad2a: ;
    g->ebx = ebx;
    g->eax = eax;
    g->esp = sp0 - 0x24u;
    t39 = cow_fastcall(g, COW_IMG(0x10056eb0u), eax, edx, 0);
    t40 = g->edx;
    wr32(sp0 - 0x28u, 0u);
    g->edx = t40;
    t41 = cow_thiscall(g, COW_IMG(0x100745c0u), sp0 - 0x1cu, 1, 0u);
    t42 = g->edx;
    if (t41 != 0u)
    {
        eax = t41;
        edx = t42;
        goto L_1018ad2a;
    }
    eax = t41;
L_1018ad3f: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x20u);
    g->edi = rd32(sp0 - 0x24u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018abf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018abf0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
