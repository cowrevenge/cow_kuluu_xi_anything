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
    uint32_t loc_70;
    uint32_t loc_74;
    uint32_t loc_78;
    uint32_t loc_7c;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 160u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10278ed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_10278ed1;
    case 0x10278ed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10278ed8;
    case 0x10278ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10278ee9;
    case 0x10278efcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278efc;
    case 0x10278f0bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f0b;
    case 0x10278f14u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f14;
    case 0x10278f3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f3f;
    case 0x10278f56u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f56;
    case 0x10278f5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f5d;
    case 0x10278f6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f6e;
    case 0x10278f78u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278f78;
    case 0x10278fadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278fad;
    case 0x10278fb4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278fb4;
    case 0x10278fbbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278fbb;
    case 0x10278fccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278fcc;
    case 0x10278fd6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10278fd6;
    case 0x1027900eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027900e;
    case 0x10279011u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10279011;
    case 0x1027902fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); goto E_1027902f;
    case 0x1027903au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027903a;
    case 0x10279050u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10279050;
    case 0x10279056u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10279056;
    case 0x10279058u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); goto E_10279058;
    case 0x1027905fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); goto E_1027905f;
    case 0x1027906eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027906e;
    case 0x10279081u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_10279081;
    case 0x1027908cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1027908c;
    case 0x1027908fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c_f = rdf32(sp0 - 0x6cu); goto E_1027908f;
    case 0x1027909cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_6c_f = rdf32(sp0 - 0x6cu); goto E_1027909c;
    case 0x102790a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_6c_f = rdf32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_102790a0;
    case 0x102790b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_102790b0;
    case 0x102790b8u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102790b8;
    case 0x102790c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_102790c7;
    case 0x102790cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_7c = rd32(sp0 - 0x7cu); loc_78 = rd32(sp0 - 0x78u); loc_74 = rd32(sp0 - 0x74u); loc_70 = rd32(sp0 - 0x70u); loc_6c = rd32(sp0 - 0x6cu); loc_68 = rd32(sp0 - 0x68u); goto E_102790ca;
    default: break;
    }
#endif

    COW_AT(10278eb0)
    wr32(sp0 - 0x70u, in_ebx);
    wr32(sp0 - 0x74u, in_ebp);
    wr32(sp0 - 0x78u, in_esi);
    wr32(sp0 - 0x7cu, in_edi);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0u);
    if ((int32_t)rd32(arg1 + 0x44u) <= 0)
    {
        loc_70 = in_ebx;
        loc_74 = in_ebp;
        loc_78 = in_esi;
        loc_7c = in_edi;
        goto L_102790ca;
    }
    eax = in_eax;
    ecx = self;
    edx = in_edx;
    ebx = in_ebx;
    ebp = 0u;
    loc_70 = in_ebx;
    loc_74 = in_ebp;
    loc_78 = in_esi;
    loc_7c = in_edi;
    loc_68 = 0u;
    loc_6c = 0u;
