/* f_0x1031fffd - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031fffd(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_c;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 60u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1032003eu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1032003e;
    case 0x1032005au: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032005a;
    case 0x1032007fu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_1032007f;
    case 0x1032008bu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_1032008b;
    case 0x10320094u: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_10320094;
    case 0x1032009du: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_1032009d;
    case 0x103200afu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_103200af;
    case 0x103200bbu: eax = g->eax; ecx = g->ecx; esi = g->esi; edi = g->edi; goto E_103200bb;
    case 0x103200e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103200e7;
    case 0x103200ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103200ec;
    case 0x103200f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103200f7;
    case 0x103200ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; goto E_103200ff;
    case 0x10320124u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320124;
    case 0x1032012du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032012d;
    case 0x1032013bu: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1032013b;
    case 0x10320144u: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10320144;
    case 0x1032014du: eax = g->eax; edx = g->edx; esi = g->esi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1032014d;
    case 0x1032015eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_1032015e;
    case 0x10320186u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320186;
    case 0x103201b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201b5;
    case 0x103201bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; loc_c = rd32(sp0 - 0xcu); goto E_103201bd;
    case 0x103201d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201d4;
    case 0x103201dau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201da;
    case 0x103201deu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201de;
    case 0x103201e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201e2;
    case 0x103201e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201e5;
    case 0x103201eau: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_103201ea;
    case 0x10320203u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320203;
    case 0x10320209u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320209;
    case 0x1032020du: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032020d;
    case 0x10320210u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320210;
    case 0x10320215u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320215;
    case 0x1032022bu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032022b;
    case 0x10320231u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320231;
    case 0x10320235u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320235;
    case 0x10320238u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320238;
    case 0x1032023eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032023e;
    case 0x10320246u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320246;
    case 0x10320252u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_10320252;
    case 0x1032026eu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032026e;
    case 0x10320278u: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_10320278;
    case 0x1032027fu: eax = g->eax; ecx = g->ecx; edx = g->edx; esi = g->esi; edi = g->edi; goto E_1032027f;
    default: break;
    }
#endif

    COW_AT(1031fffd)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0x1cu, 0xcu);
    wr32(sp0 - 0xcu, 0u);
    g->ebx = 0u;
    g->esp = sp0 - 0x10u;
    t1 = cow_call_regs(g, COW_IMG(0x1031d016u), g->eax, self, in_edx, 1, 3, 0xcu, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(COW_IMG(0x103d2df8u), 0xffffffffu);
    wr32(COW_IMG(0x103d2de8u), 0xffffffffu);
    wr32(COW_IMG(0x109b27e0u), 0u);
    wr32(sp0 - 0x1cu, COW_IMG(0x1034a560u));
    g->esp = sp0 - 0x18u;
    t4 = cow_call_regs(g, COW_IMG(0x10324c09u), t1, t2, t3, 1, 1, COW_IMG(0x1034a560u));
    t5 = g->edx;
    if (t4 != 0u)
    {
        eax = t4;
        edx = t5;
        esi = t4;
        goto L_1032013b;
    }
    eax = t4;
    edx = t5;
    COW_AT(1032003e)
    wr32(sp0 - 0x1cu, 0xcu);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t6 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, COW_IMG(0x1034a560u), edx, 1, 3, 0xcu, in_edi, in_esi);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x1cu, COW_IMG(0x109b27e8u));
    g->edx = t8;
    g->esp = sp0 - 0x18u;
    t9 = cow_stdcall(g, rd32(COW_IMG(0x10329284u)), 1, COW_IMG(0x109b27e8u));   /* kernel32.dll!GetTimeZoneInformation */
    t10 = g->edx;
    if (t9 == 0xffffffffu)
    {
        edx = t10;
        goto L_1032027f;
    }
    COW_AT(1032005a)
    wr32(sp0 - 0x1cu, 1u);
    t11 = rd32(COW_IMG(0x109b27e8u)) * 0x3cu;
    t12 = rd32(COW_IMG(0x109b283cu));
    t13 = rd16(COW_IMG(0x109b282eu));
    wr32(COW_IMG(0x103d2d50u), t11);
    wr32(COW_IMG(0x109b27e0u), 1u);
    if ((uint16_t)t13 == 0u)
    {
        ecx = t12;
    }
    else
    {
        eax = t11;
        ecx = t12;
    COW_AT(1032007f)
        t14 = eax + ecx * 0x3cu;
        wr32(COW_IMG(0x103d2d50u), t14);
    }
    COW_AT(1032008b)
    if (rd16(COW_IMG(0x109b2882u)) == 0u) goto L_103200af;
    COW_AT(10320094)
    if (rd32(COW_IMG(0x109b2890u)) == 0u) goto L_103200af;
    eax = rd32(COW_IMG(0x109b2890u));
    COW_AT(1032009d)
    wr32(COW_IMG(0x103d2d54u), 1u);
    t15 = eax * 0x3cu - ecx * 0x3cu;
    wr32(COW_IMG(0x103d2d58u), t15);
