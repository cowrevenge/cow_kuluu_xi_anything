/* f_0x10038a80 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_10038a80(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 140u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10038a90u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038a90;
    case 0x10038a97u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038a97;
    case 0x10038a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038a9e;
    case 0x10038aa7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038aa7;
    case 0x10038ab0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038ab0;
    case 0x10038ab7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_esi = rd32(sp0 - 0x74u); g->esi = rd32(sp0 - 0x74u); goto E_10038ab7;
    case 0x10038ba1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038ba1;
    case 0x10038bb7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038bb7;
    case 0x10038bcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038bcf;
    case 0x10038be7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038be7;
    case 0x10038bffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038bff;
    case 0x10038c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c17;
    case 0x10038c2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c2f;
    case 0x10038c47u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c47;
    case 0x10038c5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c5f;
    case 0x10038c73u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c73;
    case 0x10038c8au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038c8a;
    case 0x10038ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038ca0;
    case 0x10038cb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038cb6;
    case 0x10038cccu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038ccc;
    case 0x10038ce4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; goto E_10038ce4;
    case 0x10038d01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d01;
    case 0x10038d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d05;
    case 0x10038d0eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d0e;
    case 0x10038d18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d18;
    case 0x10038d2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d2d;
    case 0x10038d47u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d47;
    case 0x10038d5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d5d;
    case 0x10038d6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d6c;
    case 0x10038d86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038d86;
    case 0x10038da0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038da0;
    case 0x10038db6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038db6;
    case 0x10038dc5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038dc5;
    case 0x10038de6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038de6;
    case 0x10038dfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; goto E_10038dfb;
    default: break;
    }
#endif

    COW_AT(10038a80)
    wr32(sp0 - 0x74u, in_esi);
    wr32(sp0 - 0x78u, 0xc8u);
    g->edx = in_edx;
    g->esp = sp0 - 0x74u;
    t1 = cow_call_regs(g, COW_IMG(0x10193850u), in_eax, g->ecx, g->edx, 1, 1, 0xc8u);
    t2 = g->edx;
    eax = t1;
    edx = t2;
    COW_AT(10038a90)
    if (eax == 0u) goto L_10038ab0;
    COW_AT(10038a97)
    if (rd32(self + 4u) == 0u)
    {
        eax = rd32(self + 4u);
        goto L_10038ab0;
    }
    COW_AT(10038a9e)
    if (rd32(COW_IMG(0x1047b958u)) == 0u)
    {
        eax = rd32(COW_IMG(0x1047b958u));
        goto L_10038ab0;
    }
    COW_AT(10038aa7)
    if (rd32(COW_IMG(0x10456d50u)) != 0u) goto L_10038ab7;
    eax = rd32(COW_IMG(0x10456d50u));
L_10038ab0: ;
    COW_AT(10038ab0)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return eax & 0xffffff00u;
L_10038ab7: ;
    COW_AT(10038ab7)
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x60u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x44u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x1047b954u)));
    wr32(sp0 - 0x6cu, 0u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x54u, 0x43800000u);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x4cu, 0u);
    wr32(sp0 - 0x48u, 0x3f800000u);
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x34u, 0x43800000u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x2cu, 0x3f800000u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x20u, 0x3f800000u);
    wr32(sp0 - 0x1cu, 0x43800000u);
    wr32(sp0 - 0x18u, 0x43800000u);
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x10u, 0x3f800000u);
    wr32(sp0 - 8u, 0x3f800000u);
    wr32(sp0 - 4u, 0x3f800000u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0xeu);
    t3 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t3);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t3) + 0xc8u), rd32(t3), 3, t3, 0xeu, 0u);
    COW_AT(10038ba1)
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 7u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x80u, t4);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t4) + 0xc8u), rd32(t4), 3, t4, 7u, 0u);
    COW_AT(10038bb7)
    wr32(sp0 - 0x78u, 3u);
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 0u);
    t5 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t5);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t5) + 0xfcu), rd32(t5), 4, t5, 0u, 1u, 3u);
    COW_AT(10038bcf)
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 2u);
    wr32(sp0 - 0x80u, 0u);
    t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t6);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t6) + 0xfcu), rd32(t6), 4, t6, 0u, 2u, 0u);
    COW_AT(10038be7)
    wr32(sp0 - 0x78u, 2u);
    wr32(sp0 - 0x7cu, 3u);
    wr32(sp0 - 0x80u, 0u);
    t7 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t7);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t7) + 0xfcu), rd32(t7), 4, t7, 0u, 3u, 2u);
    COW_AT(10038bff)
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 5u);
    wr32(sp0 - 0x80u, 0u);
    t8 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t8);
    g->esp = sp0 - 0x74u;
    cow_thiscall(g, rd32(rd32(t8) + 0xfcu), rd32(t8), 4, t8, 0u, 5u, 0u);
    COW_AT(10038c17)
    wr32(sp0 - 0x78u, 2u);
    wr32(sp0 - 0x7cu, 6u);
    wr32(sp0 - 0x80u, 0u);
    t9 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t9);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)) + 0xfcu), rd32(rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu)), 3, t9, 0u, 6u);
    COW_AT(10038c2f)
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 4u);
    wr32(sp0 - 0x84u, 1u);
    t10 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x88u, t10);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(t10) + 0xfcu), rd32(t10), 4, t10, 1u, 4u, 1u);
    COW_AT(10038c47)
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 1u);
    wr32(sp0 - 0x84u, 1u);
    t11 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x88u, t11);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(t11) + 0xfcu), rd32(t11), 4, t11, 1u, 1u, 1u);
    COW_AT(10038c5f)
    if ((rd32(COW_IMG(0x1047b954u)) & 0xff000000u) != 0x80000000u)
    {
        edx = rd32(COW_IMG(0x1047b954u)) & 0xff000000u;
    COW_AT(10038c73)
        wr32(sp0 - 0x7cu, 5u);
        wr32(sp0 - 0x80u, 4u);
        wr32(sp0 - 0x84u, 0u);
        t12 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x88u, t12);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(rd32(t12) + 0xfcu), rd32(t12), 4, t12, 0u, 4u, 5u);
    COW_AT(10038c8a)
        wr32(sp0 - 0x7cu, 1u);
        wr32(sp0 - 0x80u, 0x1bu);
        t13 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x84u, t13);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(rd32(t13) + 0xc8u), rd32(t13), 3, t13, 0x1bu, 1u);
    COW_AT(10038ca0)
        wr32(sp0 - 0x7cu, 5u);
        wr32(sp0 - 0x80u, 0x13u);
        t14 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x84u, t14);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(rd32(t14) + 0xc8u), rd32(t14), 3, t14, 0x13u, 5u);
    COW_AT(10038cb6)
        wr32(sp0 - 0x7cu, 1u);
        wr32(sp0 - 0x80u, 0x14u);
        t15 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        wr32(sp0 - 0x84u, t15);
        g->esp = sp0 - 0x78u;
        cow_thiscall(g, rd32(rd32(t15) + 0xc8u), rd32(t15), 3, t15, 0x14u, 1u);
    }
    COW_AT(10038ccc)
    wr32(sp0 - 0x7cu, in_ebx);
    wr32(sp0 - 0x80u, 0x144u);
    t16 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t16);
    g->edx = rd32(COW_IMG(0x1045666cu));
    t17 = rd32(COW_IMG(0x1045666cu));
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(t16) + 0x130u), rd32(t16), 3, t16, 0x144u, in_ebx);
    t18 = g->edx;
    edx = t18;
    COW_AT(10038ce4)
    t19 = rd32(COW_IMG(0x1045666cu));
    t20 = rd8(rd32(COW_IMG(0x1045666cu)) + 0x828u);
    wr8(t19 + 0x828u, 0u);
    g->eax = t19;
    g->esp = sp0 - 0x78u;
    t21 = cow_thiscall(g, COW_IMG(0x1000d660u), rd32(COW_IMG(0x104566e8u)), 0);
    eax = t21;
    ebx = (in_ebx & 0xffffff00u) | t20;
    COW_AT(10038d01)
    if ((uint8_t)eax == 0u) goto L_10038d6c;
    COW_AT(10038d05)
    if (rd32(COW_IMG(0x1047b95cu)) == 0u) goto L_10038d6c;
    COW_AT(10038d0e)
    if (rd32(COW_IMG(0x10456d54u)) == 0u) goto L_10038d6c;
    ecx = rd32(COW_IMG(0x10456d54u));
    COW_AT(10038d18)
    wr32(sp0 - 0x7cu, ecx);
    wr32(sp0 - 0x80u, 0u);
    t22 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t22);
    g->edx = rd32(t22);
    t23 = rd32(t22);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(t23 + 0xf4u), ecx, 3, t22, 0u, ecx);
    t24 = g->edx;
    edx = t24;
    COW_AT(10038d2d)
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, rd32(COW_IMG(0x1047b964u)));
    wr32(sp0 - 0x84u, rd32(COW_IMG(0x1047b95cu)));
    g->ebx = ebx;
    g->eax = rd32(COW_IMG(0x1047b964u));
    t25 = rd32(COW_IMG(0x1047b964u));
    g->esp = sp0 - 0x78u;
    t26 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, rd32(COW_IMG(0x1047b95cu)), t25, 0u);
    eax = t26;
    COW_AT(10038d47)
    wr32(sp0 - 0x7cu, 0x1cu);
    wr32(sp0 - 0x80u, sp0 - 0x70u);
    wr32(sp0 - 0x84u, 2u);
    wr32(sp0 - 0x88u, 5u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = sp0 - 0x70u;
    g->esp = sp0 - 0x78u;
    t27 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
    t28 = g->edx;
    eax = t27;
    edx = t28;
    COW_AT(10038d5d)
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0u);
    g->esp = sp0 - 0x78u;
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    rt_fatal(g, COW_IMG(0x10038d67u), "no way on");
    return 0;
L_10038d6c: ;
    COW_AT(10038d6c)
    wr32(sp0 - 0x7cu, rd32(COW_IMG(0x10456d50u)));
    wr32(sp0 - 0x80u, 0u);
    t29 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t29);
    g->edx = rd32(COW_IMG(0x10456d50u));
    t30 = rd32(COW_IMG(0x10456d50u));
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(rd32(t29) + 0xf4u), rd32(t29), 3, t29, 0u, t30);
    t31 = g->edx;
    edx = t31;
    COW_AT(10038d86)
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, rd32(COW_IMG(0x1047b960u)));
    wr32(sp0 - 0x84u, rd32(COW_IMG(0x1047b958u)));
    g->ebx = ebx;
    g->eax = rd32(COW_IMG(0x1047b960u));
    t32 = rd32(COW_IMG(0x1047b960u));
    g->esp = sp0 - 0x78u;
    t33 = cow_thiscall(g, COW_IMG(0x10009e20u), rd32(COW_IMG(0x1045666cu)), 3, rd32(COW_IMG(0x1047b958u)), t32, 0u);
    eax = t33;
    COW_AT(10038da0)
    wr32(sp0 - 0x7cu, 0x1cu);
    wr32(sp0 - 0x80u, sp0 - 0x70u);
    wr32(sp0 - 0x84u, 2u);
    wr32(sp0 - 0x88u, 5u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = sp0 - 0x70u;
    g->esp = sp0 - 0x78u;
    t34 = cow_thiscall(g, COW_IMG(0x1000cd00u), rd32(COW_IMG(0x1045666cu)), 4, 5u, 2u, sp0 - 0x70u, 0x1cu);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    COW_AT(10038db6)
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, 0u);
    g->esp = sp0 - 0x78u;
    cow_fastcall(g, COW_IMG(0x1000a1d0u), rd32(COW_IMG(0x1045666cu)), edx, 2, 0u, 0u);
    COW_AT(10038dc5)
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 0xeu);
    wr8(rd32(COW_IMG(0x1045666cu)) + 0x828u, (uint8_t)ebx);
    t36 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t36);
    g->edx = rd32(t36);
    t37 = rd32(t36);
    g->esp = sp0 - 0x78u;
    cow_thiscall(g, rd32(t37 + 0xc8u), rd32(COW_IMG(0x1045666cu)), 3, t36, 0xeu, 1u);
    t38 = g->edx;
    edx = t38;
    COW_AT(10038de6)
    wr32(sp0 - 0x7cu, 1u);
    wr32(sp0 - 0x80u, 7u);
    t39 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    wr32(sp0 - 0x84u, t39);
    g->eax = t39;
    g->esp = sp0 - 0x78u;
    t40 = cow_thiscall(g, rd32(rd32(t39) + 0xc8u), rd32(t39), 3, t39, 7u, 1u);
    eax = t40;
    COW_AT(10038dfb)
    g->ebx = rd32(sp0 - 0x78u);
    g->esi = rd32(sp0 - 0x74u);
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10038a80(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10038a90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038a97u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038a9eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038aa7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038ab0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038ab7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_esi = rd32(sp0 - 0x74u);
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038ba1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038bb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038bcfu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038be7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038bffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038c17u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x74u;
        (void)sp0;
        return 1;
    }
    case 0x10038c2fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x78u, 2u);
        (void)sp0;
        return 1;
    }
    case 0x10038c47u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038c5fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038c73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038c8au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038ca0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038cb6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038cccu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038ce4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d01u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d05u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d0eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d18u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d47u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d5du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x80u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x10038d6cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038d86u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038da0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038db6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        wr32(sp0 - 0x80u, sp0 - 0x70u);
        (void)sp0;
        return 1;
    }
    case 0x10038dc5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038de6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    case 0x10038dfbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        g->esp = sp0 - 0x78u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10038a80(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10038a80(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