L_10278ed1: ;
    COW_AT(10278ed1)
    wr32(sp0 - 0x80u, ebp);
    wr32(sp0 - 0x84u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x7cu;
    t1 = cow_cdecl(g, COW_IMG(0x10279890u), 2, arg1, ebp);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(10278ed8)
    if (rd32(eax) != 0xb0001u)
    {
        loc_68 = rd32(sp0 - 0x68u);
        goto L_102790a0;
    }
    esi = eax;
    COW_AT(10278ee9)
    if (rd32(sp0 - 0x68u) != arg2)
    {
        ecx = arg2;
        goto L_1027909c;
    }
    eax = rd32(sp0 - 0x68u);
    COW_AT(10278efc)
    if ((int32_t)arg3 < 0) goto L_102790b8;
    COW_AT(10278f0b)
    if ((int32_t)arg3 >= (int32_t)rd32(esi + 0x28u)) goto L_102790b8;
    COW_AT(10278f14)
    t4 = rd32(rd32(esi + 0x1cu) + 0x68u);
    wr32(rd32(esi + 0x1cu) + 0x68u, 0u);
    wr32(sp0 - 0x80u, sp0 - 0x10u);
    wr32(sp0 - 0x84u, sp0 - 0x4cu);
    t5 = arg3 * 0xf8u + rd32(esi + 0x20u);
    wr32(sp0 - 0x88u, t5);
    wr32(sp0 - 0x8cu, esi);
    g->esp = sp0 - 0x7cu;
    cow_cdecl(g, COW_IMG(0x1027cd50u), 4, esi, t5, sp0 - 0x4cu, sp0 - 0x10u);
    ebx = t4;
    edi = t5;
    COW_AT(10278f3f)
    wr32(sp0 - 0x90u, sp0 - 0x4cu);
    wr32(sp0 - 0x94u, arg4);
    wr32(sp0 - 0x98u, sp0 - 0x64u);
    g->ecx = arg4;
    g->edx = sp0 - 0x64u;
    g->esp = sp0 - 0x8cu;
    cow_cdecl(g, COW_IMG(0x102749e0u), 3, sp0 - 0x64u, arg4, sp0 - 0x4cu);
    t6 = g->ecx;
    t7 = g->edx;
    ecx = t6;
    edx = t7;
    COW_AT(10278f56)
    if (ebx != 0u)
    {
    COW_AT(10278f5d)
        t8 = rd32(ebx + 0x64u) + 0x68u;
        wr32(sp0 - 0x80u, t8);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        g->eax = t8;
        g->ecx = sp0 - 0x40u;
        t9 = rd32(ebx + 0x64u);
        g->esp = sp0 - 0x7cu;
        t10 = cow_cdecl(g, COW_IMG(0x1027a720u), 2, sp0 - 0x40u, t8);
        t11 = g->ecx;
        eax = t10;
        ecx = t11;
        ebp = t9;
    COW_AT(10278f6e)
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x1027b080u), 1, sp0 - 0x40u);
    COW_AT(10278f78)
        d12 = fr(g, (double)rdf32(sp0 - 0x64u) - (double)rdf32(ebp + 0x5cu));
        wr32(sp0 - 0x8cu, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wrf32(sp0 - 0x64u, (float)(double)(float)d12);
        d13 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(ebp + 0x60u));
        wrf32(sp0 - 0x60u, (float)(double)(float)d13);
        d14 = fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(ebp + 0x64u));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d14);
        g->ecx = sp0 - 0x40u;
        g->edx = sp0 - 0x64u;
        g->esp = sp0 - 0x88u;
        cow_cdecl(g, COW_IMG(0x1027b0a0u), 3, sp0 - 0x64u, sp0 - 0x40u, sp0 - 0x64u);
        t15 = g->ecx;
        t16 = g->edx;
        ecx = t15;
        edx = t16;
    COW_AT(10278fad)
        ebp = rd32(sp0 - 0x6cu);
    }
    COW_AT(10278fb4)
    if (rd32(edi + 0x68u) == 0u)
    {
        eax = rd32(edi + 0x68u);
    }
    else
    {
        eax = rd32(edi + 0x68u);
    COW_AT(10278fbb)
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
        ecx = t17;
        edx = t18;
    COW_AT(10278fcc)
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        g->esp = sp0 - 0x8cu;
        cow_cdecl(g, COW_IMG(0x1027b080u), 1, sp0 - 0x30u);
    COW_AT(10278fd6)
        d19 = fr(g, (double)rdf32(sp0 - 0x64u) - (double)rdf32(sp0 - 0x58u));
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x9cu, sp0 - 0x64u);
        wrf32(sp0 - 0x64u, (float)(double)(float)d19);
        d20 = fr(g, (double)rdf32(sp0 - 0x60u) - (double)rdf32(sp0 - 0x54u));
        wrf32(sp0 - 0x60u, (float)(double)(float)d20);
        d21 = fr(g, (double)rdf32(sp0 - 0x5cu) - (double)rdf32(sp0 - 0x50u));
        wrf32(sp0 - 0x5cu, (float)(double)(float)d21);
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
    COW_AT(1027900e)
    }
    COW_AT(10279011)
    d25 = fr(g, atan2((double)rdf32(sp0 - 0x64u), (double)rdf32(sp0 - 0x5cu)));
    wrf32(sp0 - 0x6cu, (float)(double)(float)d25);
    d26 = (double)rdf32(sp0 + 0x14u);
    if ((cow_fsw(g, d25, d26, 0u) & 0x4100u) != 0u)
    {
        eax = cow_fsw(g, d25, d26, 0u) & 0x4100u;
    }
    else
    {
        eax = cow_fsw(g, d25, d26, 0u) & 0x4100u;
    COW_AT(1027902f)
        wr32(sp0 - 0x6cu, arg5);
        ecx = arg5;
    }
    COW_AT(1027903a)
    d27 = (double)rdf32(sp0 - 0x6cu);
    d28 = -(double)rdf32(sp0 + 0x14u);
    if (!(d27 < d28))
    {
        x0 = -(double)rdf32(sp0 + 0x14u);
    COW_AT(10279056)
        loc_6c_f = (double)rdf32(sp0 - 0x6cu);
    }
    else
    {
        x0 = -(double)rdf32(sp0 + 0x14u);
    COW_AT(10279050)
        wrf32(sp0 - 0x6cu, (float)(double)(float)x0);
        loc_6c_f = (double)(float)x0;
    }
    COW_AT(10279058)
    if (rd32(edi + 0x64u) != 0u)
    {
        edi = rd32(edi + 0x64u);
    COW_AT(1027905f)
        wr32(sp0 - 0x80u, cow_f2bits(loc_6c_f));
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        g->eax = sp0 - 0x20u;
        g->esp = sp0 - 0x7cu;
        t29 = cow_cdecl(g, COW_IMG(0x1027abc0u), 2, sp0 - 0x20u, cow_f2bits(loc_6c_f));
        eax = t29;
    COW_AT(1027906e)
        wr32(sp0 - 0x88u, edi + 0x68u);
        wr32(sp0 - 0x8cu, sp0 - 0x20u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        g->ecx = sp0 - 0x20u;
        g->edx = sp0 - 0x40u;
        g->esp = sp0 - 0x84u;
        cow_cdecl(g, COW_IMG(0x1027b190u), 3, sp0 - 0x40u, sp0 - 0x20u, edi + 0x68u);
        t30 = g->ecx;
        t31 = g->edx;
        ecx = t30;
        edx = t31;
        edi = edi + 0x68u;
    COW_AT(10279081)
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        wr32(sp0 - 0x98u, edi);
        g->edx = edx;
        g->esp = sp0 - 0x90u;
        cow_cdecl(g, COW_IMG(0x1027a720u), 2, edi, sp0 - 0x40u);
        t32 = g->edx;
        edx = t32;
    COW_AT(1027908c)
    }
    COW_AT(1027908f)
    t33 = rd32(esi + 0x1cu);
    wr32(t33 + 0x68u, ebx);
    ecx = t33;
L_1027909c: ;
    COW_AT(1027909c)
    t35 = rd32(sp0 - 0x68u) + 1u;
    wr32(sp0 - 0x68u, t35);
    loc_68 = t35;
L_102790a0: ;
    COW_AT(102790a0)
    wr32(sp0 - 0x6cu, ebp + 1u);
    if ((int32_t)(ebp + 1u) < (int32_t)rd32(arg1 + 0x44u))
    {
        eax = rd32(arg1 + 0x44u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_78 = rd32(sp0 - 0x78u);
        loc_7c = rd32(sp0 - 0x7cu);
        loc_6c = ebp + 1u;
        ebp = ebp + 1u;
        goto L_10278ed1;
    }
    COW_AT(102790b0)
    g->ebx = rd32(sp0 - 0x70u);
    g->esi = rd32(sp0 - 0x78u);
    g->edi = rd32(sp0 - 0x7cu);
    g->ebp = rd32(sp0 - 0x74u);
    return;
L_102790b8: ;
    COW_AT(102790b8)
    t34 = rd32(esi + 0x28u);
    wr32(sp0 - 0x80u, t34);
    wr32(sp0 - 0x84u, arg3);
    wr32(sp0 - 0x88u, COW_IMG(0x103b3c30u));
    g->ebx = ebx;
    g->esp = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b3c30u), arg3);
    COW_AT(102790c7)
    loc_70 = rd32(sp0 - 0x70u);
    loc_74 = rd32(sp0 - 0x74u);
    loc_78 = rd32(sp0 - 0x78u);
    loc_7c = rd32(sp0 - 0x7cu);
