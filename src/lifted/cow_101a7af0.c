/* f_0x101a7af0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=2 */
uint32_t cow_fn_101a7af0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    uint32_t t34;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 388u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101a7b10u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x150u); goto E_101a7b10;
    case 0x101a7b1bu: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x150u); goto E_101a7b1b;
    case 0x101a7b25u: ecx = g->ecx; in_edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x150u); goto E_101a7b25;
    case 0x101a7b30u: ecx = g->ecx; in_edx = g->edx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x150u); in_ebx = rd32(sp0 - 0x14cu); g->ebx = rd32(sp0 - 0x14cu); g->esi = rd32(sp0 - 0x150u); goto E_101a7b30;
    case 0x101a7b3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101a7b3c;
    case 0x101a7b50u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101a7b50;
    case 0x101a7b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; in_edi = g->edi; goto E_101a7b64;
    case 0x101a7ba0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7ba0;
    case 0x101a7babu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bab;
    case 0x101a7baeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bae;
    case 0x101a7bc9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bc9;
    case 0x101a7bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bcf;
    case 0x101a7bd8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bd8;
    case 0x101a7be0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7be0;
    case 0x101a7bf2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bf2;
    case 0x101a7bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7bff;
    case 0x101a7c01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c01;
    case 0x101a7c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c2b;
    case 0x101a7c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c32;
    case 0x101a7c3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c3d;
    case 0x101a7c65u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c65;
    case 0x101a7c6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c6d;
    case 0x101a7c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c71;
    case 0x101a7c7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7c7c;
    case 0x101a7cbeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7cbe;
    case 0x101a7cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7ccc;
    case 0x101a7ce8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7ce8;
    case 0x101a7cebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101a7ceb;
    default: break;
    }
#endif

    COW_AT(101a7af0)
    wr32(sp0 - 0x14cu, in_ebx);
    wr32(sp0 - 0x150u, in_esi);
    wr8(sp0 - 0x141u, 1u);
    wr8(sp0 - 0x148u, 0u);
    if ((uint16_t)arg1 < 0xc8u) goto L_101a7b1b;
    COW_AT(101a7b10)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return arg1 & 0xffffff00u;
L_101a7b1b: ;
    COW_AT(101a7b1b)
    if (rd32(COW_IMG(0x106627d4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x106627d4u));
        goto L_101a7b30;
    }
    COW_AT(101a7b25)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return arg1 & 0xffffff00u;
L_101a7b30: ;
    COW_AT(101a7b30)
    wr32(sp0 - 0x154u, arg1);
    g->eax = arg1;
    g->edx = in_edx;
    g->esp = sp0 - 0x150u;
    COW_RET(0x101a7b36u);
    t1 = cow_thiscall(g, COW_IMG(0x101a8a60u), ecx, 1, arg1);
    t2 = g->ecx;
    t3 = g->edx;
    eax = t1;
    ecx = t2;
    edx = t3;
    COW_AT(101a7b36)
    if (eax != 0u)
    {
        esi = eax;
        goto L_101a7b47;
    }
    COW_AT(101a7b3c)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x150u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101a7b47: ;
    COW_AT(101a7b47)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    COW_RET(0x101a7b4cu);
    t4 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t5 = g->ecx;
    t6 = g->edx;
    eax = t4;
    ecx = t5;
    edx = t6;
    COW_AT(101a7b4c)
    if ((uint8_t)eax == 0u) goto L_101a7b5b;
    COW_AT(101a7b50)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x150u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax & 0xffffff00u;
L_101a7b5b: ;
    COW_AT(101a7b5b)
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x150u;
    COW_RET(0x101a7b60u);
    t7 = cow_stdcall(g, COW_IMG(0x101a7ab0u), 0);
    t8 = g->ecx;
    t9 = g->edx;
    eax = t7;
    ecx = t8;
    edx = t9;
    COW_AT(101a7b60)
    if ((uint8_t)eax != 0u) goto L_101a7b6d;
    COW_AT(101a7b64)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x150u);
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return eax;
L_101a7b6d: ;
    COW_AT(101a7b6d)
    wr32(sp0 - 0x154u, in_ebp);
    wr32(sp0 - 0x158u, in_edi);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x158u;
    COW_RET(0x101a7b74u);
    t10 = cow_stdcall(g, COW_IMG(0x100dc120u), 0);
    t11 = g->ecx;
    t12 = g->edx;
    eax = t10;
    ecx = t11;
    edx = t12;
    COW_AT(101a7b74)
    wr32(COW_IMG(0x106627e0u), eax);
    wr8(COW_IMG(0x106627dcu), (uint8_t)arg2);
    wr32(sp0 - 0x15cu, arg2);
    wr32(sp0 - 0x160u, sp0 - 0xc0u);
    wr32(sp0 - 0x164u, esi);
    g->eax = sp0 - 0xc0u;
    g->ecx = ecx;
    g->esp = sp0 - 0x9cu;
    t13 = cow_bridge_indirect(g, COW_IMG(0x101a7930u), COW_IMG(0x101a7b94u), 50u, (const uint32_t[]){esi, sp0 - 0xc0u, arg2, rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u)}, g->ecx, edx, g->eax, 200u);
    t14 = g->ecx;
    t15 = g->edx;
    eax = t13;
    ecx = t14;
    edx = t15;
    COW_AT(101a7b94)
    ebx = in_ebx & 0xffffff00u;
    ebp = sp0 - 0xbeu;
    esi = 0u;