L_103200bb: ;
    COW_AT(103200bb)
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x3fu);
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x103d2ddcu)));
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, COW_IMG(0x109b27ecu));
    wr32(sp0 - 0x34u, 0x220u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 8u;
    g->ecx = ecx;
    g->edx = 1u;
    t16 = rd32(COW_IMG(0x10329154u));
    g->esp = sp0 - 0x18u;
    t17 = cow_stdcall(g, t16, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, COW_IMG(0x109b27ecu), 0xffffffffu, rd32(COW_IMG(0x103d2ddcu)), 0x3fu, 0u, sp0 - 8u);   /* kernel32.dll!WideCharToMultiByte */
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0u)
    {
        ecx = t18;
        edx = t19;
        esi = t16;
        goto L_103200f7;
    }
    ecx = t18;
    edx = t19;
    esi = t16;
    COW_AT(103200e7)
    if (rd32(sp0 - 8u) != 0u) goto L_103200f7;
    COW_AT(103200ec)
    wr8(rd32(COW_IMG(0x103d2ddcu)) + 0x3fu, 0u);
L_103200ff: ;
    COW_AT(103200ff)
    wr32(sp0 - 0x1cu, sp0 - 8u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 0x3fu);
    wr32(sp0 - 0x28u, rd32(COW_IMG(0x103d2de0u)));
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, COW_IMG(0x109b2840u));
    wr32(sp0 - 0x34u, 0x220u);
    wr32(sp0 - 0x38u, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 - 8u;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t20 = cow_thiscall(g, esi, ecx, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, COW_IMG(0x109b2840u), 0xffffffffu, rd32(COW_IMG(0x103d2de0u)), 0x3fu, 0u, sp0 - 8u);
    t21 = g->edx;
    if (t20 == 0u)
    {
        edx = t21;
        goto L_1032026e;
    }
    edx = t21;
    COW_AT(10320124)
    if (rd32(sp0 - 8u) != 0u) goto L_1032026e;
    COW_AT(1032012d)
    wr8(rd32(COW_IMG(0x103d2de0u)) + 0x3fu, 0u);
L_1032027f: ;
    COW_AT(1032027f)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = rd32(sp0 - 0x18u);
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_103200af: ;
    COW_AT(103200af)
    wr32(COW_IMG(0x103d2d54u), 0u);
    wr32(COW_IMG(0x103d2d58u), 0u);
    goto L_103200bb;
L_103200f7: ;
    COW_AT(103200f7)
    wr8(rd32(COW_IMG(0x103d2ddcu)), 0u);
    goto L_103200ff;
L_1032013b: ;
    COW_AT(1032013b)
    if (rd8(esi) == 0u)
    {
        ecx = COW_IMG(0x1034a560u);
        edi = 0xcu;
        goto L_10320278;
    }
    COW_AT(10320144)
    if (rd32(COW_IMG(0x109b2894u)) == 0u)
    {
        eax = rd32(COW_IMG(0x109b2894u));
        ecx = COW_IMG(0x1034a560u);
        edi = 0xcu;
        goto L_1032015e;
    }
    eax = rd32(COW_IMG(0x109b2894u));
    COW_AT(1032014d)
    wr32(sp0 - 0x1cu, eax);
    wr32(sp0 - 0x20u, esi);
    g->edi = 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t22 = cow_call_regs(g, COW_IMG(0x10320960u), eax, g->ecx, g->edx, 1, 2, esi, eax);
    t23 = g->edx;
    t24 = g->edi;
    if (t22 == 0u)
    {
        eax = t22;
        ecx = rd32(sp0 - 0x1cu);
        edx = t23;
        edi = t24;
        goto L_10320278;
    }
    eax = t22;
    ecx = rd32(sp0 - 0x1cu);
    edx = t23;
    edi = t24;
L_1032015e: ;
    COW_AT(1032015e)
    wr32(sp0 - 0x1cu, rd32(COW_IMG(0x109b2894u)));
    g->ebx = 0u;
    g->eax = eax;
    t25 = rd32(COW_IMG(0x109b2894u));
    g->esp = sp0 - 0x10u;
    t26 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, ecx, edx, 1, 3, t25, in_edi, in_esi);
    t27 = g->ecx;
    t28 = g->edx;
    wr32(sp0 - 0x20u, esi);
    g->ecx = t27;
    g->edx = t28;
    g->esp = sp0 - 0x1cu;
    t29 = cow_call_regs(g, COW_IMG(0x10317480u), t26, g->ecx, g->edx, 1, 1, esi);
    t30 = g->ecx;
    t31 = g->edx;
    wr32(sp0 - 0x24u, t29 + 1u);
    g->eax = t29 + 1u;
    g->esp = sp0 - 0x18u;
    t32 = cow_call_regs(g, COW_IMG(0x10312fd6u), g->eax, t30, t31, 1, 3, t29 + 1u, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t33 = g->ecx;
    t34 = g->edx;
    wr32(COW_IMG(0x109b2894u), t32);
    if (t32 == 0u)
    {
        eax = t32;
        ecx = t33;
        edx = t34;
        goto L_10320278;
    }
    eax = t32;
    ecx = t33;
    edx = t34;
    COW_AT(10320186)
    wr32(sp0 - 0x1cu, esi);
    wr32(sp0 - 0x20u, eax);
    g->edi = edi;
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x14u;
    t35 = cow_call_regs(g, COW_IMG(0x10317500u), g->eax, g->ecx, edx, 1, 3, eax, esi, rd32(sp0 - 0x18u));
    t36 = g->ecx;
    t37 = g->edx;
    t38 = g->edi;
    wr32(sp0 - 0x24u, t38);
    g->esp = sp0 - 0x18u;
    t39 = cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, t36, t37, 1, 3, t38, rd32(sp0 - 0x20u), rd32(sp0 - 0x1cu));
    t40 = g->ecx;
    t41 = g->edx;
    wr32(sp0 - 0x28u, 3u);
    wr32(sp0 - 0x2cu, esi);
    wr32(sp0 - 0x30u, rd32(COW_IMG(0x103d2ddcu)));
    g->ecx = t40;
    g->edx = t41;
    g->esp = sp0 - 0x24u;
    cow_call_regs(g, COW_IMG(0x10312090u), t39, g->ecx, g->edx, 1, 3, rd32(COW_IMG(0x103d2ddcu)), esi, 3u);
    t42 = g->ecx;
    t43 = g->edx;
    t44 = rd32(COW_IMG(0x103d2ddcu));
    wr8(t44 + 3u, 0u);
    if (rd8(esi + 3u) != 0x2du)
    {
        eax = t44;
        ecx = t42;
        edx = t43;
        esi = esi + 3u;
        loc_c = rd32(sp0 - 0xcu);
    }
    else
    {
        eax = t44;
        ecx = t42;
        edx = t43;
        esi = esi + 3u;
    COW_AT(103201b5)
        wr32(sp0 - 0xcu, 1u);
        esi = esi + 1u;
        loc_c = 1u;
    }
    COW_AT(103201bd)
    wr32(sp0 - 0x1cu, esi);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t45 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi);
    t46 = g->edx;
    wr32(COW_IMG(0x103d2d50u), t45 * 0xe10u);
    eax = t45;
    ecx = t45 * 0xe10u;
    edx = t46;
