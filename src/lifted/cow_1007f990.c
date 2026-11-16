/* f_0x1007f990 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007f990(Guest* g)
{
    unsigned af;
    unsigned cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 140u);

    wr32(sp0 - 0x78u, in_ebp);
    wr32(sp0 - 0x7cu, in_esi);
    wr32(sp0 - 0x80u, in_edi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x80u;
    t1 = cow_call_regs(g, COW_IMG(0x100882c0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        goto L_1007f9ad;
    }
    edx = t3;
    g->edx = edx;
    return arg3;
L_1007f9ad: ;
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    if ((t4 & 0x200000u) != 0u)
    {
        eax = t4;
        edx = t6;
        goto L_1007f9d1;
    }
    eax = t4;
    ecx = t5;
    edx = t6;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t7 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
    t8 = g->edx;
    if ((t7 >> 8u & 8u) != 0u)
    {
        eax = t7;
        edx = t8;
        goto L_1007f9d1;
    }
    edx = t8;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return arg3;
L_1007f9d1: ;
    if (rd32(COW_IMG(0x106634b8u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106634b8u));
        goto L_1007f9e9;
    }
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return arg3;
L_1007f9e9: ;
    wr32(sp0 - 0x84u, 0xffffffffu);
    wr32(sp0 - 0x88u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t9 = cow_thiscall(g, COW_IMG(0x101e1b10u), ecx, 2, 0u, 0xffffffffu);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 != 0u)
    {
        ecx = t10;
        edx = t11;
        ebp = t9;
        goto L_1007fa16;
    }
    eax = t9;
    edx = t11;
    wr32(sp0 - 0x84u, 0xc0u);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0xc0u);
    t12 = g->edx;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = t12;
    return arg3;
L_1007fa16: ;
    if (rd32(COW_IMG(0x1047d490u)) != 1u)
    {
        eax = rd32(COW_IMG(0x1047d490u));
        goto L_1007fb01;
    }
    if (rd32(COW_IMG(0x106634acu)) == 0u) goto L_1007fa3d;
    eax = rd32(COW_IMG(0x106634acu));
    if (rd32(eax + 8u) != 0u)
    {
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
        goto L_1007fae6;
    }
    edx = rd32(eax + 8u);
L_1007fa3d: ;
    if (rd32(COW_IMG(0x10663400u)) == 0u) goto L_1007fa56;
    eax = rd32(COW_IMG(0x10663400u));
    if (rd32(eax + 8u) != 0u)
    {
        edx = rd32(eax + 8u);
        eax = (eax & 0xffffff00u) | rd32(eax + 8u) != 0u;
        goto L_1007fae6;
    }
    edx = rd32(eax + 8u);
L_1007fa56: ;
    if (rd32(COW_IMG(0x106631d4u)) == 0u)
    {
        eax = rd32(COW_IMG(0x106631d4u));
        goto L_1007fa81;
    }
    eax = rd32(COW_IMG(0x106631d4u));
    if (rd16(eax + 0x1cu) != 1u) goto L_1007fa81;
    wr32(sp0 - 0x84u, 0xdu);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10129d90u), rd32(COW_IMG(0x10578158u)), 1, 0xdu);
    t14 = g->edx;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = t14;
    return arg3;
L_1007fa81: ;
    wr32(sp0 - 0x84u, 0u);
    wr32(sp0 - 0x88u, 0x77u);
    g->ecx = ecx;
    g->esp = sp0 - 0x80u;
    t15 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 0u);
    t16 = g->ecx;
    t17 = g->edx;
    if ((uint8_t)t15 != 0u)
    {
        eax = t15;
        ecx = t16;
        edx = t17;
        goto L_1007fa9f;
    }
    edx = t17;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return arg3;
L_1007fa9f: ;
    wr32(sp0 - 0x84u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t18 = cow_call_regs(g, COW_IMG(0x101cbdf0u), eax, g->ecx, g->edx, 1, 1, 1u);
    t19 = g->edx;
    if ((uint8_t)t18 == 0u)
    {
        eax = t18;
        edx = t19;
        goto L_1007fabb;
    }
    edx = t19;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return arg3;
L_1007fabb: ;
    g->ebp = ebp;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    t20 = cow_thiscall(g, COW_IMG(0x101e2720u), ebp, 0);
    t21 = g->edx;
    if (t20 != 2u)
    {
        edx = t21;
        goto L_1007fc50;
    }
    eax = t20 - 2u;
    edx = t21;
    wr32(sp0 - 0x84u, 0xeu);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10129de0u), rd32(COW_IMG(0x10578158u)), 1, 0xeu);
    t22 = g->edx;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = t22;
    return arg3;
L_1007fae6: ;
    wr32(sp0 - 0x84u, 0x45u);
    g->edx = edx;
    g->esp = sp0 - 0x80u;
    cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x45u);
    t13 = g->edx;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = t13;
    return arg3;
L_1007fb01: ;
    if (eax != 2u) goto L_1007fc5e;
    esi = rd32(rd32(COW_IMG(0x103551e0u)) + 4u);
    edi = COW_IMG(0x10358110u);
    ecx = 6u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        edx = 0u;
    }
    else
    {
        if (rd16(ebp + 6u) == 0u)
        {
            edx = rd16(ebp + 6u);
        }
        else
        {
            edx = rd16(ebp + 6u);
            edi = sp0 - 0x54u;
            eax = 0u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(sp0 - 0x4cu, 0x10fu);
            wr32(sp0 - 0x84u, sp0 - 0x54u);
            wr32(sp0 - 0x48u, (uint16_t)edx);
            g->ecx = ecx;
            g->edx = (uint16_t)edx;
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t23 = g->ecx;
            t24 = g->edx;
            ecx = t23;
            edx = t24;
        }
        if ((rd16(ebp + 8u) & 0x7fffu) != 0u)
        {
            edx = rd16(ebp + 8u) & 0x7fffu;
            edi = sp0 - 0x54u;
            eax = 0u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr16(sp0 - 0x4cu, 0x110u);
            wr32(sp0 - 0x84u, sp0 - 0x54u);
            wr32(sp0 - 0x48u, (uint16_t)edx);
            g->ecx = sp0 - 0x54u;
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t25 = g->ecx;
            ecx = t25;
        }
        wr32(sp0 - 0x72u, 0u);
        wr32(sp0 - 0x62u, 0u);
        wr32(sp0 - 0x6eu, 0u);
        wr32(sp0 - 0x5eu, 0u);
        wr32(sp0 - 0x6au, 0u);
        wr32(sp0 - 0x5au, 0u);
        wr16(sp0 - 0x74u, 0u);
        wr16(sp0 - 0x66u, 0u);
        wr16(sp0 - 0x64u, 0u);
        wr16(sp0 - 0x56u, 0u);
        edx = 0u;
        esi = ebp + 0xau;
        edi = 8u;
L_1007fbce: ;
        eax = 0u;
        edx = (edx & 0xffff0000u) | rd16(esi);
L_1007fbd3: ;
        if (rd16(eax * 2u + sp0 - 0x74u) == 0u)
        {
            ecx = (ecx & 0xffff0000u) | rd16(eax * 2u + sp0 - 0x74u);
            goto L_1007fbea;
        }
        ecx = (ecx & 0xffff0000u) | rd16(eax * 2u + sp0 - 0x74u);
        if ((uint16_t)ecx == (uint16_t)edx) goto L_1007fbea;
        if ((int32_t)(eax + 1u) < 8)
        {
            eax = eax + 1u;
            goto L_1007fbd3;
        }
L_1007fbfd: ;
        if (edi != 1u)
        {
            esi = esi + 2u;
            edi = edi - 1u;
            goto L_1007fbce;
        }
        esi = 0u;
L_1007fc0a: ;
        if (rd16(esi + sp0 - 0x74u) == 0u)
        {
            edx = (edx & 0xffff0000u) | rd16(esi + sp0 - 0x74u);
        }
        else
        {
            edx = (edx & 0xffff0000u) | rd16(esi + sp0 - 0x74u);
            edi = sp0 - 0x54u;
            eax = 0u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x48u, (uint16_t)edx);
            wr32(sp0 - 0x84u, sp0 - 0x54u);
            t26 = rd16(esi + sp0 - 0x64u);
            wr16(sp0 - 0x4cu, 0x111u);
            wr32(sp0 - 0x44u, t26);
            g->edx = sp0 - 0x54u;
            g->esp = sp0 - 0x80u;
            cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t27 = g->edx;
            edx = t27;
        }
        if ((int32_t)(esi + 2u) < 16)
        {
            esi = esi + 2u;
            goto L_1007fc0a;
        }
    }
L_1007fc50: ;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return arg3;
L_1007fbea: ;
    if ((int32_t)eax < 8)
    {
        wr16(eax * 2u + sp0 - 0x64u, (uint16_t)(rd16(eax * 2u + sp0 - 0x64u) + 1u));
        wr16(eax * 2u + sp0 - 0x74u, (uint16_t)edx);
    }
    goto L_1007fbfd;
L_1007fc5e: ;
    g->esi = rd32(sp0 - 0x7cu);
    g->edi = rd32(sp0 - 0x80u);
    g->ebp = rd32(sp0 - 0x78u);
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007f990(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007f990(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
