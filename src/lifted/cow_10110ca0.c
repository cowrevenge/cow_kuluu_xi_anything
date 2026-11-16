/* f_0x10110ca0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10110ca0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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

    wr32(self, COW_IMG(0x10332edcu));
    t1 = rd32(self + 0x5cu);
    wr32(self + 0x44u, COW_IMG(0x10332ed8u));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 0x48u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 0x48u);
    }
    else
    {
        if (rd32(self + 0x54u) == 0u)
        {
            eax = rd32(self + 0x54u);
            goto L_10110cd3;
        }
        eax = rd32(self + 0x54u);
L_10110cca: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10110cca;
        }
        eax = rd32(eax + 8u);
    }
L_10110cd3: ;
    if (rd32(self + 0x54u) == 0u)
    {
        edx = in_edx;
        goto L_10110cf6;
    }
    edx = in_edx;
    edi = rd32(self + 0x54u);
L_10110cda: ;
    t2 = rd32(edi + 8u);
    wr32(edi + 8u, 0u);
    g->ebx = 0u;
    g->edi = edi;
    g->ebp = t2;
    g->eax = eax;
    g->esp = sp0 - 0x14u;
    t3 = cow_fastcall(g, COW_IMG(0x10112150u), edi, edx, 0);
    t4 = g->ecx;
    t5 = g->edx;
    g->edx = t5;
    t6 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
    t7 = g->edx;
    if (t2 != 0u)
    {
        eax = t6;
        edx = t7;
        edi = t2;
        goto L_10110cda;
    }
    eax = t6;
    edx = t7;
L_10110cf6: ;
    wr32(self + 0x54u, self + 0x58u);
    wr32(self + 0x5cu, self + 0x4cu);
    wr16(self + 0x4au, 0u);
    wr32(self + 0x54u, 0u);
    t8 = rd32(self + 0x58u);
    if (rd32(self + 0x58u) != 0u)
    {
        ecx = t8;
        loc_4 = t8;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t9 = cow_stdcall(g, COW_IMG(0x101122a0u), 0);
        t10 = g->edx;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x10311bf0u), 1, loc_4);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr32(self + 0x58u, 0xefefefefu);
    if (rd32(self + 0x60u) == 0u)
    {
        edi = rd32(self + 0x60u);
    }
    else
    {
        edi = rd32(self + 0x60u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self + 0x4cu;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t13 = cow_fastcall(g, COW_IMG(0x10112240u), edi, edx, 1, 1u);
        t14 = g->edx;
        eax = t13;
        edx = t14;
    }
    if (rd32(self + 0x4cu) != 0u)
    {
        ecx = rd32(self + 0x4cu);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t15 = cow_call_regs(g, COW_IMG(0x10112280u), eax, ecx, g->edx, 0, 1, 1u);
        t16 = g->edx;
        eax = t15;
        edx = t16;
    }
    wr32(self + 0x4cu, 0xefefefefu);
    if (rd32(self + 0x54u) != 0u)
    {
        ebp = rd32(self + 0x54u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = ebp;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t17 = cow_fastcall(g, COW_IMG(0x10112240u), ebp, edx, 1, 1u);
        eax = t17;
    }
    t18 = rd32(self + 0x3cu);
    wr32(self + 0x24u, COW_IMG(0x10332ed4u));
    wr32(t18 + 8u, 0u);
    if (rd8(self + 0x28u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(self + 0x28u);
        edx = t18;
    }
    else
    {
        edx = t18;
        if (rd32(self + 0x34u) == 0u)
        {
            eax = rd32(self + 0x34u);
            goto L_10110d84;
        }
        eax = rd32(self + 0x34u);
L_10110d7b: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_10110d7b;
        }
        eax = rd32(eax + 8u);
    }
L_10110d84: ;
    if (rd32(self + 0x34u) == 0u) goto L_10110da7;
    edi = rd32(self + 0x34u);
L_10110d8b: ;
    t19 = rd32(edi + 8u);
    wr32(edi + 8u, 0u);
    g->ebx = 0u;
    g->edi = edi;
    g->ebp = t19;
    g->esp = sp0 - 0x14u;
    t20 = cow_call_regs(g, COW_IMG(0x10112120u), eax, edi, edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    g->edx = t22;
    t23 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
    t24 = g->edx;
    if (t19 != 0u)
    {
        eax = t23;
        edx = t24;
        edi = t19;
        goto L_10110d8b;
    }
    eax = t23;
    edx = t24;
L_10110da7: ;
    wr32(self + 0x34u, self + 0x38u);
    wr32(self + 0x3cu, self + 0x2cu);
    wr16(self + 0x2au, 0u);
    wr32(self + 0x34u, 0u);
    if (rd32(self + 0x38u) != 0u)
    {
        ecx = rd32(self + 0x38u);
        g->eax = rd32(ecx);
        g->edx = edx;
        t25 = rd32(ecx);
        g->esp = sp0 - 0x14u;
        t26 = cow_thiscall(g, rd32(t25), ecx, 1, 1u);
        t27 = g->edx;
        eax = t26;
        edx = t27;
    }
    wr32(self + 0x38u, 0xefefefefu);
    if (rd32(self + 0x40u) == 0u)
    {
        edi = rd32(self + 0x40u);
    }
    else
    {
        edi = rd32(self + 0x40u);
        g->ebx = 0u;
        g->edi = edi;
        g->ebp = self + 0x2cu;
        g->esp = sp0 - 0x14u;
        t28 = cow_call_regs(g, COW_IMG(0x10112120u), eax, edi, edx, 1, 0);
        t29 = g->ecx;
        t30 = g->edx;
        g->edx = t30;
        t31 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t32 = g->edx;
        eax = t31;
        edx = t32;
    }
    g->ebx = 0u;
    g->edi = edi;
    g->ebp = self + 0x2cu;
    g->esp = sp0 - 0x14u;
    t33 = cow_call_regs(g, COW_IMG(0x10112120u), eax, self + 0x2cu, edx, 1, 0);
    t34 = g->edx;
    g->edx = t34;
    t35 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 0x18u, 0);
    t36 = g->edx;
    g->edx = t36;
    t37 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 0x10u, 0);
    t38 = g->edx;
    g->edx = t38;
    t39 = cow_thiscall(g, COW_IMG(0x101090a0u), self + 8u, 0);
    t40 = g->edx;
    g->esp = sp0;
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t40;
    cow_tailcall(g, COW_IMG(0x10112520u), t39, self, t40);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110ca0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10110ca0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
