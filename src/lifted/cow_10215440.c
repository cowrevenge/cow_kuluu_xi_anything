/* f_0x10215440 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10215440(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_c;
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
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 56u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x10u, 0u);
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        ecx = self;
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        t1 = rd32(eax + 4u);
        wr32(sp0 - 8u, t1);
        wr32(sp0 - 0x1cu, sp0 - 8u);
        t2 = rd32(eax + 8u);
        wr32(sp0 - 4u, t2);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        t3 = cow_fastcall(g, COW_IMG(0x10215050u), self, t2, 1, sp0 - 8u);
        t4 = g->ecx;
        t5 = g->edx;
        t6 = rd16(self + 0x178u);
        wr16(self + 0x178u, (uint16_t)(((t6 ^ t3) & 0xfu) ^ t6));
        eax = t3;
        ecx = (t4 & 0xffff0000u) | t6;
    }
    wr32(sp0 - 0x1cu, in_ebp);
    wr32(sp0 - 0x20u, in_edi);
    t7 = rd16(self + 0x16au);
    t8 = rd16(self + 0x17au);
    t9 = rd16(self + 0x166u);
    wr16(self + 0x18eu, (uint16_t)t9);
    wr16(self + 0x190u, (uint16_t)(t7 + t8));
    wr32(sp0 - 0x24u, 0x80808000u);
    wr32(sp0 - 0x28u, self + 0x17cu);
    wr16(self + 0x18au, (uint16_t)((uint16_t)t9 + rd16(self + 0x17cu)));
    t10 = rd16(self + 0x17eu);
    wr16(self + 0x18cu, (uint16_t)(t10 + (uint16_t)(t7 + t8)));
    t11 = rd16(self + 0x16au);
    t12 = rd16(self + 0x186u);
    t13 = rd16(self + 0x16cu);
    t14 = rd16(self + 0x184u);
    t15 = rd16(self + 0x168u);
    t16 = rd16(self + 0x166u);
    wr16(self + 0x194u, (uint16_t)(t11 + (uint16_t)(t12 - t13)));
    wr16(self + 0x192u, (uint16_t)((uint16_t)(t14 - t15) - t16));
    t17 = (in_ebp & 0xffff0000u) | rd16(self + 0x166u);
    wr32(sp0 - 0xcu, t17);
    t18 = rd16(self + 0x16au);
    t19 = rd32(self + 0xcu);
    wr16(t19 + 0x14u, (uint16_t)t17);
    wr16(t19 + 0x16u, (uint16_t)t18);
    t20 = rd16(self + 0x18au);
    wr16(t19 + 0x10u, (uint16_t)((uint16_t)t17 + t20));
    wr16(t19 + 0x12u, (uint16_t)((uint16_t)t18 + rd16(self + 0x18cu)));
    t21 = rd16(self + 0x192u);
    wr16(t19 + 0x18u, (uint16_t)t21);
    wr16(t19 + 0x1au, 0u);
    g->esp = sp0 - 0x20u;
    cow_fastcall(g, COW_IMG(0x10211ec0u), t19, self + 0x17cu, 2, self + 0x17cu, 0x80808000u);
    wr32(sp0 - 0xcu, 0u);
    eax = 0u;
    ecx = t19 + 0x10u;
    ebx = 0u;
    edi = t19 + 0x10u;
    loc_c = 0u;
    loc_10 = 0u;
L_10215566: ;
    if (rd32(self + (uint32_t)(int16_t)eax * 4u + 0x8cu) == 0u)
    {
        edx = (uint32_t)(int16_t)eax;
    }
    else
    {
        edx = (uint32_t)(int16_t)eax;
        ebp = rd32(self + (uint32_t)(int16_t)eax * 4u + 0x8cu);
        if (edx != rd32(self + 0x148u))
        {
            edx = (edx & 0xffffff00u) | rd8(ebp + 0x28u);
            edx = (edx & 0xffffff00u) | (edx & 0xfdu);
        }
        else
        {
            edx = (edx & 0xffffff00u) | rd8(ebp + 0x28u);
            edx = (edx & 0xffffff00u) | (uint8_t)(edx | 2u);
        }
        wr8(ebp + 0x28u, (uint8_t)edx);
        wr32(sp0 - 0x24u, 0x80808080u);
        if ((uint16_t)eax != 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x174u);
            edi = ebp + 0x10u;
            t32 = rd16(ecx + 6u);
            t33 = rd16(ecx + 0xau);
            t34 = rd16(self + 0x170u);
            wr16(edi + 4u, (uint16_t)t34);
            wr16(edi + 6u, (uint16_t)(t32 + (uint16_t)((uint16_t)eax + t33)));
            t35 = rd16(self + 0x18au);
            wr16(edi, (uint16_t)((uint16_t)t34 + t35));
            wr16(edi + 2u, (uint16_t)(rd16(self + 0x18cu) + (uint16_t)(t32 + (uint16_t)((uint16_t)eax + t33))));
            wr32(sp0 - 0x28u, self + 0x17cu);
            t36 = rd16(self + 0x192u);
            t37 = rd16(self + 0x172u);
            t38 = rd16(self + 0x170u);
            wr16(edi + 0xau, 0u);
            wr16(edi + 8u, (uint16_t)((uint16_t)(t36 - t37) - t38));
            g->eax = self + 0x17cu;
            g->esp = sp0 - 0x20u;
            t39 = cow_fastcall(g, COW_IMG(0x10212050u), ebp, (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t36 - t37) - t38), 2, self + 0x17cu, 0x80808080u);
            t40 = g->edx;
            if ((uint8_t)t39 != 1u)
            {
                edx = t40;
                goto L_102156a8;
            }
            edx = t40;
            if (rd8(ebp + 0x29u) & 1u) goto L_102156a8;
            t41 = rd32(sp0 - 0xcu);
            wr32(sp0 - 0x24u, t41);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, edi);
            wr32(sp0 - 0x30u, sp0 - 8u);
            t42 = rd32(sp0 - 0x10u);
            wr32(sp0 - 0x34u, t42);
            g->eax = t41;
            g->edx = t42;
            g->esp = sp0 - 0x20u;
            t43 = cow_thiscall(g, COW_IMG(0x10214cd0u), self, 5, t42, sp0 - 8u, edi, edi, t41);
            t44 = g->edx;
            wr32(sp0 - 0x10u, t43);
            edx = t44;
            ebx = t43;
            loc_10 = t43;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x174u);
            edi = ebp + 0x10u;
            t22 = rd16(ecx + 6u);
            t23 = rd16(ecx + 0xau);
            t24 = rd16(self + 0x170u);
            wr16(edi + 4u, (uint16_t)t24);
            wr16(edi + 6u, (uint16_t)(t22 + (uint16_t)((uint16_t)eax + t23)));
            t25 = rd16(self + 0x18au);
            wr16(edi, (uint16_t)((uint16_t)t24 + t25));
            wr16(edi + 2u, (uint16_t)(rd16(self + 0x18cu) + (uint16_t)(t22 + (uint16_t)((uint16_t)eax + t23))));
            wr32(sp0 - 0x28u, self + 0x17cu);
            t26 = rd16(self + 0x192u);
            t27 = rd16(self + 0x172u);
            t28 = rd16(self + 0x170u);
            wr16(edi + 0xau, 0u);
            wr16(edi + 8u, (uint16_t)((uint16_t)(t26 - t27) - t28));
            g->esp = sp0 - 0x20u;
            cow_fastcall(g, COW_IMG(0x10212050u), ebp, (edx & 0xffff0000u) | (uint16_t)((uint16_t)(t26 - t27) - t28), 2, self + 0x17cu, 0x80808080u);
            t29 = g->edx;
            wr32(sp0 - 0x24u, 0u);
            wr32(sp0 - 0x28u, edi);
            wr32(sp0 - 0x2cu, edi);
            wr32(sp0 - 0x30u, sp0 - 8u);
            wr32(sp0 - 0x34u, ebx);
            g->eax = sp0 - 8u;
            g->edx = t29;
            t30 = cow_thiscall(g, COW_IMG(0x10214cd0u), self, 5, ebx, sp0 - 8u, edi, edi, 0u);
            t31 = g->edx;
            wr32(sp0 - 0x10u, t30);
            edx = t31;
            ebx = t30;
            loc_10 = t30;
        }
L_102156ac: ;
        eax = rd32(sp0 - 0xcu);
        ecx = edi;
    }
    wr32(sp0 - 0xcu, eax + 1u);
    if ((int16_t)(eax + 1u) < 31)
    {
        loc_c = eax + 1u;
        eax = eax + 1u;
        goto L_10215566;
    }
    eax = eax + 1u;
    g->esi = self;
    g->edi = edi;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t45 = cow_call_regs(g, COW_IMG(0x10215700u), eax, self, g->edx, 1, 0);
    t46 = g->edx;
    g->edx = t46;
    cow_thiscall(g, COW_IMG(0x10214860u), self, 0);
    t47 = g->edx;
    if (rd32(COW_IMG(0x104e1d4cu)) == 0u)
    {
        ebp = rd32(sp0 - 0x1cu);
        edi = rd32(sp0 - 0x20u);
    }
    else
    {
        eax = rd32(COW_IMG(0x104e1d4cu));
        edx = t47;
        ebp = rd32(sp0 - 0x1cu);
        edi = rd32(sp0 - 0x20u);
        if ((rd8(self + 0x178u) & 0xfu) != 0u)
        {
            if ((uint16_t)ebx == 0u)
            {
                g->esp = sp0 - 0x18u;
                cow_thiscall(g, COW_IMG(0x10215030u), self, 0);
                wr8(self + 0x178u, rd8(self + 0x178u) & 0xf0u);
            }
        }
    }
    g->ebx = rd32(sp0 - 0x14u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = edi;
    g->ebp = ebp;
    return;
L_102156a8: ;
    ebx = rd32(sp0 - 0x10u);
    loc_10 = rd32(sp0 - 0x10u);
    goto L_102156ac;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10215440(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10215440(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
