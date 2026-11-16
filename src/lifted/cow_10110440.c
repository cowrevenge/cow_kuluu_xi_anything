/* f_0x10110440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10110440(Guest* g)
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
    uint32_t t43;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    t1 = rd32(self + 0x24u);
    wr32(self, COW_IMG(0x10332eb4u));
    if (t1 == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        esi = t1;
        g->eax = in_eax;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_thiscall(g, COW_IMG(0x1010a6a0u), esi, 0);
        t3 = g->ecx;
        t4 = g->edx;
        g->edx = t4;
        t5 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t6 = g->edx;
        eax = t5;
        edx = t6;
    }
    if (rd32(self + 0x28u) != 0u)
    {
        esi = rd32(self + 0x28u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t7 = cow_thiscall(g, COW_IMG(0x1010a6a0u), esi, 0);
        t8 = g->ecx;
        t9 = g->edx;
        g->edx = t9;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, esi);
        t10 = g->edx;
        edx = t10;
    }
    t11 = rd32(self + 0x48u);
    wr32(self + 0x30u, COW_IMG(0x10332eb0u));
    wr32(t11 + 8u, 0u);
    if (rd8(self + 0x34u) != 0u)
    {
        eax = (t11 & 0xffffff00u) | rd8(self + 0x34u);
    }
    else
    {
        if (rd32(self + 0x40u) == 0u)
        {
            eax = rd32(self + 0x40u);
            goto L_101104a0;
        }
        eax = rd32(self + 0x40u);
L_10110497: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10110497;
        }
        eax = rd32(eax + 8u);
    }
L_101104a0: ;
    if (rd32(self + 0x40u) == 0u) goto L_101104dc;
    esi = rd32(self + 0x40u);
L_101104a7: ;
    t12 = rd32(esi + 8u);
    wr32(esi + 8u, 0u);
    if (rd32(esi) == 0u)
    {
        ebp = t12;
    }
    else
    {
        ecx = rd32(esi);
        ebp = t12;
        g->eax = eax;
        g->edx = rd32(ecx);
        t13 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t14 = cow_thiscall(g, rd32(t13), ecx, 1, 1u);
        t15 = g->edx;
        eax = t14;
        edx = t15;
    }
    t16 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t16 == 0u)
    {
        ecx = t16;
    }
    else
    {
        ecx = t16;
        g->ebx = 0u;
        g->edi = self;
        g->ebp = ebp;
        g->esp = sp0 - 0x10u;
        t17 = cow_call_regs(g, COW_IMG(0x101121c0u), eax, ecx, edx, 0, 1, 1u);
        t18 = g->ecx;
        t19 = g->edx;
        eax = t17;
        ecx = t18;
        edx = t19;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t20 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t21 = g->edx;
    if (ebp != 0u)
    {
        eax = t20;
        edx = t21;
        esi = ebp;
        goto L_101104a7;
    }
    eax = t20;
    edx = t21;
L_101104dc: ;
    wr32(self + 0x40u, self + 0x44u);
    wr32(self + 0x48u, self + 0x38u);
    wr16(self + 0x36u, 0u);
    wr32(self + 0x40u, 0u);
    if (rd32(self + 0x44u) != 0u)
    {
        ecx = rd32(self + 0x44u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t22 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t23 = cow_thiscall(g, rd32(t22), ecx, 1, 1u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    wr32(self + 0x44u, 0xefefefefu);
    if (rd32(self + 0x4cu) != 0u)
    {
        esi = rd32(self + 0x4cu);
        g->ebx = 0u;
        g->edi = self;
        g->ebp = self + 0x38u;
        g->esp = sp0 - 0x10u;
        t25 = cow_call_regs(g, COW_IMG(0x101120f0u), eax, esi, edx, 1, 0);
        t26 = g->ecx;
        t27 = g->edx;
        g->edx = t27;
        t28 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    if (rd32(self + 0x38u) != 0u)
    {
        ecx = rd32(self + 0x38u);
        g->eax = eax;
        g->edx = rd32(ecx);
        t30 = rd32(ecx);
        g->esp = sp0 - 0x10u;
        t31 = cow_thiscall(g, rd32(t30), ecx, 1, 1u);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    wr32(self + 0x38u, 0xefefefefu);
    if (rd32(self + 0x40u) != 0u)
    {
        ebp = rd32(self + 0x40u);
        g->ebx = 0u;
        g->edi = self;
        g->ebp = ebp;
        g->esp = sp0 - 0x10u;
        t33 = cow_call_regs(g, COW_IMG(0x101120f0u), eax, ebp, edx, 1, 0);
        t34 = g->ecx;
        t35 = g->edx;
        g->edx = t35;
        t36 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, ebp);
        t37 = g->edx;
        eax = t36;
        edx = t37;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t38 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 0x1cu, 0);
    t39 = g->edx;
    g->edx = t39;
    t40 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 0x14u, 0);
    t41 = g->edx;
    g->edx = t41;
    t42 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 0xcu, 0);
    t43 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t43;
    cow_tailcall(g, COW_IMG(0x10112520u), t42, self, t43);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10110440(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
