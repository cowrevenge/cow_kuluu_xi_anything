/* f_0x100083d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100083d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_7c;
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
    cow_frame(g, sp0, 164u);

    wr32(sp0 - 0x80u, in_ebx);
    wr32(sp0 - 0x84u, in_ebp);
    wr32(sp0 - 0x88u, in_esi);
    wr32(sp0 - 0x8cu, in_edi);
    if (rd8(COW_IMG(0x10455c38u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_100083fe;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x10455c38u));
    g->ebx = 0u;
    g->edx = in_edx;
    g->esp = sp0 - 0x8cu;
    t1 = cow_call_regs(g, COW_IMG(0x10008d90u), eax, self, g->edx, 1, 0);
    t2 = g->edx;
    wr8(self + 0xc9au, (uint8_t)t1);
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        goto L_10008752;
    }
    eax = t1;
    edx = t2;
    g->esp = sp0 - 0x8cu;
    cow_call_regs(g, COW_IMG(0x10008e10u), eax, self, edx, 1, 0);
    t3 = g->ecx;
    t4 = g->edx;
    ecx = t3;
    edx = t4;
L_100083fe: ;
    wr32(COW_IMG(0x10455c28u), 0u);
    wr32(self + 0x90u, 0u);
    if (rd8(COW_IMG(0x10455c39u)) == 0u)
    {
        eax = 0u;
        ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x10455c39u));
        loc_7c = (rd32(sp0 - 0x7cu) & 0xffffffu) | 0x1000000u;
        goto L_10008438;
    }
    loc_7c = (rd32(sp0 - 0x7cu) & 0xffffffu) | 0x1000000u;
    wr32(sp0 - 0x90u, 0x101u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x100057d0u));
    wr32(sp0 - 0x9cu, 4u);
    t5 = rd32(self + 0x84u);
    wr32(sp0 - 0xa0u, t5);
    g->eax = t5;
    t6 = rd32(rd32(self + 0x84u));
    g->esp = sp0 - 0x8cu;
    t7 = cow_thiscall(g, rd32(t6 + 0x10u), t6, 5, t5, 4u, COW_IMG(0x100057d0u), 0u, 0x101u);
    t8 = g->ecx;
    if ((int32_t)t7 < 0)
    {
        ecx = t8;
        goto L_10008440;
    }
    eax = t7;
    ecx = t8;
L_10008438: ;
    if (rd32(self + 0x90u) != 0u) goto L_1000845a;
L_10008440: ;
    wr32(sp0 - 0x90u, 1u);
    wr32(sp0 - 0x94u, 0u);
    wr32(sp0 - 0x98u, COW_IMG(0x100057d0u));
    wr32(sp0 - 0x9cu, 4u);
    t9 = rd32(self + 0x84u);
    wr32(sp0 - 0xa0u, t9);
    g->eax = t9;
    g->esp = sp0 - 0x8cu;
    t10 = cow_thiscall(g, rd32(rd32(rd32(self + 0x84u)) + 0x10u), ecx, 5, t9, 4u, COW_IMG(0x100057d0u), 0u, 1u);
    eax = t10;
L_1000845a: ;
    if ((int32_t)eax >= 0) goto L_1000846e;
    wr32(self + 0x90u, 0u);
    g->ebx = in_ebx;
    return eax & 0xffffff00u;
L_1000846e: ;
    t11 = rd32(self + 0x90u);
    wr8(self + 0xc98u, 0u);
    if (t11 == 0u) goto L_10008752;
    edx = t11;
    edi = sp0 - 0x38u;
    eax = 0u;
    ecx = 0xbu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x38u, 0x2cu);
    wr32(sp0 - 0x90u, sp0 - 0x38u);
    wr32(sp0 - 0x94u, edx);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(rd32(edx) + 0xcu), sp0 - 0x38u, 2, edx, sp0 - 0x38u);
    if ((rd8(sp0 - 0x34u) & 0xau) != 0u)
    {
        wr8(self + 0xc98u, 1u);
    }
    wr32(sp0 - 0x64u, 0x14u);
    wr32(sp0 - 0x60u, 0x10u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x140u);
    wr32(sp0 - 0x90u, sp0 - 0x64u);
    wr32(sp0 - 0x94u, 1u);
    t12 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t12);
    g->eax = t12;
    g->edx = rd32(rd32(self + 0x90u));
    t13 = rd32(rd32(self + 0x90u));
    g->esp = sp0 - 0x8cu;
    t14 = cow_thiscall(g, rd32(t13 + 0x18u), sp0 - 0x64u, 3, t12, 1u, sp0 - 0x64u);
    t15 = g->ecx;
    t16 = g->edx;
    if ((int32_t)t14 >= 0)
    {
        ecx = t15;
        goto L_100084f8;
    }
    eax = t14;
    edx = t16;
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    t17 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t17;
L_100084f8: ;
    wr32(sp0 - 0x90u, COW_IMG(0x1034a0fcu));
    t18 = rd32(self + 0x90u);
    wr32(sp0 - 0x94u, t18);
    g->eax = t18;
    g->edx = rd32(t18);
    t19 = rd32(t18);
    g->esp = sp0 - 0x8cu;
    t20 = cow_thiscall(g, rd32(t19 + 0x2cu), ecx, 2, t18, COW_IMG(0x1034a0fcu));
    t21 = g->edx;
    if ((int32_t)t20 >= 0)
    {
        edx = t21;
        goto L_1000851d;
    }
    eax = t20;
    edx = t21;
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    t22 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t22;
L_1000851d: ;
    t23 = (rd8(COW_IMG(0x10455c37u)) != 0u) * 4u + 4u | 1u;
    wr32(sp0 - 0x90u, t23);
    t24 = rd32(rd32(COW_IMG(0x103d3c64u)) + 0x18u);
    wr32(sp0 - 0x94u, t24);
    t25 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t25);
    g->eax = t25;
    g->edx = rd32(rd32(self + 0x90u));
    t26 = rd32(rd32(self + 0x90u));
    g->esp = sp0 - 0x8cu;
    t27 = cow_thiscall(g, rd32(t26 + 0x34u), t24, 3, t25, t24, t23);
    t28 = g->edx;
    if ((int32_t)t27 >= 0) goto L_1000855f;
    eax = t27;
    edx = t28;
    wr32(sp0 - 0x90u, eax);
    g->esp = sp0 - 0x8cu;
    t29 = cow_fastcall(g, COW_IMG(0x10008770u), self, edx, 1, eax);
    g->ebx = rd32(sp0 - 0x80u);
    g->esi = rd32(sp0 - 0x88u);
    g->edi = rd32(sp0 - 0x8cu);
    g->ebp = rd32(sp0 - 0x84u);
    return t29;
L_1000855f: ;
    edi = sp0 - 0x50u;
    eax = 0u;
    ecx = 6u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x50u, 0x18u);
    wr32(sp0 - 0x4cu, 0x10u);
    wr32(sp0 - 0x44u, 1u);
    wr32(sp0 - 0x40u, 0xffffff81u);
    wr32(sp0 - 0x3cu, 0x7fu);
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t30 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t30);
    g->esp = sp0 - 0x8cu;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t30, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 4u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t31 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t31);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t31, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 8u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t32 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t32);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t32, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0xcu);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t33 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t33);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t33, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x10u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t34 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t34);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t34, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x14u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t35 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t35);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t35, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x18u);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t36 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t36);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t36, 4u, sp0 - 0x50u);
    wr32(sp0 - 0x48u, 0x1cu);
    wr32(sp0 - 0x90u, sp0 - 0x50u);
    wr32(sp0 - 0x94u, 4u);
    t37 = rd32(self + 0x90u);
    wr32(sp0 - 0x98u, t37);
    cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x18u), sp0 - 0x50u, 3, t37, 4u, sp0 - 0x50u);
    t38 = g->ecx;
    t39 = rd32(self + 0x90u);
    wr32(sp0 - 0x90u, t39);
    g->eax = t39;
    g->edx = rd32(t39);
    t40 = rd32(t39);
    t41 = cow_thiscall(g, rd32(t40 + 0x1cu), t38, 1, t39);
    t42 = g->edx;
    if (rd8(sp0 - 0x79u) == 0u)
    {
        eax = t41;
    }
    else
    {
        eax = t41;
        edx = t42;
        if (rd8(COW_IMG(0x10455c39u)) != 0u)
        {
            wr32(sp0 - 0x90u, 3u);
            wr32(sp0 - 0x94u, COW_IMG(0x10455c24u));
            wr32(sp0 - 0x98u, COW_IMG(0x100083b0u));
            t43 = rd32(self + 0x90u);
            wr32(sp0 - 0x9cu, t43);
            g->eax = t43;
            g->esp = sp0 - 0x8cu;
            t44 = cow_thiscall(g, rd32(rd32(rd32(self + 0x90u)) + 0x10u), rd32(rd32(self + 0x90u)), 4, t43, COW_IMG(0x100083b0u), COW_IMG(0x10455c24u), 3u);
            if ((int32_t)t44 < 0)
            {
                eax = t44;
            }
            else
            {
                if (rd32(COW_IMG(0x10455c24u)) <= 2u)
                {
                    edx = rd32(COW_IMG(0x10455c24u));
                }
                else
                {
                    wr32(COW_IMG(0x10455c24u), 2u);
                    edx = 2u;
                }
                t45 = rd32(self + 0x90u);
                edi = sp0 - 0x38u;
                eax = 0u;
                ecx = 0xeu;
                while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x1cu, edx);
                wr32(sp0 - 0x30u, 0xffffffffu);
                wr32(sp0 - 0x24u, 0xffffffffu);
                wr32(sp0 - 0x14u, sp0 - 0x6cu);
                wr32(sp0 - 0x90u, 0u);
                wr32(sp0 - 0x94u, COW_IMG(0x10455c28u));
                wr32(sp0 - 0x74u, 0u);
                wr32(sp0 - 0x70u, 4u);
                wr32(sp0 - 0x6cu, 0u);
                wr32(sp0 - 0x68u, 0u);
                wr32(sp0 - 0x78u, 0u);
                wr32(sp0 - 0x38u, 0x38u);
                wr32(sp0 - 0x34u, 0x12u);
                wr32(sp0 - 0x2cu, 0u);
                wr32(sp0 - 0x28u, 0x2710u);
                wr32(sp0 - 0x20u, 0u);
                wr32(sp0 - 0x18u, sp0 - 0x74u);
                wr32(sp0 - 0x10u, 0u);
                wr32(sp0 - 0xcu, 4u);
                wr32(sp0 - 8u, sp0 - 0x78u);
                wr32(sp0 - 4u, 0u);
                wr32(sp0 - 0x98u, sp0 - 0x38u);
                wr32(sp0 - 0x9cu, COW_IMG(0x10341d4cu));
                wr32(sp0 - 0xa0u, t45);
                g->eax = sp0 - 0x38u;
                g->esp = sp0 - 0x8cu;
                t46 = cow_thiscall(g, rd32(rd32(t45) + 0x48u), sp0 - 0x78u, 5, t45, COW_IMG(0x10341d4cu), sp0 - 0x38u, COW_IMG(0x10455c28u), 0u);
                eax = t46;
            }
        }
    }
L_10008752: ;
    g->ebx = in_ebx;
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100083d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100083d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
