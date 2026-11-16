/* f_0x1024fc30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1024fc30(Guest* g)
{
    double d1;
    double d11;
    double d12;
    double d13;
    double d17;
    double d18;
    double d2;
    double d23;
    double d24;
    double d26;
    double d28;
    double d29;
    double d3;
    double d30;
    double d32;
    double d33;
    double d34;
    double d38;
    double d39;
    double d5;
    double d7;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    double loc_4_f;
    uint32_t t10;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t19;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t25;
    uint32_t t27;
    uint32_t t31;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 32u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if ((int32_t)rd32(rd32(sp0 + 4u) + 4u) < 2)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        esi = rd32(sp0 + 4u);
        d1 = (double)(float)fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1033cd68u)));
        wrf32(sp0 - 4u, (float)d1);
        d2 = fr(g, fr(g, fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x1033cd68u))) * (double)rdf32(esi + 0x5cu)) + (double)rdf32(esi + 0x58u));
        wrf32(sp0 + 4u, (float)d2);
        d3 = (double)rdf32(esi + 0x5cu);
        t4 = rd32(sp0 + 4u);
        d5 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi + 0x58u, t4);
        if (d3 != d5)
        {
            eax = (t4 & 0xffff0000u) | (uint16_t)cow_fsw(g, d3, d5, 0u);
            loc_4_f = d1;
            goto L_1024fc77;
        }
        loc_4_f = d1;
        t6 = rd32(esi + 0x54u);
        wr32(esi + 0x58u, t6);
L_1024fccc: ;
        t15 = (rd32(esi) & 0xffffff00u) | (rd32(esi) & 0xfbu);
        wr32(esi, t15);
        eax = t15;
L_1024fcd2: ;
        wr32(sp0 - 0xcu, in_ebx);
        t16 = rd32(esi + 0x58u);
        d17 = (double)rdf32(COW_IMG(0x1032961cu));
        wr32(sp0 + 4u, t16);
        wr32(sp0 - 0x10u, in_ebp);
        wr32(sp0 - 0x14u, in_edi);
        wr32(sp0 - 0x18u, t16);
        wr32(sp0 - 0x1cu, esi + 0xccu);
        d18 = fr(g, d17 / (double)rdf32(sp0 + 4u));
        wrf32(sp0 + 8u, (float)d18);
        g->edx = t16;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10252b70u), 2, esi + 0xccu, t16);
        t19 = g->edx;
        edx = t19;
        ebx = esi + 0xccu;
        ebp = 4u;
        edi = esi + 0x1d8u;
L_1024fd07: ;
        if ((int32_t)rd32(edi) < 0)
        {
            eax = rd32(edi);
        }
        else
        {
            eax = rd32(edi);
            if (eax == rd32(ebx + 8u))
            {
                t20 = rd32(sp0 + 8u);
                wr32(sp0 - 0x18u, t20);
                wr32(sp0 - 0x1cu, edi - 8u);
                g->eax = t20;
                g->edx = edx;
                g->esp = sp0 - 8u;
                t21 = cow_thiscall_cdecl(g, COW_IMG(0x102511d0u), edi - 8u, 5, edi - 8u, t20, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t22 = g->edx;
                eax = t21;
                edx = t22;
            }
        }
        if (ebp != 1u)
        {
            ebp = ebp - 1u;
            edi = edi + 0x1cu;
            goto L_1024fd07;
        }
        d23 = fr(g, fr(g, (double)rdf32(sp0 - 4u) * (double)rdf32(esi + 0x68u)) + (double)rdf32(esi + 0x64u));
        wrf32(sp0 + 8u, (float)d23);
        d24 = (double)rdf32(esi + 0x68u);
        t25 = rd32(sp0 + 8u);
        d26 = (double)rdf32(COW_IMG(0x103295d8u));
        wr32(esi + 0x64u, t25);
        if (d24 != d26)
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d24, d26, 0u);
            edx = t25;
            goto L_1024fd56;
        }
        edx = t25;
        t27 = rd32(esi + 0x60u);
        wr32(esi + 0x64u, t27);
L_1024fdab: ;
        t36 = (rd32(esi) & 0xffffff00u) | (rd32(esi) & 0xfbu);
        wr32(esi, t36);
L_1024fdb1: ;
        t37 = rd32(esi + 0x64u);
        d38 = (double)rdf32(COW_IMG(0x1032961cu));
        wr32(sp0 + 4u, t37);
        wr32(sp0 - 0x18u, t37);
        wr32(sp0 - 0x1cu, esi + 0xa8u);
        d39 = fr(g, d38 / (double)rdf32(sp0 + 4u));
        wrf32(sp0 + 8u, (float)d39);
        g->ecx = t37;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10252b70u), 2, esi + 0xa8u, t37);
        t40 = g->ecx;
        ecx = t40;
        ebx = 4u;
        ebp = rd32(sp0 + 8u);
        edi = esi + 0xa8u;
        esi = esi + 0x168u;
L_1024fde7: ;
        if ((int32_t)rd32(esi) >= 0)
        {
            eax = rd32(esi);
            if (eax == rd32(edi + 8u))
            {
                wr32(sp0 - 0x18u, ebp);
                wr32(sp0 - 0x1cu, esi - 8u);
                g->esp = sp0 - 8u;
                cow_thiscall_cdecl(g, COW_IMG(0x102511d0u), ecx, 5, esi - 8u, ebp, rd32(sp0 - 0x14u), rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
                t41 = g->ecx;
                ecx = t41;
            }
        }
        if (ebx != 1u)
        {
            ebx = ebx - 1u;
            esi = esi + 0x1cu;
            goto L_1024fde7;
        }
        ebx = rd32(sp0 - 0xcu);
        ebp = rd32(sp0 - 0x10u);
        edi = rd32(sp0 - 0x14u);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1024fc77: ;
    d7 = (double)rdf32(esi + 0x5cu);
    if (!(d7 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1024fc9d;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d7, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d8 = (double)rdf32(sp0 + 4u);
    d9 = (double)rdf32(esi + 0x54u);
    if (!(d8 <= d9))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, d9, 0u);
        goto L_1024fc9d;
    }
    t10 = rd32(esi + 0x54u);
    wr32(esi + 0x58u, t10);
L_1024fcc5: ;
    wr32(esi + 0x5cu, 0u);
    goto L_1024fccc;
L_1024fc9d: ;
    d11 = (double)rdf32(esi + 0x5cu);
    if ((cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
        goto L_1024fcd2;
    }
    eax = cow_fsw(g, d11, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    d12 = (double)rdf32(sp0 + 4u);
    d13 = (double)rdf32(esi + 0x54u);
    if ((cow_fsw(g, d12, d13, 0u) & 0x100u) != 0u)
    {
        eax = cow_fsw(g, d12, d13, 0u) & 0x100u;
        goto L_1024fcd2;
    }
    t14 = rd32(esi + 0x54u);
    wr32(esi + 0x58u, t14);
    goto L_1024fcc5;
L_1024fd56: ;
    d28 = (double)rdf32(esi + 0x68u);
    if (!(d28 < (double)rdf32(COW_IMG(0x103295d8u))))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        goto L_1024fd7c;
    }
    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d28, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
    d29 = (double)rdf32(sp0 + 8u);
    d30 = (double)rdf32(esi + 0x60u);
    if (!(d29 <= d30))
    {
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, d30, 0u);
        goto L_1024fd7c;
    }
    t31 = rd32(esi + 0x60u);
    wr32(esi + 0x64u, t31);
L_1024fda4: ;
    wr32(esi + 0x68u, 0u);
    goto L_1024fdab;
L_1024fd7c: ;
    d32 = (double)rdf32(esi + 0x68u);
    if ((cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u) goto L_1024fdb1;
    eax = cow_fsw(g, d32, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u;
    d33 = (double)rdf32(sp0 + 8u);
    d34 = (double)rdf32(esi + 0x60u);
    if ((cow_fsw(g, d33, d34, 0u) & 0x100u) != 0u) goto L_1024fdb1;
    t35 = rd32(esi + 0x60u);
    wr32(esi + 0x64u, t35);
    edx = t35;
    goto L_1024fda4;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1024fc30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1024fc30(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
