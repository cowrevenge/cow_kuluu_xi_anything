/* f_0x101d0c70 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d0c70(Guest* g)
{
    double d7;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_244;
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
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t5;
    uint32_t t6;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 604u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101d0c87u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_101d0c87;
    case 0x101d0c8eu: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x244u); goto E_101d0c8e;
    case 0x101d0ca2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0ca2;
    case 0x101d0caeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0cae;
    case 0x101d0cc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0cc6;
    case 0x101d0cd2u: eax = g->eax; self = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x244u); goto E_101d0cd2;
    case 0x101d0ce9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0ce9;
    case 0x101d0cfdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0cfd;
    case 0x101d0d04u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d04;
    case 0x101d0d0du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d0d;
    case 0x101d0d16u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d16;
    case 0x101d0d20u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d20;
    case 0x101d0d2eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d2e;
    case 0x101d0d3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0d3f;
    case 0x101d0d50u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x244u); goto E_101d0d50;
    case 0x101d0d7cu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_esi = rd32(sp0 - 0x244u); g->esi = rd32(sp0 - 0x244u); goto E_101d0d7c;
    case 0x101d0db4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0db4;
    case 0x101d0db8u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0db8;
    case 0x101d0de1u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0de1;
    case 0x101d0de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0de6;
    case 0x101d0e22u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_101d0e22;
    case 0x101d0e4au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = g->esi; goto E_101d0e4a;
    case 0x101d0e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; loc_244 = rd32(sp0 - 0x244u); goto E_101d0e77;
    default: break;
    }
#endif

    COW_AT(101d0c70)
    wr32(sp0 - 0x244u, in_esi);
    if ((uint32_t)(int16_t)rd16(COW_IMG(0x10663178u)) > 4u)
    {
        loc_244 = in_esi;
        goto L_101d0e77;
    }
    eax = (uint32_t)(int16_t)rd16(COW_IMG(0x10663178u));
    COW_AT(101d0c87)
    t1 = rd32(COW_IMG(0x101d0e80u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x101d0c8eu: goto L_101d0c8e;
    case 0x101d0cd2u: goto L_101d0cd2;
    case 0x101d0d50u: goto L_101d0d50;
    case 0x101d0d7cu: goto L_101d0d7c;
    case 0x101d0e4au: goto L_101d0e4a;
    default: rt_fatal(g, COW_IMG(0x101d0c87u), "switch");
    }
    return;
L_101d0c8e: ;
    COW_AT(101d0c8e)
    wr32(sp0 - 0x248u, 0xffffffffu);
    wr32(sp0 - 0x24cu, 1u);
    wr32(sp0 - 0x250u, 0x55u);
    wr32(sp0 - 0x254u, 0x3eu);
    g->edx = in_edx;
    g->esp = sp0 - 0x238u;
    t37 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0x55u, 1u, 0xffffffffu, in_esi, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t38 = g->ecx;
    t39 = g->edx;
    if ((uint8_t)t37 == 0u)
    {
        eax = t37;
        ecx = t38;
        edx = t39;
        goto L_101d0cae;
    }
    eax = t37;
    ecx = t38;
    edx = t39;
    COW_AT(101d0ca2)
    g->esp = sp0;
    g->esi = rd32(sp0 - 0x244u);
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101d0ab0u), eax, ecx, edx);
    return;
L_101d0cae: ;
    COW_AT(101d0cae)
    wr32(sp0 - 0x248u, 0xffffffffu);
    wr32(sp0 - 0x24cu, 1u);
    wr32(sp0 - 0x250u, 0x24u);
    wr32(sp0 - 0x254u, 0x3eu);
    g->edx = edx;
    g->esp = sp0 - 0x238u;
    t40 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x24u, 1u, 0xffffffffu, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t41 = g->ecx;
    t42 = g->edx;
    if ((uint8_t)t40 == 0u)
    {
        loc_244 = rd32(sp0 - 0x244u);
        goto L_101d0e77;
    }
    eax = t40;
    ecx = t41;
    edx = t42;
    COW_AT(101d0cc6)
    g->esp = sp0;
    g->esi = rd32(sp0 - 0x244u);
    g->edx = edx;
    cow_tailcall(g, COW_IMG(0x101d0ab0u), eax, ecx, edx);
    return;
L_101d0cd2: ;
    COW_AT(101d0cd2)
    wr32(sp0 - 0x248u, 0xffffffffu);
    wr32(sp0 - 0x24cu, 4u);
    wr32(sp0 - 0x250u, 0x8au);
    wr32(sp0 - 0x254u, 0x3eu);
    g->edx = in_edx;
    g->esp = sp0 - 0x238u;
    t29 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, self, g->edx, 1, 7, 0x3eu, 0x8au, 4u, 0xffffffffu, in_esi, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
    t30 = g->ecx;
    t31 = g->edx;
    if ((uint8_t)t29 == 0u)
    {
        edx = t31;
    COW_AT(101d0d04)
        wr16(COW_IMG(0x10663178u), 0u);
    }
    else
    {
        eax = t29;
        ecx = t30;
        edx = t31;
    COW_AT(101d0ce9)
        wr32(sp0 - 0x248u, 0xffffffffu);
        wr32(sp0 - 0x24cu, 1u);
        wr32(sp0 - 0x250u, 0x24u);
        wr32(sp0 - 0x254u, 0x3eu);
        g->edx = edx;
        g->esp = sp0 - 0x238u;
        t32 = cow_call_regs(g, COW_IMG(0x10123a70u), eax, ecx, g->edx, 1, 7, 0x3eu, 0x24u, 1u, 0xffffffffu, rd32(sp0 - 0x244u), rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu));
        t33 = g->ecx;
        t34 = g->edx;
        if ((uint8_t)t32 == 0u)
        {
            edx = t34;
        }
        else
        {
            eax = t32;
            ecx = t33;
            edx = t34;
    COW_AT(101d0cfd)
            g->edx = edx;
            g->esp = sp0 - 0x244u;
            cow_stdcall(g, COW_IMG(0x101d0ab0u), 0);
            t35 = g->edx;
            edx = t35;
        }
    }
    COW_AT(101d0d0d)
    if (rd32(COW_IMG(0x104dfd98u)) == 0u) goto L_101d0d3f;
    COW_AT(101d0d16)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u) goto L_101d0d3f;
    eax = rd32(COW_IMG(0x10456a28u));
    COW_AT(101d0d20)
    g->esp = sp0 - 0x244u;
    t36 = cow_call_regs(g, COW_IMG(0x10160700u), eax, COW_IMG(0x10621838u), g->edx, 1, 0);
    if ((uint8_t)t36 == 0u) goto L_101d0d3f;
    COW_AT(101d0d2e)
    if (rd32(rd32(COW_IMG(0x10663888u)) + 8u) == 0u)
    {
        loc_244 = rd32(sp0 - 0x244u);
        goto L_101d0e77;
    }
L_101d0d3f: ;
    COW_AT(101d0d3f)
    wr16(COW_IMG(0x10663178u), 0u);
    g->esi = rd32(sp0 - 0x244u);
    return;
L_101d0d50: ;
    COW_AT(101d0d50)
    t27 = rd32(COW_IMG(0x104568fcu));
    wr16(COW_IMG(0x10663178u), 3u);
    t28 = rd32(t27 + 0x2f0u);
    wr32(COW_IMG(0x10662f70u), t28);
    wr32(t27 + 0x2f0u, 0x3f800000u);
    g->esi = in_esi;
    return;
L_101d0d7c: ;
    COW_AT(101d0d7c)
    t6 = rd32(COW_IMG(0x104568fcu));
    d7 = (double)rdf32(COW_IMG(0x10662f70u));
    wr16(COW_IMG(0x10663178u), 4u);
    wrf32(t6 + 0x2f0u, (float)d7);
    g->eax = t6;
    g->edx = in_edx;
    t8 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x244u;
    t9 = cow_thiscall(g, COW_IMG(0x101c4990u), t8, 0);
    t10 = g->ecx;
    t11 = g->edx;
    wr32(sp0 - 0x248u, 0u);
    g->esi = t9 - 2u;
    g->edx = t11;
    g->esp = sp0 - 0x40u;
    t12 = cow_bridge_indirect(g, COW_IMG(0x101d0ea0u), 0u, 130u, (const uint32_t[]){0u, in_esi, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u)}, t10, g->edx, g->eax, 520u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_101d0e22;
    }
    eax = t12;
    ecx = t13;
    edx = t14;
    esi = t9 - 2u;
    COW_AT(101d0db4)
    if ((int32_t)esi < 0)
    {
    COW_AT(101d0de1)
        wr8(sp0 - 0x240u, 0u);
    }
    else
    {
    COW_AT(101d0db8)
        wr32(sp0 - 0x248u, 0xc8u);
        wr32(sp0 - 0x24cu, 0xc8u - esi);
        wr32(sp0 - 0x250u, 0x6eu);
        wr32(sp0 - 0x254u, 0xau);
        g->eax = eax;
        g->ecx = 0xc8u - esi;
        g->esp = sp0 - 0x24cu;
        t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x6eu);
        t16 = g->ecx;
        wr32(sp0 - 0x250u, t15);
        wr32(sp0 - 0x254u, sp0 - 0x240u);
        g->ecx = t16;
        g->edx = sp0 - 0x240u;
        g->esp = sp0 - 0x240u;
        cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x240u, t15, rd32(sp0 - 0x24cu), 0xc8u, rd32(sp0 - 0x244u));
        t17 = g->ecx;
        t18 = g->edx;
        ecx = t17;
        edx = t18;
    }
    COW_AT(101d0de6)
    wr32(sp0 - 0x248u, sp0 - 0x240u);
    wr32(sp0 - 0x24cu, 0x42u);
    wr32(sp0 - 0x250u, 9u);
    g->eax = sp0 - 0x240u;
    g->edx = edx;
    g->esp = sp0 - 0x248u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x42u);
    t20 = g->edx;
    wr32(sp0 - 0x24cu, t19);
    wr32(sp0 - 0x250u, COW_IMG(0x10358098u));
    wr32(sp0 - 0x254u, sp0 - 0x200u);
    g->esp = sp0 - 0x240u;
    t21 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x200u, COW_IMG(0x10358098u), t19, sp0 - 0x240u, rd32(sp0 - 0x244u));
    wr32(sp0 - 0x248u, sp0 - 0x200u);
    g->esp = sp0 - 0x244u;
    cow_thiscall(g, COW_IMG(0x10129e80u), rd32(COW_IMG(0x10578158u)), 1, sp0 - 0x200u);
    g->esi = rd32(sp0 - 0x244u);
    return;
L_101d0e22: ;
    COW_AT(101d0e22)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x244u;
    t22 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x248u, 0x8du);
    wr32(sp0 - 0x24cu, 7u);
    g->edx = t24;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 7u, 0x8du);
    t26 = g->edx;
    wr32(sp0 - 0x248u, t25);
    cow_thiscall(g, COW_IMG(0x10129eb0u), rd32(COW_IMG(0x10578158u)), 1, t25);
    g->esi = rd32(sp0 - 0x244u);
    return;
L_101d0e4a: ;
    COW_AT(101d0e4a)
    wr32(sp0 - 0x248u, 1u);
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x40u;
    t2 = cow_bridge_indirect(g, COW_IMG(0x101d0ea0u), 0u, 130u, (const uint32_t[]){1u, in_esi, rd32(sp0 - 0x240u), rd32(sp0 - 0x23cu), rd32(sp0 - 0x238u), rd32(sp0 - 0x234u), rd32(sp0 - 0x230u), rd32(sp0 - 0x22cu), rd32(sp0 - 0x228u), rd32(sp0 - 0x224u), rd32(sp0 - 0x220u), rd32(sp0 - 0x21cu), rd32(sp0 - 0x218u), rd32(sp0 - 0x214u), rd32(sp0 - 0x210u), rd32(sp0 - 0x20cu), rd32(sp0 - 0x208u), rd32(sp0 - 0x204u), rd32(sp0 - 0x200u), rd32(sp0 - 0x1fcu), rd32(sp0 - 0x1f8u), rd32(sp0 - 0x1f4u), rd32(sp0 - 0x1f0u), rd32(sp0 - 0x1ecu), rd32(sp0 - 0x1e8u), rd32(sp0 - 0x1e4u), rd32(sp0 - 0x1e0u), rd32(sp0 - 0x1dcu), rd32(sp0 - 0x1d8u), rd32(sp0 - 0x1d4u), rd32(sp0 - 0x1d0u), rd32(sp0 - 0x1ccu), rd32(sp0 - 0x1c8u), rd32(sp0 - 0x1c4u), rd32(sp0 - 0x1c0u), rd32(sp0 - 0x1bcu), rd32(sp0 - 0x1b8u), rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u), rd32(sp0 - 0x1acu), rd32(sp0 - 0x1a8u), rd32(sp0 - 0x1a4u), rd32(sp0 - 0x1a0u), rd32(sp0 - 0x19cu), rd32(sp0 - 0x198u), rd32(sp0 - 0x194u), rd32(sp0 - 0x190u), rd32(sp0 - 0x18cu), rd32(sp0 - 0x188u), rd32(sp0 - 0x184u), rd32(sp0 - 0x180u), rd32(sp0 - 0x17cu), rd32(sp0 - 0x178u), rd32(sp0 - 0x174u), rd32(sp0 - 0x170u), rd32(sp0 - 0x16cu), rd32(sp0 - 0x168u), rd32(sp0 - 0x164u), rd32(sp0 - 0x160u), rd32(sp0 - 0x15cu), rd32(sp0 - 0x158u), rd32(sp0 - 0x154u), rd32(sp0 - 0x150u), rd32(sp0 - 0x14cu), rd32(sp0 - 0x148u), rd32(sp0 - 0x144u), rd32(sp0 - 0x140u), rd32(sp0 - 0x13cu), rd32(sp0 - 0x138u), rd32(sp0 - 0x134u), rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u), rd32(sp0 - 0x120u), rd32(sp0 - 0x11cu), rd32(sp0 - 0x118u), rd32(sp0 - 0x114u), rd32(sp0 - 0x110u), rd32(sp0 - 0x10cu), rd32(sp0 - 0x108u), rd32(sp0 - 0x104u), rd32(sp0 - 0x100u), rd32(sp0 - 0xfcu), rd32(sp0 - 0xf8u), rd32(sp0 - 0xf4u), rd32(sp0 - 0xf0u), rd32(sp0 - 0xecu), rd32(sp0 - 0xe8u), rd32(sp0 - 0xe4u), rd32(sp0 - 0xe0u), rd32(sp0 - 0xdcu), rd32(sp0 - 0xd8u), rd32(sp0 - 0xd4u), rd32(sp0 - 0xd0u), rd32(sp0 - 0xccu), rd32(sp0 - 0xc8u), rd32(sp0 - 0xc4u), rd32(sp0 - 0xc0u), rd32(sp0 - 0xbcu), rd32(sp0 - 0xb8u), rd32(sp0 - 0xb4u), rd32(sp0 - 0xb0u), rd32(sp0 - 0xacu), rd32(sp0 - 0xa8u), rd32(sp0 - 0xa4u), rd32(sp0 - 0xa0u), rd32(sp0 - 0x9cu), rd32(sp0 - 0x98u), rd32(sp0 - 0x94u), rd32(sp0 - 0x90u), rd32(sp0 - 0x8cu), rd32(sp0 - 0x88u), rd32(sp0 - 0x84u), rd32(sp0 - 0x80u), rd32(sp0 - 0x7cu), rd32(sp0 - 0x78u), rd32(sp0 - 0x74u), rd32(sp0 - 0x70u), rd32(sp0 - 0x6cu), rd32(sp0 - 0x68u), rd32(sp0 - 0x64u), rd32(sp0 - 0x60u), rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u), rd32(sp0 - 0x54u), rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu), rd32(sp0 - 0x48u), rd32(sp0 - 0x44u)}, self, g->edx, g->eax, 520u);
    t3 = g->ecx;
    t4 = g->edx;
    wr32(sp0 - 0x24cu, 0xffffffffu);
    wr32(sp0 - 0x250u, 4u);
    wr32(sp0 - 0x254u, 0x8au);
    wr32(sp0 - 0x258u, 0x3eu);
    g->esp = sp0 - 0x23cu;
    t5 = cow_call_regs(g, COW_IMG(0x10123a70u), t2, t3, g->edx, 1, 7, 0x3eu, 0x8au, 4u, 0xffffffffu, 1u, in_esi, rd32(sp0 - 0x240u));
    wr8(COW_IMG(0x106218eau), 0u);
    wr16(COW_IMG(0x10663178u), (uint8_t)t5 != 0u);
    loc_244 = in_esi;
L_101d0e77: ;
    COW_AT(101d0e77)
    g->esi = loc_244;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101d0c70(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101d0c87u:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x244u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101d0c8eu:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0ca2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0caeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0cc6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0cd2u:
    {
        uint32_t eax;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0ce9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0cfdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d0du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d16u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d20u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d2eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d3fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d50u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0d7cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_esi = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0db4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0db8u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0de1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0de6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0e22u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    case 0x101d0e4au:
    {
        uint32_t eax;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = g->esi;
        g->esp = sp0 - 0x244u;
        wr32(sp0 - 0x244u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x101d0e77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_244;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        loc_244 = rd32(sp0 - 0x244u);
        g->esp = sp0 - 0x244u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101d0c70(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101d0c70(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
