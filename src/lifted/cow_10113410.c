/* f_0x10113410 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10113410(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_208;
    unsigned of;
    unsigned pf;
    unsigned sf;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 576u);

    wr32(sp0 - 0x218u, in_ebx);
    wr32(sp0 - 0x21cu, in_ebp);
    wr32(sp0 - 0x220u, in_esi);
    wr32(sp0 - 0x224u, in_edi);
    wr32(sp0 - 0x228u, 1u);
    wr32(sp0 - 0x22cu, 1u);
    wr32(sp0 - 0x230u, 0xd3u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x224u;
    t1 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, 1u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x208u, 2u);
    if (t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        ebp = t1;
        wr32(sp0 - 0x214u, 0u);
        t4 = rd8(COW_IMG(0x104e1b64u));
        wr8(COW_IMG(0x104e1b64u), (uint8_t)(t4 + 1u));
        if ((uint8_t)(t4 + 1u) == 0u)
        {
            wr8(COW_IMG(0x104e1b64u), 1u);
        }
        wr16(sp0 - 0x214u, rd8(COW_IMG(0x104e1b64u)) << 8u ^ (arg2 & 0xfu));
        wr32(sp0 - 0x228u, ebp + 8u);
        wr32(sp0 - 0x22cu, ebp);
        g->eax = ebp + 8u;
        g->ecx = 0u;
        g->edx = arg2 & 0xfu;
        g->esp = sp0 - 0x224u;
        t5 = cow_cdecl(g, COW_IMG(0x10113940u), 2, ebp, ebp + 8u);
        t6 = g->ecx;
        t7 = g->edx;
        t8 = rd32(sp0 - 0x212u);
        t9 = rd8(sp0 - 0x212u);
        wr16(sp0 - 0x212u, (uint16_t)((t8 & 0xff00u) + 0x100u ^ t9));
        if (arg1 == 0u)
        {
            edx = t7;
            ebx = t5;
            esi = (t8 & 0xff00u) + 0x100u ^ t9;
        }
        else
        {
            edx = t7;
            ebx = t5;
            esi = (t8 & 0xff00u) + 0x100u ^ t9;
            if (rd32(arg1 + 0x8f0u) != 0u)
            {
                eax = rd32(arg1 + 0x8f0u);
                wr32(sp0 - 0x228u, ebx);
                wr32(sp0 - 0x22cu, ebp);
                wr32(sp0 - 0x230u, arg1);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t10 = cow_cdecl(g, COW_IMG(0x101139c0u), 3, arg1, ebp, ebx);
                t11 = g->edx;
                t12 = rd8(sp0 - 0x212u);
                t13 = rd32(sp0 - 0x212u);
                wr16(sp0 - 0x212u, (uint16_t)((t13 & 0xff00u) + 0x100u ^ t12));
                edx = t12;
                ebx = t10;
                esi = (t13 & 0xff00u) + 0x100u ^ t12;
            }
        }
        if (rd32(COW_IMG(0x104e1708u)) == 0u)
        {
            eax = rd32(COW_IMG(0x104e1708u));
        }
        else
        {
            eax = rd32(COW_IMG(0x104e1708u));
            t14 = rd8(eax + 0x62u) - rd8(eax + 0x60u) & 7u;
            if ((uint16_t)t14 == 0u)
            {
                edx = t14;
            }
            else
            {
                edi = t14;
                if (ebx + (uint16_t)edi * 8u - ebp + 4u < 0x104u) goto L_1011358d;
                edx = ebx + (uint16_t)edi * 8u - ebp + 4u;
                wr32(sp0 - 0x228u, 0u);
                wr32(sp0 - 0x22cu, ebx - ebp);
                wr32(sp0 - 0x230u, ebp);
                t15 = rd32(sp0 - 0x214u);
                wr32(ebp + 4u, t15);
                g->eax = t15;
                g->ecx = ebx - ebp;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t16 = cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebp, ebx - ebp, 0u);
                t17 = g->ecx;
                t18 = g->edx;
                wr32(sp0 - 0x234u, 2u);
                wr32(sp0 - 0x238u, 2u);
                wr32(sp0 - 0x23cu, 0xd3u);
                g->edx = t18;
                g->esp = sp0 - 0x230u;
                t19 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, 2u, 2u);
                t20 = g->edx;
                wr32(sp0 - 0x208u, 3u);
                if (t19 == 0u)
                {
                    edx = t20;
                    ebp = t19;
                    loc_208 = 3u;
                    goto L_10113626;
                }
                eax = t19;
                ebp = t19;
                t21 = rd32(COW_IMG(0x104e1708u));
                wr16(sp0 - 0x212u, ((rd32(sp0 - 0x212u) + 1u ^ rd8(sp0 - 0x212u)) & 0x7fu) ^ rd8(sp0 - 0x212u));
                eax = t21;
                ebx = ebp + 8u;
                loc_208 = 3u;
L_1011358d: ;
                wr32(sp0 - 0x20cu, 0u);
                wr8(sp0 - 0x20cu, 2u);
                ecx = 6u - ebp;
                edx = ebx;
                ebx = ebx + 4u;
L_101135ad: ;
                if (ebx + ecx + 2u >= 0x104u) goto L_101135f7;
                esi = ebx + ecx + 2u;
                edi = edi + 0xffffu;
                if (eax + (edi + ((esi & 0xffff0000u) | rd16(eax + 0x60u)) & 7u) * 8u + 0x20u == 0u)
                {
                    wr32(ebx, 0u);
                    wr32(ebx + 4u, 0u);
                }
                else
                {
                    t22 = eax;
                    eax = t22 + (edi + ((esi & 0xffff0000u) | rd16(t22 + 0x60u)) & 7u) * 8u + 0x20u;
                    esi = edi + ((esi & 0xffff0000u) | rd16(t22 + 0x60u)) & 7u;
                    t23 = rd16(eax);
                    wr16(ebx, (uint16_t)t23);
                    wr16(ebx + 2u, rd16(eax + 2u));
                    t24 = rd32(eax + 4u);
                    wr32(ebx + 4u, t24);
                }
                if ((uint16_t)edi != 0u)
                {
                    ebx = ebx + 8u;
                    goto L_101135a8;
                }
                ebx = ebx + 8u;
L_101135f7: ;
                t25 = rd32(sp0 - 0x212u);
                wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)edx));
                t26 = rd32(sp0 - 0x20cu);
                t27 = rd8(sp0 - 0x212u);
                wr32(edx, t26);
                wr16(sp0 - 0x212u, (uint16_t)((t25 & 0xff00u) + 0x100u ^ t27));
                esi = (t25 & 0xff00u) + 0x100u ^ t27;
L_10113626: ;
                eax = rd32(COW_IMG(0x104e1708u));
            }
        }
        if (arg1 != 0u)
        {
            if (rd32(arg1 + 0x8f0u) != 0u)
            {
                ecx = rd32(arg1 + 0x8f0u);
                wr32(sp0 - 0x228u, ecx);
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t28 = cow_thiscall(g, COW_IMG(0x1010f600u), sp0 - 0x204u, 1, ecx);
                t29 = g->edx;
                if (ebp == 0u)
                {
                    eax = t28;
                    edx = t29;
                    goto L_101137b6;
                }
                eax = t28;
                edx = t29;
L_1011365a: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t30 = cow_thiscall(g, COW_IMG(0x1010f680u), sp0 - 0x204u, 0);
                t31 = g->ecx;
                t32 = g->edx;
                if ((uint8_t)t30 != 0u)
                {
                    eax = t30;
                    edx = t32;
                    goto L_101137b6;
                }
                ecx = t31;
                wr32(sp0 - 0x228u, 0xf4u);
                wr32(sp0 - 0x22cu, sp0 - 0x1e0u);
                wr32(sp0 - 0x230u, sp0 - 0x204u);
                g->eax = sp0 - 0x204u;
                g->ecx = ecx;
                g->edx = sp0 - 0x1e0u;
                g->esp = sp0 - 0x224u;
                t33 = cow_cdecl(g, COW_IMG(0x10113a70u), 3, sp0 - 0x204u, sp0 - 0x1e0u, 0xf4u);
                t34 = g->ecx;
                t35 = g->edx;
                if ((uint16_t)t33 < 2u)
                {
                    eax = t33;
                    edx = t35;
                    goto L_101137a8;
                }
                eax = t33;
                ecx = t34;
                edx = t35;
                if ((rd32(sp0 - 0x212u) & 0xff00u) == 0u)
                {
                    edi = rd32(sp0 - 0x212u);
                    goto L_10113716;
                }
                edi = sp0 - 0x1e0u;
                eax = 0u;
                ecx = 0xffffffffu;
                cf = ebx < ebp;
                pf = PARITY((uint8_t)(ebx - ebp));
                af = (ebx ^ ebp ^ ebx - ebp) >> 4u & 1u;
                zf = ebx == ebp;
                sf = (int32_t)(ebx - ebp) < 0;
                of = ((ebx ^ ebp) & (ebx ^ ebx - ebp)) >> 0x1fu;
                while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                if (ebx + ~ecx - ebp + 7u <= 0x104u)
                {
                    edx = ebx - ebp;
                    goto L_10113712;
                }
                ecx = ebx + ~ecx - ebp + 7u;
                edx = ebx - ebp;
                wr32(sp0 - 0x228u, 0u);
                wr32(sp0 - 0x22cu, edx);
                wr32(sp0 - 0x230u, ebp);
                t36 = rd32(sp0 - 0x214u);
                wr32(ebp + 4u, t36);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebp, edx, 0u);
                t37 = g->ecx;
                t38 = g->edx;
                t39 = rd32(sp0 - 0x208u);
                wr32(sp0 - 0x234u, (uint16_t)t39);
                wr32(sp0 - 0x238u, (uint16_t)t39);
                wr32(sp0 - 0x23cu, 0xd3u);
                g->eax = (uint16_t)t39;
                g->edx = t38;
                g->esp = sp0 - 0x230u;
                t40 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, (uint16_t)t39, (uint16_t)t39);
                t41 = g->edx;
                if ((uint16_t)t39 == 0u)
                {
                    eax = t40;
                    edx = t41;
                    ebp = t40;
                }
                else
                {
                    eax = t40;
                    edx = t41;
                    ebp = t40;
                    edi = t39;
                    wr32(sp0 - 0x208u, edi + 1u);
                    loc_208 = edi + 1u;
                }
                if (ebp == 0u) goto L_101137b6;
                t42 = rd8(sp0 - 0x212u);
                wr16(sp0 - 0x212u, (uint16_t)(((rd32(sp0 - 0x212u) + 1u ^ t42) & 0x7fu) ^ t42));
                eax = (eax & 0xffffff00u) | t42;
                ebx = ebp + 8u;
L_10113712: ;
                edi = rd32(sp0 - 0x212u);
L_10113716: ;
                wr32(sp0 - 0x20cu, 0u);
                t43 = rd8(sp0 - 0x1e0u);
                wr8(sp0 - 0x20cu, 3u);
                if ((uint8_t)t43 == 0u)
                {
                    ecx = ebx;
                    ebx = ebx + 4u;
                    esi = sp0 - 0x1e0u;
                }
                else
                {
                    ecx = ebx;
                    ebx = ebx + 4u;
                    eax = ebx - ebp + 4u;
                    esi = sp0 - 0x1e0u;
L_1011373b: ;
                    if (eax >= 0x104u) goto L_10113750;
                    t44 = rd8(esi);
                    wr8(ebx, (uint8_t)t44);
                    if (rd8(esi + 1u) != 0u)
                    {
                        eax = eax + 1u;
                        edx = ((edx | t44) & 0xffffff00u) | rd8(esi + 1u);
                        ebx = ebx + 1u;
                        esi = esi + 1u;
                        goto L_1011373b;
                    }
                    ebx = ebx + 1u;
                    esi = esi + 1u;
                }
L_10113750: ;
                if ((int32_t)(ebx - ecx & 0x80000003u) >= 0)
                {
                    eax = ebx - ecx;
                    zf = (ebx - ecx & 0x80000003u) == 0u;
                }
                else
                {
                    eax = ebx - ecx;
                    edx = ebx - ecx & 0x80000003u;
                    zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
                }
                if (zf) goto L_1011377b;
L_10113765: ;
                wr8(ebx, 0u);
                if ((int32_t)(eax + 1u & 0x80000003u) >= 0)
                {
                    ebx = ebx + 1u;
                    zf = (eax + 1u & 0x80000003u) == 0u;
                    eax = eax + 1u;
                }
                else
                {
                    edx = eax + 1u & 0x80000003u;
                    eax = eax + 1u;
                    ebx = ebx + 1u;
                    zf = (edx - 1u | 0xfffffffcu) + 1u == 0u;
                }
                if (!zf) goto L_10113765;
L_1011377b: ;
                wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)ecx));
                t45 = rd32(sp0 - 0x20cu);
                t46 = rd8(sp0 - 0x212u);
                wr32(ecx, t45);
                wr16(sp0 - 0x212u, (uint16_t)((edi & 0xff00u) + 0x100u ^ t46));
                eax = t46;
                edx = t45;
                esi = (esi & 0xffff0000u) | (uint16_t)((edi & 0xff00u) + 0x100u ^ t46);
L_101137a8: ;
                g->eax = eax;
                g->edx = edx;
                g->esp = sp0 - 0x224u;
                t47 = cow_thiscall(g, COW_IMG(0x1010f7a0u), sp0 - 0x204u, 0);
                t48 = g->edx;
                eax = t47;
                edx = t48;
                goto L_1011365a;
            }
        }
L_101137c4: ;
        if (eax == 0u) goto L_10113906;
        wr32(sp0 - 0x228u, 8u);
        wr32(sp0 - 0x22cu, sp0 - 0xe0u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        t50 = cow_cdecl(g, COW_IMG(0x10114b40u), 2, sp0 - 0xe0u, 8u);
        t51 = g->edx;
        if ((uint16_t)t50 == 0u)
        {
            eax = t50;
            edx = t51;
            goto L_10113906;
        }
        eax = t50;
        edi = t50;
        if (ebx + (uint16_t)eax * 0x1cu - ebp + 4u < 0x104u) goto L_10113859;
        edx = (uint16_t)eax * 0x1cu - ebp;
        eax = ebx + (uint16_t)eax * 0x1cu - ebp + 4u;
        wr32(sp0 - 0x228u, 0u);
        wr32(sp0 - 0x22cu, ebx - ebp);
        wr32(sp0 - 0x230u, ebp);
        t52 = rd32(sp0 - 0x214u);
        wr32(ebp + 4u, t52);
        g->ecx = t52;
        g->edx = edx;
        g->esp = sp0 - 0x224u;
        cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebp, ebx - ebp, 0u);
        t53 = g->ecx;
        t54 = g->edx;
        t55 = (uint16_t)rd32(sp0 - 0x208u);
        wr32(sp0 - 0x234u, t55);
        wr32(sp0 - 0x238u, t55);
        wr32(sp0 - 0x23cu, 0xd3u);
        g->eax = t55;
        g->esp = sp0 - 0x230u;
        t56 = cow_cdecl(g, COW_IMG(0x100fc3c0u), 3, 0xd3u, t55, t55);
        if (t56 == 0u) goto L_10113929;
        eax = t56;
        ebp = t56;
        wr16(sp0 - 0x212u, ((rd32(sp0 - 0x212u) + 1u ^ rd8(sp0 - 0x212u)) & 0x7fu) ^ rd8(sp0 - 0x212u));
        ebx = ebp + 8u;
L_10113859: ;
        if (ebp == 0u) goto L_10113929;
        esi = rd32(sp0 - 0x212u);
        wr32(sp0 - 0x20cu, 0u);
        wr8(sp0 - 0x20cu, 4u);
        wr32(sp0 - 0x208u, ebx);
        ecx = ebx;
        loc_208 = ebx;
        ebx = ebx + 4u;
L_1011387b: ;
        if (ebx + (uint16_t)edi * 0x1cu - ebp < 0x104u)
        {
            eax = (uint16_t)edi;
            goto L_101138a7;
        }
        eax = (uint16_t)edi;
        if ((uint16_t)(edi + 0xffffu) != 0u)
        {
            edi = edi + 0xffffu;
            goto L_1011387b;
        }
L_101138e1: ;
        wr8(sp0 - 0x20bu, (uint8_t)((uint8_t)ebx - (uint8_t)ecx));
        t58 = rd32(sp0 - 0x20cu);
        t59 = rd8(sp0 - 0x212u);
        wr32(ecx, t58);
        eax = t59;
        edx = t58;
        esi = (esi & 0xff00u) + 0x100u ^ t59;
L_10113906: ;
        if (ebp != 0u)
        {
            wr16(sp0 - 0x212u, (uint16_t)(esi | 0x80u));
            wr32(sp0 - 0x228u, 0u);
            wr32(sp0 - 0x22cu, ebx - ebp);
            wr32(sp0 - 0x230u, ebp);
            t60 = rd32(sp0 - 0x214u);
            wr32(ebp + 4u, t60);
            g->esp = sp0 - 0x224u;
            cow_cdecl(g, COW_IMG(0x100fc4d0u), 3, ebp, ebx - ebp, 0u);
        }
    }
L_10113929: ;
    return;
L_101135a8: ;
    eax = rd32(COW_IMG(0x104e1708u));
    goto L_101135ad;
L_101137b6: ;
    g->edx = edx;
    g->esp = sp0 - 0x224u;
    cow_thiscall(g, COW_IMG(0x1010f5f0u), sp0 - 0x204u, 0);
    t49 = g->edx;
    eax = rd32(COW_IMG(0x104e1708u));
    edx = t49;
    goto L_101137c4;
L_101138a7: ;
    if ((uint16_t)edi != 0u)
    {
        t57 = (uint16_t)edi * 0x1cu;
        esi = sp0 - 0xe0u;
        edi = ebx;
        ecx = t57 >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = t57 & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        eax = t57;
        ecx = loc_208;
        ebx = ebx + t57;
        esi = rd32(sp0 - 0x212u);
    }
    goto L_101138e1;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10113410(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10113410(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
