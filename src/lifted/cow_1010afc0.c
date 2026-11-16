/* f_0x1010afc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1010afc0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    wr32(self, COW_IMG(0x10332e5cu));
    t1 = rd32(self + 0x68u);
    wr32(self + 0x50u, COW_IMG(0x10332e58u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 0x54u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x54u);
    }
    else
    {
        if (rd32(self + 0x60u) == 0u)
        {
            eax = rd32(self + 0x60u);
            goto L_1010aff1;
        }
        eax = rd32(self + 0x60u);
L_1010afe8: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010afe8;
        }
        eax = rd32(eax + 8u);
    }
L_1010aff1: ;
    if (rd32(self + 0x60u) == 0u)
    {
        edx = in_edx;
        goto L_1010b00b;
    }
    ecx = rd32(self + 0x60u);
    edx = in_edx;
L_1010aff8: ;
    t2 = rd32(ecx + 8u);
    wr32(ecx + 8u, 0u);
    g->ebx = 0u;
    g->edi = t2;
    g->esp = sp0 - 0xcu;
    t3 = cow_call_regs(g, COW_IMG(0x1010bb60u), eax, ecx, edx, 0, 1, 1u);
    t4 = g->edx;
    if (t2 != 0u)
    {
        eax = t3;
        ecx = t2;
        edx = t4;
        goto L_1010aff8;
    }
    eax = t3;
    edx = t4;
L_1010b00b: ;
    wr32(self + 0x60u, self + 0x64u);
    wr32(self + 0x68u, self + 0x58u);
    wr16(self + 0x56u, 0u);
    wr32(self + 0x60u, 0u);
    if (rd32(self + 0x64u) != 0u)
    {
        ecx = rd32(self + 0x64u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t5 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t6 = cow_thiscall(g, rd32(t5), ecx, 1, 1u);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    wr32(self + 0x64u, 0xefefefefu);
    if (rd32(self + 0x6cu) == 0u)
    {
        edi = rd32(self + 0x6cu);
    }
    else
    {
        edi = rd32(self + 0x6cu);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self + 0x58u;
        g->esp = sp0 - 0x10u;
        t8 = cow_call_regs(g, COW_IMG(0x1010bb60u), eax, edi, edx, 0, 1, 1u);
        t9 = g->edx;
        eax = t8;
        edx = t9;
    }
    g->ebx = 0u;
    g->edi = edi;
    g->ebp = self + 0x58u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1010bac0u), eax, self + 0x58u, edx, 1, 0);
    t10 = g->edx;
    t11 = rd32(self + 0x44u);
    wr32(self + 0x2cu, COW_IMG(0x10332e54u));
    wr32(t11 + 8u, 0u);
    if (rd8(self + 0x30u) != 0u)
    {
        eax = (t11 & 0xffffff00u) | rd8(self + 0x30u);
        edx = t10;
    }
    else
    {
        edx = t10;
        if (rd32(self + 0x3cu) == 0u)
        {
            eax = rd32(self + 0x3cu);
            goto L_1010b06c;
        }
        eax = rd32(self + 0x3cu);
L_1010b063: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010b063;
        }
        eax = rd32(eax + 8u);
    }
L_1010b06c: ;
    if (rd32(self + 0x3cu) == 0u) goto L_1010b086;
    ecx = rd32(self + 0x3cu);
L_1010b073: ;
    t12 = rd32(ecx + 8u);
    wr32(ecx + 8u, 0u);
    g->ebx = 0u;
    g->edi = t12;
    g->ebp = self + 0x58u;
    g->esp = sp0 - 0x10u;
    t13 = cow_call_regs(g, COW_IMG(0x1010bb20u), eax, ecx, edx, 0, 1, 1u);
    t14 = g->edx;
    if (t12 != 0u)
    {
        eax = t13;
        ecx = t12;
        edx = t14;
        goto L_1010b073;
    }
    eax = t13;
    edx = t14;
L_1010b086: ;
    wr32(self + 0x3cu, self + 0x40u);
    wr32(self + 0x44u, self + 0x34u);
    wr16(self + 0x32u, 0u);
    wr32(self + 0x3cu, 0u);
    if (rd32(self + 0x40u) != 0u)
    {
        ecx = rd32(self + 0x40u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t15 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t16 = cow_thiscall(g, rd32(t15), ecx, 1, 1u);
        t17 = g->edx;
        eax = t16;
        edx = t17;
    }
    t18 = rd32(self + 0x48u);
    wr32(self + 0x40u, 0xefefefefu);
    if (t18 != 0u)
    {
        ecx = t18;
        g->ebx = 0u;
        g->edi = self + 0x40u;
        g->ebp = self + 0x34u;
        g->esp = sp0 - 0x10u;
        t19 = cow_call_regs(g, COW_IMG(0x1010bb20u), eax, ecx, edx, 0, 1, 1u);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    g->ebx = 0u;
    g->edi = self + 0x40u;
    g->ebp = self + 0x34u;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1010ba60u), eax, self + 0x34u, edx, 1, 0);
    t21 = g->edx;
    t22 = rd32(self + 0x20u);
    wr32(self + 8u, COW_IMG(0x10332e50u));
    wr32(t22 + 8u, 0u);
    if (rd8(self + 0xcu) != 0u)
    {
        eax = (t22 & 0xffffff00u) | rd8(self + 0xcu);
        edx = t21;
    }
    else
    {
        edx = t21;
        if (rd32(self + 0x18u) == 0u)
        {
            eax = rd32(self + 0x18u);
            goto L_1010b0e5;
        }
        eax = rd32(self + 0x18u);
L_1010b0dc: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010b0dc;
        }
        eax = rd32(eax + 8u);
    }
L_1010b0e5: ;
    if (rd32(self + 0x18u) == 0u) goto L_1010b0ff;
    ecx = rd32(self + 0x18u);
L_1010b0ec: ;
    t23 = rd32(ecx + 8u);
    wr32(ecx + 8u, 0u);
    g->ebx = 0u;
    g->edi = t23;
    g->ebp = in_ebp;
    g->esp = sp0 - 0xcu;
    t24 = cow_call_regs(g, COW_IMG(0x1010bba0u), eax, ecx, edx, 0, 1, 1u);
    t25 = g->edx;
    if (t23 != 0u)
    {
        eax = t24;
        ecx = t23;
        edx = t25;
        goto L_1010b0ec;
    }
    eax = t24;
    edx = t25;
L_1010b0ff: ;
    wr32(self + 0x18u, self + 0x1cu);
    wr32(self + 0x20u, self + 0x10u);
    wr16(self + 0xeu, 0u);
    wr32(self + 0x18u, 0u);
    g->ebx = 0u;
    g->edi = self + 0x10u;
    g->ebp = in_ebp;
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x1010baf0u), eax, self + 0x1cu, edx, 1, 0);
    t27 = g->edx;
    g->ebx = 0u;
    g->edi = self + 0x10u;
    g->ebp = in_ebp;
    t28 = cow_call_regs(g, COW_IMG(0x1010baf0u), t26, self + 0x10u, t27, 1, 0);
    t29 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t29;
    cow_tailcall(g, COW_IMG(0x10112520u), t28, self, t29);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010afc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1010afc0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
