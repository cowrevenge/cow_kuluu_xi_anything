/* f_0x101911f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101911f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10191201u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191201;
    case 0x1019120fu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019120f;
    case 0x10191216u: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191216;
    case 0x10191225u: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191225;
    case 0x1019122fu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019122f;
    case 0x10191236u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191236;
    case 0x10191245u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191245;
    case 0x10191256u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191256;
    case 0x1019126au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019126a;
    case 0x10191280u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191280;
    case 0x10191289u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191289;
    case 0x10191294u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191294;
    case 0x101912afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101912af;
    case 0x101912b9u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101912b9;
    case 0x101912ceu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101912ce;
    case 0x101912d6u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101912d6;
    case 0x101912f1u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101912f1;
    case 0x10191300u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191300;
    case 0x10191314u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191314;
    case 0x1019132au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019132a;
    case 0x10191339u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191339;
    case 0x1019134du: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019134d;
    case 0x1019135bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019135b;
    case 0x10191363u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191363;
    case 0x10191379u: ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191379;
    case 0x10191382u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191382;
    case 0x10191388u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_10191388;
    case 0x1019139au: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019139a;
    case 0x101913a2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913a2;
    case 0x101913abu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913ab;
    case 0x101913b0u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913b0;
    case 0x101913b9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913b9;
    case 0x101913beu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913be;
    case 0x101913c7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913c7;
    case 0x101913ccu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913cc;
    case 0x101913d3u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913d3;
    case 0x101913ffu: ecx = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101913ff;
    case 0x1019140cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_1019140c;
    default: break;
    }
#endif

    COW_AT(101911f0)
    if (rd32(self + 0x18u) == 0u) goto L_1019140c;
    ecx = rd32(self + 0x18u);
    COW_AT(10191201)
    if (arg1 - 1u > 0xcu) goto L_101913ff;
    COW_AT(1019120f)
    t1 = rd32(COW_IMG(0x10191414u) + arg1 * 4u - 4u);
    switch (t1 - RD)
    {
    case 0x10191216u: goto L_10191216;
    case 0x10191256u: goto L_10191256;
    case 0x10191280u: goto L_10191280;
    case 0x101912afu: eax = arg1 - 1u; edx = in_edx; goto L_101912af;
    case 0x101912b9u: goto L_101912b9;
    case 0x101912ceu: goto L_101912ce;
    case 0x101912f1u: goto L_101912f1;
    case 0x10191300u: goto L_10191300;
    case 0x1019132au: goto L_1019132a;
    case 0x10191339u: goto L_10191339;
    case 0x1019134du: goto L_1019134d;
    case 0x10191379u: goto L_10191379;
    case 0x1019139au: goto L_1019139a;
    default: rt_fatal(g, COW_IMG(0x1019120fu), "switch");
    }
    return;
L_10191216: ;
    COW_AT(10191216)
    if (rd32(rd32(COW_IMG(0x10456a28u))) != 0x60u)
    {
        eax = arg1 - 1u;
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = in_edx;
        goto L_101912af;
    }
    COW_AT(10191225)
    if (rd32(COW_IMG(0x10662788u)) == 0u)
    {
        eax = arg1 - 1u;
        ecx = rd32(COW_IMG(0x10662788u));
    }
    else
    {
        ecx = rd32(COW_IMG(0x10662788u));
    COW_AT(1019122f)
        if (rd32(ecx + 8u) == 0u)
        {
            eax = rd32(ecx + 8u);
        }
        else
        {
            eax = rd32(ecx + 8u);
    COW_AT(10191236)
            t50 = rd32(eax + 0x34u) & 0xfffffffeu;
            wr32(eax + 0x34u, t50);
            ecx = rd32(COW_IMG(0x10662788u));
        }
    }
    COW_AT(10191245)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1015dbb0u), COW_IMG(0x10621838u), 2, ecx, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10191256: ;
    COW_AT(10191256)
    t41 = rd32(ecx + 0xf10cu);
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t42 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0xeu, t41);
    t43 = g->ecx;
    t44 = g->edx;
    if ((int32_t)t42 < 0)
    {
        eax = t42;
        ecx = t43;
        edx = t44;
        goto L_101912af;
    }
    eax = t42;
    COW_AT(1019126a)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x18u));
    t45 = rd32(self + 0x18u);
    t46 = rd32(rd32(self + 0x18u));
    g->esp = sp0 - 8u;
    t47 = cow_thiscall(g, rd32(t46 + 4u), t45, 3, 2u, 0u, 0u);
    t48 = g->ecx;
    t49 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t48, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10191280: ;
    COW_AT(10191280)
    g->eax = rd32(ecx);
    g->edx = in_edx;
    t33 = rd32(ecx);
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, rd32(t33 + 0x20u), ecx, 0);
    t35 = g->ecx;
    t36 = g->edx;
    if ((uint8_t)t34 == 0u)
    {
        eax = t34;
        ecx = t35;
        edx = t36;
        goto L_101912af;
    }
    eax = t34;
    edx = t36;
    COW_AT(10191289)
    if (rd32(rd32(self + 0x18u) + 0xf10cu) != 0u)
    {
        ecx = rd32(self + 0x18u);
        goto L_101912af;
    }
    ecx = rd32(self + 0x18u);
    COW_AT(10191294)
    wr32(self + 8u, 2u);
    g->eax = eax;
    g->edx = rd32(ecx);
    t37 = rd32(ecx);
    g->esp = sp0 - 8u;
    t38 = cow_thiscall(g, rd32(t37 + 4u), ecx, 3, 3u, 0x79u, 0u);
    t39 = g->ecx;
    t40 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t39, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101912af: ;
    COW_AT(101912af)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101912b9: ;
    COW_AT(101912b9)
    t24 = rd32(ecx + 0xf10cu);
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t25 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0xfu, t24);
    t26 = g->ecx;
    t27 = g->edx;
    eax = t25;
    ecx = t26;
    edx = t27;
L_1019135b: ;
    COW_AT(1019135b)
    if ((int32_t)eax < 0) goto L_101912af;
    COW_AT(10191363)
    g->eax = rd32(rd32(self + 0x18u));
    g->edx = edx;
    t28 = rd32(rd32(self + 0x18u));
    t29 = rd32(self + 0x18u);
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, rd32(t28 + 4u), t29, 3, 2u, 0u, 0u);
    t31 = g->ecx;
    t32 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t31, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101912ce: ;
    COW_AT(101912ce)
    if (rd32(ecx + 0xf10cu) != 0u)
    {
        eax = arg1 - 1u;
        edx = in_edx;
        goto L_101912af;
    }
    COW_AT(101912d6)
    wr32(self + 8u, 3u);
    g->eax = arg1 - 1u;
    g->edx = rd32(ecx);
    t20 = rd32(ecx);
    g->esp = sp0 - 8u;
    t21 = cow_thiscall(g, rd32(t20 + 4u), ecx, 3, 3u, 0xfu, 0u);
    t22 = g->ecx;
    t23 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t22, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101912f1: ;
    COW_AT(101912f1)
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 1u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10191300: ;
    COW_AT(10191300)
    t11 = rd32(ecx + 0xf10cu);
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t12 = cow_thiscall(g, COW_IMG(0x101918c0u), self, 2, 0x10u, t11);
    t13 = g->ecx;
    t14 = g->edx;
    if ((int32_t)t12 < 0)
    {
        eax = t12;
        ecx = t13;
        edx = t14;
        goto L_101912af;
    }
    eax = t12;
    COW_AT(10191314)
    g->eax = eax;
    g->edx = rd32(rd32(self + 0x18u));
    t15 = rd32(self + 0x18u);
    t16 = rd32(rd32(self + 0x18u));
    g->esp = sp0 - 8u;
    t17 = cow_thiscall(g, rd32(t16 + 4u), t15, 3, 2u, 0u, 0u);
    t18 = g->ecx;
    t19 = g->edx;
    cow_thiscall(g, COW_IMG(0x10037b90u), t18, 0);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1019132a: ;
    COW_AT(1019132a)
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 3u, 0xeu, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_10191339: ;
    COW_AT(10191339)
    wr32(self + 8u, 0u);
    wr32(self + 0x20u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(ecx) + 4u), ecx, 3, 8u, 0u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1019134d: ;
    COW_AT(1019134d)
    t7 = rd32(ecx + 0xf10cu);
    g->eax = arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10191930u), self, 1, t7);
    t9 = g->ecx;
    t10 = g->edx;
    eax = t8;
    ecx = t9;
    edx = t10;
    goto L_1019135b;
L_10191379: ;
    COW_AT(10191379)
    g->eax = arg1 - 1u;
    g->edx = rd32(ecx);
    t4 = rd32(ecx);
    g->esp = sp0 - 8u;
    t5 = cow_thiscall(g, rd32(t4 + 0x20u), ecx, 0);
    t6 = g->edx;
    if ((uint8_t)t5 != 0u)
    {
        edx = t6;
    }
    else
    {
        edx = t6;
    COW_AT(10191382)
        wr32(self + 8u, 0u);
        wr32(self + 0x20u, 0u);
    }
    COW_AT(10191388)
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(self + 0x18u)) + 4u), rd32(self + 0x18u), 3, 3u, 0x1cu, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_1019139a: ;
    COW_AT(1019139a)
    if (rd32(self + 0x24u) != 3u)
    {
        eax = rd32(self + 0x24u);
    COW_AT(101913ab)
        if (eax != 6u)
        {
    COW_AT(101913b9)
            if (eax != 9u)
            {
    COW_AT(101913c7)
                if (eax == 0xcu)
                {
    COW_AT(101913cc)
                    wr32(self + 0x14u, 0xau);
                }
            }
            else
            {
    COW_AT(101913be)
                wr32(self + 0x14u, 7u);
            }
        }
        else
        {
    COW_AT(101913b0)
            wr32(self + 0x14u, 4u);
        }
    }
    else
    {
        eax = rd32(self + 0x24u);
    COW_AT(101913a2)
        wr32(self + 0x14u, 1u);
    }
    COW_AT(101913d3)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t2 = cow_thiscall(g, COW_IMG(0x1015e910u), COW_IMG(0x10621838u), 1, COW_IMG(0x10379908u));
    t3 = g->edx;
    cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x103798f4u), 1u, 0u);
    wr32(self + 8u, 0u);
    wr32(self + 0x20u, 0u);
    g->esi = in_esi;
    g->edi = in_edi;
    return;
L_101913ff: ;
    COW_AT(101913ff)
    g->esp = sp0 - 0xcu;
    cow_stdcall(g, COW_IMG(0x101908d0u), 0);
L_1019140c: ;
    COW_AT(1019140c)
    g->esi = in_esi;
    g->edi = in_edi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101911f0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10191201u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019120fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191216u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191225u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019122fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191236u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191245u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191256u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019126au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191280u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191289u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191294u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101912afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101912b9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101912ceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101912d6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101912f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191300u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191314u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019132au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191339u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019134du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019135bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191363u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191379u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191382u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10191388u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1019139au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913abu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913b0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913beu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913ccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913d3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101913ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x1019140cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
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
void cow_adapter_101911f0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_101911f0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
