/* f_0x10041c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_10041c20(Guest* g)
{
    unsigned af;
    unsigned cf;
    double d11;
    double d6;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_308;
    uint32_t loc_320;
    uint32_t loc_324;
    uint32_t loc_328;
    uint32_t loc_32c;
    uint32_t loc_330;
    uint32_t loc_334;
    unsigned of;
    unsigned pf;
    unsigned sf;
    uint32_t t1;
    uint32_t t10;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t7;
    uint32_t t8;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 848u);

    wr32(sp0 - 0x328u, in_ebx);
    wr32(sp0 - 0x32cu, in_ebp);
    wr32(sp0 - 0x330u, in_esi);
    wr32(sp0 - 0x334u, in_edi);
    g->edx = in_edx;
    g->esp = sp0 - 0x334u;
    t1 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x2f0u, 0);
    t2 = g->edx;
    wr32(sp0 - 0x31cu, 0u);
    wr32(sp0 - 0x318u, 0u);
    wr32(sp0 - 0x314u, 0u);
    wr32(sp0 - 0x310u, 0x3f800000u);
    g->edx = t2;
    cow_thiscall(g, COW_IMG(0x100279b0u), sp0 - 0x2f0u, 0);
    t3 = g->edx;
    wr32(sp0 - 0x338u, arg1);
    g->eax = arg1;
    t4 = cow_thiscall(g, COW_IMG(0x10027cf0u), sp0 - 0x2f0u, 1, arg1);
    wr32(sp0 - 0x338u, sp0 - 0x31cu);
    wr32(sp0 - 0x33cu, sp0 - 0x31cu);
    g->edx = sp0 - 0x31cu;
    cow_cdecl(g, COW_IMG(0x100277e0u), 2, sp0 - 0x31cu, sp0 - 0x31cu);
    t5 = g->edx;
    wr32(sp0 - 0x340u, sp0 - 0x31cu);
    wr32(sp0 - 0x344u, sp0 - 0x31cu);
    d6 = (double)(float)fr(g, cow_bits2f(0u) + (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x314u, (float)d6);
    g->eax = sp0 - 0x31cu;
    g->ecx = sp0 - 0x31cu;
    g->esp = sp0 - 0x33cu;
    t7 = cow_cdecl(g, COW_IMG(0x10027870u), 2, sp0 - 0x31cu, sp0 - 0x31cu);
    t8 = g->ecx;
    d9 = (double)rdf32(sp0 - 0x314u);
    t10 = rd32(sp0 - 0x314u);
    wr32(sp0 - 0x308u, t10);
    if ((cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u) == 0u)
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        edx = t10;
        loc_328 = in_ebx;
        loc_32c = in_ebp;
        loc_330 = in_esi;
        loc_334 = in_edi;
    }
    else
    {
        eax = cow_fsw(g, d9, (double)rdf32(COW_IMG(0x1032961cu)), 0u) & 0x100u;
        ecx = t8;
        edx = t10;
        loc_308 = t10;
        d11 = (double)rdf32(sp0 - 0x314u);
        if (d11 < (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_328 = in_ebx;
            loc_32c = in_ebp;
            loc_330 = in_esi;
            loc_334 = in_edi;
        }
        else
        {
            wr32(sp0 - 0x338u, sp0 - 0x31cu);
            g->eax = sp0 - 0x31cu;
            g->edx = edx;
            g->esp = sp0 - 0x334u;
            t12 = cow_cdecl(g, COW_IMG(0x100278e0u), 1, sp0 - 0x31cu);
            t13 = g->edx;
            wr32(sp0 - 0x33cu, 0xbf000000u);
            wr32(sp0 - 0x340u, sp0 - 0x31cu);
            g->ecx = sp0 - 0x31cu;
            g->edx = t13;
            g->esp = sp0 - 0x338u;
            cow_cdecl(g, COW_IMG(0x10027050u), 2, sp0 - 0x31cu, 0xbf000000u);
            t14 = g->ecx;
            t15 = g->edx;
            edi = arg2;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = sp0 - 0x334u < sp0 - 0x340u;
            pf = PARITY((uint8_t)(sp0 - 0x334u));
            af = (sp0 - 0x340u ^ sp0 - 0x334u) >> 4u & 1u;
            zf = sp0 == 0x334u;
            sf = (int32_t)(sp0 - 0x334u) < 0;
            of = ((sp0 - 0x340u ^ sp0 - 0x334u) & (sp0 - 0x334u ^ 0xcu)) >> 0x1fu;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            t16 = ~ecx - 1u;
            wr32(sp0 - 0x320u, t16);
            if ((int32_t)t16 <= 16)
            {
                ecx = t16;
                edx = t15;
                esi = t16;
                loc_320 = t16;
            }
            else
            {
                ecx = t16;
                edx = t15;
                wr32(sp0 - 0x320u, 0x10u);
                esi = 0x10u;
                loc_320 = 0x10u;
            }
            if (rd8(COW_IMG(0x1047bac0u)) & 1u)
            {
                eax = (eax & 0xffffff00u) | 1u;
            }
            else
            {
                eax = (eax & 0xffffff00u) | 1u;
                ecx = (ecx & 0xffffff00u) | rd8(COW_IMG(0x1047bac0u));
                wr8(COW_IMG(0x1047bac0u), (uint8_t)(ecx | eax));
                g->eax = eax;
                g->edx = (edx & 0xffffff00u) | (uint8_t)(ecx | eax);
                g->esp = sp0 - 0x334u;
                t17 = cow_thiscall(g, COW_IMG(0x1006ad90u), COW_IMG(0x1047badcu), 0);
                t18 = g->ecx;
                t19 = g->edx;
                wr32(sp0 - 0x338u, COW_IMG(0x10041f30u));
                g->edx = t19;
                t20 = cow_cdecl(g, COW_IMG(0x103134c6u), 1, COW_IMG(0x10041f30u));
                t21 = g->edx;
                eax = t20;
                edx = t21;
                loc_320 = rd32(sp0 - 0x320u);
            }
            wr32(sp0 - 0x338u, COW_IMG(0x10352d30u));
            g->eax = eax;
            g->esp = sp0 - 0x334u;
            t22 = cow_fastcall(g, COW_IMG(0x1006af90u), COW_IMG(0x1047badcu), edx, 1, COW_IMG(0x10352d30u));
            if ((int32_t)esi <= 0)
            {
                ebx = 0u;
            }
            else
            {
                eax = t22;
                ebx = 0u;
                ebp = sp0 - 0x200u;
                esi = sp0 - 0x2b0u;
                edi = 0u;
L_10041d66: ;
                if ((int8_t)rd8(arg2 + edi) < 32)
                {
                    wr16(esi, 0u);
                    wr16(esi + 2u, 0u);
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(arg2 + edi);
                    wr32(sp0 - 0x338u, 0u);
                    wr32(sp0 - 0x33cu, 0u);
                    wr32(sp0 - 0x340u, esi);
                    wr32(sp0 - 0x344u, ebp);
                    wr32(sp0 - 0x348u, eax);
                    g->esp = sp0 - 0x334u;
                    cow_thiscall(g, COW_IMG(0x10120730u), COW_IMG(0x104e1bf8u), 5, eax, ebp, esi, 0u, 0u);
                    ebx = ebx + (uint32_t)(int16_t)rd16(esi);
                }
                if ((int32_t)(edi + 1u) < (int32_t)rd32(sp0 - 0x320u))
                {
                    eax = rd32(sp0 - 0x320u);
                    ebp = ebp + 0x20u;
                    esi = esi + 4u;
                    edi = edi + 1u;
                    goto L_10041d66;
                }
                eax = rd32(sp0 - 0x320u);
                esi = eax;
            }
            t23 = -(uint32_t)((int32_t)(ebx - (uint32_t)((int32_t)ebx >> 0x1fu)) >> 1u);
            wr32(sp0 - 0x324u, t23);
            if ((int32_t)esi <= 0)
            {
                eax = t23;
                edx = (uint32_t)((int32_t)ebx >> 0x1fu);
                loc_328 = rd32(sp0 - 0x328u);
                loc_32c = rd32(sp0 - 0x32cu);
                loc_330 = rd32(sp0 - 0x330u);
                loc_334 = rd32(sp0 - 0x334u);
            }
            else
            {
                eax = t23;
                loc_324 = t23;
                ebp = 0u;
                edi = sp0 - 0x1fcu;
L_10041dcc: ;
                t24 = rd16(ebp * 4u + sp0 - 0x2aeu);
                t25 = rd16(ebp * 4u + sp0 - 0x2b0u);
                wrf32(COW_IMG(0x10352cfcu), (float)(double)(int32_t)loc_324);
                t26 = eax + (uint32_t)(int16_t)t25;
                wr32(sp0 - 0x324u, t26);
                wrf32(COW_IMG(0x10352d08u), (float)(double)(int32_t)t26);
                wrf32(COW_IMG(0x10352d14u), (float)(double)(int32_t)loc_324);
                wrf32(COW_IMG(0x10352d20u), (float)(double)(int32_t)t26);
                t27 = (uint32_t)((int32_t)((uint32_t)(int16_t)t24 - (uint32_t)((int32_t)(uint32_t)(int16_t)t24 >> 0x1fu)) >> 1u);
                wr32(sp0 - 0x304u, t27);
                wr32(sp0 - 0x324u, -t27);
                wr32(sp0 - 0x324u, t26);
                wrf32(COW_IMG(0x10352d00u), (float)(double)(int32_t)-t27);
                wrf32(COW_IMG(0x10352d0cu), (float)(double)(int32_t)-t27);
                wrf32(COW_IMG(0x10352d18u), (float)(double)(int32_t)t27);
                wrf32(COW_IMG(0x10352d24u), (float)(double)(int32_t)t27);
                ecx = t26;
                ebx = COW_IMG(0x10352cfcu);
                esi = sp0 - 0x268u;
                loc_324 = t26;
L_10041e43: ;
                wr32(sp0 - 0x338u, arg4);
                wr32(sp0 - 0x33cu, ebx);
                wr32(sp0 - 0x340u, sp0 - 0x2fcu);
                g->esp = sp0 - 0x334u;
                cow_cdecl(g, COW_IMG(0x100273d0u), 3, sp0 - 0x2fcu, ebx, arg4);
                wr32(sp0 - 0x344u, sp0 - 0x2fcu);
                wr32(sp0 - 0x348u, sp0 - 0x31cu);
                wr32(sp0 - 0x34cu, esi - 8u);
                g->esp = sp0 - 0x340u;
                cow_cdecl(g, COW_IMG(0x10026fd0u), 3, esi - 8u, sp0 - 0x31cu, sp0 - 0x2fcu);
                t28 = rd32(sp0 - 0x308u);
                t29 = rd32(edi);
                t30 = rd32(edi - 4u);
                wr32(esi, t28);
                wr32(esi + 4u, 0x3f800000u);
                wr32(esi + 0xcu, t30);
                wr32(esi + 0x10u, t29);
                if ((int32_t)(ebx + 0xcu) < (int32_t)COW_IMG(0x10352d2cu))
                {
                    ecx = t28;
                    ebx = ebx + 0xcu;
                    esi = esi + 0x1cu;
                    edi = edi + 8u;
                    loc_324 = rd32(sp0 - 0x324u);
                    goto L_10041e43;
                }
                ebx = ebx + 0xcu;
                edi = edi + 8u;
                wr32(sp0 - 0x30cu, arg3);
                wr32(sp0 - 0x338u, sp0 - 0x300u);
                wr32(sp0 - 0x33cu, sp0 - 0x30cu);
                t31 = (uint32_t)(int8_t)rd8(arg2 + ebp);
                wr32(sp0 - 0x340u, t31);
                g->eax = sp0 - 0x30cu;
                g->esp = sp0 - 0x334u;
                t32 = cow_fastcall(g, COW_IMG(0x101207b0u), COW_IMG(0x104e1bf8u), t31, 3, t31, sp0 - 0x30cu, sp0 - 0x300u);
                t33 = g->edx;
                if ((uint8_t)t32 == 0u)
                {
                    eax = t32;
                    edx = t33;
                    loc_328 = rd32(sp0 - 0x328u);
                    loc_32c = rd32(sp0 - 0x32cu);
                    loc_330 = rd32(sp0 - 0x330u);
                    loc_334 = rd32(sp0 - 0x334u);
                    goto L_10041f18;
                }
                eax = sp0 - 0x260u;
                ecx = 4u;
L_10041ed4: ;
                wr32(eax, arg3);
                if (ecx != 1u)
                {
                    eax = eax + 0x1cu;
                    ecx = ecx - 1u;
                    goto L_10041ed4;
                }
                wr32(sp0 - 0x338u, 0x144u);
                t34 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
                wr32(sp0 - 0x33cu, t34);
                g->eax = t34;
                g->esp = sp0 - 0x334u;
                t35 = cow_thiscall(g, rd32(rd32(t34) + 0x130u), rd32(t34), 2, t34, 0x144u);
                wr32(sp0 - 0x338u, 0x1cu);
                wr32(sp0 - 0x33cu, sp0 - 0x270u);
                wr32(sp0 - 0x340u, 2u);
                wr32(sp0 - 0x344u, 5u);
                g->ebx = ebx;
                g->edx = sp0 - 0x270u;
                cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x270u, 0x1cu);
                t36 = g->edx;
                if ((int32_t)(ebp + 1u) < (int32_t)rd32(sp0 - 0x320u))
                {
                    ebp = ebp + 1u;
                    goto L_10041dc8;
                }
                eax = rd32(sp0 - 0x320u);
                edx = t36;
                loc_328 = rd32(sp0 - 0x328u);
                loc_32c = rd32(sp0 - 0x32cu);
                loc_330 = rd32(sp0 - 0x330u);
                loc_334 = rd32(sp0 - 0x334u);
            }
        }
    }
L_10041f18: ;
    g->esp = sp0 - 0x334u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x328u);
    g->esi = rd32(sp0 - 0x330u);
    g->edi = rd32(sp0 - 0x334u);
    g->ebp = rd32(sp0 - 0x32cu);
    return;
L_10041dc8: ;
    eax = rd32(sp0 - 0x324u);
    loc_324 = rd32(sp0 - 0x324u);
    goto L_10041dcc;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10041c20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10041c20(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
