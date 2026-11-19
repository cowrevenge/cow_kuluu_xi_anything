/* f_0x10248e50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10248e50(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_4;
    uint32_t loc_8;
    uint32_t of;
    uint32_t sf;
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
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10248e6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_10248e6c;
    case 0x10248e71u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_esi = g->esi; in_edi = g->edi; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); g->ebx = rd32(sp0 - 0x10u); goto E_10248e71;
    case 0x10248e7fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_10248e7f;
    case 0x10248ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248ea0;
    case 0x10248ea6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248ea6;
    case 0x10248eb1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248eb1;
    case 0x10248ebcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248ebc;
    case 0x10248ee2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248ee2;
    case 0x10248f57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248f57;
    case 0x10248f7du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248f7d;
    case 0x10248fc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248fc8;
    case 0x10248fceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10248fce;
    case 0x1024900fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024900f;
    case 0x1024904eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024904e;
    case 0x10249054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249054;
    case 0x1024905bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024905b;
    case 0x10249063u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249063;
    case 0x10249084u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249084;
    case 0x102490b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_102490b3;
    case 0x102490bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_4 = rd32(sp0 - 4u); goto E_102490bb;
    case 0x102490d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102490d4;
    case 0x102490d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_102490d6;
    case 0x102490e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; loc_8 = rd32(sp0 - 8u); loc_4 = rd32(sp0 - 4u); goto E_102490e5;
    case 0x102490f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_102490f5;
    case 0x1024911au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024911a;
    case 0x10249123u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249123;
    case 0x1024912au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024912a;
    case 0x10249132u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249132;
    case 0x1024913fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_1024913f;
    case 0x10249141u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249141;
    case 0x10249144u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; zf = g->zf; sf = g->sf; of = g->of; goto E_10249144;
    default: break;
    }
#endif

    COW_AT(10248e50)
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, COW_IMG(0x1034f2d0u));
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 0x18u, t1);
    g->eax = t1;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t2 = cow_cdecl(g, COW_IMG(0x1031201eu), 5, t1, COW_IMG(0x1034f2d0u), in_ebx, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
    t3 = g->edx;
    if (t2 != 0u)
    {
        eax = t2;
        edx = t3;
        ebx = t2;
        goto L_10248e71;
    }
    eax = t2;
    COW_AT(10248e6c)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
L_10248e71: ;
    COW_AT(10248e71)
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 4u, 0u);
    loc_10 = in_ebx;
    loc_14 = in_esi;
    loc_18 = in_edi;
    loc_4 = 0u;
    loc_8 = rd32(sp0 - 8u);
L_10248e7f: ;
    COW_AT(10248e7f)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 0xcu);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 0xcu, 1u, 4u, ebx, loc_18, loc_14);
    t4 = g->ecx;
    t5 = g->edx;
    if ((int32_t)rd32(sp0 - 0xcu) > 1179011410)
    {
        eax = rd32(sp0 - 0xcu);
        ecx = t4;
        edx = t5;
        goto L_10249054;
    }
    eax = rd32(sp0 - 0xcu);
    ecx = t4;
    edx = t5;
    zf = rd32(sp0 - 0xcu) == 0x46464952u;
    COW_AT(10248ea0)
    if (zf) goto L_1024900f;
    COW_AT(10248ea6)
    if (eax == 0x20657563u) goto L_10248f57;
    COW_AT(10248eb1)
    if (eax != 0x20746d66u) goto L_1024905b;
    COW_AT(10248ebc)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 + 8u, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t6 = g->ecx;
    t7 = g->edx;
    t8 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t8);
    g->eax = t8;
    g->esp = sp0 - 0x20u;
    t9 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t6, t7, 1, 3, t8, sp0 + 8u, 1u);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 0u)
    {
        eax = t9;
        ecx = t10;
        edx = t11;
        goto L_102490d6;
    }
    eax = t9;
    edx = t11;
    esi = t9;
    COW_AT(10248ee2)
    wr32(sp0 - 0x1cu, ebx);
    t12 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t12);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, esi, 1u, t12, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t13 = (uint32_t)rd8(esi + 3u) << 8u;
    wr32(arg1 + 4u, t13);
    t14 = t13 + rd8(esi + 2u);
    wr32(arg1 + 4u, t14);
    t15 = (uint32_t)rd8(esi + 0xfu) << 8u;
    wr32(arg1 + 8u, t15);
    t16 = t15 + rd8(esi + 0xeu);
    wr32(arg1 + 8u, t16);
    t17 = (uint32_t)rd8(esi + 7u) << 8u;
    wr32(arg1 + 0xcu, t17);
    t18 = t17 * 0x100u + rd8(esi + 6u) * 0x100u;
    wr32(arg1 + 0xcu, t18);
    wr32(sp0 - 0x2cu, esi);
    t19 = t18 * 0x100u + rd8(esi + 5u) * 0x100u;
    wr32(arg1 + 0xcu, t19);
    t20 = t19 + rd8(esi + 4u);
    wr32(arg1 + 0xcu, t20);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t19, t20, 1, 1, esi);
    t21 = g->ecx;
    t22 = g->edx;
    ecx = t21;
    edx = t22;
    loc_4 = rd32(sp0 - 4u);
L_102490b3: ;
    COW_AT(102490b3)
    if (rd32(sp0 - 8u) == 0u)
    {
        eax = rd32(sp0 - 8u);
        goto L_102490e5;
    }
    eax = rd32(sp0 - 8u);
    COW_AT(102490bb)
    t61 = eax - rd32(sp0 + 8u) - 8u;
    wr32(sp0 - 8u, t61);
    if ((int32_t)(eax - rd32(sp0 + 8u) - 8u) > 0)
    {
        eax = t61;
        loc_10 = rd32(sp0 - 0x10u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_8 = t61;
        goto L_10248e7f;
    }
    eax = t61;
    ecx = 0xfffffff8u - rd32(sp0 + 8u);
    COW_AT(102490d4)
L_102490e5: ;
    COW_AT(102490e5)
    wr32(sp0 - 0x1cu, ebx);
    g->edi = arg1;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10311f70u), g->eax, g->ecx, edx, 1, 3, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    if ((int32_t)rd32(arg1 + 0x1cu) <= 0)
    {
        esi = rd32(arg1 + 0x1cu);
        goto L_10249144;
    }
    esi = rd32(arg1 + 0x1cu);
    COW_AT(102490f5)
    t62 = rd32(arg1 + 8u) + ((uint32_t)((int32_t)rd32(arg1 + 8u) >> 0x1fu) & 7u);
    t63 = cow_divs(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t62 >> 3u) * rd32(arg1 + 4u));
    t64 = cow_mods(g, rd32(arg1 + 0x18u), (uint32_t)((int32_t)t62 >> 3u) * rd32(arg1 + 4u));
    t65 = rd32(arg1 + 0x14u);
    wr32(arg1 + 0x18u, t63);
    if ((int32_t)t65 < (int32_t)rd32(arg1 + 0x10u))
    {
        eax = rd32(arg1 + 0x10u);
    COW_AT(1024911a)
        wr32(arg1 + 0x14u, 0xffffffffu);
        wr32(arg1 + 0x10u, 0xffffffffu);
    }
    COW_AT(10249123)
    if ((int32_t)rd32(arg1 + 0x14u) <= 0) goto L_10249144;
    eax = rd32(arg1 + 0x14u);
    COW_AT(1024912a)
    if ((int32_t)rd32(arg1 + 0x18u) >= (int32_t)(eax + 1u))
    {
        zf = rd32(arg1 + 0x18u) == eax + 1u;
        sf = (int32_t)(rd32(arg1 + 0x18u) - (eax + 1u)) < 0;
        of = ((rd32(arg1 + 0x18u) ^ eax + 1u) & (rd32(arg1 + 0x18u) ^ rd32(arg1 + 0x18u) - (eax + 1u))) >> 0x1fu;
        eax = eax + 1u;
        goto L_1024913f;
    }
    ecx = rd32(arg1 + 0x18u);
    COW_AT(10249132)
    wr32(arg1 + 0x14u, ecx - 1u);
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return esi;
L_10248f57: ;
    COW_AT(10248f57)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->eax = sp0 + 8u;
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t24 = g->edx;
    t25 = rd32(sp0 + 8u);
    wr32(sp0 - 0x2cu, t25);
    g->esp = sp0 - 0x20u;
    t26 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t25, t24, 1, 3, t25, sp0 + 8u, 1u);
    t27 = g->ecx;
    t28 = g->edx;
    if (t26 == 0u)
    {
        eax = t26;
        ecx = t27;
        edx = t28;
        goto L_102490d6;
    }
    eax = t26;
    ecx = t27;
    esi = t26;
    COW_AT(10248f7d)
    wr32(sp0 - 0x1cu, ebx);
    t29 = rd32(sp0 + 8u);
    wr32(sp0 - 0x20u, t29);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, esi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t29, 1, 6, esi, 1u, t29, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t30 = (uint32_t)rd8(esi + 0xbu) << 8u;
    wr32(sp0 - 0xcu, t30);
    t31 = t30 * 0x100u + rd8(esi + 0xau) * 0x100u;
    wr32(sp0 - 0xcu, t31);
    t32 = t31 * 0x100u + rd8(esi + 9u) * 0x100u;
    wr32(sp0 - 0xcu, t32);
    t33 = t32 + rd8(esi + 8u);
    wr32(sp0 - 0xcu, t33);
    t34 = rd32(arg1 + 0x1cu);
    wr32(arg1 + 0x10u, t33);
    if (t34 == 0u)
    {
        eax = t33;
    COW_AT(10248fc8)
        wr32(arg1 + 0x14u, eax + 0x1cu);
    }
    COW_AT(10248fce)
    t35 = (uint32_t)rd8(esi + 0x23u) << 8u;
    wr32(sp0 - 0xcu, t35);
    t36 = t35 * 0x100u + rd8(esi + 0x22u) * 0x100u;
    wr32(sp0 - 0xcu, t36);
    wr32(sp0 - 0x1cu, esi);
    t37 = t36 * 0x100u + rd8(esi + 0x21u) * 0x100u;
    wr32(sp0 - 0xcu, t37);
    t38 = t37 + rd8(esi + 0x20u);
    wr32(sp0 - 0xcu, t38);
    t39 = rd8(esi + 0x20u);
    wr32(arg1 + 0x14u, t38);
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t36, t39, 1, 1, esi);
    t40 = g->ecx;
    t41 = g->edx;
    ecx = t40;
    edx = t41;
    loc_4 = rd32(sp0 - 4u);
    goto L_102490b3;
L_1024900f: ;
    COW_AT(1024900f)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 - 8u);
    g->eax = sp0 - 8u;
    g->esp = sp0 - 0x10u;
    t42 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 - 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    wr32(sp0 - 0x2cu, ebx);
    wr32(sp0 - 0x30u, 4u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    t43 = rd32(sp0 - 8u) + 8u;
    wr32(sp0 - 8u, t43);
    wr32(sp0 + 8u, 4u);
    g->ecx = sp0 - 0xcu;
    g->esp = sp0 - 0x20u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, t43, 1, 6, sp0 - 0xcu, 1u, 4u, ebx, sp0 - 8u, 1u);
    t44 = g->ecx;
    t45 = g->edx;
    if (rd32(sp0 - 0xcu) != 0x45564157u)
    {
        ecx = t44;
        edx = t45;
        goto L_1024905b;
    }
    ecx = t44;
    edx = t45;
    COW_AT(1024904e)
    t46 = rd32(sp0 - 4u) + 1u;
    wr32(sp0 - 4u, t46);
    loc_4 = t46;
    goto L_102490b3;
L_10249054: ;
    COW_AT(10249054)
    if (eax == 0x61746164u) goto L_10249084;
L_1024905b: ;
    COW_AT(1024905b)
    if (rd32(sp0 - 4u) == 0u)
    {
        eax = rd32(sp0 - 4u);
        goto L_102490d6;
    }
    eax = rd32(sp0 - 4u);
    COW_AT(10249063)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->ecx = ecx;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, sp0 + 8u, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x2cu, 1u);
    t49 = rd32(sp0 + 8u);
    wr32(sp0 - 0x30u, t49);
    wr32(sp0 - 0x34u, ebx);
    g->ecx = t47;
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t48, 1, 3, ebx, t49, 1u);
    t50 = g->ecx;
    t51 = g->edx;
    ecx = t50;
    edx = t51;
    loc_4 = rd32(sp0 - 4u);
    goto L_102490b3;
L_10249084: ;
    COW_AT(10249084)
    wr32(sp0 - 0x1cu, ebx);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, sp0 + 8u);
    g->eax = eax;
    g->ecx = sp0 + 8u;
    g->esp = sp0 - 0x10u;
    t52 = cow_call_regs(g, COW_IMG(0x103121bfu), g->eax, g->ecx, edx, 1, 6, sp0 + 8u, 1u, 4u, ebx, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u));
    t53 = g->ecx;
    wr32(sp0 - 0x2cu, ebx);
    t54 = rd32(sp0 + 8u);
    wr32(arg1 + 0x18u, t54);
    g->ecx = t53;
    g->esp = sp0 - 0x20u;
    t55 = cow_call_regs(g, COW_IMG(0x10313de9u), g->eax, g->ecx, t54, 1, 3, ebx, sp0 + 8u, 1u);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(arg1 + 0x1cu, t55);
    wr32(sp0 - 0x30u, 1u);
    t58 = rd32(sp0 + 8u);
    wr32(sp0 - 0x34u, t58);
    wr32(sp0 - 0x38u, ebx);
    g->ecx = t56;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x10313d30u), g->eax, g->ecx, t57, 1, 3, ebx, t58, 1u);
    t59 = g->ecx;
    t60 = g->edx;
    ecx = t59;
    edx = t60;
    loc_4 = rd32(sp0 - 4u);
    goto L_102490b3;
L_102490d6: ;
    COW_AT(102490d6)
    wr32(sp0 - 8u, 0u);
    wr32(arg1 + 0x1cu, 0u);
    goto L_102490e5;
L_1024913f: ;
    COW_AT(1024913f)
    if (!(zf || sf != of))
    {
    COW_AT(10249141)
        wr32(arg1 + 0x18u, eax);
    }
L_10249144: ;
    COW_AT(10249144)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    return esi;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10248e50(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10248e6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10248e71u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_esi = g->esi;
        in_edi = g->edi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10248e7fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10248ea0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10248ea6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10248eb1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10248ebcu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10248ee2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10248f57u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10248f7du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 + 8u);
        (void)sp0;
        return 1;
    }
    case 0x10248fc8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10248fceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024900fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1024904eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        wr32(sp0 - 0x28u, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10249054u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x1024905bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249063u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249084u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        wr32(sp0 - 0x28u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102490b3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102490bbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102490d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102490d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102490e5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_4;
        uint32_t loc_8;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        loc_8 = rd32(sp0 - 8u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102490f5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024911au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249123u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024912au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249132u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x1024913fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249141u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x10249144u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t of;
        uint32_t sf;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        zf = g->zf;
        sf = g->sf;
        of = g->of;
        g->esp = sp0 - 0x18u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10248e50(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10248e50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