L_102790ca: ;
    COW_AT(102790ca)
    g->ebx = loc_70;
    g->esi = loc_78;
    g->edi = loc_7c;
    g->ebp = loc_74;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10278eb0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10278ed1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x7cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10278ed8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x84u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10278ee9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x7cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10278efcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10278f0bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10278f14u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x10278f3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x84u, sp0 - 0x4cu);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10278f56u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x4cu);
        wr32(sp0 - 0x84u, sp0 - 0x4cu);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10278f5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x4cu);
        wr32(sp0 - 0x84u, sp0 - 0x4cu);
        wr32(sp0 - 0x80u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x10278f6eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x4cu);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10278f78u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x4cu);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10278fadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x94u;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x64u);
        wr32(sp0 - 0x88u, sp0 - 0x40u);
        wr32(sp0 - 0x84u, sp0 - 0x40u);
        (void)sp0;
        return 1;
    }
    case 0x10278fb4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10278fbbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        (void)sp0;
        return 1;
    }
    case 0x10278fccu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x8cu;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x84u, sp0 - 0x58u);
        wr32(sp0 - 0x80u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10278fd6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x98u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x58u);
        wr32(sp0 - 0x80u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x1027900eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x9cu;
        wr32(sp0 - 0x9cu, sp0 - 0x64u);
        wr32(sp0 - 0x98u, sp0 - 0x30u);
        wr32(sp0 - 0x94u, sp0 - 0x64u);
        wr32(sp0 - 0x90u, sp0 - 0x30u);
        wr32(sp0 - 0x84u, sp0 - 0x58u);
        wr32(sp0 - 0x80u, sp0 - 0x30u);
        (void)sp0;
        return 1;
    }
    case 0x10279011u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1027902fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1027903au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10279050u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10279056u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x10279058u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1027905fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1027906eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x84u;
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x10279081u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x90u;
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1027908cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x98u;
        wr32(sp0 - 0x94u, sp0 - 0x40u);
        wr32(sp0 - 0x90u, sp0 - 0x40u);
        wr32(sp0 - 0x8cu, sp0 - 0x20u);
        wr32(sp0 - 0x84u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x1027908fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x1027909cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        g->esp = sp0 - 0x7cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102790a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        double loc_6c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_6c_f = rdf32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x7cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102790b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    case 0x102790b8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x7cu;
        g->ecx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102790c7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x88u;
        (void)sp0;
        return 1;
    }
    case 0x102790cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_68;
        uint32_t loc_6c;
        uint32_t loc_70;
        uint32_t loc_74;
        uint32_t loc_78;
        uint32_t loc_7c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_7c = rd32(sp0 - 0x7cu);
        loc_78 = rd32(sp0 - 0x78u);
        loc_74 = rd32(sp0 - 0x74u);
        loc_70 = rd32(sp0 - 0x70u);
        loc_6c = rd32(sp0 - 0x6cu);
        loc_68 = rd32(sp0 - 0x68u);
        g->esp = sp0 - 0x7cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10278eb0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10278eb0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
