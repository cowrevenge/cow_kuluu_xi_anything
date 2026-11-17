/* f_0x10280e00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=8 */
void cow_fn_10280e00(Guest* g)
{
    double d50;
    double d57;
    double d58;
    double d64;
    double d67;
    double d68;
    double d69;
    double d71;
    double d73;
    double d74;
    double d75;
    double d76;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_44_f;
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
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t65;
    uint32_t t66;
    uint32_t t7;
    uint32_t t70;
    uint32_t t72;
    uint32_t t77;
    uint32_t t8;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    double x0;
    double x1;
    double x2;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg7 = rd32(g->esp + 0x1cu);
    const uint32_t arg8 = rd32(g->esp + 0x20u);
    const uint32_t arg9 = rd32(g->esp + 0x24u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x60u, in_ebx);
    wr32(sp0 - 0x64u, in_ebp);
    wr32(sp0 - 0x68u, in_esi);
    wr32(sp0 - 0x6cu, in_edi);
    wr32(sp0 - 0x70u, 0u);
    g->esp = sp0 - 0x64u;
    t1 = cow_call_regs(g, COW_IMG(0x10282490u), g->eax, self, in_edx, 1, 3, 0u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x74u, 0x3f800000u);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x70u;
    t4 = cow_cdecl(g, COW_IMG(0x102833a0u), 1, 0x3f800000u);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x78u, 0u);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x74u;
    t7 = cow_cdecl(g, COW_IMG(0x102833c0u), 1, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x78u;
    t10 = cow_stdcall(g, COW_IMG(0x10284430u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    g->ecx = t11;
    g->edx = t12;
    t13 = cow_stdcall(g, COW_IMG(0x10283260u), 0);
    t14 = g->ecx;
    t15 = g->edx;
    g->ecx = t14;
    t16 = cow_call_regs(g, COW_IMG(0x10281dd0u), g->eax, g->ecx, t15, 1, 0);
    t17 = g->ecx;
    t18 = g->edx;
    cow_stdcall(g, COW_IMG(0x10283440u), 0);
    wr32(sp0 - 0x7cu, sp0 - 0x48u);
    wr32(sp0 - 0x80u, sp0 - 0x4cu);
    t19 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x89cu);
    wr32(sp0 - 0x84u, t19);
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t19, sp0 - 0x4cu, sp0 - 0x48u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u) != 0xffffffffu)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u);
        if (arg7 == 0xffffffffu) goto L_10280e77;
        if (arg8 != 0xffffffffu) goto L_10280e90;
L_10280e77: ;
        wr32(sp0 - 0x70u, sp0 + 0x20u);
        wr32(sp0 - 0x74u, sp0 + 0x1cu);
        wr32(sp0 - 0x78u, eax);
        g->esp = sp0 - 0x6cu;
        cow_cdecl(g, COW_IMG(0x10281b80u), 3, eax, sp0 + 0x1cu, sp0 + 0x20u);
    }
L_10280e90: ;
    wr32(sp0 - 0x70u, sp0 - 0x54u);
    wr32(sp0 - 0x74u, sp0 - 0x50u);
    t20 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u);
    wr32(sp0 - 0x78u, t20);
    g->esp = sp0 - 0x6cu;
    cow_cdecl(g, COW_IMG(0x10281b80u), 3, t20, sp0 - 0x50u, sp0 - 0x54u);
    if ((int32_t)rd32(sp0 + 0xcu) < 0)
    {
        eax = rd32(sp0 - 0x4cu);
        ecx = rd32(sp0 - 0x48u);
        ebx = rd32(sp0 + 0x10u);
        edi = rd32(sp0 + 0xcu);
        goto L_10280ecd;
    }
    eax = rd32(sp0 - 0x4cu);
    ecx = rd32(sp0 - 0x48u);
    ebx = rd32(sp0 + 0x10u);
    edi = rd32(sp0 + 0xcu);
    if ((int32_t)ebx >= 0) goto L_10280eeb;
L_10280ecd: ;
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u) == 0xffffffffu) goto L_10280eeb;
    ebx = arg8;
    edi = arg7;
