/* f_0x101e0340 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101e0340(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101e0352u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0352;
    case 0x101e0355u: ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0355;
    case 0x101e035eu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e035e;
    case 0x101e0369u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0369;
    case 0x101e0379u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0379;
    case 0x101e0395u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0395;
    case 0x101e03a5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03a5;
    case 0x101e03a9u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03a9;
    case 0x101e03b5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03b5;
    case 0x101e03bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03bd;
    case 0x101e03e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03e6;
    case 0x101e03f6u: edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03f6;
    case 0x101e03feu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e03fe;
    case 0x101e0411u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0411;
    case 0x101e041du: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e041d;
    case 0x101e0425u: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0425;
    case 0x101e045fu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e045f;
    case 0x101e0464u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0464;
    case 0x101e048fu: eax = g->eax; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e048f;
    case 0x101e0493u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0493;
    case 0x101e049fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e049f;
    case 0x101e04afu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04af;
    case 0x101e04bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04bb;
    case 0x101e04c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04c7;
    case 0x101e04ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04ce;
    case 0x101e04d6u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04d6;
    case 0x101e04e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04e9;
    case 0x101e04eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04ee;
    case 0x101e04f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e04f0;
    case 0x101e0525u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0525;
    case 0x101e052cu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; self = g->edi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e052c;
    case 0x101e053eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e053e;
    case 0x101e0558u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 8u); in_esi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 8u); g->esi = rd32(sp0 - 4u); goto E_101e0558;
    default: break;
    }
#endif

    COW_AT(101e0340)
    if ((uint32_t)(int16_t)arg2 == 5u) goto L_101e03e6;
    COW_AT(101e0352)
    if ((uint32_t)(int16_t)arg2 == 6u) goto L_101e0395;
    COW_AT(101e0355)
    if ((uint32_t)(int16_t)arg2 - 6u != 2u)
    {
        eax = (uint32_t)(int16_t)arg2 - 8u;
        edx = in_edx;
        goto L_101e0558;
    }
    COW_AT(101e035e)
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        edx = in_edx;
        goto L_101e0558;
    }
    COW_AT(101e0369)
    if ((int32_t)rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u) >= 0)
    {
        eax = rd32(COW_IMG(0x1066349cu));
        edx = in_edx;
        goto L_101e0558;
    }
    eax = rd32(COW_IMG(0x1066349cu));
    COW_AT(101e0379)
    t1 = rd32(eax + 8u);
    g->eax = t1;
    g->esp = sp0 - 8u;
    t2 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), in_edx, 2, t1, 0u);
    t3 = g->ecx;
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10037e90u), t3, 0);
    t6 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t6;
    return (t5 & 0xffffff00u) | 1u;
L_101e0395: ;
    COW_AT(101e0395)
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
        ecx = rd32(COW_IMG(0x1066349cu));
        goto L_101e03b5;
    }
    eax = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
    ecx = rd32(COW_IMG(0x1066349cu));
    COW_AT(101e03a5)
    if ((int32_t)eax >= 0) goto L_101e03bd;
    COW_AT(101e03a9)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x101df160u), ecx, 0);
    t8 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t8;
    return (t7 & 0xffffff00u) | 1u;
L_101e03b5: ;
    COW_AT(101e03b5)
    if ((int32_t)eax < 0)
    {
        edx = in_edx;
        goto L_101e0558;
    }
L_101e03bd: ;
    COW_AT(101e03bd)
    wr32(ecx + 0x50u, 0xffffffffu);
    t9 = rd32(rd32(COW_IMG(0x1066349cu)) + 8u);
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), t9, 2, t9, 0u);
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, COW_IMG(0x10037bf0u), t11, 0);
    t14 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t14;
    return (t13 & 0xffffff00u) | 1u;
L_101e03e6: ;
    COW_AT(101e03e6)
    if (rd32(arg1 + 0x38u) == 0u)
    {
        eax = arg1;
        ecx = (uint32_t)(int16_t)arg3;
        edx = rd32(arg1 + 0x38u);
        goto L_101e0411;
    }
    edx = rd32(arg1 + 0x38u);
    COW_AT(101e03f6)
    if ((int16_t)arg3 >= (int16_t)rd16(arg1 + 0x20u))
    {
        eax = (uint32_t)(int16_t)rd16(arg1 + 0x20u);
        ecx = (uint32_t)(int16_t)arg3;
        goto L_101e0411;
    }
    COW_AT(101e03fe)
    if (edx + (uint32_t)(int16_t)arg3 * 0x54u != 0u)
    {
        esi = edx + (uint32_t)(int16_t)arg3 * 0x54u;
        goto L_101e041d;
    }
    eax = (uint32_t)(int16_t)arg3 * 8u - (uint32_t)(int16_t)arg3;
    ecx = (uint32_t)(int16_t)arg3 * 0x15u;
L_101e0411: ;
    COW_AT(101e0411)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t48 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t49 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t49;
    return (t48 & 0xffffff00u) | 1u;
L_101e041d: ;
    COW_AT(101e041d)
    if (rd32(esi + 0x48u) != 0xfffffffeu)
    {
        eax = rd32(esi + 0x48u);
        goto L_101e045f;
    }
    eax = rd32(esi + 0x48u);
    COW_AT(101e0425)
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t15 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0xe4u);
    t16 = rd8(self + 0x1cu);
    g->edx = t16;
    t17 = rd32(COW_IMG(0x10664520u));
    g->esp = sp0 - 8u;
    t18 = cow_thiscall(g, COW_IMG(0x10210e30u), t17, 7, COW_IMG(0x101e0560u), t16, t15, 0u, 0u, 1u, 0u);
    t19 = g->ecx;
    t20 = g->edx;
    g->edx = t20;
    t21 = cow_thiscall(g, COW_IMG(0x10037b90u), t19, 0);
    t22 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t22;
    return (t21 & 0xffffff00u) | 1u;
L_101e045f: ;
    COW_AT(101e045f)
    if (eax != 0xffffffffu) goto L_101e048f;
    COW_AT(101e0464)
    t23 = rd32(COW_IMG(0x106634a8u));
    wr32(t23 + 0x14u, 0u);
    g->eax = t23;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t24 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f234u), 1u, 0u);
    t25 = g->ecx;
    t26 = g->edx;
    g->edx = t26;
    t27 = cow_thiscall(g, COW_IMG(0x10037b90u), t25, 0);
    t28 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t28;
    return (t27 & 0xffffff00u) | 1u;
L_101e048f: ;
    COW_AT(101e048f)
    if (eax != 0u) goto L_101e049f;
    COW_AT(101e0493)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t29 = cow_thiscall(g, COW_IMG(0x10037c50u), (uint32_t)(int16_t)arg3 * 0x15u, 0);
    t30 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t30;
    return (t29 & 0xffffff00u) | 1u;
L_101e049f: ;
    COW_AT(101e049f)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t31 = cow_thiscall(g, COW_IMG(0x101f4b60u), esi, 1, 1u);
    t32 = g->ecx;
    t33 = g->edx;
    if (t31 != 0x80404040u) goto L_101e04bb;
    eax = t31;
    ecx = t32;
    edx = t33;
    COW_AT(101e04af)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t34 = cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    t35 = g->edx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = t35;
    return (t34 & 0xffffff00u) | 1u;
L_101e04bb: ;
    COW_AT(101e04bb)
    if ((int32_t)rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u) < 0)
    {
        edx = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
        goto L_101e0525;
    }
    eax = rd32(COW_IMG(0x1066349cu));
    edx = rd32(rd32(COW_IMG(0x1066349cu)) + 0x50u);
    COW_AT(101e04c7)
    if (rd32(eax + 0x38u) == 0u) goto L_101e04ee;
    ecx = rd32(eax + 0x38u);
    COW_AT(101e04ce)
    if ((int32_t)edx >= (int16_t)rd16(eax + 0x20u)) goto L_101e04ee;
    COW_AT(101e04d6)
    if (ecx + edx * 0x54u == 0u) goto L_101e04ee;
    eax = ecx + edx * 0x54u;
    COW_AT(101e04e9)
    eax = rd32(eax + 0x48u);
L_101e04f0: ;
    COW_AT(101e04f0)
    t36 = ((-((uint8_t)((uint8_t)eax - 1u) - (rd32(esi + 0x48u) - 1u)) & 0xffffff00u) | (uint8_t)-((uint8_t)((uint8_t)eax - 1u) != rd32(esi + 0x48u) - 1u)) & rd32(esi + 0x48u) - 1u;
    t37 = (rd32(esi + 0x48u) - 1u & 0xffffff00u) | rd8(self + 0x1cu);
    g->esi = esi;
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x100fcf80u), 4, t37, 0x1000u, edx, t36);
    t38 = rd32(COW_IMG(0x1066349cu));
    wr32(t38 + 0x50u, 0xffffffffu);
    edx = t38;
L_101e053e: ;
    COW_AT(101e053e)
    t41 = rd32(rd32(COW_IMG(0x1066349cu)) + 8u);
    g->eax = rd32(COW_IMG(0x1066349cu));
    t42 = rd32(COW_IMG(0x1066349cu));
    g->esp = sp0 - 8u;
    t43 = cow_fastcall(g, COW_IMG(0x1015db80u), COW_IMG(0x10621838u), edx, 2, t41, 0u);
    t44 = g->ecx;
    t45 = g->edx;
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x10037b90u), t44, 0);
    t47 = g->edx;
    eax = t46;
    edx = t47;
L_101e0558: ;
    COW_AT(101e0558)
    g->esi = in_esi;
    g->edi = in_edi;
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e04ee: ;
    COW_AT(101e04ee)
    eax = 0u;
    goto L_101e04f0;
L_101e0525: ;
    COW_AT(101e0525)
    if ((int32_t)rd32(self + 0x10u) >= 0)
    {
        eax = rd32(self + 0x10u);
        goto L_101e0558;
    }
    COW_AT(101e052c)
    t39 = rd32(esi + 0x48u) - 1u;
    wr32(self + 0x10u, t39);
    t40 = rd32(COW_IMG(0x1066349cu));
    wr32(t40 + 0x54u, t39);
    edx = t40;
    goto L_101e053e;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101e0340(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101e0352u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 5u;
        (void)sp0;
        return 1;
    }
    case 0x101e0355u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg2 - 6u;
        (void)sp0;
        return 1;
    }
    case 0x101e035eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e0369u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e0379u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e0395u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03a5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03a9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03e6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e03f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = arg1;
        g->ecx = (uint32_t)(int16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x101e03feu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3;
        (void)sp0;
        return 1;
    }
    case 0x101e0411u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e041du:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101e0425u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101e045fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101e0464u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e048fu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101e0493u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ecx = (uint32_t)(int16_t)arg3 * 0x15u;
        (void)sp0;
        return 1;
    }
    case 0x101e049fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04c7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04d6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04e9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04eeu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e04f0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e0525u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e052cu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        self = g->edi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e053eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 8u);
        in_esi = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x101e0558u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
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
void cow_adapter_101e0340(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101e0340(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
