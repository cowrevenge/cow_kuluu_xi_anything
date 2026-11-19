/* f_0x1008e4d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1008e4d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1008e4f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e4f4;
    case 0x1008e4f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e4f8;
    case 0x1008e502u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e502;
    case 0x1008e50fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e50f;
    case 0x1008e511u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e511;
    case 0x1008e516u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e516;
    case 0x1008e51cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e51c;
    case 0x1008e52eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e52e;
    case 0x1008e535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e535;
    case 0x1008e543u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e543;
    case 0x1008e54eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e54e;
    case 0x1008e554u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e554;
    case 0x1008e562u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e562;
    case 0x1008e56du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e56d;
    case 0x1008e573u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e573;
    case 0x1008e582u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e582;
    case 0x1008e590u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e590;
    case 0x1008e5a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5a0;
    case 0x1008e5afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5af;
    case 0x1008e5b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5b8;
    case 0x1008e5cau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5ca;
    case 0x1008e5dau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5da;
    case 0x1008e5e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5e9;
    case 0x1008e5f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e5f5;
    case 0x1008e603u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e603;
    case 0x1008e610u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e610;
    case 0x1008e631u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e631;
    case 0x1008e63au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e63a;
    case 0x1008e648u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e648;
    case 0x1008e651u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e651;
    case 0x1008e653u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e653;
    case 0x1008e65fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e65f;
    case 0x1008e664u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e664;
    case 0x1008e66eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e66e;
    case 0x1008e678u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e678;
    case 0x1008e686u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e686;
    case 0x1008e68du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e68d;
    case 0x1008e695u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e695;
    case 0x1008e69eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e69e;
    case 0x1008e6b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e6b1;
    case 0x1008e6c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e6c0;
    case 0x1008e6c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e6c2;
    case 0x1008e6c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1008e6c8;
    default: break;
    }
#endif

    COW_AT(1008e4d0)
    g->ecx = self;
    g->esp = sp0 - 8u;
    t1 = cow_call_regs(g, COW_IMG(0x101cc4f0u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = rd32(self + 0x120u) & 0xff7fffffu;
    wr32(self + 0x120u, t3);
    if ((t3 >> 8u & 2u) == 0u)
    {
        eax = t3;
        edi = t1;
    }
    else
    {
        eax = t3;
        ecx = t2;
        edx = t3;
        edi = t1;
    COW_AT(1008e4f4)
        if ((int8_t)eax >= 0) goto L_1008e511;
    COW_AT(1008e4f8)
        if (rd8(COW_IMG(0x104807f5u)) == 0u) goto L_1008e511;
    COW_AT(1008e502)
        if ((eax & 0x20000u) != 0u)
        {
            ecx = rd32(self + 0xa0u);
            goto L_1008e554;
        }
        ecx = rd32(self + 0xa0u);
    COW_AT(1008e50f)
L_1008e51c: ;
    COW_AT(1008e51c)
        g->esp = sp0 - 8u;
        cow_call_regs(g, COW_IMG(0x10085a10u), eax, ecx, edx, 1, 0);
        eax = rd32(self + 0x120u) & 0xfffeffffu;
L_1008e56d: ;
    COW_AT(1008e56d)
        wr32(self + 0x120u, eax);
    }
L_1008e573: ;
    COW_AT(1008e573)
    if (rd32(self + 0x120u) >> 8u & 1u) goto L_1008e6c8;
    ecx = rd32(self + 0x120u);
    COW_AT(1008e582)
    if (!(rd32(edi + 0x130u) >> 0xbu & 1u))
    {
        edx = rd32(edi + 0x130u) >> 0xbu;
        goto L_1008e5f5;
    }
    edx = rd32(edi + 0x130u) >> 0xbu;
    COW_AT(1008e590)
    if (rd8(edi + 0x1ffu) - 2u > 0x29u)
    {
        eax = rd8(edi + 0x1ffu) - 2u;
        goto L_1008e5f5;
    }
    eax = rd8(edi + 0x1ffu) - 2u;
    COW_AT(1008e5a0)
    t5 = rd32(COW_IMG(0x1008e6ccu) + rd8(COW_IMG(0x1008e6d4u) + eax) * 4u);
    edx = rd8(COW_IMG(0x1008e6d4u) + eax);
    switch (t5 - RD)
    {
    case 0x1008e5afu: goto L_1008e5af;
    case 0x1008e5f5u: goto L_1008e5f5;
    default: rt_fatal(g, COW_IMG(0x1008e5a8u), "switch");
    }
    return 0;
L_1008e511: ;
    COW_AT(1008e511)
    if ((eax >> 8u & 0xc0u) != 0u) goto L_1008e52e;
    COW_AT(1008e516)
    ecx = rd32(self + 0xa0u);
    goto L_1008e51c;
L_1008e52e: ;
    COW_AT(1008e52e)
    if ((eax & 0x40000u) != 0u)
    {
    COW_AT(1008e535)
        if (rd32(self + 0x138u) >> 0x1fu == 0u)
        {
    COW_AT(1008e543)
            wr32(self + 0x120u, eax | 0x800000u);
            eax = eax | 0x800000u;
        }
    }
    COW_AT(1008e54e)
    ecx = rd32(self + 0xa0u);
L_1008e554: ;
    COW_AT(1008e554)
    g->esp = sp0 - 8u;
    t4 = cow_call_regs(g, COW_IMG(0x10085a50u), eax, ecx, edx, 1, 0);
    if (rd8(self + 0x122u) & 1u)
    {
        eax = t4;
        goto L_1008e573;
    }
    COW_AT(1008e562)
    eax = rd32(self + 0x120u) | 0x10000u;
    goto L_1008e56d;
L_1008e5af: ;
    COW_AT(1008e5af)
    if (!(rd8(self + 0x1d0u) & 1u)) goto L_1008e5f5;
    COW_AT(1008e5b8)
    if ((rd32(self + 0x128u) & 0x3800u) >= 0x1800u)
    {
        eax = rd32(self + 0x128u) & 0x3800u;
        goto L_1008e5f5;
    }
    COW_AT(1008e5ca)
    if (rd8(self + 0x1ffu) - 2u > 0x29u)
    {
        eax = rd8(self + 0x1ffu) - 2u;
        goto L_1008e5e9;
    }
    eax = rd8(self + 0x1ffu) - 2u;
    COW_AT(1008e5da)
    t6 = rd32(COW_IMG(0x1008e700u) + rd8(COW_IMG(0x1008e708u) + eax) * 4u);
    edx = rd8(COW_IMG(0x1008e708u) + eax);
    switch (t6 - RD)
    {
    case 0x1008e5e9u: goto L_1008e5e9;
    case 0x1008e5f5u: goto L_1008e5f5;
    default: rt_fatal(g, COW_IMG(0x1008e5e2u), "switch");
    }
    return 0;
L_1008e5e9: ;
    COW_AT(1008e5e9)
    wr32(self + 0x120u, ecx | 0x800000u);
    ecx = ecx | 0x800000u;
L_1008e5f5: ;
    COW_AT(1008e5f5)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 5u);
    t8 = g->ecx;
    t9 = g->edx;
    if ((uint8_t)t7 == 0u)
    {
        ecx = t8;
        edx = t9;
        goto L_1008e65f;
    }
    ecx = t8;
    edx = t9;
    COW_AT(1008e603)
    if (!(rd32(self + 0x12cu) >> 0x16u & 1u)) goto L_1008e65f;
    eax = rd32(self + 0x12cu) >> 0x16u;
    COW_AT(1008e610)
    t10 = rd32(self + 0x120u) | 0x800000u;
    wr32(self + 0x120u, t10);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x100e8b80u), t10, 1, 0u);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0u)
    {
        ecx = t12;
        edx = t13;
        goto L_1008e664;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
L_1008e631: ;
    COW_AT(1008e631)
    if (rd16(eax + 0x18u) == 0u)
    {
        eax = (eax & 0xffff0000u) | rd16(eax + 0x18u);
        goto L_1008e648;
    }
    eax = (eax & 0xffff0000u) | rd16(eax + 0x18u);
    COW_AT(1008e63a)
    if (self == rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u)) goto L_1008e653;
    eax = (uint16_t)eax;
L_1008e648: ;
    COW_AT(1008e648)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t14 = cow_stdcall(g, COW_IMG(0x100e8c70u), 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 != 0u)
    {
        eax = t14;
        ecx = t15;
        edx = t16;
        goto L_1008e631;
    }
    ecx = t15;
    edx = t16;
    COW_AT(1008e651)
L_1008e664: ;
    COW_AT(1008e664)
    if ((int8_t)rd32(self + 0x120u) >= 0)
    {
        eax = rd32(self + 0x120u);
        goto L_1008e678;
    }
    eax = rd32(self + 0x120u);
    COW_AT(1008e66e)
    if (rd8(COW_IMG(0x104807f5u)) != 0u) goto L_1008e6c8;
L_1008e678: ;
    COW_AT(1008e678)
    if (rd32(self + 0x138u) >> 0x1fu == 0u)
    {
        ecx = rd32(self + 0x138u) >> 0x1fu;
    COW_AT(1008e686)
        if ((eax & 0x44000u) != 0u)
        {
    COW_AT(1008e68d)
            wr32(self + 0x120u, eax | 0x800000u);
            eax = eax | 0x800000u;
        }
    COW_AT(1008e695)
        if ((rd32(self + 0x78u) & 0xff000000u) != 0u)
        {
    COW_AT(1008e6b1)
            eax = (eax & 0xffffff00u) | rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u));
            zf = ((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 0x10u) == 0u;
        }
        else
        {
    COW_AT(1008e69e)
            zf = ((rd8(COW_IMG(0x104808fcu)) | rd8(COW_IMG(0x1047fb40u))) & 2u) == 0u;
        }
    COW_AT(1008e6c0)
        if (!zf)
        {
    COW_AT(1008e6c2)
            wr32(self + 0x120u, rd32(self + 0x120u) | 0x800000u);
        }
    }
L_1008e6c8: ;
    COW_AT(1008e6c8)
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_1008e653: ;
    COW_AT(1008e653)
    wr32(self + 0x120u, rd32(self + 0x120u) & 0xff7fffffu);
    goto L_1008e664;
L_1008e65f: ;
    COW_AT(1008e65f)
    goto L_1008e664;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1008e4d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1008e4f4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e4f8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e502u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e50fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e511u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e516u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e51cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e52eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e535u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e543u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e54eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e554u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e562u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e56du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e573u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e582u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e590u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5b8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5cau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e5f5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e603u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e610u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e631u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e63au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e648u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e651u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e653u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e65fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1008e664u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e66eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e678u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e686u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e68du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e695u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e69eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e6b1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e6c0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e6c2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0x800000u;
        (void)sp0;
        return 1;
    }
    case 0x1008e6c8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1008e4d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_1008e4d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