L_101a7ba0: ;
    COW_AT(101a7ba0)
    if ((rd8(ebp - 2u) & 3u) == 1u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebp - 2u);
        goto L_101a7c01;
    }
    eax = (eax & 0xffffff00u) | rd8(ebp - 2u);
    ecx = (rd8(ebp - 2u) & 3u) - 1u;
    COW_AT(101a7bab)
    if (ecx != 1u)
    {
        ecx = ecx - 1u;
        goto L_101a7bcf;
    }
    ecx = ecx - 1u;
    COW_AT(101a7bae)
    t16 = rd32(sp0 - 0x148u);
    wr32(sp0 + (uint8_t)t16 * 8u - 0x80u, esi);
    wr8(sp0 + (uint8_t)t16 * 8u - 0x7bu, 0u);
    wr8(sp0 + (uint8_t)t16 * 8u - 0x7cu, 0u);
    eax = sp0 + (uint8_t)t16 * 8u - 0x80u;
    edx = (uint8_t)t16;
L_101a7bc9: ;
    COW_AT(101a7bc9)
    wr8(sp0 - 0x148u, (uint8_t)((uint8_t)ebx + 1u));
    ebx = (ebx & 0xffffff00u) | (uint8_t)((uint8_t)ebx + 1u);
L_101a7bcf: ;
    COW_AT(101a7bcf)
    if ((int32_t)(esi + 1u) < 16)
    {
        ebp = ebp + 4u;
        esi = esi + 1u;
        goto L_101a7ba0;
    }
    COW_AT(101a7bd8)
    if ((uint8_t)ebx == 0u) goto L_101a7c6d;
    COW_AT(101a7be0)
    wr32(sp0 - 0x15cu, sp0 - 0x80u);
    t26 = rd32(sp0 - 0x148u);
    wr32(sp0 - 0x160u, t26);
    g->eax = eax;
    g->edx = t26;
    g->esp = sp0 - 0x154u;
    COW_RET(0x101a7bf2u);
    t27 = cow_cdecl(g, COW_IMG(0x100e5420u), 3, t26, sp0 - 0x80u, rd32(sp0 - 0x158u));
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(101a7bf2)
    if ((uint8_t)eax == 0u)
    {
        ebx = (ebx & 0xffffff00u) | (uint8_t)eax;
        goto L_101a7ceb;
    }
    ebx = (ebx & 0xffffff00u) | (uint8_t)eax;
    COW_AT(101a7bff)
L_101a7c71: ;
    COW_AT(101a7c71)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    COW_AT(101a7c7c)
        wr8(sp0 - 0x140u, rd8(COW_IMG(0x103d3c84u)));
        wr8(sp0 - 0x148u, 0xcau);
        edi = sp0 - 0x13fu;
        eax = 0u;
        ecx = 0x1fu;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
        wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
        wr8(sp0 - 0x147u, 3u);
        wr8(sp0 - 0x146u, 0u);
        t29 = (uint16_t)arg1 + 1u;
        wr32(sp0 - 0x15cu, t29);
        wr32(sp0 - 0x160u, 0x15du);
        wr32(sp0 - 0x164u, 0xcu);
        g->eax = t29;
        g->edx = edx;
        g->esp = sp0 - 0x15cu;
        COW_RET(0x101a7cbeu);
        t30 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x15du);
        t31 = g->edx;
        eax = t30;
        edx = t31;
    COW_AT(101a7cbe)
        wr32(sp0 - 0x160u, eax);
        wr32(sp0 - 0x164u, sp0 - 0x140u);
        g->ebx = ebx;
        g->ecx = sp0 - 0x140u;
        g->esp = sp0 - 0x150u;
        COW_RET(0x101a7cccu);
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x140u, eax, rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u));
        t32 = g->ecx;
        ecx = t32;
    COW_AT(101a7ccc)
        wr32(sp0 - 0x168u, 0u);
        wr32(sp0 - 0x16cu, 0u);
        wr32(sp0 - 0x170u, 0u);
        wr32(sp0 - 0x174u, sp0 - 0x148u);
        wr32(sp0 - 0x178u, 1u);
        wr32(sp0 - 0x17cu, sp0 - 0x140u);
        wr32(sp0 - 0x180u, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x164u;
        COW_RET(0x101a7ce8u);
        t33 = cow_call_regs(g, COW_IMG(0x100ad660u), sp0 - 0x140u, ecx, sp0 - 0x148u, 1, 7, COW_IMG(0x103d3c84u), sp0 - 0x140u, 1u, sp0 - 0x148u, 0u, 0u, 0u);
        t34 = g->edx;
        eax = t33;
        edx = t34;
    COW_AT(101a7ce8)
    }
