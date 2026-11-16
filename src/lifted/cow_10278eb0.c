/* f_0x10278eb0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10278eb0(Guest* g)
{
    double d12;
    double d13;
    double d14;
    double d19;
    double d20;
    double d21;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_68;
    uint32_t loc_6c;
    double loc_6c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg5 = rd32(g->esp + 0x14u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 160u);

    wr32(sp0 - 0x70u, in_ebx);
    wr32(sp0 - 0x74u, in_ebp);
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) <= 0) goto L_102790ca;
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebp = 0u;
    loc_68 = 0u;
    loc_6c = 0u;
L_10278ed1: ;
    wr32(sp0 - 0x80u, ebp);
    wr32(sp0 - 0x84u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, ebp);
    t2 = g->ecx;
    t3 = g->edx;
    if (rd32(t1) != 0xb0001u)
    {
        ecx = t2;
        edx = t3;
        goto L_102790a0;
    }
    edx = t3;
    esi = t1;
    if (rd32(sp0 - 0x68u) != arg2)
    {
        ecx = arg2;
        goto L_1027909c;
    }
    eax = rd32(sp0 - 0x68u);
    if ((int32_t)arg3 < 0) goto L_102790b8;
    if ((int32_t)arg3 >= (int32_t)rd32(esi + 0x28u)) goto L_102790b8;
    t4 = rd32(rd32(esi + 0x1cu) + 0x68u);
    wr32(rd32(esi + 0x1cu) + 0x68u, 0u);
    wr32(sp0 - 0x80u, sp0 - 0x10u);
    wr32(sp0 - 0x84u, sp0 - 0x4cu);
    t5 = arg3 * 0xf8u + rd32(esi + 0x20u);
    wr32(sp0 - 0x88u, t5);
    wr32(sp0 - 0x8cu, esi);
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x1027cd50u), 4, esi, t5, sp0 - 0x4cu, sp0 - 0x10u);
    wr32(sp0 - 0x90u, sp0 - 0x4cu);
    wr32(sp0 - 0x94u, arg4);
    wr32(sp0 - 0x98u, sp0 - 0x64u);
    g->ecx = arg4;
    g->edx = sp0 - 0x64u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x64u, arg4, sp0 - 0x4cu);
    t6 = g->ecx;
    t7 = g->edx;
    if (t4 == 0u)
    {
        ecx = t6;
        edx = t7;
        ebx = t4;
        edi = t5;
    }
    else
    {
        edx = t7;
        ebx = t4;
        edi = t5;
        t8 = rd32(ebx + 0x64u) + 0x68u;
        wr32(sp0 - 0x80u, t8);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        g->eax = t8;
        g->ecx = sp0 - 0x40u;
        t9 = rd32(ebx + 0x64u);
        g->esp = sp0 - 0x7cu;
        t10 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x40u, t8);
        t11 = g->ecx;
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x1027b080u), 1, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        d12 = (double)(float)fr(g, (double)rdf32(sp0 - 0x64u) - (double)rdf32(t9 + 0x5cu));
        wrf32(sp0 - 0x64u, (float)d12);
        d13 = (double)(float)fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(t9 + 0x60u));
        wrf32(sp0 - 0x60u, (float)d13);
        d14 = (double)(float)fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(t9 + 0x64u));
        wrf32(sp0 - 0x5cu, (float)d14);
        g->ecx = sp0 - 0x40u;
        g->edx = sp0 - 0x64u;
        g->esp = sp0 - 0x88u;
        cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x64u, sp0 - 0x40u, sp0 - 0x64u);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
        ebp = rd32(sp0 - 0x6cu);
    }
    if (rd32(edi + 0x68u) == 0u)
    {
        eax = rd32(edi + 0x68u);
    }
    else
    {
        eax = rd32(edi + 0x68u);
        wr32(sp0 - 0x80u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x58u);
        wr32(sp0 - 0x88u, eax);
        wr32(sp0 - 0x8cu, esi);
        g->ecx = sp0 - 0x30u;
        g->edx = sp0 - 0x58u;
        g->esp = sp0 - 0x7cu;
        cow_cdecl(g, COW_IMG(0x1027cd50u), 4, esi, eax, sp0 - 0x58u, sp0 - 0x30u);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x1027b080u), 1, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x9cu, sp0 - 0x64u);
        d19 = (double)(float)fr(g, (double)rdf32(sp0 - 0x64u) - (double)rdf32(sp0 - 0x58u));
        wrf32(sp0 - 0x64u, (float)d19);
        d20 = (double)(float)fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 0x60u, (float)d20);
        d21 = (double)(float)fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x5cu, (float)d21);
        g->eax = sp0 - 0x64u;
        g->ecx = sp0 - 0x64u;
        g->edx = sp0 - 0x30u;
        g->esp = sp0 - 0x90u;
        t22 = cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x64u, sp0 - 0x30u, sp0 - 0x64u);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    d25 = (double)(float)fr(g, atan2((double)rdf32(sp0 - 0x64u), (double)rdf32(sp0 - 0x5cu)));
    wrf32(sp0 - 0x6cu, (float)d25);
    d26 = fr(g, atan2((double)rdf32(sp0 - 0x64u), (double)rdf32(sp0 - 0x5cu)));
    d27 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d26, d27, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d26, d27, 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d26, d27, 0u) & 0x4100u;
        wr32(sp0 - 0x6cu, arg5);
        ecx = arg5;
    }
    d28 = (double)rdf32(sp0 - 0x6cu);
    d29 = -(double)rdf32(sp0 + 0x14u);
    if (!(d28 < d29))
    {
        x0 = -(double)rdf32(sp0 + 0x14u);
    }
    else
    {
        x0 = -(double)rdf32(sp0 + 0x14u);
        wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
        loc_6c_f = (double)(float)x0;
    }
    if (rd32(edi + 0x64u) != 0u)
    {
        edi = rd32(edi + 0x64u);
        wr32(sp0 - 0x80u, cow_f2bits(loc_6c_f));
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x7cu;
        t30 = cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x20u, cow_f2bits(loc_6c_f));
        wr32(sp0 - 0x88u, edi + 0x68u);
        wr32(sp0 - 0x8cu, sp0 - 0x20u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        g->ecx = sp0 - 0x20u;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x40u, sp0 - 0x20u, edi + 0x68u);
        t31 = g->ecx;
        t32 = g->edx;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        wr32(sp0 - 0x98u, edi + 0x68u);
        g->edx = t32;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, edi + 0x68u, sp0 - 0x40u);
        t33 = g->edx;
        edx = t33;
    }
    t34 = rd32(esi + 0x1cu);
    wr32(t34 + 0x68u, ebx);
    ecx = t34;
L_1027909c: ;
    t36 = rd32(sp0 - 0x68u) + 1u;
    wr32(sp0 - 0x68u, t36);
    loc_68 = t36;
L_102790a0: ;
    wr32(sp0 - 0x6cu, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x44u);
        loc_6c = ebp + 1u;
        ebp = ebp + 1u;
        goto L_10278ed1;
    }
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x78u);
    g->edi = rd32(sp0 - 0x7cu);
    g->ebp = rd32(sp0 - 0x74u);
    return;
L_102790b8: ;
    t35 = rd32(esi + 0x28u);
    wr32(sp0 - 0x80u, t35);
    wr32(sp0 - 0x84u, arg3);
    wr32(sp0 - 0x88u, COW_IMG(0x103b3c30u));
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3c30u), arg3);
L_102790ca: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10278eb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10278eb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
