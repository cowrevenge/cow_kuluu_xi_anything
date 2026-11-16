/* f_0x1003ba20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
uint32_t cow_fn_1003ba20(Guest* g)
{
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d43;
    double d44;
    double d50;
    double d52;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_10;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_50;
    uint32_t loc_54;
    uint32_t loc_58;
    uint32_t loc_8;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t51;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
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
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x50u, in_ebx);
    wr32(sp0 - 0x54u, in_esi);
    wr32(sp0 - 0x58u, in_edi);
    if (rd32(sp0 + 0x14u) == 0u)
    {
        wr32(sp0 - 0x18u, 0u);
        wr32(sp0 - 0x1cu, 0u);
        wr32(sp0 - 0x20u, 0u);
        edx = in_edx;
        loc_18 = 0u;
        loc_1c = 0u;
        loc_20 = 0u;
    }
    else
    {
        ebx = rd32(sp0 + 0x14u);
        wr32(sp0 - 0x5cu, in_ebp);
        t1 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) + 1u;
        t2 = rd32(rd32(COW_IMG(0x1047cf7cu)) + rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) * 4u + 0xa10u);
        wr32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u, t1);
        g->eax = rd32(COW_IMG(0x1047cf7cu));
        g->edx = rd32(arg3);
        t3 = rd32(COW_IMG(0x1047cf7cu));
        t4 = rd32(arg3);
        t5 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        g->esp = sp0 - 0x5cu;
        t6 = cow_thiscall(g, rd32(t4 + 0x1c0u), arg3, 0);
        t7 = g->edx;
        t8 = rd32(t6 + 4u);
        wr32(sp0 - 0x60u, t8);
        wr32(sp0 - 0x64u, t2);
        cow_thiscall(g, rd32(t5 + 0x64u), rd32(COW_IMG(0x1047cf7cu)), 2, t2, t8);
        wr32(sp0 - 0x60u, ebx);
        wr32(sp0 - 0x64u, t2);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
        t9 = rd32(rd32(COW_IMG(0x1047cf7cu)));
        cow_thiscall(g, rd32(t9 + 0x50u), rd32(COW_IMG(0x1047cf7cu)), 3, sp0 - 0x20u, t2, ebx);
        t10 = g->edx;
        t11 = rd32(rd32(COW_IMG(0x1047cf7cu)) + 0xa90u) - 1u;
        t12 = rd32(COW_IMG(0x1047cf7cu));
        wr32(t12 + 0xa90u, t11);
        wr32(t11 * 4u + t12 + 0xa10u, t2);
        edx = t10;
    }
    wr32(sp0 - 0x14u, 0x3f800000u);
    if (arg2 - 0x30u > 0xcu)
    {
        eax = arg2;
        goto L_1003bcf9;
    }
    t13 = rd32(COW_IMG(0x1003bd50u) + arg2 * 4u - 0xc0u);
    switch (t13 - RD)
    {
    case 0x1003bad0u: goto L_1003bad0;
    case 0x1003baefu: goto L_1003baef;
    case 0x1003bb0eu: goto L_1003bb0e;
    case 0x1003bb8eu: goto L_1003bb8e;
    case 0x1003bbc0u: goto L_1003bbc0;
    case 0x1003bccau: goto L_1003bcca;
    case 0x1003bcd1u: goto L_1003bcd1;
    case 0x1003bcd8u: goto L_1003bcd8;
    case 0x1003bcdfu: goto L_1003bcdf;
    case 0x1003bce6u: goto L_1003bce6;
    case 0x1003bcedu: goto L_1003bced;
    case 0x1003bcf4u: goto L_1003bcf4;
    default: rt_fatal(g, COW_IMG(0x1003bac9u), "switch");
    }
    return 0;
L_1003bad0: ;
    if (arg3 == 0u) goto L_1003bcfd;
    loc_50 = in_ebx;
    loc_54 = in_esi;
    loc_58 = in_edi;
    x2 = (double)rdf32(arg3 + 0x644u);
    x1 = (double)rdf32(arg3 + 0x640u);
    x0 = (double)rdf32(arg3 + 0x63cu);
L_1003bd39: ;
    wrf32(arg1, (float)x0);
    wrf32(arg1 + 4u, (float)x1);
    wrf32(arg1 + 8u, (float)x2);
    g->ebx = loc_50;
    g->esi = loc_54;
    g->edi = loc_58;
    g->edx = edx;
    return arg1;
L_1003baef: ;
    if (arg3 == 0u) goto L_1003bcfd;
    loc_50 = in_ebx;
    loc_54 = in_esi;
    loc_58 = in_edi;
    x2 = (double)rdf32(arg3 + 0x654u);
    x1 = (double)rdf32(arg3 + 0x650u);
    x0 = (double)rdf32(arg3 + 0x64cu);
    goto L_1003bd39;
L_1003bb0e: ;
    if (arg3 == 0u) goto L_1003bcfd;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, 0u);
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c4u), arg3, 2, 0u, sp0 - 0x40u);
    t48 = rd32(sp0 - 0x40u);
    wr32(sp0 - 0x10u, t48);
    t49 = rd32(sp0 - 0x38u);
    wr32(sp0 - 8u, t49);
    d50 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x3cu, (float)d50);
    t51 = rd32(sp0 - 0x34u);
    wr32(sp0 - 4u, t51);
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    wr32(sp0 - 0x60u, sp0 - 0x10u);
    wr32(sp0 - 0x64u, sp0 - 0x40u);
    d52 = (double)(float)fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(COW_IMG(0x1032a3e8u)));
    wrf32(sp0 - 0xcu, (float)d52);
    g->eax = sp0 - 0x40u;
    g->edx = sp0 - 0x10u;
    t53 = cow_thiscall(g, COW_IMG(0x10181590u), rd32(COW_IMG(0x10631f24u)), 3, sp0 - 0x40u, sp0 - 0x10u, sp0 - 0x30u);
    t54 = g->edx;
    if ((uint8_t)t53 == 0u)
    {
        edx = t54;
        goto L_1003bcfd;
    }
    edx = t54;
    x2 = (double)rdf32(sp0 - 0x28u);
    x1 = (double)rdf32(sp0 - 0x2cu);
    x0 = (double)rdf32(sp0 - 0x30u);
    goto L_1003bd39;
L_1003bb8e: ;
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    t22 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t23 = g->edx;
    t24 = rd32(t22 + 0x44u);
    wr32(sp0 - 0x40u, t24);
    g->ecx = t24;
    t25 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t26 = g->ecx;
    t27 = rd32(t25 + 0x48u);
    wr32(sp0 - 0x3cu, t27);
    g->ecx = t26;
    g->edx = t27;
    t28 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t29 = g->ecx;
    t30 = g->edx;
    t31 = rd32(t28 + 0x4cu);
    wr32(sp0 - 0x38u, t31);
    t32 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
    t33 = rd32(t32 + 0x50u);
    wr32(sp0 - 0x34u, t33);
L_1003bc0f: ;
    wr32(sp0 + 0x14u, 0x4b7fffffu);
    edi = 0xdu;
L_1003bc1c: ;
    wr32(sp0 - 0x5cu, sp0 - 0x30u);
    wr32(sp0 - 0x60u, edi);
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, rd32(rd32(arg3) + 0x1c4u), arg3, 2, edi, sp0 - 0x30u);
    wr32(sp0 - 0x5cu, sp0 - 0x4cu);
    d34 = (double)(float)fr(g, (double)rdf32(sp0 - 0x30u) + (double)rdf32(sp0 - 0x20u));
    wrf32(sp0 - 0x30u, (float)d34);
    d35 = (double)(float)fr(g, (double)rdf32(sp0 - 0x2cu) + (double)rdf32(sp0 - 0x1cu));
    wrf32(sp0 - 0x2cu, (float)d35);
    d36 = (double)(float)fr(g, (double)rdf32(sp0 - 0x28u) + (double)rdf32(sp0 - 0x18u));
    wrf32(sp0 - 0x28u, (float)d36);
    d37 = (double)(float)fr(g, d34 - (double)rdf32(sp0 - 0x40u));
    wrf32(sp0 - 0x4cu, (float)d37);
    d38 = (double)(float)fr(g, d35 - (double)rdf32(sp0 - 0x3cu));
    wrf32(sp0 - 0x48u, (float)d38);
    d39 = (double)(float)fr(g, d36 - (double)rdf32(sp0 - 0x38u));
    wrf32(sp0 - 0x44u, (float)d39);
    g->eax = sp0 - 0x4cu;
    g->edx = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t40 = rd32(rd32(COW_IMG(0x1047cf7cu)));
    t41 = cow_thiscall(g, rd32(t40 + 0x94u), rd32(COW_IMG(0x1047cf7cu)), 1, sp0 - 0x4cu);
    t42 = g->edx;
    d43 = cow_take_float(g);
    d44 = (double)rdf32(sp0 + 0x14u);
    if (!(d43 < d44))
    {
        edx = t42;
        x0 = d43;
    }
    else
    {
        x0 = d43;
        t45 = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x10u, t45);
        t46 = rd32(sp0 - 0x28u);
        t47 = rd32(sp0 - 0x2cu);
        wrf32(sp0 + 0x14u, (float)x0);
        wr32(sp0 - 0xcu, t47);
        wr32(sp0 - 8u, t46);
        edx = t47;
        loc_10 = t45;
        loc_c = t47;
        loc_8 = t46;
    }
    if ((int32_t)(edi + 1u) <= 20)
    {
        edi = edi + 1u;
        goto L_1003bc1c;
    }
    x2 = cow_bits2f(loc_8);
    x1 = cow_bits2f(loc_c);
    x0 = cow_bits2f(loc_10);
    goto L_1003bd39;
L_1003bbc0: ;
    if (arg4 == 0u) goto L_1003bcfd;
    g->eax = arg2;
    g->esp = sp0 - 0x58u;
    t14 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    wr32(sp0 - 0x40u, rd32(t14));
    g->eax = rd32(t14);
    t15 = rd32(t14);
    t16 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    t17 = rd32(t16 + 4u);
    wr32(sp0 - 0x3cu, t17);
    g->eax = t17;
    t18 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    t19 = rd32(t18 + 8u);
    wr32(sp0 - 0x38u, t19);
    g->eax = t19;
    t20 = cow_thiscall(g, rd32(rd32(arg4) + 0x1bcu), arg4, 0);
    t21 = rd32(t20 + 0xcu);
    wr32(sp0 - 0x34u, t21);
    goto L_1003bc0f;
L_1003bcca: ;
    eax = 0x7eu;
L_1003bcf9: ;
    if (arg3 != 0u) goto L_1003bd11;
L_1003bcfd: ;
    loc_50 = in_ebx;
    loc_54 = in_esi;
    loc_58 = in_edi;
    x2 = (double)rdf32(COW_IMG(0x103295d8u));
    x1 = (double)rdf32(COW_IMG(0x103295d8u));
    x0 = (double)rdf32(COW_IMG(0x103295d8u));
    goto L_1003bd39;
L_1003bcd1: ;
    eax = 0x7fu;
    goto L_1003bcf9;
L_1003bcd8: ;
    eax = 0x66u;
    goto L_1003bcf9;
L_1003bcdf: ;
    eax = 0x67u;
    goto L_1003bcf9;
L_1003bce6: ;
    eax = 0x68u;
    goto L_1003bcf9;
L_1003bced: ;
    eax = 0x69u;
    goto L_1003bcf9;
L_1003bcf4: ;
    eax = 0x6au;
    goto L_1003bcf9;
L_1003bd11: ;
    wr32(sp0 - 0x5cu, sp0 - 0x40u);
    wr32(sp0 - 0x60u, eax);
    g->edx = rd32(arg3);
    t55 = rd32(arg3);
    g->esp = sp0 - 0x58u;
    cow_thiscall(g, rd32(t55 + 0x1c4u), arg3, 2, eax, sp0 - 0x40u);
    t56 = g->edx;
    edx = t56;
    loc_50 = in_ebx;
    loc_54 = in_esi;
    loc_58 = in_edi;
    x2 = fr(g, (double)rdf32(sp0 - 0x38u) + (double)rdf32(sp0 - 0x18u));
    x1 = fr(g, (double)rdf32(sp0 - 0x3cu) + (double)rdf32(sp0 - 0x1cu));
    x0 = fr(g, (double)rdf32(sp0 - 0x40u) + (double)rdf32(sp0 - 0x20u));
    goto L_1003bd39;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003ba20(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003ba20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
