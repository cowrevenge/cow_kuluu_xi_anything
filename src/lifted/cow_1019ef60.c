/* f_0x1019ef60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1019ef60(Guest* g)
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
    uint32_t loc_20;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    unsigned zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 108u);

    wr32(sp0 - 0x54u, in_ebx);
    wr32(sp0 - 0x58u, in_esi);
    wr32(sp0 - 0x5cu, in_edi);
    wr32(sp0 - 0x50u, self);
    if (rd32(self + 0x34u) == rd32(self + 0x38u))
    {
        eax = rd32(self + 0x34u);
        goto L_1019f14d;
    }
    eax = rd32(self + 0x34u);
    if ((int32_t)arg1 >= 10) goto L_1019f14d;
    if ((int32_t)rd32(sp0 + 8u) >= (int32_t)arg1) goto L_1019f14d;
    edi = rd32(sp0 + 8u);
    if ((int32_t)edi <= 0) goto L_1019f14d;
    eax = rd32(self + 0x2cu);
    edx = 0x25u;
L_1019efa9: ;
    wr32(sp0 - 0x60u, eax);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x5cu;
    t1 = cow_call_regs(g, COW_IMG(0x1019ed70u), eax, g->ecx, g->edx, 0, 1, eax);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x48u, t1);
    if (t3 != 1u)
    {
        edx = t3 - 1u;
        loc_48 = t1;
        goto L_1019efa5;
    }
    ecx = t2;
    loc_48 = t1;
    wr32(sp0 - 0x60u, in_ebp);
    wr32(sp0 + 8u, arg1 - edi);
    edx = arg1 - edi;
    ebp = COW_IMG(0x1037a834u);
    esi = self;
L_1019efcc: ;
    edi = ebp;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t4 = ~ecx - 1u;
    wr32(sp0 - 0x44u, t4);
    if ((int32_t)arg1 <= 0)
    {
        ebx = t4;
        loc_20 = (rd32(sp0 - 0x20u) & 0xffffff00u) | (uint8_t)eax;
    }
    else
    {
        ecx = t4;
        loc_20 = (rd32(sp0 - 0x20u) & 0xffffff00u) | (uint8_t)eax;
        loc_44 = t4;
        edx = arg1;
L_1019efec: ;
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t5 = edi - ~ecx;
        edi = sp0 - 0x20u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t5;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        if (edx != 1u)
        {
            edx = edx - 1u;
            goto L_1019efec;
        }
        edx = rd32(sp0 + 8u);
        ebx = loc_44;
        esi = rd32(sp0 - 0x50u);
    }
    if ((int32_t)edx <= 0)
    {
        ecx = 0u;
        loc_40 = rd32(sp0 - 0x40u) & 0xffffff00u;
    }
    else
    {
        loc_40 = rd32(sp0 - 0x40u) & 0xffffff00u;
        wr32(sp0 - 0x4cu, edx);
        wr32(sp0 - 0x44u, edx);
        ecx = 0u;
        esi = (esi & 0xffff0000u) | rd16(COW_IMG(0x10353e0cu));
        loc_44 = edx;
        loc_4c = edx;
L_1019f048: ;
        if ((int32_t)ebx > 0)
        {
            edx = ebx;
L_1019f04e: ;
            edi = sp0 - 0x40u;
            eax = 0u;
            ecx = 0xffffffffu;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
            wr16(edi - 1u, (uint16_t)esi);
            if (edx != 1u)
            {
                edx = edx - 1u;
                goto L_1019f04e;
            }
        }
        wr32(sp0 - 0x4cu, loc_4c - 1u);
        if (loc_4c != 1u)
        {
            loc_4c = loc_4c - 1u;
            goto L_1019f048;
        }
        ecx = loc_44;
        esi = rd32(sp0 - 0x50u);
    }
    if ((int32_t)ecx >= (int32_t)arg1)
    {
        eax = arg1;
    }
    else
    {
        edx = arg1 - ecx;
L_1019f07f: ;
        edi = ebp;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        t6 = edi - ~ecx;
        edi = sp0 - 0x40u;
        eax = 0u;
        ecx = 0xffffffffu;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
        esi = t6;
        edi = edi - 1u;
        ecx = ~ecx >> 2u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        ecx = ~ecx & 3u;
        while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
        if (edx != 1u)
        {
            edx = edx - 1u;
            goto L_1019f07f;
        }
        esi = rd32(sp0 - 0x50u);
    }
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    wr32(sp0 - 0x68u, loc_48);
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t7 = cow_call_regs(g, COW_IMG(0x10311ef0u), eax, g->ecx, loc_48, 1, 7, loc_48, sp0 - 0x20u, in_ebp, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t8 = g->ecx;
    if (t7 == 0u)
    {
        ecx = t8;
        goto L_1019f10b;
    }
    ecx = t8;
    edx = t7;
L_1019f0cd: ;
    edi = sp0 - 0x40u;
    eax = 0u;
    ecx = 0xffffffffu;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
    t9 = ~ecx - 1u;
    esi = sp0 - 0x40u;
    edi = edx;
    ecx = t9 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t9 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x64u, sp0 - 0x20u);
    wr32(sp0 - 0x68u, edx + t9);
    g->ecx = sp0 - 0x20u;
    g->esp = sp0 - 0x4cu;
    t10 = cow_call_regs(g, COW_IMG(0x10311ef0u), t9, g->ecx, edx + t9, 1, 7, edx + t9, sp0 - 0x20u, rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u));
    t11 = g->ecx;
    if (t10 != 0u)
    {
        ecx = t11;
        edx = t10;
        goto L_1019f0cd;
    }
    ecx = t11;
    esi = rd32(sp0 - 0x50u);
L_1019f10b: ;
    if ((int32_t)(ebp + 4u) < (int32_t)COW_IMG(0x1037a840u))
    {
        ebp = ebp + 4u;
        goto L_1019efc8;
    }
    t12 = rd32(esi + 0x34u);
    t13 = rd32(esi + 0x2cu);
    wr32(esi + 0x38u, t12);
    wr32(esi + 0x34u, 0u);
    if (t13 == 0u)
    {
        eax = t13;
        ebp = rd32(sp0 - 0x60u);
        goto L_1019f142;
    }
    eax = t13;
    edx = t12;
    ebp = rd32(sp0 - 0x60u);
L_1019f12f: ;
    wr32(sp0 - 0x60u, eax);
    g->esp = sp0 - 0x5cu;
    t14 = cow_call_regs(g, COW_IMG(0x1019ed70u), eax, g->ecx, g->edx, 0, 1, eax);
    t15 = rd32(esi + 0x34u) + 1u;
    wr32(esi + 0x34u, t15);
    if (t14 != 0u)
    {
        eax = t14;
        edx = t15;
        goto L_1019f12f;
    }
    eax = t14;
L_1019f142: ;
    g->ebx = rd32(sp0 - 0x54u);
    g->esi = rd32(sp0 - 0x58u);
    g->edi = rd32(sp0 - 0x5cu);
    g->ebp = ebp;
    return (eax & 0xffffff00u) | 1u;
L_1019efa5: ;
    eax = loc_48;
    goto L_1019efa9;
L_1019efc8: ;
    edx = rd32(sp0 + 8u);
    goto L_1019efcc;
L_1019f14d: ;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1019ef60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1019ef60(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
