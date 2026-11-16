/* f_0x10227bf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10227bf0(Guest* g)
{
    double d41;
    double d42;
    double d45;
    double d46;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0x1cu, in_esi);
    wr32(sp0 - 0x20u, in_edi);
    wr32(sp0 - 0x24u, 2u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x20u;
    t1 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 2u);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd8(self + 0x65u) == ((uint8_t)t1 == 0u))
    {
        eax = (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
        ecx = (t2 & 0xffffff00u) | rd8(self + 0x65u);
        edx = t3;
    }
    else
    {
        eax = (t1 & 0xffffff00u) | (uint8_t)t1 == 0u;
        edx = t3;
        wr8(self + 0x65u, (uint8_t)eax);
        g->eax = eax;
        g->esp = sp0 - 0x20u;
        t4 = cow_fastcall(g, COW_IMG(0x10227f40u), self, edx, 0);
        t5 = g->ecx;
        t6 = g->edx;
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(sp0 - 0x24u, in_ebx);
    g->edx = edx;
    g->esp = sp0 - 0x24u;
    t7 = cow_call_regs(g, COW_IMG(0x10099230u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    wr32(sp0 - 0x18u, 0u);
    if (rd32(self + 8u) == 0u)
    {
        eax = t7;
        edx = t8;
    }
    else
    {
        eax = t7;
        ecx = rd32(self + 8u);
        edx = t8;
        wr8(ecx + 0x69u, 0u);
    }
    wr32(sp0 - 0x28u, in_ebp);
    t9 = COW_IMG(0x10485a30u) - eax;
    wr32(sp0 - 0x14u, t9);
    wr32(sp0 - 0x18u, 0x20u);
    ecx = t9;
    ebx = 0u;
    ebp = eax + 0x40u;
    edi = eax;
    loc_18 = 0x20u;
    loc_14 = t9;
L_10227c46: ;
    if (rd16(ecx + edi) != 0xffffu)
    {
        edx = (edx & 0xffff0000u) | rd16(ecx + edi);
        if ((uint16_t)edx != 0u)
        {
            wr16(self + (uint16_t)ebx * 2u + 0x290u, (uint16_t)edx);
            if (eax == 0u)
            {
                ecx = (uint16_t)ebx;
                goto L_10227c7b;
            }
            ecx = (uint16_t)ebx;
            if (rd16(edi) != (uint16_t)edx) goto L_10227c7b;
            wr32(ecx * 4u + self + 0x2f0u, rd32(ebp));
L_10227c86: ;
            ecx = loc_14;
            ebx = ebx + 1u;
        }
    }
    wr32(sp0 - 0x18u, loc_18 - 1u);
    if (loc_18 != 1u)
    {
        edx = loc_18 - 1u;
        ebp = ebp + 4u;
        edi = edi + 2u;
        loc_18 = loc_18 - 1u;
        goto L_10227c46;
    }
    edx = loc_18 - 1u;
    wr32(sp0 - 0x18u, ebx);
    wr32(sp0 - 0x14u, self + 0x68u);
    wr32(sp0 - 0x10u, 0xfffffd98u - self);
    ecx = self + 0x68u;
    ebp = self + 0x268u;
    loc_18 = ebx;
    loc_14 = self + 0x68u;
L_10227cb8: ;
    if (rd8(ebp) != 0u)
    {
        g->esp = sp0 - 0x28u;
        t10 = cow_thiscall(g, COW_IMG(0x10227110u), ecx, 0);
        if ((int32_t)(uint16_t)ebx <= 0)
        {
            edx = 0u;
            edi = (uint16_t)ebx;
        }
        else
        {
            eax = t10;
            edi = (uint16_t)ebx;
            edx = 0u;
            ebx = self + 0x290u;
L_10227cd5: ;
            if (eax == rd16(ebx)) goto L_10227ce6;
            if ((int32_t)(edx + 1u) < (int32_t)edi)
            {
                edx = edx + 1u;
                ebx = ebx + 2u;
                goto L_10227cd5;
            }
            edx = edx + 1u;
L_10227ce6: ;
            ebx = rd32(sp0 - 0x18u);
        }
        if (edx == edi)
        {
            wr8(ebp, 0u);
        }
    }
    wr32(sp0 - 0x14u, loc_14 + 0x10u);
    if ((int32_t)(ebp - self - 0x267u) < 32)
    {
        ecx = loc_14 + 0x10u;
        edx = ebp - self - 0x267u;
        ebp = ebp + 1u;
        loc_14 = loc_14 + 0x10u;
        goto L_10227cb8;
    }
    edx = ebp - self - 0x267u;
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, (uint16_t)ebx);
    g->eax = (uint16_t)ebx;
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t11 = cow_thiscall(g, COW_IMG(0x10221a80u), self, 2, (uint16_t)ebx, 0u);
    t12 = g->edx;
    if ((uint16_t)ebx == rd16(self + 0x374u))
    {
        edx = t12;
    }
    else
    {
        eax = t11;
        edx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x24u;
        cow_thiscall(g, COW_IMG(0x10227ed0u), self, 0);
        t13 = g->edx;
        edx = t13;
    }
    wr16(self + 0x374u, (uint16_t)ebx);
    if ((uint16_t)ebx != 0u)
    {
        ebx = rd32(sp0 - 0x24u);
        goto L_10227d61;
    }
    ebx = rd32(sp0 - 0x24u);
    t14 = rd32(self + 8u);
    wr32(sp0 - 0x24u, t14);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t15 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t14);
    t16 = g->edx;
    if ((uint8_t)t15 != 1u)
    {
        eax = t15;
        edx = t16;
        goto L_10227e80;
    }
    eax = t15;
    edx = t16;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t17 = cow_thiscall(g, COW_IMG(0x10157620u), rd32(COW_IMG(0x1057876cu)), 0);
    t18 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = t18;
    return t17;
L_10227c7b: ;
    wr32(ecx * 4u + self + 0x2f0u, 0x7fffffffu);
    goto L_10227c86;
L_10227d61: ;
    t19 = rd32(self + 8u);
    wr32(sp0 - 0x24u, t19);
    g->edx = t19;
    g->esp = sp0 - 0x20u;
    t20 = cow_thiscall(g, COW_IMG(0x1015ed80u), COW_IMG(0x10621838u), 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    if ((uint8_t)t20 == 0u)
    {
        eax = t20;
        ecx = t21;
        edx = t22;
    }
    else
    {
        ecx = t21;
        edx = t22;
        if ((int32_t)rd32(self + 0x40u) <= 0)
        {
            eax = rd32(self + 0x40u);
        }
        else
        {
            eax = rd32(self + 0x40u);
            if (rd8(self + 0x376u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(self + 0x376u);
            }
            else
            {
                if (rd16(self + rd32(self + 0x30u) * 2u + 0x290u) == 0xffffu)
                {
                    eax = rd32(self + 0x30u);
                }
                else
                {
                    eax = rd32(self + 0x30u);
                    t23 = rd16(eax * 2u + self + 0x290u);
                    wr32(sp0 - 0x24u, t23);
                    g->ebx = ebx;
                    g->edx = edx;
                    g->esp = sp0 - 0x20u;
                    t24 = cow_call_regs(g, COW_IMG(0x10227af0u), eax, self, g->edx, 0, 1, t23);
                    t25 = g->ecx;
                    t26 = g->edx;
                    if ((int32_t)t24 < 0)
                    {
                        eax = t24;
                        ecx = t25;
                        edx = t26;
                    }
                    else
                    {
                        edx = t26;
                        edi = t24;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t27 = cow_thiscall(g, COW_IMG(0x1018d2b0u), sp0 - 0xcu, 0);
                        t28 = g->edx;
                        wr32(sp0 - 0x24u, 2u);
                        g->edx = t28;
                        g->esp = sp0 - 0x24u;
                        t29 = cow_thiscall(g, COW_IMG(0x10227120u), edi * 0x10u + self + 0x68u, 0);
                        t30 = g->edx;
                        wr32(sp0 - 0x28u, t29);
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x1013a320u), rd32(COW_IMG(0x105781f8u)), 2, t29, 2u);
                        t31 = rd16(self + rd32(self + 0x30u) * 2u + 0x290u);
                        wr32(sp0 - 0x24u, t31);
                        wr32(sp0 - 0x28u, sp0 - 0xcu);
                        t32 = rd32(self + 0x30u);
                        cow_fastcall(g, COW_IMG(0x10227450u), rd32(COW_IMG(0x106671b4u)), t32, 2, sp0 - 0xcu, t31);
                        t33 = g->edx;
                        wr32(sp0 - 0x24u, 2u);
                        g->edx = t33;
                        g->esp = sp0 - 0x24u;
                        t34 = cow_thiscall(g, COW_IMG(0x1018d470u), sp0 - 0xcu, 0);
                        t35 = g->edx;
                        wr32(sp0 - 0x28u, t34);
                        g->edx = t35;
                        g->esp = sp0 - 0x20u;
                        t36 = cow_stdcall(g, COW_IMG(0x10150cc0u), 2, t34, 2u);
                        t37 = g->edx;
                        wr8(self + 0x376u, 1u);
                        t38 = cow_fastcall(g, COW_IMG(0x1018d250u), sp0 - 0xcu, t37, 0);
                        t39 = g->ecx;
                        t40 = g->edx;
                        eax = t38;
                        ecx = t39;
                        edx = t40;
                    }
                }
            }
        }
    }
    d41 = (double)rdf32(self + 0x28cu);
    if ((cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u;
        x0 = (double)rdf32(self + 0x28cu);
    }
    else
    {
        eax = cow_fsw(g, d41, (double)rdf32(COW_IMG(0x10329ce0u)), 0u) & 0x4100u;
        x0 = fr(g, (double)rdf32(COW_IMG(0x10331380u)) - (double)rdf32(self + 0x28cu));
    }
    d42 = fr(g, x0 * (double)rdf32(COW_IMG(0x1032a3e0u)));
    wrf32(self + 0x288u, (float)d42);
    g->edx = edx;
    g->esp = sp0 - 0x20u;
    t43 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t44 = g->edx;
    d45 = cow_take_float(g);
    d46 = fr(g, (double)rdf32(self + 0x28cu) - d45);
    wrf32(self + 0x28cu, (float)d46);
    if (!(d46 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (t43 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t44;
    }
    else
    {
        eax = (t43 & 0xffff0000u) | (uint16_t)cow_fsw(g, d46, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        edx = t44;
        wr32(self + 0x28cu, 0x42200000u);
    }
L_10227e80: ;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x1cu);
    g->edi = rd32(sp0 - 0x20u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10227bf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10227bf0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
