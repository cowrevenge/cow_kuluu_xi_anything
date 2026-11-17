/* f_0x10284430 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10284430(Guest* g)
{
    double d10;
    double d11;
    double d12;
    double d13;
    double d14;
    double d15;
    double d16;
    double d17;
    double d20;
    double d21;
    double d22;
    double d8;
    double d9;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_15c;
    uint32_t loc_1a8;
    uint32_t loc_1b0;
    uint32_t t1;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 480u);

    wr32(sp0 - 0x1b4u, in_ebx);
    wr32(sp0 - 0x1b8u, in_ebp);
    wr32(sp0 - 0x1bcu, in_esi);
    wr32(sp0 - 0x1c0u, in_edi);
    wr32(sp0 - 0x1b0u, 0u);
    if ((int32_t)(rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u) <= 0)
    {
        edx = 0u;
        esi = rd32(COW_IMG(0x1099d200u));
        edi = 0u;
        loc_1b0 = 0u;
    }
    else
    {
        ecx = rd32(rd32(COW_IMG(0x1099d200u)) + 0xb18u) + 1u;
        esi = rd32(COW_IMG(0x1099d200u));
        eax = esi + 0xa20u;
        edx = 0u;
        edi = 0u;
L_10284459: ;
        if (ecx != 1u)
        {
            ecx = ecx - 1u;
            edx = edx | rd32(eax + 4u);
            edi = edi | rd32(eax);
            eax = eax + 8u;
            goto L_10284459;
        }
        edx = edx | rd32(eax + 4u);
        edi = edi | rd32(eax);
        wr32(sp0 - 0x1b0u, edi);
        loc_1b0 = edi;
    }
    if ((edi & 0x80000000u) == 0u)
    {
        eax = edi & 0x80000000u;
        wr32(sp0 - 0x1c4u, esi + 0x1c8u);
        wr32(sp0 - 0x1c8u, sp0 - 0x100u);
        g->cf = esi + 0x1c8u < esi;
        g->pf = PARITY((uint8_t)(esi + 0x1c8u));
        g->af = (esi ^ esi + 0x1c8u) >> 4u & 1u;
        g->zf = esi + 0x1c8u == 0u;
        g->sf = (int32_t)(esi + 0x1c8u) < 0;
        g->of = ((esi ^ esi + 0x1c8u) & (esi + 0x1c8u ^ 0x1c8u)) >> 0x1fu;
        g->esp = sp0 - 0x1b4u;
        cow_cdecl(g, COW_IMG(0x1027eb30u), 5, sp0 - 0x100u, esi + 0x1c8u, in_edi, in_esi, in_ebp);
    }
    else
    {
        wr32(sp0 - 0x1c4u, sp0 - 0x40u);
        g->esp = sp0 - 0x1c0u;
        cow_cdecl(g, COW_IMG(0x10298370u), 1, sp0 - 0x40u);
        wr32(sp0 - 0x1c8u, sp0 - 0x40u);
        t1 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
        wr32(sp0 - 0x1ccu, t1);
        wr32(sp0 - 0x1d0u, sp0 - 0x100u);
        g->esp = sp0 - 0x1c4u;
        cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x100u, t1, sp0 - 0x40u);
    }
    t2 = rd32(COW_IMG(0x1099d200u)) + 0x2ecu;
    wr32(sp0 - 0x1c4u, t2);
    wr32(sp0 - 0x1c8u, 3u);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x94u), t2, 3, rd32(COW_IMG(0x1066941cu)), 3u, t2);
    t3 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
    wr32(sp0 - 0x1c4u, t3);
    wr32(sp0 - 0x1c8u, 2u);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x94u), t3, 3, rd32(COW_IMG(0x1066941cu)), 2u, t3);
    wr32(sp0 - 0x1c4u, sp0 - 0x100u);
    wr32(sp0 - 0x1c8u, 0x100u);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0x94u), sp0 - 0x100u, 3, rd32(COW_IMG(0x1066941cu)), 0x100u, sp0 - 0x100u);
    t4 = rd32(COW_IMG(0x1099d200u)) + 0x208u;
    wr32(sp0 - 0x1c4u, t4);
    wr32(sp0 - 0x1c8u, sp0 - 0x100u);
    wr32(sp0 - 0x1ccu, sp0 - 0x80u);
    g->ecx = sp0 - 0x80u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x80u, sp0 - 0x100u, t4);
    t5 = g->ecx;
    t6 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0x1d0u, t6);
    wr32(sp0 - 0x1d4u, sp0 - 0xc0u);
    g->eax = sp0 - 0xc0u;
    g->esp = sp0 - 0xfcu;
    t7 = cow_bridge_indirect(g, COW_IMG(0x1027f100u), 0u, 54u, (const uint32_t[]){sp0 - 0xc0u, t6, sp0 - 0x80u, sp0 - 0x100u, rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u)}, g->ecx, g->edx, g->eax, 216u);
    if (rd8(rd32(COW_IMG(0x1099d200u)) + 0x754u) == 0u)
    {
        edx = rd32(COW_IMG(0x1099d200u));
    }
    else
    {
        eax = (t7 & 0xffffff00u) | rd8(rd32(COW_IMG(0x1099d200u)) + 0x754u);
        edx = rd32(COW_IMG(0x1099d200u));
        wr32(sp0 - 0x1c4u, sp0 - 0x80u);
        g->esp = sp0 - 0x1c0u;
        cow_cdecl(g, COW_IMG(0x1027fce0u), 1, sp0 - 0x80u);
        d8 = cow_take_float(g);
        edx = rd32(COW_IMG(0x1099d200u));
    }
    ebx = 0x854u;
    ebp = 0u;
    esi = 0u;
    loc_1a8 = rd32(sp0 - 0x1a8u);
    loc_15c = rd32(sp0 - 0x15cu);
L_10284591: ;
    if (rd32(ebx + edx) == 0u) goto L_1028461b;
    if ((rd32(edx + 0xa20u) & 0x40000u) != 0u) goto L_1028461b;
    wr32(sp0 - 0x1c4u, 1u);
    edi = sp0 - 0x1a8u;
    eax = 0u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1a8u, 3u);
    wr32(sp0 - 0x15cu, 0x447a0000u);
    d9 = (double)(float)-(double)rdf32(edx + esi + 0x34cu);
    wrf32(sp0 - 0x168u, (float)d9);
    wr32(sp0 - 0x1c8u, ebp);
    d10 = (double)(float)-(double)rdf32(edx + esi + 0x350u);
    wrf32(sp0 - 0x164u, (float)d10);
    d11 = (double)(float)-(double)rdf32(edx + esi + 0x354u);
    wrf32(sp0 - 0x160u, (float)d11);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), ebp, 1u);
    wr32(sp0 - 0x1c4u, sp0 - 0x1a8u);
    wr32(sp0 - 0x1c8u, ebp);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb0u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), ebp, sp0 - 0x1a8u);
    edi = rd32(sp0 - 0x1b0u);
    loc_1a8 = 3u;
    loc_15c = 0x447a0000u;
L_1028462c: ;
    if ((int32_t)(ebx + 4u) < 2148)
    {
        ebx = ebx + 4u;
        ebp = ebp + 1u;
        esi = esi + 0x40u;
        goto L_1028458b;
    }
    ebx = 0x874u;
    ebp = 4u;
    esi = 0u;
L_1028464b: ;
    if (rd32(ebx + rd32(COW_IMG(0x1099d200u))) == 0u)
    {
        edx = rd32(COW_IMG(0x1099d200u));
        goto L_102846fa;
    }
    edx = rd32(COW_IMG(0x1099d200u));
    if ((rd32(edx + 0xa20u) & 0x40000u) != 0u) goto L_102846fa;
    wr32(sp0 - 0x1c4u, 1u);
    edi = sp0 - 0x1a8u;
    eax = 0u;
    ecx = 0x1au;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp0 - 0x1a8u, 1u);
    wr32(sp0 - 0x15cu, 0x447a0000u);
    wr32(sp0 - 0x1c8u, ebp);
    d12 = (double)(float)(double)rdf32(edx + esi + 0x54cu);
    wrf32(sp0 - 0x168u, (float)d12);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    d13 = (double)(float)(double)rdf32(edx + esi + 0x550u);
    wrf32(sp0 - 0x164u, (float)d13);
    d14 = (double)(float)(double)rdf32(edx + esi + 0x554u);
    wrf32(sp0 - 0x160u, (float)d14);
    d15 = (double)(float)(double)rdf32(edx + esi + 0x55cu);
    wrf32(sp0 - 0x174u, (float)d15);
    d16 = (double)(float)(double)rdf32(edx + esi + 0x560u);
    wrf32(sp0 - 0x170u, (float)d16);
    d17 = (double)(float)(double)rdf32(edx + esi + 0x564u);
    wrf32(sp0 - 0x16cu, (float)d17);
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), ecx, 3, rd32(COW_IMG(0x1066941cu)), ebp, 1u);
    wr32(sp0 - 0x1c4u, sp0 - 0x1a8u);
    wr32(sp0 - 0x1c8u, ebp);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb0u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), ebp, sp0 - 0x1a8u);
    edi = rd32(sp0 - 0x1b0u);
    loc_1a8 = 1u;
    loc_15c = 0x447a0000u;
L_1028470b: ;
    if ((int32_t)(ebp - 3u) < 4)
    {
        ebx = ebx + 4u;
        ebp = ebp + 1u;
        esi = esi + 0x40u;
        goto L_1028464b;
    }
    edx = ebp - 3u;
    t18 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0x1c4u, t18);
    wr32(sp0 - 0x1c8u, sp0 - 0xc0u);
    g->esp = sp0 - 0xf0u;
    cow_bridge_indirect(g, COW_IMG(0x1027f100u), 0u, 54u, (const uint32_t[]){sp0 - 0xc0u, t18, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), loc_1a8, rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), loc_15c, rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u)}, g->ecx, g->edx, g->eax, 216u);
    wr32(sp0 - 0x1ccu, sp0 - 0xc0u);
    t19 = rd32(COW_IMG(0x1099d200u)) + 0x188u;
    wr32(sp0 - 0x1d0u, t19);
    wr32(sp0 - 0x1d4u, sp0 - 0x140u);
    g->esp = sp0 - 0x1c8u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, sp0 - 0x140u, t19, sp0 - 0xc0u);
    d20 = (double)rdf32(sp0 - 0x110u);
    d21 = (double)rdf32(sp0 - 0x108u);
    d22 = (double)rdf32(sp0 - 0x10cu);
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x288u, (float)d20);
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x28cu, (float)d22);
    wrf32(rd32(COW_IMG(0x1099d200u)) + 0x290u, (float)d21);
    if ((edi & 0x10u) != 0u) goto L_102847a9;
    if ((edi & 8u) == 0u) goto L_102847fd;
L_102847a9: ;
    t23 = rd32(COW_IMG(0x1099d200u)) + 0x32cu;
    wr32(sp0 - 0x1c4u, t23);
    wr32(sp0 - 0x1c8u, sp0 - 0x140u);
    g->esp = sp0 - 0xf0u;
    cow_bridge_indirect(g, COW_IMG(0x1027f100u), 0u, 54u, (const uint32_t[]){sp0 - 0x140u, t23, rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u)}, g->ecx, g->edx, g->eax, 216u);
    wr32(sp0 - 0x1ccu, sp0 - 0x140u);
    t24 = rd32(COW_IMG(0x1099d200u)) + 0x1c8u;
    wr32(sp0 - 0x1d0u, t24);
    t25 = rd32(COW_IMG(0x1099d200u)) + 0x248u;
    wr32(sp0 - 0x1d4u, t25);
    g->edx = t24;
    g->esp = sp0 - 0x1c8u;
    cow_cdecl(g, COW_IMG(0x10280160u), 3, t25, t24, sp0 - 0x140u);
    t26 = g->edx;
    t27 = rd32(COW_IMG(0x1099d200u)) + 0x248u;
    wr32(sp0 - 0x1d8u, t27);
    wr32(sp0 - 0x1dcu, sp0 - 0x140u);
    g->esp = sp0 - 0x1d4u;
    cow_cdecl(g, COW_IMG(0x1027f090u), 2, sp0 - 0x140u, t27);
L_102847fd: ;
    wr32(COW_IMG(0x109a2730u), 0u);
    g->ebx = rd32(sp0 - 0x1b4u);
    g->esi = rd32(sp0 - 0x1bcu);
    g->edi = rd32(sp0 - 0x1c0u);
    g->ebp = rd32(sp0 - 0x1b8u);
    return;
L_1028458b: ;
    edx = rd32(COW_IMG(0x1099d200u));
    goto L_10284591;
L_1028461b: ;
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, ebp);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), ebp, 0u);
    loc_1a8 = rd32(sp0 - 0x1a8u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_1028462c;
L_102846fa: ;
    wr32(sp0 - 0x1c4u, 0u);
    wr32(sp0 - 0x1c8u, ebp);
    wr32(sp0 - 0x1ccu, rd32(COW_IMG(0x1066941cu)));
    g->esp = sp0 - 0x1c0u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x1066941cu))) + 0xb8u), rd32(rd32(COW_IMG(0x1066941cu))), 3, rd32(COW_IMG(0x1066941cu)), ebp, 0u);
    loc_1a8 = rd32(sp0 - 0x1a8u);
    loc_15c = rd32(sp0 - 0x15cu);
    goto L_1028470b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10284430(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10284430(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
