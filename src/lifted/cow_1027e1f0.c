/* f_0x1027e1f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1027e1f0(Guest* g)
{
    double d16;
    double d27;
    double d31;
    double d32;
    double d34;
    double d38;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_1c;
    double loc_4_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    uint32_t t28;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t33;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
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
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
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

    t1 = rd32(sp0 + 4u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_cdecl(g, COW_IMG(0x1027e430u), 1, t1);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 != 0u)
    {
        ecx = t3;
        edx = t4;
        esi = t1;
        goto L_1027e215;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b46fcu), in_esi);
    return 0u;
L_1027e215: ;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t5 = cow_cdecl(g, COW_IMG(0x1027e460u), 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
    }
    else
    {
        ecx = t6;
        edx = t7;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0;
        t8 = cow_cdecl(g, COW_IMG(0x1027e3d0u), 3, esi, in_esi, self);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    }
    t11 = rd32(esi + 0x14u);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_call_regs(g, COW_IMG(0x1027df90u), eax, g->ecx, g->edx, 1, 1, t11);
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 + 4u, t12);
    g->ecx = t13;
    g->edx = t14;
    t15 = rd32(t11 + 0xb4u);
    d16 = fr(g, fr(g, (double)(int32_t)rd32(sp0 + 4u) / (double)rdf32(rd32(t11 + 0xb4u) + 0x20u)) * (double)rdf32(esi + 0xcu));
    fpush(g, d16);
    g->esp = sp0 - 0x18u;
    t17 = cow_call_regs(g, COW_IMG(0x10311c6cu), t15, g->ecx, g->edx, 1, 0);
    t18 = g->ecx;
    t19 = g->edx;
    wr32(sp0 + 4u, t17);
    g->edx = t19;
    t20 = cow_stdcall(g, COW_IMG(0x10293fa0u), 0);
    t21 = g->edx;
    wr32(t20 + 0x24u, t17);
    t22 = rd32(esi + 0xcu);
    wr32(t20 + 0x20u, t22);
    g->ecx = t22;
    g->edx = t21;
    g->esp = sp0 - 0xcu;
    t23 = cow_cdecl(g, COW_IMG(0x102945c0u), 5, t20, 2u, t11, in_edi, in_ebp);
    t24 = g->ecx;
    t25 = g->edx;
    if ((rd8(esi) & 8u) == 0u)
    {
        ecx = t24;
        ebx = t20;
        ebp = t11;
        edi = t17;
        loc_1c = t20;
        goto L_1027e2d8;
    }
    ecx = t24;
    edx = t25;
    ebx = t20;
    ebp = t11;
    edi = t17;
    loc_1c = t20;
    t26 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    d27 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032df98u)) / (double)(int32_t)t26);
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t28 = cow_cdecl(g, COW_IMG(0x102943d0u), 5, loc_1c, 0u, in_edi, in_ebp, in_ebx);
    t29 = g->ecx;
    t30 = g->edx;
    if ((int32_t)edi <= 0)
    {
        ecx = t29;
        edx = t30;
        loc_4_f = d27;
        goto L_1027e321;
    }
    eax = t28;
    ecx = t29;
    edx = t30;
    loc_4_f = d27;
    x0 = (double)rdf32(sp0 + 4u);
L_1027e2a4: ;
    d31 = fr(g, fr(g, fr(g, cos(fr(g, (double)rdf32(COW_IMG(0x1032df98u)) + x0))) + (double)rdf32(COW_IMG(0x1032961cu))) * (double)rdf32(COW_IMG(0x10329a08u)));
    wrf32(eax, (float)d31);
    d32 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - (double)rdf32(eax));
    wrf32(eax + 4u, (float)d32);
    if (edi != 1u)
    {
        eax = eax + 8u;
        edi = edi - 1u;
        x0 = fr(g, x0 + loc_4_f);
        goto L_1027e2a4;
    }
    x0 = fr(g, x0 + loc_4_f);
L_1027e31f: ;
L_1027e321: ;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t39 = cow_stdcall(g, COW_IMG(0x10294990u), 0);
    t40 = g->edx;
    wr32(t39 + 0x20u, 0u);
    t41 = rd32(ebx + 0x20u);
    wr32(t39 + 0x24u, t41);
    wr32(t39 + 0x28u, ebx);
    t42 = rd32(ebp + 0xb8u);
    g->eax = t41;
    g->ecx = t42;
    g->edx = t40;
    t43 = cow_cdecl(g, COW_IMG(0x1028d9a0u), 1, t42);
    t44 = g->ecx;
    t45 = g->edx;
    g->ecx = t44;
    g->esp = sp0 - 0xcu;
    cow_cdecl(g, COW_IMG(0x102956b0u), 5, t39, t43, t42, in_edi, in_ebp);
    t46 = g->ecx;
    t47 = rd32(rd32(esi + 0x14u) + 0xb8u);
    g->eax = t47;
    g->esp = sp0 - 0x18u;
    t48 = cow_cdecl(g, COW_IMG(0x10295740u), 4, t39, t47, t39, t43);
    t49 = rd32(rd32(esi + 0x18u) + 0xb8u);
    g->ecx = rd32(esi + 0x18u);
    g->edx = t49;
    t50 = rd32(esi + 0x18u);
    g->esp = sp0 - 0x20u;
    t51 = cow_cdecl(g, COW_IMG(0x10295740u), 4, t39, t49, t39, t47);
    t52 = g->ecx;
    t53 = g->edx;
    wr32(esi + 0x1cu, t39);
    g->esp = sp0 - 0x14u;
    t54 = cow_cdecl(g, COW_IMG(0x1028d9a0u), 3, t39, COW_IMG(0x1027e580u), esi);
    t55 = rd32(esi + 0x1cu);
    t56 = rd32(rd32(rd32(esi + 0x18u) + 0xbcu) + 0x20u);
    g->eax = t56;
    g->ecx = rd32(esi + 0x18u);
    g->edx = rd32(rd32(esi + 0x18u) + 0xbcu);
    t57 = rd32(esi + 0x18u);
    t58 = rd32(rd32(esi + 0x18u) + 0xbcu);
    t59 = cow_cdecl(g, COW_IMG(0x1028d8c0u), 6, esi + 0x20u, t56, t55, t54, COW_IMG(0x1027e580u), esi);
    t60 = g->ecx;
    t61 = g->edx;
    g->ecx = t60;
    g->edx = t61;
    g->esp = sp0 - 0x2cu;
    t62 = cow_call_regs(g, COW_IMG(0x10285800u), t59, g->ecx, g->edx, 1, 2, esi + 0x20u, 0u);
    t63 = g->ecx;
    t64 = g->edx;
    g->esp = sp0 - 0x34u;
    cow_cdecl(g, COW_IMG(0x1027e170u), 3, esi, 2u, 1u);
    t65 = rd32(rd32(esi + 0x18u) + 0xa0u);
    wr32(esi + 4u, t65);
    return 1u;
L_1027e2d8: ;
    wr32(sp0 + 4u, edi - 1u);
    t33 = rd32(sp0 + 4u);
    wr32(sp0 + 4u, 0u);
    d34 = (double)(float)fr(g, (double)rdf32(COW_IMG(0x1032961cu)) / (double)(int32_t)t33);
    g->ecx = ecx;
    g->edx = edi - 1u;
    g->esp = sp0 - 8u;
    t35 = cow_cdecl(g, COW_IMG(0x102943d0u), 5, loc_1c, 0u, in_edi, in_ebp, in_ebx);
    t36 = g->ecx;
    t37 = g->edx;
    if ((int32_t)edi <= 0)
    {
        ecx = t36;
        edx = t37;
        loc_4_f = d34;
        goto L_1027e321;
    }
    eax = t35;
    ecx = t36;
    edx = t37;
    loc_4_f = d34;
    x0 = (double)rdf32(sp0 + 4u);
L_1027e305: ;
    wrf32(eax, (float)x0);
    d38 = fr(g, (double)rdf32(COW_IMG(0x1032961cu)) - x0);
    wrf32(eax + 4u, (float)d38);
    if (edi != 1u)
    {
        eax = eax + 8u;
        edi = edi - 1u;
        x0 = fr(g, x0 + loc_4_f);
        goto L_1027e305;
    }
    x0 = fr(g, x0 + loc_4_f);
    goto L_1027e31f;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027e1f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027e1f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