L_10280ef7: ;
    wr32(sp0 - 0x70u, 0u);
    t21 = (uint32_t)((int32_t)(eax - (uint32_t)((int32_t)eax >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x4cu, t21);
    wr32(sp0 - 0x74u, 7u);
    t22 = (uint32_t)((int32_t)(ecx - (uint32_t)((int32_t)ecx >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x48u, t22);
    wr32(sp0 - 0x78u, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), 7u, 0u);
    wr32(sp0 - 0x70u, 0x3f800000u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 0u);
    t23 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b4u);
    wr32(sp0 - 0x7cu, t23);
    t24 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x2b0u);
    wr32(sp0 - 0x80u, t24);
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x88u, sp0 - 0x40u);
    cow_thiscall(g, COW_IMG(0x102d8860u), sp0 - 0x40u, 7, sp0 - 0x40u, 0u, t24, t23, 0u, 0u, 0x3f800000u);
    wr32(sp0 - 0x70u, sp0 - 0x40u);
    wr32(sp0 - 0x74u, 3u);
    wr32(sp0 - 0x78u, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x94u), sp0 - 0x40u, 3, rd32(COW_IMG(0x1066941cu)), 3u, sp0 - 0x40u);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 0u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x18u, 0x3f800000u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x70u, sp0 - 0x40u);
    wr32(sp0 - 0x74u, 2u);
    wr32(sp0 - 0x78u, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x94u), sp0 - 0x40u, 3, rd32(COW_IMG(0x1066941cu)), 2u, sp0 - 0x40u);
    wr32(sp0 - 0x70u, sp0 - 0x40u);
    wr32(sp0 - 0x74u, 0x100u);
    wr32(sp0 - 0x78u, rd32(COW_IMG(0x1066941cu)));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t25 = rd32(rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(t25 + 0x94u), sp0 - 0x40u, 3, rd32(COW_IMG(0x1066941cu)), 0x100u, sp0 - 0x40u);
    t26 = g->edx;
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x8b0u) != 0xffffffffu)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        if (rd32(eax + 0x9fcu) == 0u)
        {
            ecx = eax + 0x9fcu;
            wr32(sp0 - 0x70u, ecx);
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x78u, 0x102u);
            wr32(sp0 - 0x7cu, 0x208u);
            wr32(sp0 - 0x80u, 0xa000u);
            wr32(sp0 - 0x84u, rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x6cu;
            cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x5cu), ecx, 6, rd32(COW_IMG(0x1066941cu)), 0xa000u, 0x208u, 0x102u, 0u, ecx);
            eax = rd32(COW_IMG(0x1099d200u));
        }
        wr32(sp0 - 0x70u, 0x14u);
        t59 = rd32(eax + 0x9fcu);
        wr32(sp0 - 0x74u, t59);
        wr32(sp0 - 0x78u, 0u);
        wr32(sp0 - 0x7cu, rd32(COW_IMG(0x1066941cu)));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t60 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x6cu;
        cow_thiscall(g, rd32(t60 + 0x14cu), rd32(COW_IMG(0x1066941cu)), 4, rd32(COW_IMG(0x1066941cu)), 0u, t59, 0x14u);
        t61 = g->edx;
        wr32(sp0 - 0x70u, 0x102u);
        wr32(sp0 - 0x74u, rd32(COW_IMG(0x1066941cu)));
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x130u), rd32(rd32(COW_IMG(0x1066941cu))), 2, rd32(COW_IMG(0x1066941cu)), 0x102u);
        wr32(sp0 - 0x70u, 0x2000u);
        wr32(sp0 - 0x74u, sp0 - 0x5cu);
        wr32(sp0 - 0x78u, 0x50u);
        wr32(sp0 - 0x7cu, 0u);
        t62 = rd32(rd32(COW_IMG(0x1099d200u)) + 0x9fcu);
        wr32(sp0 - 0x80u, t62);
        cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x9fcu)) + 0x2cu), rd32(rd32(rd32(COW_IMG(0x1099d200u)) + 0x9fcu)), 5, t62, 0u, 0x50u, sp0 - 0x5cu, 0x2000u);
        t63 = rd32(sp0 - 0x5cu);
        wrf32(sp0 + 0x10u, (float)(double)(int32_t)arg1);
        wrf32(t63, (float)(double)(int32_t)arg1);
        d64 = (double)(float)(double)(int32_t)rd32(sp0 + 8u);
        wrf32(sp0 - 0x44u, (float)d64);
        t65 = rd32(sp0 + 8u);
        wrf32(rd32(sp0 - 0x5cu) + 4u, (float)(double)(int32_t)t65);
        t66 = rd32(sp0 - 0x5cu);
        wrf32(sp0 + 0xcu, (float)(double)(int32_t)arg5);
        wr32(t66 + 8u, 0u);
        d67 = fr(g, (double)rdf32(sp0 + 0xcu) / (double)(int32_t)rd32(sp0 - 0x50u));
        wrf32(rd32(sp0 - 0x5cu) + 0xcu, (float)d67);
        if (arg9 == 0u)
        {
            loc_44_f = d64;
            x0 = (double)(int32_t)rd32(sp0 + 0x18u);
            d69 = fr(g, x0 / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x10u, (float)d69);
        }
        else
        {
            loc_44_f = d64;
            x0 = (double)(int32_t)rd32(sp0 + 0x18u);
            d68 = fr(g, fr(g, (double)(int32_t)arg8 + x0) / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x10u, (float)d68);
        }
        t70 = rd32(sp0 + 8u);
        d71 = (double)rdf32(sp0 + 0x10u);
        wrf32(rd32(sp0 - 0x5cu) + 0x14u, (float)d71);
        t72 = rd32(sp0 - 0x5cu);
        wr32(sp0 + 8u, ebx + t70);
        d73 = (double)(int32_t)rd32(sp0 + 8u);
        wrf32(t72 + 0x18u, (float)d73);
        wr32(rd32(sp0 - 0x5cu) + 0x1cu, 0u);
        d74 = fr(g, (double)rdf32(sp0 + 0xcu) / (double)(int32_t)rd32(sp0 - 0x50u));
        wrf32(rd32(sp0 - 0x5cu) + 0x20u, (float)d74);
        if (arg9 == 0u)
        {
            x1 = d73;
            d76 = fr(g, fr(g, (double)(int32_t)arg8 + x0) / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x24u, (float)d76);
        }
        else
        {
            x1 = d73;
            d75 = fr(g, x0 / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x24u, (float)d75);
        }
        t77 = rd32(sp0 - 0x5cu);
        wr32(sp0 + 8u, arg1 + edi);
        d78 = (double)(int32_t)rd32(sp0 + 8u);
        wrf32(t77 + 0x28u, (float)d78);
        wrf32(rd32(sp0 - 0x5cu) + 0x2cu, (float)loc_44_f);
        wr32(rd32(sp0 - 0x5cu) + 0x30u, 0u);
        d79 = fr(g, fr(g, (double)(int32_t)arg7 + (double)rdf32(sp0 + 0xcu)) / (double)(int32_t)rd32(sp0 - 0x50u));
        wrf32(rd32(sp0 - 0x5cu) + 0x34u, (float)d79);
        if (arg9 == 0u)
        {
            x2 = d78;
            d81 = fr(g, x0 / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x38u, (float)d81);
        }
        else
        {
            x2 = d78;
            d80 = fr(g, fr(g, (double)(int32_t)arg8 + x0) / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x38u, (float)d80);
        }
        wrf32(rd32(sp0 - 0x5cu) + 0x3cu, (float)x2);
        wrf32(rd32(sp0 - 0x5cu) + 0x40u, (float)x1);
        wr32(rd32(sp0 - 0x5cu) + 0x44u, 0u);
        d82 = fr(g, fr(g, (double)(int32_t)arg7 + (double)rdf32(sp0 + 0xcu)) / (double)(int32_t)rd32(sp0 - 0x50u));
        wrf32(rd32(sp0 - 0x5cu) + 0x48u, (float)d82);
        if (arg9 == 0u)
        {
            d84 = fr(g, fr(g, (double)(int32_t)arg8 + x0) / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x4cu, (float)d84);
        }
        else
        {
            d83 = fr(g, x0 / (double)(int32_t)rd32(sp0 - 0x54u));
            wrf32(rd32(sp0 - 0x5cu) + 0x4cu, (float)d83);
        }
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x9fcu);
        edx = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = rd32(COW_IMG(0x1099d200u));
        edx = t26;
        if (rd32(eax + 0xa00u) == 0u)
        {
            eax = eax + 0xa00u;
            wr32(sp0 - 0x70u, eax);
            wr32(sp0 - 0x74u, 0u);
            wr32(sp0 - 0x78u, 2u);
            wr32(sp0 - 0x7cu, 0x208u);
            wr32(sp0 - 0x80u, 0x3cu);
            wr32(sp0 - 0x84u, rd32(COW_IMG(0x1066941cu)));
            g->eax = eax;
            g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
            t27 = rd32(COW_IMG(0x1066941cu));
            t28 = rd32(rd32(COW_IMG(0x1066941cu)));
            g->esp = sp0 - 0x6cu;
            t29 = cow_thiscall(g, rd32(t28 + 0x5cu), t27, 6, t27, 0x3cu, 0x208u, 2u, 0u, eax);
            t30 = g->ecx;
            t31 = g->edx;
            if (t29 == 0u)
            {
                edx = t31;
            }
            else
            {
                eax = t29;
                ecx = t30;
                edx = t31;
                wr32(sp0 - 0x70u, COW_IMG(0x103b4840u));
                g->ebx = ebx;
                g->edx = edx;
                g->esp = sp0 - 0x68u;
                cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4840u), rd32(sp0 - 0x6cu));
                t32 = g->edx;
                edx = t32;
            }
        }
        wr32(sp0 - 0x70u, 1u);
        wr32(sp0 - 0x74u, 0x89u);
        wr32(sp0 - 0x78u, rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x6cu;
        cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xc8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), 0x89u, 1u);
        wr32(sp0 - 0x70u, 0xcu);
        t33 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa00u);
        wr32(sp0 - 0x74u, t33);
        wr32(sp0 - 0x78u, 0u);
        wr32(sp0 - 0x7cu, rd32(COW_IMG(0x1066941cu)));
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t34 = rd32(COW_IMG(0x1066941cu));
        t35 = rd32(rd32(COW_IMG(0x1066941cu)));
        t36 = cow_thiscall(g, rd32(t35 + 0x14cu), t33, 4, t34, 0u, t33, 0xcu);
        t37 = g->ecx;
        t38 = g->edx;
        if (t36 == 0u)
        {
            ecx = t37;
        }
        else
        {
            eax = t36;
            ecx = t37;
            edx = t38;
            wr32(sp0 - 0x70u, COW_IMG(0x103b4834u));
            g->ebx = ebx;
            g->ecx = ecx;
            g->esp = sp0 - 0x68u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4834u), rd32(sp0 - 0x6cu));
            t39 = g->ecx;
            ecx = t39;
        }
        wr32(sp0 - 0x70u, 2u);
        wr32(sp0 - 0x74u, rd32(COW_IMG(0x1066941cu)));
        g->eax = rd32(COW_IMG(0x1066941cu));
        g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
        t40 = rd32(COW_IMG(0x1066941cu));
        t41 = rd32(rd32(COW_IMG(0x1066941cu)));
        g->esp = sp0 - 0x6cu;
        t42 = cow_thiscall(g, rd32(t41 + 0x130u), ecx, 2, t40, 2u);
        t43 = g->ecx;
        t44 = g->edx;
        if (t42 != 0u)
        {
            eax = t42;
            ecx = t43;
            edx = t44;
            wr32(sp0 - 0x70u, COW_IMG(0x103b4828u));
            g->ebx = ebx;
            g->esp = sp0 - 0x68u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4828u), rd32(sp0 - 0x6cu));
        }
        wr32(sp0 - 0x70u, 0x2000u);
        wr32(sp0 - 0x74u, sp0 - 0x58u);
        wr32(sp0 - 0x78u, 0x30u);
        wr32(sp0 - 0x7cu, 0u);
        t45 = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa00u);
        wr32(sp0 - 0x80u, t45);
        g->eax = t45;
        g->edx = sp0 - 0x58u;
        t46 = rd32(t45);
        g->esp = sp0 - 0x6cu;
        t47 = cow_thiscall(g, rd32(t46 + 0x2cu), t46, 5, t45, 0u, 0x30u, sp0 - 0x58u, 0x2000u);
        t48 = g->ecx;
        t49 = g->edx;
        if (t47 != 0u)
        {
            eax = t47;
            ecx = t48;
            edx = t49;
            wr32(sp0 - 0x70u, COW_IMG(0x103b481cu));
            g->ebx = ebx;
            g->esp = sp0 - 0x68u;
            cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b481cu), rd32(sp0 - 0x6cu));
        }
        wrf32(rd32(sp0 - 0x58u), (float)(double)(int32_t)arg1);
        d50 = (double)(int32_t)rd32(sp0 + 8u);
        wrf32(rd32(sp0 - 0x58u) + 4u, (float)d50);
        t51 = rd32(sp0 + 8u);
        wr32(rd32(sp0 - 0x58u) + 8u, 0u);
        wrf32(rd32(sp0 - 0x58u) + 0xcu, (float)(double)(int32_t)arg1);
        t52 = rd32(sp0 - 0x58u);
        wr32(sp0 + 8u, ebx + t51);
        t53 = rd32(sp0 + 8u);
        wrf32(sp0 + 0x18u, (float)(double)(int32_t)t53);
        wrf32(t52 + 0x10u, (float)(double)(int32_t)t53);
        t54 = rd32(sp0 - 0x58u);
        wr32(sp0 + 8u, arg1 + edi);
        t55 = rd32(sp0 + 8u);
        wr32(t54 + 0x14u, 0u);
        t56 = rd32(sp0 - 0x58u);
        wrf32(sp0 + 8u, (float)(double)(int32_t)t55);
        wrf32(t56 + 0x18u, (float)(double)(int32_t)t55);
        wrf32(rd32(sp0 - 0x58u) + 0x1cu, (float)d50);
        d57 = (double)rdf32(sp0 + 8u);
        wr32(rd32(sp0 - 0x58u) + 0x20u, 0u);
        wrf32(rd32(sp0 - 0x58u) + 0x24u, (float)d57);
        d58 = (double)rdf32(sp0 + 0x18u);
        wrf32(rd32(sp0 - 0x58u) + 0x28u, (float)d58);
        wr32(rd32(sp0 - 0x58u) + 0x2cu, 0u);
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0xa00u);
        edx = rd32(COW_IMG(0x1099d200u));
    }
    wr32(sp0 - 0x70u, eax);
    t85 = rd32(eax);
    g->esp = sp0 - 0x6cu;
    cow_thiscall(g, rd32(t85 + 0x30u), t85, 1, eax);
    t86 = g->ecx;
    wr32(sp0 - 0x70u, 2u);
    wr32(sp0 - 0x74u, 0u);
    wr32(sp0 - 0x78u, 5u);
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x1066941cu)));
    g->eax = rd32(COW_IMG(0x1066941cu));
    g->edx = rd32(rd32(COW_IMG(0x1066941cu)));
    t87 = rd32(COW_IMG(0x1066941cu));
    t88 = rd32(rd32(COW_IMG(0x1066941cu)));
    t89 = cow_thiscall(g, rd32(t88 + 0x118u), t86, 4, t87, 5u, 0u, 2u);
    t90 = g->ecx;
    t91 = g->edx;
    wr32(sp0 - 0x70u, 1u);
    g->esp = sp0 - 0x64u;
    cow_call_regs(g, COW_IMG(0x10282490u), g->eax, t90, t91, 1, 3, 1u, rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u));
    g->ebx = rd32(sp0 - 0x60u);
    g->esi = rd32(sp0 - 0x68u);
    g->edi = rd32(sp0 - 0x6cu);
    g->ebp = rd32(sp0 - 0x64u);
    return;
L_10280eeb: ;
    if ((int32_t)edi < 0) goto L_10280ef3;
    if ((int32_t)ebx >= 0) goto L_10280ef7;
L_10280ef3: ;
    ebx = ecx;
    edi = eax;
    goto L_10280ef7;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10280e00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10280e00(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