L_103201d4: ;
    COW_AT(103201d4)
    if (rd8(esi) == 0x2bu)
    {
        eax = (eax & 0xffffff00u) | rd8(esi);
        goto L_103201e2;
    }
    eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(103201da)
    if ((int8_t)eax < 48) goto L_103201e5;
    COW_AT(103201de)
    if ((int8_t)eax > 57) goto L_103201e5;
L_103201e2: ;
    COW_AT(103201e2)
    esi = esi + 1u;
    goto L_103201d4;
L_103201e5: ;
    COW_AT(103201e5)
    if (rd8(esi) == 0x3au)
    {
    COW_AT(103201ea)
        wr32(sp0 - 0x1cu, esi + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t47 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi + 1u);
        t48 = g->edx;
        t49 = t47 * 0x3cu + rd32(COW_IMG(0x103d2d50u));
        wr32(COW_IMG(0x103d2d50u), t49);
        eax = t47 * 0x3cu;
        ecx = t49;
        edx = t48;
        esi = esi + 1u;
L_10320203: ;
    COW_AT(10320203)
        if ((int8_t)rd8(esi) < 48)
        {
            eax = (eax & 0xffffff00u) | rd8(esi);
            goto L_10320210;
        }
        eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10320209)
        if ((int8_t)eax > 57) goto L_10320210;
    COW_AT(1032020d)
        esi = esi + 1u;
        goto L_10320203;
    }
