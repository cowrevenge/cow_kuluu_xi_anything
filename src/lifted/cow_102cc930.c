/* f_0x102cc930 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102cc930(Guest* g)
{
    uint32_t al_m204;
    uint32_t al_m208;
    uint32_t al_m20c;
    uint32_t al_m210;
    uint32_t al_m214;
    uint32_t al_m218;
    uint32_t al_m21c;
    uint32_t al_m220;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_4;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 584u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102cc95au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp1 - 0x220u); in_esi = rd32(sp1 - 0x21cu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->edi = rd32(sp1 - 0x220u); g->esi = rd32(sp1 - 0x21cu); goto E_102cc95a;
    case 0x102cc96bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cc96b;
    case 0x102cc97bu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cc97b;
    case 0x102cc9a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cc9a5;
    case 0x102cc9afu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cc9af;
    case 0x102cc9b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cc9b5;
    case 0x102cc9bau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cc9ba;
    case 0x102cc9c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cc9c1;
    case 0x102cc9cau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cc9ca;
    case 0x102cca03u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cca03;
    case 0x102cca09u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102cca09;
    case 0x102cca15u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cca15;
    case 0x102cca3du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m214 = rd32(sp1 - 0x214u); al_m20c = rd32(sp1 - 0x20cu); al_m208 = rd32(sp1 - 0x208u); al_m204 = rd32(sp1 - 0x204u); goto E_102cca3d;
    case 0x102cca4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cca4e;
    case 0x102cca91u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m214 = rd32(sp1 - 0x214u); al_m20c = rd32(sp1 - 0x20cu); al_m208 = rd32(sp1 - 0x208u); al_m204 = rd32(sp1 - 0x204u); goto E_102cca91;
    case 0x102cca98u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102cca98;
    case 0x102ccab8u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccab8;
    case 0x102ccac2u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccac2;
    case 0x102ccac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccac7;
    case 0x102ccacdu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102ccacd;
    case 0x102ccad0u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccad0;
    case 0x102ccae4u: ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccae4;
    case 0x102ccae6u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m218 = rd32(sp1 - 0x218u); al_m210 = rd32(sp1 - 0x210u); goto E_102ccae6;
    case 0x102ccaeau: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccaea;
    case 0x102ccb10u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); al_m20c = rd32(sp1 - 0x20cu); loc_4 = rd32(sp0 - 4u); goto E_102ccb10;
    case 0x102ccb17u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102ccb17;
    case 0x102ccb1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); al_m20c = rd32(sp1 - 0x20cu); loc_4 = rd32(sp0 - 4u); goto E_102ccb1c;
    case 0x102ccb3du: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); al_m20c = rd32(sp1 - 0x20cu); loc_4 = rd32(sp0 - 4u); goto E_102ccb3d;
    case 0x102ccb49u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; goto E_102ccb49;
    case 0x102ccb66u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m210 = rd32(sp1 - 0x210u); goto E_102ccb66;
    case 0x102ccb6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m210 = rd32(sp1 - 0x210u); goto E_102ccb6e;
    case 0x102ccb96u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m210 = rd32(sp1 - 0x210u); goto E_102ccb96;
    case 0x102ccbadu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m210 = rd32(sp1 - 0x210u); goto E_102ccbad;
    case 0x102ccbbcu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m210 = rd32(sp1 - 0x210u); goto E_102ccbbc;
    case 0x102ccbd3u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; al_m220 = rd32(sp1 - 0x220u); al_m21c = rd32(sp1 - 0x21cu); al_m218 = rd32(sp1 - 0x218u); al_m214 = rd32(sp1 - 0x214u); al_m210 = rd32(sp1 - 0x210u); loc_4 = rd32(sp0 - 4u); goto E_102ccbd3;
    default: break;
    }
#endif

    COW_AT(102cc930)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp1 - 0x21cu, in_esi);
    wr32(sp1 - 0x220u, in_edi);
    wr32(arg3 + 0xb58u, arg2);
    wr32(sp1 - 0x210u, 0u);
    if ((int32_t)rd32(arg3 + 0xb5cu) <= 0)
    {
        ecx = self;
        edx = in_edx;
        loc_4 = in_ebp;
        al_m21c = in_esi;
        al_m220 = in_edi;
        al_m210 = 0u;
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
    }
    else
    {
    COW_AT(102cc95a)
        wr32(sp1 - 0x214u, arg1);
        wr32(sp1 - 0x218u, arg3 + 0xc80u);
        edx = arg3 + 0xc80u;
        edi = 0u;
        loc_4 = in_ebp;
        al_m21c = in_esi;
        al_m220 = in_edi;
        al_m210 = 0u;
        al_m214 = arg1;
        al_m218 = arg3 + 0xc80u;
L_102cc96b: ;
    COW_AT(102cc96b)
        wr32(sp1 - 0x224u, al_m218);
        wr32(sp1 - 0x228u, al_m214);
        g->esp = sp1 - 0x228u;
        cow_thiscall(g, rd32(arg3 + 0x676cu), al_m214, 0);
    COW_AT(102cc97b)
        t1 = rd32(sp1 - 0x218u) + 0x2d70u;
        wr32(sp1 - 0x218u, t1);
        t2 = rd32(sp1 - 0x214u) + 0x1000u;
        wr32(sp1 - 0x214u, t2);
        if ((int32_t)(edi + 1u) < (int32_t)rd32(arg3 + 0xb5cu))
        {
            edx = t1;
            edi = edi + 1u;
            loc_4 = rd32(sp0 - 4u);
            al_m21c = rd32(sp1 - 0x21cu);
            al_m220 = rd32(sp1 - 0x220u);
            al_m210 = rd32(sp1 - 0x210u);
            al_m214 = t2;
            al_m218 = t1;
            goto L_102cc96b;
        }
        ecx = t2;
        edx = t1;
        loc_4 = rd32(sp0 - 4u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m220 = rd32(sp1 - 0x220u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m218 = t1;
        al_m214 = t2;
    }
    COW_AT(102cc9a5)
    if ((int32_t)rd32(arg3 + 0xb64u) >= 0)
    {
        eax = rd32(arg3 + 0xb64u);
    COW_AT(102cc9af)
        wr32(sp1 - 0x224u, arg3);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x1e0u;
        t3 = cow_bridge_indirect(g, COW_IMG(0x102d2440u), 0u, 17u, (const uint32_t[]){arg3, al_m220, al_m21c, al_m218, al_m214, al_m210, rd32(sp1 - 0x20cu), rd32(sp1 - 0x208u), rd32(sp1 - 0x204u), rd32(sp1 - 0x200u), rd32(sp1 - 0x1fcu), rd32(sp1 - 0x1f8u), rd32(sp1 - 0x1f4u), rd32(sp1 - 0x1f0u), rd32(sp1 - 0x1ecu), rd32(sp1 - 0x1e8u), rd32(sp1 - 0x1e4u)}, g->ecx, g->edx, g->eax, 68u);
        t4 = g->ecx;
        t5 = g->edx;
        eax = t3;
        ecx = t4;
        edx = t5;
    COW_AT(102cc9b5)
        edi = 0u;
L_102cc9ba: ;
    COW_AT(102cc9ba)
        wr32(sp1 - 0x224u, edi);
        wr32(sp1 - 0x228u, arg3);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp1 - 0x220u;
        t6 = cow_cdecl(g, COW_IMG(0x102ccbe0u), 2, arg3, edi);
        t7 = g->ecx;
        t8 = g->edx;
        eax = t6;
        ecx = t7;
        edx = t8;
    COW_AT(102cc9c1)
        if ((int32_t)(edi + 1u) < 4)
        {
            edi = edi + 1u;
            goto L_102cc9ba;
        }
        loc_4 = rd32(sp0 - 4u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m220 = rd32(sp1 - 0x220u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m214 = rd32(sp1 - 0x214u);
    }
    COW_AT(102cc9ca)
    t9 = rd32(arg3 + 0xb60u) * rd32(arg3 + 0xb5cu);
    t10 = rd32(arg3 + 0xb58u);
    edi = t10;
    eax = 0u;
    ecx = t9 >> 2u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr32(sp1 - 0x218u, 0u);
    ecx = t9 & 3u;
    while (ecx) { wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    if ((int32_t)rd32(arg3 + 0xb5cu) <= 0)
    {
        edx = t9;
        al_m218 = 0u;
    }
    else
    {
        edx = t9;
    COW_AT(102cca03)
        edi = arg3 + 0xc80u;
        al_m218 = 0u;
L_102cca09: ;
    COW_AT(102cca09)
        wr32(sp1 - 0x224u, sp1 - 0x200u);
        wr32(sp1 - 0x228u, edi);
        g->esp = sp1 - 0x228u;
        cow_thiscall(g, rd32(arg3 + 0x6764u), ecx, 0);
    COW_AT(102cca15)
        wr32(sp1 - 0x214u, 3u);
        wr32(sp1 - 0x20cu, 0x99u);
        wr32(sp1 - 0x208u, sp1 - 0x80u);
        wr32(sp1 - 0x204u, edi + 0x2d54u);
        edx = edi + 0x2d54u;
        al_m214 = 3u;
        al_m20c = 0x99u;
        al_m208 = sp1 - 0x80u;
        al_m204 = edi + 0x2d54u;
L_102cca3d: ;
    COW_AT(102cca3d)
        wr32(sp1 - 0x224u, al_m208);
        wr32(sp1 - 0x228u, arg3);
        wr32(sp1 - 0x22cu, al_m214);
        wr32(sp1 - 0x230u, edi);
        g->eax = al_m208;
        g->esp = sp1 - 0x220u;
        t11 = cow_cdecl(g, COW_IMG(0x102d1d30u), 4, edi, al_m214, arg3, al_m208);
        eax = t11;
    COW_AT(102cca4e)
        t12 = rd32(sp1 - 0x204u);
        t13 = rd32(sp1 - 0x20cu);
        wr32(t12, eax);
        wr32(eax * 4u + edi + t13 * 4u + 0x2a48u, 4u);
        wr32(sp1 - 0x204u, t12 - 0xccu);
        t14 = rd32(sp1 - 0x214u) - 1u;
        wr32(sp1 - 0x214u, t14);
        t15 = rd32(sp1 - 0x208u) - 0x80u;
        wr32(sp1 - 0x208u, t15);
        wr32(sp1 - 0x20cu, t13 - 0x33u);
        if ((int32_t)(t13 - 0x33u) >= 0)
        {
            edx = t13 - 0x33u;
            al_m214 = t14;
            al_m20c = t13 - 0x33u;
            al_m208 = t15;
            al_m204 = t12 - 0xccu;
            goto L_102cca3d;
        }
        eax = t15;
        ecx = t12 - 0xccu;
        edx = t13 - 0x33u;
        al_m204 = t12 - 0xccu;
        al_m214 = t14;
        al_m208 = t15;
        al_m20c = t13 - 0x33u;
    COW_AT(102cca91)
        wr32(sp1 - 0x224u, edi);
        g->edx = edx;
        g->esp = sp1 - 0x224u;
        cow_thiscall(g, rd32(arg3 + 0x6760u), ecx, 0);
        t16 = g->edx;
        edx = t16;
    COW_AT(102cca98)
        t17 = rd32(sp1 - 0x218u) + 1u;
        t18 = rd32(sp1 - 0x218u);
        wr32(sp1 - 0x218u, t17);
        if ((int32_t)(t18 + 1u) < (int32_t)rd32(arg3 + 0xb5cu))
        {
            ecx = rd32(arg3 + 0xb5cu);
            edi = edi + 0x2d70u;
            loc_4 = rd32(sp0 - 4u);
            al_m21c = rd32(sp1 - 0x21cu);
            al_m220 = rd32(sp1 - 0x220u);
            al_m210 = rd32(sp1 - 0x210u);
            al_m218 = t17;
            goto L_102cca09;
        }
        ecx = rd32(arg3 + 0xb5cu);
        loc_4 = rd32(sp0 - 4u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m220 = rd32(sp1 - 0x220u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m218 = t17;
        al_m214 = rd32(sp1 - 0x214u);
    }
    COW_AT(102ccab8)
    if ((int32_t)rd32(arg3 + 0xb64u) >= 0)
    {
        eax = rd32(arg3 + 0xb64u);
    COW_AT(102ccac2)
        if (eax == 1u)
        {
    COW_AT(102ccac7)
            wr32(sp1 - 0x224u, arg3);
            g->esp = sp1 - 0x208u;
            cow_cdecl(g, COW_IMG(0x102cffd0u), 7, arg3, al_m220, al_m21c, al_m218, al_m214, al_m210, rd32(sp1 - 0x20cu));
    COW_AT(102ccacd)
            loc_4 = rd32(sp0 - 4u);
            al_m21c = rd32(sp1 - 0x21cu);
            al_m220 = rd32(sp1 - 0x220u);
            al_m210 = rd32(sp1 - 0x210u);
            al_m214 = rd32(sp1 - 0x214u);
        }
    }
    COW_AT(102ccad0)
    wr32(sp1 - 0x218u, 0u);
    if ((int32_t)rd32(arg3 + 0xb5cu) > 0)
    {
    COW_AT(102ccae4)
        eax = 0u;
        al_m218 = 0u;
L_102ccaea: ;
    COW_AT(102ccaea)
        t19 = arg3 + eax * 0x2d70u + 0xc80u;
        wr32(sp1 - 0x20cu, t19);
        if ((int32_t)rd32(t19 + 0x2d60u) < 40)
        {
            edx = eax * 0x16bu;
            edi = t19;
            al_m20c = t19;
    COW_AT(102ccb1c)
            wr32(arg3 + 0x104u, 1u);
            wr32(arg3 + 0x100u, 1u);
            wr32(arg3 + 0x10cu, 0u);
            wr32(arg3, 0u);
            wr32(edi + 0x2af0u, 0u);
            eax = 0u;
        }
        else
        {
            ecx = eax * 0x79u;
            edx = eax * 0x16bu;
            eax = eax * 0x2d70u;
            edi = t19;
            al_m20c = t19;
    COW_AT(102ccb10)
            wr32(sp1 - 0x224u, arg3);
            wr32(sp1 - 0x228u, edi);
            g->eax = eax;
            g->esp = sp1 + 0x840u;
            t20 = cow_bridge_indirect(g, COW_IMG(0x102d0250u), 0u, 666u, (const uint32_t[]){edi, arg3, al_m220, al_m21c, al_m218, al_m214, al_m210, al_m20c, rd32(sp1 - 0x208u), rd32(sp1 - 0x204u), rd32(sp1 - 0x200u), rd32(sp1 - 0x1fcu), rd32(sp1 - 0x1f8u), rd32(sp1 - 0x1f4u), rd32(sp1 - 0x1f0u), rd32(sp1 - 0x1ecu), rd32(sp1 - 0x1e8u), rd32(sp1 - 0x1e4u), rd32(sp1 - 0x1e0u), rd32(sp1 - 0x1dcu), rd32(sp1 - 0x1d8u), rd32(sp1 - 0x1d4u), rd32(sp1 - 0x1d0u), rd32(sp1 - 0x1ccu), rd32(sp1 - 0x1c8u), rd32(sp1 - 0x1c4u), rd32(sp1 - 0x1c0u), rd32(sp1 - 0x1bcu), rd32(sp1 - 0x1b8u), rd32(sp1 - 0x1b4u), rd32(sp1 - 0x1b0u), rd32(sp1 - 0x1acu), rd32(sp1 - 0x1a8u), rd32(sp1 - 0x1a4u), rd32(sp1 - 0x1a0u), rd32(sp1 - 0x19cu), rd32(sp1 - 0x198u), rd32(sp1 - 0x194u), rd32(sp1 - 0x190u), rd32(sp1 - 0x18cu), rd32(sp1 - 0x188u), rd32(sp1 - 0x184u), rd32(sp1 - 0x180u), rd32(sp1 - 0x17cu), rd32(sp1 - 0x178u), rd32(sp1 - 0x174u), rd32(sp1 - 0x170u), rd32(sp1 - 0x16cu), rd32(sp1 - 0x168u), rd32(sp1 - 0x164u), rd32(sp1 - 0x160u), rd32(sp1 - 0x15cu), rd32(sp1 - 0x158u), rd32(sp1 - 0x154u), rd32(sp1 - 0x150u), rd32(sp1 - 0x14cu), rd32(sp1 - 0x148u), rd32(sp1 - 0x144u), rd32(sp1 - 0x140u), rd32(sp1 - 0x13cu), rd32(sp1 - 0x138u), rd32(sp1 - 0x134u), rd32(sp1 - 0x130u), rd32(sp1 - 0x12cu), rd32(sp1 - 0x128u), rd32(sp1 - 0x124u), rd32(sp1 - 0x120u), rd32(sp1 - 0x11cu), rd32(sp1 - 0x118u), rd32(sp1 - 0x114u), rd32(sp1 - 0x110u), rd32(sp1 - 0x10cu), rd32(sp1 - 0x108u), rd32(sp1 - 0x104u), rd32(sp1 - 0x100u), rd32(sp1 - 0xfcu), rd32(sp1 - 0xf8u), rd32(sp1 - 0xf4u), rd32(sp1 - 0xf0u), rd32(sp1 - 0xecu), rd32(sp1 - 0xe8u), rd32(sp1 - 0xe4u), rd32(sp1 - 0xe0u), rd32(sp1 - 0xdcu), rd32(sp1 - 0xd8u), rd32(sp1 - 0xd4u), rd32(sp1 - 0xd0u), rd32(sp1 - 0xccu), rd32(sp1 - 0xc8u), rd32(sp1 - 0xc4u), rd32(sp1 - 0xc0u), rd32(sp1 - 0xbcu), rd32(sp1 - 0xb8u), rd32(sp1 - 0xb4u), rd32(sp1 - 0xb0u), rd32(sp1 - 0xacu), rd32(sp1 - 0xa8u), rd32(sp1 - 0xa4u), rd32(sp1 - 0xa0u), rd32(sp1 - 0x9cu), rd32(sp1 - 0x98u), rd32(sp1 - 0x94u), rd32(sp1 - 0x90u), rd32(sp1 - 0x8cu), rd32(sp1 - 0x88u), rd32(sp1 - 0x84u), rd32(sp1 - 0x80u), rd32(sp1 - 0x7cu), rd32(sp1 - 0x78u), rd32(sp1 - 0x74u), rd32(sp1 - 0x70u), rd32(sp1 - 0x6cu), rd32(sp1 - 0x68u), rd32(sp1 - 0x64u), rd32(sp1 - 0x60u), rd32(sp1 - 0x5cu), rd32(sp1 - 0x58u), rd32(sp1 - 0x54u), rd32(sp1 - 0x50u), rd32(sp1 - 0x4cu), rd32(sp1 - 0x48u), rd32(sp1 - 0x44u), rd32(sp1 - 0x40u), rd32(sp1 - 0x3cu), rd32(sp1 - 0x38u), rd32(sp1 - 0x34u), rd32(sp1 - 0x30u), rd32(sp1 - 0x2cu), rd32(sp1 - 0x28u), rd32(sp1 - 0x24u), rd32(sp1 - 0x20u), rd32(sp1 - 0x1cu), rd32(sp1 - 0x18u), rd32(sp1 - 0x14u), rd32(sp1 - 0x10u), rd32(sp1 - 0xcu), rd32(sp1 - 8u), rd32(sp1 - 4u), rd32(sp1), rd32(sp1 + 4u), rd32(sp1 + 8u), rd32(sp1 + 0xcu), rd32(sp1 + 0x10u), rd32(sp1 + 0x14u), rd32(sp1 + 0x18u), rd32(sp1 + 0x1cu), rd32(sp1 + 0x20u), rd32(sp1 + 0x24u), rd32(sp1 + 0x28u), rd32(sp1 + 0x2cu), rd32(sp1 + 0x30u), rd32(sp1 + 0x34u), rd32(sp1 + 0x38u), rd32(sp1 + 0x3cu), rd32(sp1 + 0x40u), rd32(sp1 + 0x44u), rd32(sp1 + 0x48u), rd32(sp1 + 0x4cu), rd32(sp1 + 0x50u), rd32(sp1 + 0x54u), rd32(sp1 + 0x58u), rd32(sp1 + 0x5cu), rd32(sp1 + 0x60u), rd32(sp1 + 0x64u), rd32(sp1 + 0x68u), rd32(sp1 + 0x6cu), rd32(sp1 + 0x70u), rd32(sp1 + 0x74u), rd32(sp1 + 0x78u), rd32(sp1 + 0x7cu), rd32(sp1 + 0x80u), rd32(sp1 + 0x84u), rd32(sp1 + 0x88u), rd32(sp1 + 0x8cu), rd32(sp1 + 0x90u), rd32(sp1 + 0x94u), rd32(sp1 + 0x98u), rd32(sp1 + 0x9cu), rd32(sp1 + 0xa0u), rd32(sp1 + 0xa4u), rd32(sp1 + 0xa8u), rd32(sp1 + 0xacu), rd32(sp1 + 0xb0u), rd32(sp1 + 0xb4u), rd32(sp1 + 0xb8u), rd32(sp1 + 0xbcu), rd32(sp1 + 0xc0u), rd32(sp1 + 0xc4u), rd32(sp1 + 0xc8u), rd32(sp1 + 0xccu), rd32(sp1 + 0xd0u), rd32(sp1 + 0xd4u), rd32(sp1 + 0xd8u), rd32(sp1 + 0xdcu), rd32(sp1 + 0xe0u), rd32(sp1 + 0xe4u), rd32(sp1 + 0xe8u), rd32(sp1 + 0xecu), rd32(sp1 + 0xf0u), rd32(sp1 + 0xf4u), rd32(sp1 + 0xf8u), rd32(sp1 + 0xfcu), rd32(sp1 + 0x100u), rd32(sp1 + 0x104u), rd32(sp1 + 0x108u), rd32(sp1 + 0x10cu), rd32(sp1 + 0x110u), rd32(sp1 + 0x114u), rd32(sp1 + 0x118u), rd32(sp1 + 0x11cu), rd32(sp1 + 0x120u), rd32(sp1 + 0x124u), rd32(sp1 + 0x128u), rd32(sp1 + 0x12cu), rd32(sp1 + 0x130u), rd32(sp1 + 0x134u), rd32(sp1 + 0x138u), rd32(sp1 + 0x13cu), rd32(sp1 + 0x140u), rd32(sp1 + 0x144u), rd32(sp1 + 0x148u), rd32(sp1 + 0x14cu), rd32(sp1 + 0x150u), rd32(sp1 + 0x154u), rd32(sp1 + 0x158u), rd32(sp1 + 0x15cu), rd32(sp1 + 0x160u), rd32(sp1 + 0x164u), rd32(sp1 + 0x168u), rd32(sp1 + 0x16cu), rd32(sp1 + 0x170u), rd32(sp1 + 0x174u), rd32(sp1 + 0x178u), rd32(sp1 + 0x17cu), rd32(sp1 + 0x180u), rd32(sp1 + 0x184u), rd32(sp1 + 0x188u), rd32(sp1 + 0x18cu), rd32(sp1 + 0x190u), rd32(sp1 + 0x194u), rd32(sp1 + 0x198u), rd32(sp1 + 0x19cu), rd32(sp1 + 0x1a0u), rd32(sp1 + 0x1a4u), rd32(sp1 + 0x1a8u), rd32(sp1 + 0x1acu), rd32(sp1 + 0x1b0u), rd32(sp1 + 0x1b4u), rd32(sp1 + 0x1b8u), rd32(sp1 + 0x1bcu), rd32(sp1 + 0x1c0u), rd32(sp1 + 0x1c4u), rd32(sp1 + 0x1c8u), rd32(sp1 + 0x1ccu), rd32(sp1 + 0x1d0u), rd32(sp1 + 0x1d4u), rd32(sp1 + 0x1d8u), rd32(sp1 + 0x1dcu), rd32(sp1 + 0x1e0u), rd32(sp1 + 0x1e4u), rd32(sp1 + 0x1e8u), rd32(sp1 + 0x1ecu), rd32(sp1 + 0x1f0u), rd32(sp1 + 0x1f4u), rd32(sp1 + 0x1f8u), rd32(sp1 + 0x1fcu), rd32(sp1 + 0x200u), rd32(sp1 + 0x204u), rd32(sp1 + 0x208u), rd32(sp1 + 0x20cu), rd32(sp1 + 0x210u), rd32(sp1 + 0x214u), rd32(sp1 + 0x218u), rd32(sp1 + 0x21cu), rd32(sp1 + 0x220u), rd32(sp1 + 0x224u), rd32(sp1 + 0x228u), rd32(sp1 + 0x22cu), rd32(sp1 + 0x230u), rd32(sp1 + 0x234u), rd32(sp1 + 0x238u), rd32(sp1 + 0x23cu), rd32(sp1 + 0x240u), rd32(sp1 + 0x244u), rd32(sp1 + 0x248u), rd32(sp1 + 0x24cu), rd32(sp1 + 0x250u), rd32(sp1 + 0x254u), rd32(sp1 + 0x258u), rd32(sp1 + 0x25cu), rd32(sp1 + 0x260u), rd32(sp1 + 0x264u), rd32(sp1 + 0x268u), rd32(sp1 + 0x26cu), rd32(sp1 + 0x270u), rd32(sp1 + 0x274u), rd32(sp1 + 0x278u), rd32(sp1 + 0x27cu), rd32(sp1 + 0x280u), rd32(sp1 + 0x284u), rd32(sp1 + 0x288u), rd32(sp1 + 0x28cu), rd32(sp1 + 0x290u), rd32(sp1 + 0x294u), rd32(sp1 + 0x298u), rd32(sp1 + 0x29cu), rd32(sp1 + 0x2a0u), rd32(sp1 + 0x2a4u), rd32(sp1 + 0x2a8u), rd32(sp1 + 0x2acu), rd32(sp1 + 0x2b0u), rd32(sp1 + 0x2b4u), rd32(sp1 + 0x2b8u), rd32(sp1 + 0x2bcu), rd32(sp1 + 0x2c0u), rd32(sp1 + 0x2c4u), rd32(sp1 + 0x2c8u), rd32(sp1 + 0x2ccu), rd32(sp1 + 0x2d0u), rd32(sp1 + 0x2d4u), rd32(sp1 + 0x2d8u), rd32(sp1 + 0x2dcu), rd32(sp1 + 0x2e0u), rd32(sp1 + 0x2e4u), rd32(sp1 + 0x2e8u), rd32(sp1 + 0x2ecu), rd32(sp1 + 0x2f0u), rd32(sp1 + 0x2f4u), rd32(sp1 + 0x2f8u), rd32(sp1 + 0x2fcu), rd32(sp1 + 0x300u), rd32(sp1 + 0x304u), rd32(sp1 + 0x308u), rd32(sp1 + 0x30cu), rd32(sp1 + 0x310u), rd32(sp1 + 0x314u), rd32(sp1 + 0x318u), rd32(sp1 + 0x31cu), rd32(sp1 + 0x320u), rd32(sp1 + 0x324u), rd32(sp1 + 0x328u), rd32(sp1 + 0x32cu), rd32(sp1 + 0x330u), rd32(sp1 + 0x334u), rd32(sp1 + 0x338u), rd32(sp1 + 0x33cu), rd32(sp1 + 0x340u), rd32(sp1 + 0x344u), rd32(sp1 + 0x348u), rd32(sp1 + 0x34cu), rd32(sp1 + 0x350u), rd32(sp1 + 0x354u), rd32(sp1 + 0x358u), rd32(sp1 + 0x35cu), rd32(sp1 + 0x360u), rd32(sp1 + 0x364u), rd32(sp1 + 0x368u), rd32(sp1 + 0x36cu), rd32(sp1 + 0x370u), rd32(sp1 + 0x374u), rd32(sp1 + 0x378u), rd32(sp1 + 0x37cu), rd32(sp1 + 0x380u), rd32(sp1 + 0x384u), rd32(sp1 + 0x388u), rd32(sp1 + 0x38cu), rd32(sp1 + 0x390u), rd32(sp1 + 0x394u), rd32(sp1 + 0x398u), rd32(sp1 + 0x39cu), rd32(sp1 + 0x3a0u), rd32(sp1 + 0x3a4u), rd32(sp1 + 0x3a8u), rd32(sp1 + 0x3acu), rd32(sp1 + 0x3b0u), rd32(sp1 + 0x3b4u), rd32(sp1 + 0x3b8u), rd32(sp1 + 0x3bcu), rd32(sp1 + 0x3c0u), rd32(sp1 + 0x3c4u), rd32(sp1 + 0x3c8u), rd32(sp1 + 0x3ccu), rd32(sp1 + 0x3d0u), rd32(sp1 + 0x3d4u), rd32(sp1 + 0x3d8u), rd32(sp1 + 0x3dcu), rd32(sp1 + 0x3e0u), rd32(sp1 + 0x3e4u), rd32(sp1 + 0x3e8u), rd32(sp1 + 0x3ecu), rd32(sp1 + 0x3f0u), rd32(sp1 + 0x3f4u), rd32(sp1 + 0x3f8u), rd32(sp1 + 0x3fcu), rd32(sp1 + 0x400u), rd32(sp1 + 0x404u), rd32(sp1 + 0x408u), rd32(sp1 + 0x40cu), rd32(sp1 + 0x410u), rd32(sp1 + 0x414u), rd32(sp1 + 0x418u), rd32(sp1 + 0x41cu), rd32(sp1 + 0x420u), rd32(sp1 + 0x424u), rd32(sp1 + 0x428u), rd32(sp1 + 0x42cu), rd32(sp1 + 0x430u), rd32(sp1 + 0x434u), rd32(sp1 + 0x438u), rd32(sp1 + 0x43cu), rd32(sp1 + 0x440u), rd32(sp1 + 0x444u), rd32(sp1 + 0x448u), rd32(sp1 + 0x44cu), rd32(sp1 + 0x450u), rd32(sp1 + 0x454u), rd32(sp1 + 0x458u), rd32(sp1 + 0x45cu), rd32(sp1 + 0x460u), rd32(sp1 + 0x464u), rd32(sp1 + 0x468u), rd32(sp1 + 0x46cu), rd32(sp1 + 0x470u), rd32(sp1 + 0x474u), rd32(sp1 + 0x478u), rd32(sp1 + 0x47cu), rd32(sp1 + 0x480u), rd32(sp1 + 0x484u), rd32(sp1 + 0x488u), rd32(sp1 + 0x48cu), rd32(sp1 + 0x490u), rd32(sp1 + 0x494u), rd32(sp1 + 0x498u), rd32(sp1 + 0x49cu), rd32(sp1 + 0x4a0u), rd32(sp1 + 0x4a4u), rd32(sp1 + 0x4a8u), rd32(sp1 + 0x4acu), rd32(sp1 + 0x4b0u), rd32(sp1 + 0x4b4u), rd32(sp1 + 0x4b8u), rd32(sp1 + 0x4bcu), rd32(sp1 + 0x4c0u), rd32(sp1 + 0x4c4u), rd32(sp1 + 0x4c8u), rd32(sp1 + 0x4ccu), rd32(sp1 + 0x4d0u), rd32(sp1 + 0x4d4u), rd32(sp1 + 0x4d8u), rd32(sp1 + 0x4dcu), rd32(sp1 + 0x4e0u), rd32(sp1 + 0x4e4u), rd32(sp1 + 0x4e8u), rd32(sp1 + 0x4ecu), rd32(sp1 + 0x4f0u), rd32(sp1 + 0x4f4u), rd32(sp1 + 0x4f8u), rd32(sp1 + 0x4fcu), rd32(sp1 + 0x500u), rd32(sp1 + 0x504u), rd32(sp1 + 0x508u), rd32(sp1 + 0x50cu), rd32(sp1 + 0x510u), rd32(sp1 + 0x514u), rd32(sp1 + 0x518u), rd32(sp1 + 0x51cu), rd32(sp1 + 0x520u), rd32(sp1 + 0x524u), rd32(sp1 + 0x528u), rd32(sp1 + 0x52cu), rd32(sp1 + 0x530u), rd32(sp1 + 0x534u), rd32(sp1 + 0x538u), rd32(sp1 + 0x53cu), rd32(sp1 + 0x540u), rd32(sp1 + 0x544u), rd32(sp1 + 0x548u), rd32(sp1 + 0x54cu), rd32(sp1 + 0x550u), rd32(sp1 + 0x554u), rd32(sp1 + 0x558u), rd32(sp1 + 0x55cu), rd32(sp1 + 0x560u), rd32(sp1 + 0x564u), rd32(sp1 + 0x568u), rd32(sp1 + 0x56cu), rd32(sp1 + 0x570u), rd32(sp1 + 0x574u), rd32(sp1 + 0x578u), rd32(sp1 + 0x57cu), rd32(sp1 + 0x580u), rd32(sp1 + 0x584u), rd32(sp1 + 0x588u), rd32(sp1 + 0x58cu), rd32(sp1 + 0x590u), rd32(sp1 + 0x594u), rd32(sp1 + 0x598u), rd32(sp1 + 0x59cu), rd32(sp1 + 0x5a0u), rd32(sp1 + 0x5a4u), rd32(sp1 + 0x5a8u), rd32(sp1 + 0x5acu), rd32(sp1 + 0x5b0u), rd32(sp1 + 0x5b4u), rd32(sp1 + 0x5b8u), rd32(sp1 + 0x5bcu), rd32(sp1 + 0x5c0u), rd32(sp1 + 0x5c4u), rd32(sp1 + 0x5c8u), rd32(sp1 + 0x5ccu), rd32(sp1 + 0x5d0u), rd32(sp1 + 0x5d4u), rd32(sp1 + 0x5d8u), rd32(sp1 + 0x5dcu), rd32(sp1 + 0x5e0u), rd32(sp1 + 0x5e4u), rd32(sp1 + 0x5e8u), rd32(sp1 + 0x5ecu), rd32(sp1 + 0x5f0u), rd32(sp1 + 0x5f4u), rd32(sp1 + 0x5f8u), rd32(sp1 + 0x5fcu), rd32(sp1 + 0x600u), rd32(sp1 + 0x604u), rd32(sp1 + 0x608u), rd32(sp1 + 0x60cu), rd32(sp1 + 0x610u), rd32(sp1 + 0x614u), rd32(sp1 + 0x618u), rd32(sp1 + 0x61cu), rd32(sp1 + 0x620u), rd32(sp1 + 0x624u), rd32(sp1 + 0x628u), rd32(sp1 + 0x62cu), rd32(sp1 + 0x630u), rd32(sp1 + 0x634u), rd32(sp1 + 0x638u), rd32(sp1 + 0x63cu), rd32(sp1 + 0x640u), rd32(sp1 + 0x644u), rd32(sp1 + 0x648u), rd32(sp1 + 0x64cu), rd32(sp1 + 0x650u), rd32(sp1 + 0x654u), rd32(sp1 + 0x658u), rd32(sp1 + 0x65cu), rd32(sp1 + 0x660u), rd32(sp1 + 0x664u), rd32(sp1 + 0x668u), rd32(sp1 + 0x66cu), rd32(sp1 + 0x670u), rd32(sp1 + 0x674u), rd32(sp1 + 0x678u), rd32(sp1 + 0x67cu), rd32(sp1 + 0x680u), rd32(sp1 + 0x684u), rd32(sp1 + 0x688u), rd32(sp1 + 0x68cu), rd32(sp1 + 0x690u), rd32(sp1 + 0x694u), rd32(sp1 + 0x698u), rd32(sp1 + 0x69cu), rd32(sp1 + 0x6a0u), rd32(sp1 + 0x6a4u), rd32(sp1 + 0x6a8u), rd32(sp1 + 0x6acu), rd32(sp1 + 0x6b0u), rd32(sp1 + 0x6b4u), rd32(sp1 + 0x6b8u), rd32(sp1 + 0x6bcu), rd32(sp1 + 0x6c0u), rd32(sp1 + 0x6c4u), rd32(sp1 + 0x6c8u), rd32(sp1 + 0x6ccu), rd32(sp1 + 0x6d0u), rd32(sp1 + 0x6d4u), rd32(sp1 + 0x6d8u), rd32(sp1 + 0x6dcu), rd32(sp1 + 0x6e0u), rd32(sp1 + 0x6e4u), rd32(sp1 + 0x6e8u), rd32(sp1 + 0x6ecu), rd32(sp1 + 0x6f0u), rd32(sp1 + 0x6f4u), rd32(sp1 + 0x6f8u), rd32(sp1 + 0x6fcu), rd32(sp1 + 0x700u), rd32(sp1 + 0x704u), rd32(sp1 + 0x708u), rd32(sp1 + 0x70cu), rd32(sp1 + 0x710u), rd32(sp1 + 0x714u), rd32(sp1 + 0x718u), rd32(sp1 + 0x71cu), rd32(sp1 + 0x720u), rd32(sp1 + 0x724u), rd32(sp1 + 0x728u), rd32(sp1 + 0x72cu), rd32(sp1 + 0x730u), rd32(sp1 + 0x734u), rd32(sp1 + 0x738u), rd32(sp1 + 0x73cu), rd32(sp1 + 0x740u), rd32(sp1 + 0x744u), rd32(sp1 + 0x748u), rd32(sp1 + 0x74cu), rd32(sp1 + 0x750u), rd32(sp1 + 0x754u), rd32(sp1 + 0x758u), rd32(sp1 + 0x75cu), rd32(sp1 + 0x760u), rd32(sp1 + 0x764u), rd32(sp1 + 0x768u), rd32(sp1 + 0x76cu), rd32(sp1 + 0x770u), rd32(sp1 + 0x774u), rd32(sp1 + 0x778u), rd32(sp1 + 0x77cu), rd32(sp1 + 0x780u), rd32(sp1 + 0x784u), rd32(sp1 + 0x788u), rd32(sp1 + 0x78cu), rd32(sp1 + 0x790u), rd32(sp1 + 0x794u), rd32(sp1 + 0x798u), rd32(sp1 + 0x79cu), rd32(sp1 + 0x7a0u), rd32(sp1 + 0x7a4u), rd32(sp1 + 0x7a8u), rd32(sp1 + 0x7acu), rd32(sp1 + 0x7b0u), rd32(sp1 + 0x7b4u), rd32(sp1 + 0x7b8u), rd32(sp1 + 0x7bcu), rd32(sp1 + 0x7c0u), rd32(sp1 + 0x7c4u), rd32(sp1 + 0x7c8u), rd32(sp1 + 0x7ccu), rd32(sp1 + 0x7d0u), rd32(sp1 + 0x7d4u), rd32(sp1 + 0x7d8u), rd32(sp1 + 0x7dcu), rd32(sp1 + 0x7e0u), rd32(sp1 + 0x7e4u), rd32(sp1 + 0x7e8u), rd32(sp1 + 0x7ecu), rd32(sp1 + 0x7f0u), rd32(sp1 + 0x7f4u), rd32(sp1 + 0x7f8u), rd32(sp1 + 0x7fcu), rd32(sp1 + 0x800u), rd32(sp1 + 0x804u), rd32(sp1 + 0x808u), rd32(sp1 + 0x80cu), rd32(sp1 + 0x810u), rd32(sp1 + 0x814u), rd32(sp1 + 0x818u), rd32(sp1 + 0x81cu), rd32(sp1 + 0x820u), rd32(sp1 + 0x824u), rd32(sp1 + 0x828u), rd32(sp1 + 0x82cu), rd32(sp1 + 0x830u), rd32(sp1 + 0x834u), rd32(sp1 + 0x838u), rd32(sp1 + 0x83cu)}, g->ecx, edx, g->eax, 2664u);
            t21 = g->edx;
            eax = t20;
            edx = t21;
    COW_AT(102ccb17)
            loc_4 = rd32(sp0 - 4u);
            al_m21c = rd32(sp1 - 0x21cu);
            al_m220 = rd32(sp1 - 0x220u);
            al_m210 = rd32(sp1 - 0x210u);
            al_m218 = rd32(sp1 - 0x218u);
            al_m214 = rd32(sp1 - 0x214u);
            al_m20c = rd32(sp1 - 0x20cu);
        }
    COW_AT(102ccb3d)
        wr32(sp1 - 0x224u, al_m210);
        wr32(sp1 - 0x228u, edi);
        wr32(sp1 - 0x22cu, arg3);
        g->eax = eax;
        g->esp = sp1 - 0x210u;
        t22 = cow_call_regs(g, COW_IMG(0x102ccf20u), g->eax, g->ecx, edx, 1, 7, arg3, edi, al_m210, al_m220, al_m21c, al_m218, al_m214);
        eax = t22;
    COW_AT(102ccb49)
        t23 = rd32(arg3 + 0xb60u) + rd32(sp1 - 0x210u);
        wr32(sp1 - 0x210u, t23);
        if ((int32_t)rd32(arg3 + 0xb64u) < 0)
        {
            al_m210 = t23;
        }
        else
        {
            edi = rd32(arg3 + 0xb60u);
            al_m210 = t23;
    COW_AT(102ccb66)
            if (rd32(sp1 - 0x218u) != 0u)
            {
    COW_AT(102ccb96)
                t26 = al_m210 + rd32(arg3 + 0xb58u) - edi;
                if (t26 >= edi * 2u + rd32(arg3 + 0xb58u)) goto L_102ccbbc;
                eax = edi * 2u + rd32(arg3 + 0xb58u);
                ecx = t26;
                edx = al_m210;
                edi = t26;
L_102ccbad: ;
    COW_AT(102ccbad)
                t27 = rd8(edi);
                t28 = rd8(eax - 1u);
                wr8(edi, (uint8_t)t28);
                wr8(eax - 1u, (uint8_t)t27);
                if (edi + 1u < eax - 1u)
                {
                    eax = eax - 1u;
                    ecx = (ecx & 0xffffff00u) | t27;
                    edx = (edx & 0xffffff00u) | t28;
                    edi = edi + 1u;
                    goto L_102ccbad;
                }
            }
            else
            {
    COW_AT(102ccb6e)
                t24 = (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)(eax + 7u) >> 0x1fu) & 7u) + 7u) >> 3u);
                wr32(sp1 - 0x210u, t24);
                t25 = edi * 0x10u - (uint32_t)((int32_t)(eax + ((uint32_t)((int32_t)(eax + 7u) >> 0x1fu) & 7u) + 7u) >> 3u) * 8u - 0x1bu;
                wr32(rd32(sp1 - 0x20cu) + 0x5ad0u, t25);
                al_m210 = t24;
            }
        }
L_102ccbbc: ;
    COW_AT(102ccbbc)
        t29 = rd32(sp1 - 0x218u) + 1u;
        t30 = rd32(sp1 - 0x218u);
        wr32(sp1 - 0x218u, t29);
        if ((int32_t)(t30 + 1u) < (int32_t)rd32(arg3 + 0xb5cu))
        {
            al_m218 = t29;
            goto L_102ccae6;
        }
        loc_4 = rd32(sp0 - 4u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m220 = rd32(sp1 - 0x220u);
    }
    COW_AT(102ccbd3)
    g->esi = al_m21c;
    g->edi = al_m220;
    g->ebp = loc_4;
    return 0u;
L_102ccae6: ;
    COW_AT(102ccae6)
    eax = al_m218;
    loc_4 = rd32(sp0 - 4u);
    al_m21c = rd32(sp1 - 0x21cu);
    al_m220 = rd32(sp1 - 0x220u);
    al_m214 = rd32(sp1 - 0x214u);
    goto L_102ccaea;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102cc930(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    const uint32_t sp1 = (sp0 - 0x4u) & 0xfffffff0u;
    switch (at)
    {
    case 0x102cc95au:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp1 - 0x220u);
        in_esi = rd32(sp1 - 0x21cu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        g->edi = 0u;
        wr32(sp1 - 0x210u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102cc96bu:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc97bu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x228u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9a5u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9afu:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9b5u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x224u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9bau:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9c1u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x228u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cc9cau:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca03u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        wr32(sp1 - 0x218u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102cca09u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca15u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x228u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca3du:
    {
        uint32_t al_m204;
        uint32_t al_m208;
        uint32_t al_m20c;
        uint32_t al_m214;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m214 = rd32(sp1 - 0x214u);
        al_m20c = rd32(sp1 - 0x20cu);
        al_m208 = rd32(sp1 - 0x208u);
        al_m204 = rd32(sp1 - 0x204u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca4eu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x230u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca91u:
    {
        uint32_t al_m204;
        uint32_t al_m208;
        uint32_t al_m20c;
        uint32_t al_m214;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m214 = rd32(sp1 - 0x214u);
        al_m20c = rd32(sp1 - 0x20cu);
        al_m208 = rd32(sp1 - 0x208u);
        al_m204 = rd32(sp1 - 0x204u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102cca98u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x224u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccab8u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccac2u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccac7u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccacdu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x224u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccad0u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccae4u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->eax = 0u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        wr32(sp1 - 0x218u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102ccae6u:
    {
        uint32_t al_m210;
        uint32_t al_m218;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m218 = rd32(sp1 - 0x218u);
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccaeau:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb10u:
    {
        uint32_t al_m20c;
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m20c = rd32(sp1 - 0x20cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb17u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x228u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb1cu:
    {
        uint32_t al_m20c;
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m20c = rd32(sp1 - 0x20cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb3du:
    {
        uint32_t al_m20c;
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        al_m20c = rd32(sp1 - 0x20cu);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb49u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        g->esp = sp1 - 0x22cu;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb66u:
    {
        uint32_t al_m210;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb6eu:
    {
        uint32_t al_m210;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccb96u:
    {
        uint32_t al_m210;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccbadu:
    {
        uint32_t al_m210;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccbbcu:
    {
        uint32_t al_m210;
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m210 = rd32(sp1 - 0x210u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        g->esi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102ccbd3u:
    {
        uint32_t al_m210;
        uint32_t al_m214;
        uint32_t al_m218;
        uint32_t al_m21c;
        uint32_t al_m220;
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        al_m220 = rd32(sp1 - 0x220u);
        al_m21c = rd32(sp1 - 0x21cu);
        al_m218 = rd32(sp1 - 0x218u);
        al_m214 = rd32(sp1 - 0x214u);
        al_m210 = rd32(sp1 - 0x210u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp1 - 0x220u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102cc930(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102cc930(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
