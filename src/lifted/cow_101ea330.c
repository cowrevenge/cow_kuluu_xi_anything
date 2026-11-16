/* f_0x101ea330 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea330(Guest* g)
{
    double d19;
    double d24;
    double d30;
    double d35;
    double d56;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_28;
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
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
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
    cow_frame(g, sp0, 148u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x38u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101ea35c;
    }
    edx = t2;
    wr32(sp0 - 0x3cu, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x40u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101ea35c: ;
    wr32(sp0 - 0x3cu, sp0 - 0x18u);
    t6 = rd32(self + 0x30u);
    g->esp = sp0 - 0x38u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x18u);
    if ((int32_t)(rd32(eax + t6 * 0xcu + 0x24u) >> 1u & 7u) < 4)
    {
        esi = eax + t6 * 0xcu + 0x24u;
        eax = rd32(eax + t6 * 0xcu + 0x24u) >> 1u & 7u;
    }
    else
    {
        esi = eax + t6 * 0xcu + 0x24u;
        eax = 4u;
    }
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, 0x80808080u);
    t7 = (uint32_t)(int16_t)rd16(sp0 - 0x16u) + 8u;
    wr32(sp0 - 0x48u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 0x18u) + 4u;
    wr32(sp0 - 0x4cu, t8);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(eax * 4u + self + 0x18u), 5, t8, t7, 0x80808080u, 0u, 0u);
    t9 = rd32(esi + 8u) & 0x3ffu;
    wr32(sp0 - 0x3cu, t9);
    t10 = rd32(esi) >> 4u & 0x3ffu;
    wr32(sp0 - 0x40u, t10);
    wr32(sp0 - 0x44u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x48u, sp0 - 0x10u);
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10357fbcu), t10, t9, rd32(sp0 - 0x38u));
    wr32(sp0 - 0x4cu, 0x3f800000u);
    wr32(sp0 - 0x50u, 0x3f800000u);
    wr32(sp0 - 0x54u, 1u);
    wr32(sp0 - 0x58u, 0x80808080u);
    wr32(sp0 - 0x5cu, sp0 - 0x10u);
    t11 = rd32(sp0 - 0x16u) + 0x12u;
    wr32(sp0 - 0x60u, t11);
    t12 = rd32(sp0 - 0x14u) - 8u;
    wr32(sp0 - 0x64u, t12);
    g->esp = sp0 - 0x48u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t11, 7, t12, t11, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t13 = rd32(esi + 8u) >> 0xau & 0x3ffu;
    wr32(sp0 - 0x68u, t13);
    t14 = rd32(esi) >> 0xeu & 0x3ffu;
    wr32(sp0 - 0x6cu, t14);
    wr32(sp0 - 0x70u, COW_IMG(0x10357fbcu));
    wr32(sp0 - 0x74u, sp0 - 0x10u);
    g->esp = sp0 - 0x60u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10357fbcu), t14, t13, rd32(sp0 - 0x64u));
    wr32(sp0 - 0x78u, 0x3f800000u);
    wr32(sp0 - 0x7cu, 0x3f800000u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, 0x80808080u);
    wr32(sp0 - 0x88u, sp0 - 0x10u);
    t15 = rd32(sp0 - 0x16u) + 0x2eu;
    wr32(sp0 - 0x8cu, t15);
    t16 = rd32(sp0 - 0x14u) - 8u;
    wr32(sp0 - 0x90u, t16);
    g->esp = sp0 - 0x74u;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t15, 7, t16, t15, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t17 = g->ecx;
    wr32(sp0 - 0x1cu, 0u);
    t18 = (uint8_t)rd32(esi + 4u);
    wr32(sp0 - 0x20u, t18);
    wr32(sp0 - 0x3cu, t17);
    d19 = (double)(float)fr(g, (double)(int64_t)cow_i64(t18, 0u) * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x3cu, (float)d19);
    t20 = rd32(sp0 - 0x16u) + 0x56u;
    wr32(sp0 - 0x40u, t20);
    t21 = rd32(sp0 - 0x18u) + 0x1du;
    wr32(sp0 - 0x44u, t21);
    g->esp = sp0 - 0x38u;
    cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t21, t20, cow_f2bits(d19));
    t22 = g->ecx;
    t23 = rd8(esi + 5u);
    wr32(sp0 - 0x24u, t23);
    wr32(sp0 - 0x3cu, t22);
    d24 = (double)(float)fr(g, (double)(int32_t)t23 * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x3cu, (float)d24);
    t25 = rd32(sp0 - 0x16u) + 0x6eu;
    wr32(sp0 - 0x40u, t25);
    t26 = rd32(sp0 - 0x18u) + 0x1du;
    wr32(sp0 - 0x44u, t26);
    g->eax = t23;
    t27 = cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t26, t25, cow_f2bits(d24));
    t28 = g->ecx;
    wr32(sp0 - 0x3cu, t28);
    t29 = rd8(esi + 6u);
    wr32(sp0 - 0x24u, t29);
    d30 = (double)(float)fr(g, (double)(int32_t)t29 * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x3cu, (float)d30);
    t31 = rd32(sp0 - 0x16u) + 0x86u;
    wr32(sp0 - 0x40u, t31);
    t32 = rd32(sp0 - 0x18u) + 0x1du;
    wr32(sp0 - 0x44u, t32);
    cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t32, t31, cow_f2bits(d30));
    t33 = g->ecx;
    wr32(sp0 - 0x3cu, t33);
    t34 = rd8(esi + 7u);
    wr32(sp0 - 0x24u, t34);
    d35 = (double)(float)fr(g, (double)(int32_t)t34 * (double)rdf32(COW_IMG(0x1032df40u)));
    wrf32(sp0 - 0x3cu, (float)d35);
    t36 = rd32(sp0 - 0x16u) + 0x9eu;
    wr32(sp0 - 0x40u, t36);
    t37 = rd32(sp0 - 0x18u) + 0x1du;
    wr32(sp0 - 0x44u, t37);
    g->eax = t34;
    g->edx = t37;
    t38 = cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t37, t36, cow_f2bits(d35));
    t39 = g->edx;
    if (rd32(self + 0x34u) == 0u)
    {
        eax = t38;
        edx = t39;
    }
    else
    {
        ecx = rd32(self + 0x34u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, 0u);
        wr32(sp0 - 0x44u, 0x80808080u);
        t40 = (uint32_t)(int16_t)rd16(sp0 - 0x16u);
        wr32(sp0 - 0x48u, t40);
        t41 = (uint32_t)(int16_t)rd16(sp0 - 0x18u);
        wr32(sp0 - 0x4cu, t41);
        g->eax = t40;
        g->edx = t41;
        g->esp = sp0 - 0x38u;
        t42 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t41, t40, 0x80808080u, 0u, 0u);
        t43 = g->edx;
        eax = t42;
        edx = t43;
    }
    if (rd32(COW_IMG(0x10663648u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10663648u));
        g->edx = edx;
        g->esp = sp0 - 0x38u;
        t44 = cow_thiscall(g, COW_IMG(0x101efb20u), ecx, 0);
        t45 = g->ecx;
        t46 = g->edx;
        if (t44 == 0u)
        {
            eax = t44;
            edx = t46;
        }
        else
        {
            eax = t44;
            ecx = t45;
            ebp = t44;
            t47 = (eax & 0xffff0000u) | rd16(ebp + 6u);
            wr32(sp0 - 0x24u, t47);
            t48 = (ecx & 0xffff0000u) | rd16(ebp + 8u);
            wr32(sp0 - 0x28u, t48);
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            wr32(sp0 - 0x40u, sp0 - 0x24u);
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x101efc00u), rd32(COW_IMG(0x10663648u)), 2, sp0 - 0x24u, sp0 - 0x28u);
            if ((rd8(ebp) & 0x40u) != 0u)
            {
                if ((rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) & 0x80u) == 0u)
                {
                    eax = (uint32_t)(int16_t)rd16(ebp + 0xeu);
                    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                    goto L_101ea5ac;
                }
                eax = (uint32_t)(int16_t)rd16(ebp + 0xeu);
                ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                if (ecx == 2u) goto L_101ea5b7;
                if (ecx == 3u) goto L_101ea5b7;
L_101ea5ac: ;
                if (ecx != 0u) goto L_101ea5b7;
                eax = (uint8_t)eax;
L_101ea5bd: ;
                if (eax == 1u) goto L_101ea5cc;
                if (eax == 6u) goto L_101ea5cc;
                if (eax != 7u) goto L_101ea5d1;
L_101ea5cc: ;
                t50 = rd32(sp0 - 0x28u) - 0x1eu;
                wr32(sp0 - 0x28u, t50);
                loc_28 = t50;
            }
L_101ea5d1: ;
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0x80808080u);
            t51 = (uint32_t)(int16_t)loc_28 + 0xbu;
            wr32(sp0 - 0x48u, t51);
            t52 = (uint32_t)(int16_t)rd16(sp0 - 0x24u) - 0x10u;
            wr32(sp0 - 0x4cu, t52);
            t53 = rd32(self + 0x3cu);
            g->esp = sp0 - 0x38u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), t53, 5, t52, t51, 0x80808080u, 0u, 0u);
            t54 = g->ecx;
            wr32(sp0 - 0x3cu, 0u);
            wr32(sp0 - 0x40u, 0u);
            t55 = rd8(esi + 3u) >> 1u;
            wr32(sp0 - 0x20u, t55);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0x80808080u);
            wr32(sp0 - 0x4cu, 0x3f800000u);
            wr32(sp0 - 0x50u, t55);
            d56 = (double)(float)fr(g, (double)(int32_t)t55 * (double)rdf32(COW_IMG(0x10329a18u)));
            wrf32(sp0 - 0x50u, (float)d56);
            t57 = (uint32_t)(int16_t)rd16(sp0 - 0x28u) + 0xbu;
            wr32(sp0 - 0x54u, t57);
            t58 = (uint32_t)(int16_t)rd16(sp0 - 0x24u) - 0x10u;
            wr32(sp0 - 0x58u, t58);
            g->eax = t58;
            g->edx = t57;
            t59 = cow_thiscall(g, COW_IMG(0x1011fc80u), rd32(self + 0x38u), 8, t58, t57, cow_f2bits(d56), 0x3f800000u, 0x80808080u, 0u, 0u, 0u);
            t60 = g->edx;
            eax = t59;
            edx = t60;
        }
    }
    g->ebx = rd32(sp0 - 0x2cu);
    g->esi = rd32(sp0 - 0x34u);
    g->edi = rd32(sp0 - 0x38u);
    g->ebp = rd32(sp0 - 0x30u);
    g->edx = edx;
    return eax;
L_101ea5b7: ;
    t49 = (uint8_t)(eax >> 8u);
    eax = t49;
    goto L_101ea5bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea330(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea330(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