L_10320238: ;
    COW_AT(10320238)
    if (rd32(sp0 - 0xcu) != 0u)
    {
    COW_AT(1032023e)
        wr32(COW_IMG(0x103d2d50u), -ecx);
        ecx = -ecx;
    }
    COW_AT(10320246)
    t53 = rd8(esi);
    wr32(COW_IMG(0x103d2d54u), (uint32_t)(int8_t)t53);
    if ((uint32_t)(int8_t)t53 == 0u) goto L_1032026e;
    eax = (uint32_t)(int8_t)t53;
    COW_AT(10320252)
    wr32(sp0 - 0x1cu, 3u);
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x103d2de0u)));
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x10312090u), eax, g->ecx, g->edx, 1, 3, rd32(COW_IMG(0x103d2de0u)), esi, 3u);
    t54 = g->edx;
    wr8(rd32(COW_IMG(0x103d2de0u)) + 3u, 0u);
    edx = t54;
    goto L_1032027f;
L_10320210: ;
    COW_AT(10320210)
    if (rd8(esi) == 0x3au)
    {
    COW_AT(10320215)
        wr32(sp0 - 0x1cu, esi + 1u);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t50 = cow_thiscall_cdecl(g, COW_IMG(0x10312827u), ecx, 1, esi + 1u);
        t51 = g->edx;
        t52 = t50 + rd32(COW_IMG(0x103d2d50u));
        wr32(COW_IMG(0x103d2d50u), t52);
        eax = t50;
        ecx = t52;
        edx = t51;
        esi = esi + 1u;
L_1032022b: ;
    COW_AT(1032022b)
        if ((int8_t)rd8(esi) < 48) goto L_10320238;
        eax = (eax & 0xffffff00u) | rd8(esi);
    COW_AT(10320231)
        if ((int8_t)eax > 57) goto L_10320238;
    COW_AT(10320235)
        esi = esi + 1u;
        goto L_1032022b;
    }
    goto L_10320238;
L_1032026e: ;
    COW_AT(1032026e)
    wr8(rd32(COW_IMG(0x103d2de0u)), 0u);
    goto L_1032027f;
L_10320278: ;
    COW_AT(10320278)
    wr32(sp0 - 0x1cu, edi);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x1031d077u), g->eax, ecx, edx, 1, 3, edi, in_edi, in_esi);
    t55 = g->edx;
    edx = t55;
    goto L_1032027f;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1031fffd(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1032003eu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = COW_IMG(0x1034a560u);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xcu;
        (void)sp0;
        return 1;
    }
    case 0x1032005au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032007fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032008bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320094u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032009du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103200afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103200bbu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->edx = 1u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103200e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x220u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x103200ecu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x220u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x103200f7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x220u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x103200ffu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0x220u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10320124u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1032012du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x1cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x1032013bu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = COW_IMG(0x1034a560u);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xcu;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10320144u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = COW_IMG(0x1034a560u);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xcu;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1032014du:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        edx = g->edx;
        esi = g->esi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ecx = COW_IMG(0x1034a560u);
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->edi = 0xcu;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1032015eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0xcu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x10320186u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201b5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201bdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        loc_c = rd32(sp0 - 0xcu);
        g->esp = sp0 - 0x18u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201dau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201deu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201e2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x103201eau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320203u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320209u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032020du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320210u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320215u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032022bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320231u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320235u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebx = 0x30u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320238u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032023eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320246u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320252u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032026eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10320278u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x1032027fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1031fffd(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1031fffd(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