L_101a7ceb: ;
    COW_AT(101a7ceb)
    g->ebx = rd32(sp0 - 0x14cu);
    g->esi = rd32(sp0 - 0x150u);
    g->edi = rd32(sp0 - 0x158u);
    g->ebp = rd32(sp0 - 0x154u);
    g->edx = edx;
    return (eax & 0xffffff00u) | (uint8_t)ebx;
L_101a7c01: ;
    COW_AT(101a7c01)
    t17 = rd32(sp0 - 0x148u);
    t18 = rd8(ebp - 1u);
    wr8(sp0 + (uint8_t)t17 * 8u - 0x7cu, (uint8_t)t18);
    t19 = ((edx | t18) & 0xffff0000u) | rd16(ebp);
    wr32(sp0 - 0x15cu, t19);
    wr32(sp0 - 0x160u, esi);
    wr32(sp0 + (uint8_t)t17 * 8u - 0x80u, esi);
    wr8(sp0 + (uint8_t)t17 * 8u - 0x7bu, (uint8_t)eax >> 2u);
    g->ecx = sp0 + (uint8_t)t17 * 8u - 0x80u;
    g->edx = t19;
    g->esp = sp0 - 0x160u;
    COW_RET(0x101a7c2bu);
    t20 = cow_call_regs(g, COW_IMG(0x101a7aa0u), (eax & 0xffffff00u) | (uint8_t)eax >> 2u, g->ecx, g->edx, 1, 0);
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(101a7c2b)
    if ((uint8_t)eax != 0u) goto L_101a7bc9;
    COW_AT(101a7c32)
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
    COW_AT(101a7c3d)
        edi = sp0 - 0x140u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr16(sp0 - 0x138u, 0x112u);
        wr32(sp0 - 0x15cu, sp0 - 0x140u);
        wr32(sp0 - 0x134u, (uint16_t)edx);
        g->ebx = ebx;
        g->eax = sp0 - 0x140u;
        g->ecx = ecx;
        g->edx = (uint16_t)edx;
        g->esp = sp0 - 0x158u;
        COW_RET(0x101a7c65u);
        t23 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x140u);
        t24 = g->ecx;
        t25 = g->edx;
        eax = t23;
        ecx = t24;
        edx = t25;
    COW_AT(101a7c65)
    }
    goto L_101a7bcf;
L_101a7c6d: ;
    COW_AT(101a7c6d)
    ebx = (ebx & 0xffffff00u) | rd8(sp0 - 0x141u);
    goto L_101a7c71;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101a7af0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101a7b10u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x150u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7b1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x150u;
        g->eax = arg1;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101a7b25u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x150u;
        g->eax = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101a7b30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x150u);
        in_ebx = rd32(sp0 - 0x14cu);
        g->esp = sp0 - 0x150u;
        g->eax = arg1;
        g->ebx = in_ebx & 0xffffff00u;
        (void)sp0;
        return 1;
    }
    case 0x101a7b3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101a7b50u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101a7b64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_edi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        in_edi = g->edi;
        g->esp = sp0 - 0x150u;
        (void)sp0;
        return 1;
    }
    case 0x101a7ba0u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7babu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7baeu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7bc9u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7bcfu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7bd8u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7be0u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7bf2u:
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
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x101a7bffu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c01u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c2bu:
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
        g->esp = sp0 - 0x160u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c32u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c3du:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c65u:
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
        g->esp = sp0 - 0x15cu;
        (void)sp0;
        return 1;
    }
    case 0x101a7c6du:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c71u:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7c7cu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    case 0x101a7cbeu:
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
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101a7cccu:
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
        g->esp = sp0 - 0x164u;
        (void)sp0;
        return 1;
    }
    case 0x101a7ce8u:
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
        g->esp = sp0 - 0x180u;
        (void)sp0;
        return 1;
    }
    case 0x101a7cebu:
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
        g->esp = sp0 - 0x158u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
/* blocks no state can start at, and why (the gittable lists their sites):
     101a7b36: holds in_ebx, which no location here says
     101a7b47: holds in_ebx, which no location here says
     101a7b4c: holds in_ebx, which no location here says
     101a7b5b: holds in_ebx, which no location here says
     101a7b60: holds in_ebx, which no location here says
     101a7b6d: holds in_ebx, which no location here says
     101a7b74: holds in_ebx, which no location here says
     101a7b94: holds in_ebx, which no location here says
*/
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101a7af0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101a7af0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
