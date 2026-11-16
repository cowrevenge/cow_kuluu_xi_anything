/* f_0x101c2fd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101c2fd0(Guest* g)
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
    uint32_t loc_244;
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
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 612u);

    wr32(sp0 - 0x248u, in_ebx);
    wr32(sp0 - 0x24cu, arg1);
    wr32(sp0 - 0x250u, self + 0x1f4u);
    if (rd8(self + 0xd0u) == 0u)
    {
        wr32(sp0 - 0x254u, COW_IMG(0x1037cc20u));
        wr32(sp0 - 0x258u, sp0 - 0x100u);
        g->esp = sp0 - 0x244u;
        t2 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc20u), self + 0x1f4u, arg1, in_ebx);
        eax = t2;
    }
    else
    {
        wr32(sp0 - 0x254u, self + 0xd0u);
        wr32(sp0 - 0x258u, COW_IMG(0x1037cc28u));
        wr32(sp0 - 0x25cu, sp0 - 0x100u);
        g->esp = sp0 - 0x248u;
        t1 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x100u, COW_IMG(0x1037cc28u), self + 0xd0u, self + 0x1f4u, arg1);
        eax = t1;
    }
    wr32(sp0 - 0x24cu, sp0 - 0x240u);
    wr32(sp0 - 0x250u, sp0 - 0x100u);
    g->eax = eax;
    g->edx = sp0 - 0x100u;
    g->esp = sp0 - 0x248u;
    t3 = cow_thiscall(g, rd32(COW_IMG(0x10329128u)), sp0 - 0x240u, 2, sp0 - 0x100u, sp0 - 0x240u);
    t4 = g->edx;
    wr32(sp0 - 0x244u, t3);
    if (t3 != 0xffffffffu)
    {
        edx = t4;
        loc_244 = t3;
        goto L_101c304d;
    }
    eax = t3;
    g->ebx = rd32(sp0 - 0x248u);
    return eax;
L_101c304d: ;
    wr32(sp0 - 0x24cu, in_ebp);
    wr32(sp0 - 0x250u, in_esi);
    wr32(sp0 - 0x254u, in_edi);
    ebx = 0u;
    ebp = rd32(COW_IMG(0x10329120u));
L_101c3056: ;
    esi = sp0 - 0x214u;
    edi = COW_IMG(0x10354054u);
    ecx = 2u;
    cf = 0u;
    pf = PARITY(0u);
    af = 0u;
    zf = 1u;
    sf = 0u;
    of = 0u;
    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
    if (!zf)
    {
        esi = sp0 - 0x214u;
        edi = COW_IMG(0x1037cbc4u);
        ecx = 3u;
        cf = 0u;
        pf = PARITY(0u);
        af = 0u;
        zf = 1u;
        sf = 0u;
        of = 0u;
        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
        if (zf)
        {
            edx = 0u;
        }
        else
        {
            esi = sp0 - 0x214u;
            edi = COW_IMG(0x103502d4u);
            ecx = 7u;
            cf = 0u;
            pf = PARITY(0u);
            af = 0u;
            zf = 1u;
            sf = 0u;
            of = 0u;
            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
            if (zf)
            {
                edx = 0u;
            }
            else
            {
                esi = sp0 - 0x214u;
                edi = COW_IMG(0x103502dcu);
                ecx = 9u;
                cf = 0u;
                pf = PARITY(0u);
                af = 0u;
                zf = 1u;
                sf = 0u;
                of = 0u;
                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                if (zf)
                {
                    edx = 0u;
                }
                else
                {
                    esi = sp0 - 0x214u;
                    edi = COW_IMG(0x103502ccu);
                    ecx = 7u;
                    cf = 0u;
                    pf = PARITY(0u);
                    af = 0u;
                    zf = 1u;
                    sf = 0u;
                    of = 0u;
                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                    if (zf)
                    {
                        edx = 0u;
                    }
                    else
                    {
                        esi = sp0 - 0x214u;
                        edi = COW_IMG(0x103502c4u);
                        ecx = 7u;
                        cf = 0u;
                        pf = PARITY(0u);
                        af = 0u;
                        zf = 1u;
                        sf = 0u;
                        of = 0u;
                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                        if (zf)
                        {
                            edx = 0u;
                        }
                        else
                        {
                            esi = sp0 - 0x214u;
                            edi = COW_IMG(0x103502bcu);
                            ecx = 7u;
                            cf = 0u;
                            pf = PARITY(0u);
                            af = 0u;
                            zf = 1u;
                            sf = 0u;
                            of = 0u;
                            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                            if (zf)
                            {
                                edx = 0u;
                            }
                            else
                            {
                                esi = sp0 - 0x214u;
                                edi = COW_IMG(0x103502b4u);
                                ecx = 7u;
                                cf = 0u;
                                pf = PARITY(0u);
                                af = 0u;
                                zf = 1u;
                                sf = 0u;
                                of = 0u;
                                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                if (zf)
                                {
                                    edx = 0u;
                                }
                                else
                                {
                                    esi = sp0 - 0x214u;
                                    edi = COW_IMG(0x103502acu);
                                    ecx = 7u;
                                    cf = 0u;
                                    pf = PARITY(0u);
                                    af = 0u;
                                    zf = 1u;
                                    sf = 0u;
                                    of = 0u;
                                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                    if (zf)
                                    {
                                        edx = 0u;
                                    }
                                    else
                                    {
                                        esi = sp0 - 0x214u;
                                        edi = COW_IMG(0x103502a4u);
                                        ecx = 7u;
                                        cf = 0u;
                                        pf = PARITY(0u);
                                        af = 0u;
                                        zf = 1u;
                                        sf = 0u;
                                        of = 0u;
                                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                        if (zf)
                                        {
                                            edx = 0u;
                                        }
                                        else
                                        {
                                            esi = sp0 - 0x214u;
                                            edi = COW_IMG(0x1035029cu);
                                            ecx = 7u;
                                            cf = 0u;
                                            pf = PARITY(0u);
                                            af = 0u;
                                            zf = 1u;
                                            sf = 0u;
                                            of = 0u;
                                            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                            if (zf)
                                            {
                                                edx = 0u;
                                            }
                                            else
                                            {
                                                esi = sp0 - 0x214u;
                                                edi = COW_IMG(0x10350294u);
                                                ecx = 7u;
                                                cf = 0u;
                                                pf = PARITY(0u);
                                                af = 0u;
                                                zf = 1u;
                                                sf = 0u;
                                                of = 0u;
                                                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                if (zf)
                                                {
                                                    edx = 0u;
                                                }
                                                else
                                                {
                                                    esi = sp0 - 0x214u;
                                                    edi = COW_IMG(0x10350288u);
                                                    ecx = 9u;
                                                    cf = 0u;
                                                    pf = PARITY(0u);
                                                    af = 0u;
                                                    zf = 1u;
                                                    sf = 0u;
                                                    of = 0u;
                                                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                    if (zf)
                                                    {
                                                        edx = 0u;
                                                    }
                                                    else
                                                    {
                                                        esi = sp0 - 0x214u;
                                                        edi = COW_IMG(0x1035027cu);
                                                        ecx = 9u;
                                                        cf = 0u;
                                                        pf = PARITY(0u);
                                                        af = 0u;
                                                        zf = 1u;
                                                        sf = 0u;
                                                        of = 0u;
                                                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                        if (zf)
                                                        {
                                                            edx = 0u;
                                                        }
                                                        else
                                                        {
                                                            esi = sp0 - 0x214u;
                                                            edi = COW_IMG(0x10350270u);
                                                            ecx = 9u;
                                                            cf = 0u;
                                                            pf = PARITY(0u);
                                                            af = 0u;
                                                            zf = 1u;
                                                            sf = 0u;
                                                            of = 0u;
                                                            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                            if (zf)
                                                            {
                                                                edx = 0u;
                                                            }
                                                            else
                                                            {
                                                                esi = sp0 - 0x214u;
                                                                edi = COW_IMG(0x10350264u);
                                                                ecx = 9u;
                                                                cf = 0u;
                                                                pf = PARITY(0u);
                                                                af = 0u;
                                                                zf = 1u;
                                                                sf = 0u;
                                                                of = 0u;
                                                                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                if (zf)
                                                                {
                                                                    edx = 0u;
                                                                }
                                                                else
                                                                {
                                                                    esi = sp0 - 0x214u;
                                                                    edi = COW_IMG(0x10350258u);
                                                                    ecx = 9u;
                                                                    cf = 0u;
                                                                    pf = PARITY(0u);
                                                                    af = 0u;
                                                                    zf = 1u;
                                                                    sf = 0u;
                                                                    of = 0u;
                                                                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                    if (zf)
                                                                    {
                                                                        edx = 0u;
                                                                    }
                                                                    else
                                                                    {
                                                                        esi = sp0 - 0x214u;
                                                                        edi = COW_IMG(0x1035024cu);
                                                                        ecx = 9u;
                                                                        cf = 0u;
                                                                        pf = PARITY(0u);
                                                                        af = 0u;
                                                                        zf = 1u;
                                                                        sf = 0u;
                                                                        of = 0u;
                                                                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                        if (zf)
                                                                        {
                                                                            edx = 0u;
                                                                        }
                                                                        else
                                                                        {
                                                                            esi = sp0 - 0x214u;
                                                                            edi = COW_IMG(0x10350240u);
                                                                            ecx = 9u;
                                                                            cf = 0u;
                                                                            pf = PARITY(0u);
                                                                            af = 0u;
                                                                            zf = 1u;
                                                                            sf = 0u;
                                                                            of = 0u;
                                                                            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                            if (zf)
                                                                            {
                                                                                edx = 0u;
                                                                            }
                                                                            else
                                                                            {
                                                                                esi = sp0 - 0x214u;
                                                                                edi = COW_IMG(0x1037c928u);
                                                                                ecx = 8u;
                                                                                cf = 0u;
                                                                                pf = PARITY(0u);
                                                                                af = 0u;
                                                                                zf = 1u;
                                                                                sf = 0u;
                                                                                of = 0u;
                                                                                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                if (zf)
                                                                                {
                                                                                    edx = 0u;
                                                                                }
                                                                                else
                                                                                {
                                                                                    esi = sp0 - 0x214u;
                                                                                    edi = COW_IMG(0x1037cc18u);
                                                                                    ecx = 8u;
                                                                                    cf = 0u;
                                                                                    pf = PARITY(0u);
                                                                                    af = 0u;
                                                                                    zf = 1u;
                                                                                    sf = 0u;
                                                                                    of = 0u;
                                                                                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                    if (zf)
                                                                                    {
                                                                                        edx = 0u;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        esi = sp0 - 0x214u;
                                                                                        edi = COW_IMG(0x1037cc10u);
                                                                                        ecx = 8u;
                                                                                        cf = 0u;
                                                                                        pf = PARITY(0u);
                                                                                        af = 0u;
                                                                                        zf = 1u;
                                                                                        sf = 0u;
                                                                                        of = 0u;
                                                                                        while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                        if (zf)
                                                                                        {
                                                                                            edx = 0u;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            esi = sp0 - 0x214u;
                                                                                            edi = COW_IMG(0x1037cc04u);
                                                                                            ecx = 9u;
                                                                                            cf = 0u;
                                                                                            pf = PARITY(0u);
                                                                                            af = 0u;
                                                                                            zf = 1u;
                                                                                            sf = 0u;
                                                                                            of = 0u;
                                                                                            while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                            if (zf)
                                                                                            {
                                                                                                edx = 0u;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                esi = sp0 - 0x214u;
                                                                                                edi = COW_IMG(0x1037cbf4u);
                                                                                                ecx = 0xeu;
                                                                                                cf = 0u;
                                                                                                pf = PARITY(0u);
                                                                                                af = 0u;
                                                                                                zf = 1u;
                                                                                                sf = 0u;
                                                                                                of = 0u;
                                                                                                while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                                if (zf)
                                                                                                {
                                                                                                    edx = 0u;
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    esi = sp0 - 0x214u;
                                                                                                    edi = COW_IMG(0x1037cbe8u);
                                                                                                    ecx = 9u;
                                                                                                    cf = 0u;
                                                                                                    pf = PARITY(0u);
                                                                                                    af = 0u;
                                                                                                    zf = 1u;
                                                                                                    sf = 0u;
                                                                                                    of = 0u;
                                                                                                    while (ecx) { { uint8_t a = rd8(esi), b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (!zf) break; }
                                                                                                    if (zf)
                                                                                                    {
                                                                                                        edx = 0u;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        edi = COW_IMG(0x1037cbe4u);
                                                                                                        eax = 0u;
                                                                                                        ecx = 0xffffffffu;
                                                                                                        cf = 0u;
                                                                                                        pf = PARITY(0xffu);
                                                                                                        af = 0u;
                                                                                                        zf = 0u;
                                                                                                        sf = 1u;
                                                                                                        of = 0u;
                                                                                                        while (ecx) { { uint8_t a = (uint8_t)eax, b = rd8(edi), r = (uint8_t)(a - b); cf = a < b; of = ((a ^ b) & (a ^ r)) >> 7 & 1u; af = ((a ^ b ^ r) >> 4) & 1u; zf = r == 0; sf = (r >> 7) & 1u; pf = PARITY(r); } edi += (g->df ? (uint32_t)-1 : 1u); ecx--; if (zf) break; }
                                                                                                        t5 = ~ecx - 1u;
                                                                                                        wr32(sp0 - 0x258u, t5);
                                                                                                        wr32(sp0 - 0x25cu, COW_IMG(0x1037cbe4u));
                                                                                                        wr32(sp0 - 0x260u, sp0 - 0x214u);
                                                                                                        g->ecx = sp0 - 0x214u;
                                                                                                        g->edx = 0u;
                                                                                                        g->esp = sp0 - 0x24cu;
                                                                                                        t6 = cow_cdecl(g, COW_IMG(0x10312980u), 5, sp0 - 0x214u, COW_IMG(0x1037cbe4u), t5, in_edi, in_esi);
                                                                                                        t7 = g->ecx;
                                                                                                        t8 = g->edx;
                                                                                                        if (t6 == 0u)
                                                                                                        {
                                                                                                            edx = t8;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                            ecx = t7;
                                                                                                            edi = COW_IMG(0x1037cbdcu);
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
                                                                                                            wr32(sp0 - 0x258u, t9);
                                                                                                            wr32(sp0 - 0x25cu, COW_IMG(0x1037cbdcu));
                                                                                                            wr32(sp0 - 0x260u, sp0 - 0x214u);
                                                                                                            g->ecx = t9;
                                                                                                            g->edx = sp0 - 0x214u;
                                                                                                            g->esp = sp0 - 0x24cu;
                                                                                                            t10 = cow_cdecl(g, COW_IMG(0x10312980u), 5, sp0 - 0x214u, COW_IMG(0x1037cbdcu), t9, rd32(sp0 - 0x254u), rd32(sp0 - 0x250u));
                                                                                                            t11 = g->ecx;
                                                                                                            t12 = g->edx;
                                                                                                            if (t10 == 0u)
                                                                                                            {
                                                                                                                edx = t12;
                                                                                                            }
                                                                                                            else
                                                                                                            {
                                                                                                                ecx = t11;
                                                                                                                edx = t12;
                                                                                                                if (ebx == 0u)
                                                                                                                {
                                                                                                                    esi = ebx;
                                                                                                                    goto L_101c330e;
                                                                                                                }
                                                                                                                esi = ebx;
L_101c32fe: ;
                                                                                                                if (rd32(esi + 0x140u) == 0u) goto L_101c330e;
                                                                                                                eax = rd32(esi + 0x140u);
                                                                                                                if (eax != 0u)
                                                                                                                {
                                                                                                                    esi = eax;
                                                                                                                    goto L_101c32fe;
                                                                                                                }
                                                                                                                esi = eax;
L_101c330e: ;
                                                                                                                wr32(sp0 - 0x258u, 0x144u);
                                                                                                                g->edx = edx;
                                                                                                                g->esp = sp0 - 0x24cu;
                                                                                                                t13 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0x144u, rd32(sp0 - 0x254u), rd32(sp0 - 0x250u));
                                                                                                                t14 = g->edx;
                                                                                                                if (t13 == 0u)
                                                                                                                {
                                                                                                                    edx = t14;
                                                                                                                    eax = 0u;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    eax = t13;
                                                                                                                    edx = t14;
                                                                                                                    wr8(eax + 0x2cu, 0u);
                                                                                                                    wr32(eax + 0x140u, 0u);
                                                                                                                }
                                                                                                                if (esi == 0u)
                                                                                                                {
                                                                                                                    ebx = eax;
                                                                                                                }
                                                                                                                else
                                                                                                                {
                                                                                                                    wr32(esi + 0x140u, eax);
                                                                                                                }
                                                                                                                esi = sp0 - 0x240u;
                                                                                                                edi = eax;
                                                                                                                ecx = 0x50u;
                                                                                                                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    wr32(sp0 - 0x258u, sp0 - 0x240u);
    wr32(sp0 - 0x25cu, loc_244);
    g->eax = sp0 - 0x240u;
    g->edx = edx;
    g->esp = sp0 - 0x254u;
    t15 = cow_thiscall(g, ebp, loc_244, 2, loc_244, sp0 - 0x240u);
    t16 = g->ecx;
    t17 = g->edx;
    if (t15 != 0u)
    {
        edx = t17;
        goto L_101c3056;
    }
    eax = t15;
    ecx = t16;
    t18 = rd32(sp0 - 0x244u);
    wr32(sp0 - 0x258u, t18);
    g->edx = t18;
    g->esp = sp0 - 0x254u;
    cow_thiscall(g, rd32(COW_IMG(0x1032911cu)), ecx, 1, t18);
    t19 = g->ecx;
    t20 = g->edx;
    if (ebx == 0u)
    {
        ecx = t19;
        edx = t20;
    }
    else
    {
        eax = ebx;
        ecx = t19;
        edx = t20;
        esi = ebx;
L_101c3381: ;
        wr32(sp0 - 0x258u, arg3);
        wr32(sp0 - 0x25cu, eax + 0x2cu);
        g->edx = edx;
        g->esp = sp0 - 0x254u;
        cow_thiscall_cdecl(g, arg2, ecx, 2, eax + 0x2cu, arg3);
        t21 = g->ecx;
        t22 = g->edx;
        t23 = rd32(esi + 0x140u);
        if (rd32(esi + 0x140u) != 0u)
        {
            eax = t23;
            ecx = t21;
            edx = t22;
            esi = t23;
            goto L_101c3381;
        }
        ecx = t21;
        edx = t22;
    }
    if (ebx == 0u) goto L_101c33c5;
    eax = 0u;
    esi = ebx;
L_101c339f: ;
    if (eax != 0u)
    {
        wr32(sp0 - 0x258u, eax);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x254u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
        t24 = g->ecx;
        t25 = g->edx;
        ecx = t24;
        edx = t25;
    }
    if (rd32(esi + 0x140u) != 0u)
    {
        eax = esi;
        esi = rd32(esi + 0x140u);
        goto L_101c339f;
    }
    eax = esi;
    if (eax != 0u)
    {
        wr32(sp0 - 0x258u, eax);
        g->esp = sp0 - 0x254u;
        cow_cdecl(g, COW_IMG(0x10311bf0u), 1, eax);
    }
L_101c33c5: ;
    g->ebx = rd32(sp0 - 0x248u);
    g->esi = rd32(sp0 - 0x250u);
    g->edi = rd32(sp0 - 0x254u);
    g->ebp = rd32(sp0 - 0x24cu);
    return 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101c2fd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101c2fd0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
