/* f_0x102e039f - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_102e039f(Guest* g)
{
    double d100;
    double d101;
    double d102;
    double d103;
    double d104;
    double d105;
    double d106;
    double d107;
    double d108;
    double d109;
    double d110;
    double d111;
    double d112;
    double d113;
    double d114;
    double d115;
    double d116;
    double d117;
    double d118;
    double d119;
    double d120;
    double d121;
    double d122;
    double d123;
    double d124;
    double d125;
    double d126;
    double d127;
    double d128;
    double d129;
    double d130;
    double d131;
    double d132;
    double d133;
    double d134;
    double d135;
    double d136;
    double d137;
    double d138;
    double d139;
    double d48;
    double d49;
    double d50;
    double d51;
    double d52;
    double d53;
    double d54;
    double d55;
    double d56;
    double d57;
    double d58;
    double d59;
    double d60;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d66;
    double d67;
    double d68;
    double d69;
    double d70;
    double d71;
    double d72;
    double d73;
    double d74;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
    double d86;
    double d87;
    double d88;
    double d89;
    double d90;
    double d91;
    double d92;
    double d93;
    double d94;
    double d95;
    double d96;
    double d97;
    double d98;
    double d99;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1ac;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_4;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_54;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t145;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t150;
    uint32_t t151;
    uint32_t t152;
    uint32_t t153;
    uint32_t t154;
    uint32_t t155;
    uint32_t t156;
    uint32_t t157;
    uint32_t t158;
    uint32_t t159;
    uint32_t t16;
    uint32_t t160;
    uint32_t t161;
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
    uint32_t t5;
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
    cow_frame(g, sp0, 460u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e03c4u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; esi = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); loc_48 = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_102e03c4;
    case 0x102e03ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x1acu); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x1acu); goto E_102e03ce;
    case 0x102e0452u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_102e0452;
    case 0x102e045bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_102e045b;
    case 0x102e0463u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_40 = rd32(sp0 - 0x40u); goto E_102e0463;
    case 0x102e0487u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102e0487;
    case 0x102e0499u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); goto E_102e0499;
    case 0x102e04a0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_102e04a0;
    case 0x102e04afu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_38 = rd32(sp0 - 0x38u); goto E_102e04af;
    case 0x102e04d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102e04d4;
    case 0x102e04e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102e04e3;
    case 0x102e04e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102e04e5;
    case 0x102e04f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_34 = rd32(sp0 - 0x34u); goto E_102e04f4;
    case 0x102e0532u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); goto E_102e0532;
    case 0x102e053bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e053b;
    case 0x102e0554u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_20 = rd32(sp0 - 0x20u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0554;
    case 0x102e055au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e055a;
    case 0x102e0566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0566;
    case 0x102e056du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e056d;
    case 0x102e0597u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0597;
    case 0x102e05b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e05b5;
    case 0x102e05bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e05bc;
    case 0x102e05e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e05e2;
    case 0x102e05f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e05f2;
    case 0x102e05feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e05fe;
    case 0x102e0a46u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0a46;
    case 0x102e0a49u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_54 = rd32(sp0 - 0x54u); loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_24 = rd32(sp0 - 0x24u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0a49;
    case 0x102e0a72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0a72;
    case 0x102e0a8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0a8b;
    case 0x102e0a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_40 = rd32(sp0 - 0x40u); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_102e0a8f;
    case 0x102e0a94u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); loc_28 = rd32(sp0 - 0x28u); loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_102e0a94;
    case 0x102e0ac3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_1ac = rd32(sp0 - 0x1acu); loc_48 = rd32(sp0 - 0x48u); loc_34 = rd32(sp0 - 0x34u); loc_14 = rd32(sp0 - 0x14u); loc_10 = rd32(sp0 - 0x10u); loc_4 = rd32(sp0 - 4u); goto E_102e0ac3;
    default: break;
    }
#endif

    COW_AT(102e039f)
    wr32(sp0 - 8u, 0xffffffffu);
    wr32(sp0 - 0xcu, COW_IMG(0x1032827fu));
    wr32(sp0 - 0x10u, rd32(g->fs_base));
    t1 = rd32(g->fs_base);
    wr32(g->fs_base, sp0 - 0x10u);
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x14u, COW_IMG(0x102e03a9u));
    wr32(sp0 - 0x48u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x1acu, in_esi);
    wr32(sp0 - 0x58u, self);
    if ((uint8_t)rd32(self + 8u) == 3u)
    {
        eax = rd32(self + 8u);
        loc_10 = t1;
    COW_AT(102e03ce)
        wr32(sp0 - 0x1b0u, in_ebx);
        wr32(sp0 - 0x1b4u, in_edi);
        t2 = ~(eax >> 0x12u) & 1u;
        wr32(sp0 - 0x24u, t2);
        t3 = ~(eax >> 0x10u) & 1u;
        wr32(sp0 - 0x1b8u, t3);
        t4 = ~(eax >> 0x11u) & 1u;
        wr32(sp0 - 0x40u, t4);
        g->ebx = rd32(rd32(self + 4u) + 0x1058u);
        g->edi = rd32(rd32(self) + 0x1058u);
        g->eax = rd32(self + 4u);
        g->edx = t4;
        t5 = rd32(self + 4u);
        g->esp = sp0 - 0x1b4u;
        t6 = cow_cdecl(g, COW_IMG(0x102dfeb9u), 1, t3);
        t7 = g->edx;
        t8 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x1bcu, t8);
        wr32(sp0 - 0x4cu, t6);
        g->ebx = rd32(rd32(self + 4u) + 0x105cu);
        g->edi = rd32(rd32(self) + 0x105cu);
        g->eax = rd32(self + 4u);
        g->edx = t7;
        t9 = rd32(self + 4u);
        g->esp = sp0 - 0x1b8u;
        t10 = cow_cdecl(g, COW_IMG(0x102dfeb9u), 1, t8);
        t11 = g->edx;
        t12 = rd32(sp0 - 0x24u);
        wr32(sp0 - 0x1c0u, t12);
        wr32(sp0 - 0x50u, t10);
        g->ebx = rd32(rd32(self + 4u) + 0x1060u);
        g->edi = rd32(rd32(self) + 0x1060u);
        g->eax = rd32(self + 4u);
        g->ecx = rd32(self);
        g->edx = t11;
        t13 = rd32(self + 4u);
        t14 = rd32(self);
        g->esp = sp0 - 0x1bcu;
        t15 = cow_cdecl(g, COW_IMG(0x102dfeb9u), 1, t12);
        t16 = g->ecx;
        t17 = g->edx;
        wr32(sp0 - 0x40u, t15);
        if (rd32(sp0 - 0x4cu) == 0u)
        {
            eax = t15;
            ecx = t16;
            edx = t17;
            loc_40 = t15;
            loc_48 = 0u;
            loc_34 = 0u;
            goto L_102e0a8f;
        }
        eax = t15;
        ecx = t16;
        edx = t17;
        loc_40 = t15;
    COW_AT(102e0452)
        if (rd32(sp0 - 0x50u) == 0u)
        {
            loc_48 = rd32(sp0 - 0x48u);
            loc_34 = rd32(sp0 - 0x34u);
            goto L_102e0a8f;
        }
    COW_AT(102e045b)
        if (eax == 0u)
        {
            loc_48 = rd32(sp0 - 0x48u);
            loc_34 = rd32(sp0 - 0x34u);
            goto L_102e0a8f;
        }
    COW_AT(102e0463)
        t18 = rd32(rd32(self + 4u) + 0x1058u);
        wr32(sp0 - 0x1b8u, t18 << 4u);
        g->eax = t18 << 4u;
        g->esp = sp0 - 0x1acu;
        t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t18 << 4u, rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u));
        t20 = g->edx;
        wr32(sp0 - 0x48u, t19);
        wr32(sp0 - 8u, 0u);
        if (t19 == 0u)
        {
            ecx = rd32(sp0 - 0x1b8u);
            edx = t20;
    COW_AT(102e0499)
            wr32(sp0 - 0x38u, 0u);
            eax = 0u;
            loc_38 = 0u;
        }
        else
        {
            eax = t19;
            ecx = rd32(sp0 - 0x1b8u);
            edx = t20;
            edi = t18;
            loc_48 = t19;
    COW_AT(102e0487)
            wr32(sp0 - 0x1b8u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0x1bcu, edi);
            wr32(sp0 - 0x1c0u, 0x10u);
            wr32(sp0 - 0x1c4u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x1b4u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
            t21 = g->ecx;
            t22 = g->edx;
            t23 = rd32(sp0 - 0x48u);
            wr32(sp0 - 0x38u, t23);
            eax = t23;
            ecx = t21;
            edx = t22;
            loc_38 = t23;
        }
    COW_AT(102e04a0)
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x48u, eax);
        if (eax == 0u)
        {
            loc_40 = rd32(sp0 - 0x40u);
            loc_48 = eax;
            loc_34 = rd32(sp0 - 0x34u);
            goto L_102e0a8f;
        }
        loc_48 = eax;
    COW_AT(102e04af)
        t24 = rd32(rd32(self) + 0x1058u) << 2u;
        wr32(sp0 - 0x1b8u, t24 << 4u);
        g->eax = t24 << 4u;
        g->esp = sp0 - 0x1acu;
        t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t24 << 4u, rd32(sp0 - 0x1b4u), rd32(sp0 - 0x1b0u));
        t26 = g->edx;
        wr32(sp0 - 0x34u, t25);
        wr32(sp0 - 8u, 1u);
        if (t25 == 0u)
        {
            ecx = rd32(sp0 - 0x1b8u);
            edx = t26;
    COW_AT(102e04e3)
            eax = 0u;
        }
        else
        {
            eax = t25;
            ecx = rd32(sp0 - 0x1b8u);
            edx = t26;
            edi = t24;
            loc_34 = t25;
    COW_AT(102e04d4)
            wr32(sp0 - 0x1b8u, COW_IMG(0x102d2a17u));
            wr32(sp0 - 0x1bcu, edi);
            wr32(sp0 - 0x1c0u, 0x10u);
            wr32(sp0 - 0x1c4u, eax);
            g->ecx = ecx;
            g->esp = sp0 - 0x1b4u;
            cow_call_regs(g, COW_IMG(0x102d31edu), g->eax, g->ecx, edx, 0, 4, eax, 0x10u, edi, COW_IMG(0x102d2a17u));
            t27 = g->ecx;
            t28 = g->edx;
            eax = rd32(sp0 - 0x34u);
            ecx = t27;
            edx = t28;
        }
    COW_AT(102e04e5)
        wr32(sp0 - 8u, 0xffffffffu);
        wr32(sp0 - 0x34u, eax);
        if (eax == 0u)
        {
            loc_40 = rd32(sp0 - 0x40u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_34 = eax;
            goto L_102e0a8f;
        }
        loc_34 = eax;
    COW_AT(102e04f4)
        wr32(sp0 - 0x3cu, 0u);
        t29 = rd32(rd32(self) + 0x1058u);
        t30 = eax + t29 * 0x10u;
        wr32(sp0 - 0x20u, t30);
        wr32(sp0 - 0x2cu, eax);
        t31 = eax + t29 * 0x20u;
        wr32(sp0 - 0x44u, t31);
        t32 = eax + t29 * 0x30u;
        wr32(sp0 - 0x30u, t32);
        if (rd32(rd32(self + 4u) + 0x1060u) == 0u)
        {
            eax = rd32(self + 4u);
            ecx = t31;
        }
        else
        {
            edi = t32;
            loc_20 = t30;
            loc_2c = eax;
            eax = rd32(self + 4u);
            loc_44 = t31;
            loc_30 = t32;
    COW_AT(102e0532)
            t33 = rd32(sp0 - 0x40u) + 8u;
            wr32(sp0 - 0x14u, t33);
            esi = self;
            loc_3c = 0u;
            loc_14 = t33;
            loc_28 = rd32(sp0 - 0x28u);
            loc_1c = rd32(sp0 - 0x1cu);
            loc_18 = rd32(sp0 - 0x18u);
L_102e053b: ;
    COW_AT(102e053b)
            wr32(sp0 - 0x28u, 0u);
            wr32(sp0 - 0x1cu, 0xffffffffu);
            wr32(sp0 - 0x18u, 0xffffffffu);
            if (rd32(eax + 0x105cu) == 0u)
            {
                loc_28 = 0u;
                loc_1c = 0xffffffffu;
                loc_18 = 0xffffffffu;
            }
            else
            {
    COW_AT(102e0554)
                ebx = rd32(sp0 - 0x50u) + 8u;
                loc_28 = 0u;
                loc_1c = 0xffffffffu;
                loc_18 = 0xffffffffu;
L_102e055a: ;
    COW_AT(102e055a)
                wr32(sp0 - 0x24u, 0u);
                if (rd32(ebx - 8u) != loc_1c)
                {
                    eax = rd32(ebx - 8u);
    COW_AT(102e0566)
                    if (eax == loc_18)
                    {
                        ecx = loc_18;
    COW_AT(102e0597)
                        wr32(sp0 - 0x18u, 0xffffffffu);
                        wr32(sp0 - 0x1cu, ecx);
                        wr32(sp0 - 0x20u, loc_2c);
                        wr32(sp0 - 0x44u, edi);
                        wr32(sp0 - 0x2cu, loc_20);
                        wr32(sp0 - 0x30u, loc_44);
                        loc_30 = loc_44;
                        loc_1c = ecx;
                        loc_18 = 0xffffffffu;
                        t40 = edi;
                        edi = loc_44;
                        loc_44 = t40;
                        t41 = loc_20;
                        loc_20 = loc_2c;
                        loc_2c = t41;
                    }
                    else
                    {
    COW_AT(102e056d)
                        wr32(sp0 - 0x1b8u, loc_2c);
                        t34 = rd32(loc_14 - 8u);
                        wr32(sp0 - 0x1bcu, t34);
                        wr32(sp0 - 0x1cu, eax);
                        wr32(sp0 - 0x1c0u, eax);
                        g->esp = sp0 - 0x1b4u;
                        cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, t34, loc_2c);
                        t35 = rd32(sp0 - 0x44u);
                        wr32(sp0 - 0x1b8u, t35);
                        t36 = rd32(rd32(sp0 - 0x14u));
                        wr32(sp0 - 0x1bcu, t36);
                        t37 = rd32(sp0 - 0x1cu);
                        wr32(sp0 - 0x1c0u, t37);
                        g->edx = rd32(sp0 - 0x14u);
                        t38 = rd32(sp0 - 0x14u);
                        cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, t37, t36, t35);
                        t39 = g->edx;
                        edx = t39;
                        loc_34 = rd32(sp0 - 0x34u);
                        loc_3c = rd32(sp0 - 0x3cu);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_2c = rd32(sp0 - 0x2cu);
                        loc_44 = rd32(sp0 - 0x44u);
                        loc_30 = rd32(sp0 - 0x30u);
                        loc_14 = rd32(sp0 - 0x14u);
                        loc_28 = rd32(sp0 - 0x28u);
                        loc_1c = rd32(sp0 - 0x1cu);
                        loc_18 = rd32(sp0 - 0x18u);
                    }
                }
    COW_AT(102e05b5)
                if (rd32(ebx) != loc_18)
                {
                    eax = rd32(ebx);
    COW_AT(102e05bc)
                    wr32(sp0 - 0x1b8u, loc_20);
                    t42 = rd32(loc_14 - 8u);
                    wr32(sp0 - 0x1bcu, t42);
                    wr32(sp0 - 0x18u, eax);
                    wr32(sp0 - 0x1c0u, eax);
                    g->esp = sp0 - 0x1b4u;
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, eax, t42, loc_20);
                    wr32(sp0 - 0x1b8u, edi);
                    t43 = rd32(rd32(sp0 - 0x14u));
                    wr32(sp0 - 0x1bcu, t43);
                    t44 = rd32(sp0 - 0x18u);
                    wr32(sp0 - 0x1c0u, t44);
                    g->edx = rd32(sp0 - 0x14u);
                    t45 = rd32(sp0 - 0x14u);
                    cow_thiscall(g, rd32(rd32(rd32(esi)) + 4u), rd32(esi), 3, t44, t43, edi);
                    t46 = g->edx;
                    edx = t46;
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_28 = rd32(sp0 - 0x28u);
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_18 = rd32(sp0 - 0x18u);
                }
    COW_AT(102e05e2)
                if (rd32(rd32(esi + 4u) + 0x1058u) == 0u)
                {
                    loc_24 = 0u;
                }
                else
                {
    COW_AT(102e05f2)
                    t47 = rd32(sp0 - 0x38u);
                    wr32(sp0 - 0x54u, t47);
                    eax = rd32(sp0 - 0x4cu) + 8u;
                    loc_24 = 0u;
                    loc_54 = t47;
L_102e05fe: ;
    COW_AT(102e05fe)
                    d48 = (double)rdf32(eax + 4u);
                    d49 = fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u));
                    wrf32(sp0 - 0x118u, (float)(double)(float)d49);
                    d50 = fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x114u, (float)(double)(float)d50);
                    d51 = fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x110u, (float)(double)(float)d51);
                    d52 = (double)rdf32(eax - 4u);
                    d53 = fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 4u));
                    d54 = fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u));
                    d55 = fr(g, d48 * (double)rdf32(edi + rd32(eax) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x64u, (float)(double)(float)d53);
                    d56 = fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0x60u, (float)(double)(float)d56);
                    d57 = fr(g, d52 * (double)rdf32(edi + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x5cu, (float)(double)(float)d57);
                    d58 = (double)(float)fr(g, d54 + (double)(float)d49);
                    wrf32(sp0 - 0x98u, (float)d58);
                    d59 = (double)(float)fr(g, (double)(float)d53 + (double)(float)d50);
                    wrf32(sp0 - 0x94u, (float)d59);
                    d60 = (double)(float)fr(g, (double)(float)d56 + (double)(float)d51);
                    wrf32(sp0 - 0x90u, (float)d60);
                    d61 = fr(g, d58 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x178u, (float)(double)(float)d61);
                    d62 = fr(g, d59 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x174u, (float)(double)(float)d62);
                    d63 = fr(g, d60 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x170u, (float)(double)(float)d63);
                    d64 = fr(g, (double)(float)d57 + d55);
                    d65 = (double)rdf32(eax + 4u);
                    d66 = fr(g, d65 * (double)rdf32(loc_44 + rd32(eax) * 0x10u));
                    d67 = fr(g, d64 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x198u, (float)(double)(float)d66);
                    d68 = fr(g, d65 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x194u, (float)(double)(float)d68);
                    d69 = fr(g, d65 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x190u, (float)(double)(float)d69);
                    d70 = (double)rdf32(eax - 4u);
                    d71 = fr(g, d70 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 4u));
                    d72 = fr(g, d70 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u));
                    d73 = fr(g, d65 * (double)rdf32(loc_44 + rd32(eax) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xb4u, (float)(double)(float)d71);
                    d74 = fr(g, d70 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0xb0u, (float)(double)(float)d74);
                    d75 = fr(g, d70 * (double)rdf32(loc_44 + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xacu, (float)(double)(float)d75);
                    d76 = (double)(float)fr(g, d72 + (double)(float)d66);
                    wrf32(sp0 - 0x138u, (float)d76);
                    d77 = (double)(float)fr(g, (double)(float)d71 + (double)(float)d68);
                    wrf32(sp0 - 0x134u, (float)d77);
                    d78 = (double)(float)fr(g, (double)(float)d74 + (double)(float)d69);
                    wrf32(sp0 - 0x130u, (float)d78);
                    d79 = fr(g, d76 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd8u, (float)(double)(float)d79);
                    d80 = fr(g, d77 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd4u, (float)(double)(float)d80);
                    d81 = fr(g, d78 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0xd0u, (float)(double)(float)d81);
                    d82 = fr(g, (double)(float)d75 + d73);
                    d83 = fr(g, d82 * (double)rdf32(ebx - 4u));
                    d84 = (double)(float)fr(g, (double)(float)d79 + (double)(float)d61);
                    wrf32(sp0 - 0xf8u, (float)d84);
                    d85 = (double)(float)fr(g, (double)(float)d80 + (double)(float)d62);
                    wrf32(sp0 - 0xf4u, (float)d85);
                    d86 = (double)(float)fr(g, (double)(float)d81 + (double)(float)d63);
                    wrf32(sp0 - 0xf0u, (float)d86);
                    d87 = fr(g, d84 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x188u, (float)(double)(float)d87);
                    d88 = fr(g, d85 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x184u, (float)(double)(float)d88);
                    d89 = fr(g, d86 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x180u, (float)(double)(float)d89);
                    d90 = fr(g, d83 + d67);
                    d91 = (double)rdf32(eax + 4u);
                    d92 = fr(g, d91 * (double)rdf32(loc_20 + rd32(eax) * 0x10u));
                    d93 = fr(g, d90 * (double)rdf32(loc_14 + 4u));
                    wrf32(sp0 - 0x158u, (float)(double)(float)d92);
                    d94 = fr(g, d91 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0x154u, (float)(double)(float)d94);
                    d95 = fr(g, d91 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0x150u, (float)(double)(float)d95);
                    d96 = (double)rdf32(eax - 4u);
                    d97 = fr(g, d96 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 4u));
                    d98 = fr(g, d96 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u));
                    d99 = fr(g, d91 * (double)rdf32(loc_20 + rd32(eax) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x74u, (float)(double)(float)d97);
                    d100 = fr(g, d96 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0x70u, (float)(double)(float)d100);
                    d101 = fr(g, d96 * (double)rdf32(loc_20 + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0x6cu, (float)(double)(float)d101);
                    d102 = (double)(float)fr(g, d98 + (double)(float)d92);
                    wrf32(sp0 - 0x88u, (float)d102);
                    d103 = (double)(float)fr(g, (double)(float)d97 + (double)(float)d94);
                    wrf32(sp0 - 0x84u, (float)d103);
                    d104 = (double)(float)fr(g, (double)(float)d100 + (double)(float)d95);
                    wrf32(sp0 - 0x80u, (float)d104);
                    d105 = fr(g, d102 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x128u, (float)(double)(float)d105);
                    d106 = fr(g, d103 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x124u, (float)(double)(float)d106);
                    d107 = fr(g, d104 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0x120u, (float)(double)(float)d107);
                    d108 = fr(g, (double)(float)d101 + d99);
                    d109 = (double)rdf32(eax + 4u);
                    d110 = fr(g, d109 * (double)rdf32(loc_2c + rd32(eax) * 0x10u));
                    d111 = fr(g, d108 * (double)rdf32(ebx + 4u));
                    wrf32(sp0 - 0xa8u, (float)(double)(float)d110);
                    d112 = fr(g, d109 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 4u));
                    wrf32(sp0 - 0xa4u, (float)(double)(float)d112);
                    d113 = fr(g, d109 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 8u));
                    wrf32(sp0 - 0xa0u, (float)(double)(float)d113);
                    d114 = (double)rdf32(eax - 4u);
                    d115 = fr(g, d114 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 4u));
                    d116 = fr(g, d114 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u));
                    d117 = fr(g, d109 * (double)rdf32(loc_2c + rd32(eax) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xc4u, (float)(double)(float)d115);
                    d118 = fr(g, d114 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 8u));
                    wrf32(sp0 - 0xc0u, (float)(double)(float)d118);
                    d119 = fr(g, d114 * (double)rdf32(loc_2c + rd32(eax - 8u) * 0x10u + 0xcu));
                    wrf32(sp0 - 0xbcu, (float)(double)(float)d119);
                    d120 = (double)(float)fr(g, d116 + (double)(float)d110);
                    wrf32(sp0 - 0xe8u, (float)d120);
                    d121 = (double)(float)fr(g, (double)(float)d115 + (double)(float)d112);
                    wrf32(sp0 - 0xe4u, (float)d121);
                    d122 = (double)(float)fr(g, (double)(float)d118 + (double)(float)d113);
                    wrf32(sp0 - 0xe0u, (float)d122);
                    d123 = fr(g, d120 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x108u, (float)(double)(float)d123);
                    d124 = fr(g, d121 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x104u, (float)(double)(float)d124);
                    d125 = fr(g, d122 * (double)rdf32(ebx - 4u));
                    wrf32(sp0 - 0x100u, (float)(double)(float)d125);
                    d126 = fr(g, (double)(float)d119 + d117);
                    d127 = fr(g, d126 * (double)rdf32(ebx - 4u));
                    d128 = (double)(float)fr(g, (double)(float)d123 + (double)(float)d105);
                    wrf32(sp0 - 0x148u, (float)d128);
                    d129 = (double)(float)fr(g, (double)(float)d124 + (double)(float)d106);
                    wrf32(sp0 - 0x144u, (float)d129);
                    d130 = (double)(float)fr(g, (double)(float)d125 + (double)(float)d107);
                    wrf32(sp0 - 0x140u, (float)d130);
                    d131 = fr(g, d128 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x168u, (float)(double)(float)d131);
                    d132 = fr(g, d129 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x164u, (float)(double)(float)d132);
                    d133 = fr(g, d130 * (double)rdf32(loc_14 - 4u));
                    wrf32(sp0 - 0x160u, (float)(double)(float)d133);
                    d134 = fr(g, d127 + d111);
                    d135 = fr(g, d134 * (double)rdf32(loc_14 - 4u));
                    wr32(sp0 - 0x54u, loc_54 + 0x10u);
                    d136 = (double)(float)fr(g, (double)(float)d131 + (double)(float)d87);
                    wrf32(sp0 - 0x1a8u, (float)d136);
                    wr32(sp0 - 0x24u, loc_24 + 1u);
                    d137 = (double)(float)fr(g, (double)(float)d132 + (double)(float)d88);
                    wrf32(sp0 - 0x1a4u, (float)d137);
                    d138 = (double)(float)fr(g, (double)(float)d133 + (double)(float)d89);
                    wrf32(sp0 - 0x1a0u, (float)d138);
                    d139 = (double)(float)fr(g, d135 + d93);
                    wrf32(sp0 - 0x19cu, (float)d139);
                    t140 = rd32(sp0 - 0x58u);
                    esi = sp0 - 0x1a8u;
                    edi = loc_54;
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u);
                    if (loc_24 + 1u < rd32(rd32(t140 + 4u) + 0x1058u))
                    {
                        eax = eax + 0x10u;
                        edi = loc_30;
                        loc_24 = loc_24 + 1u;
                        loc_54 = loc_54 + 0x10u;
                        goto L_102e05fe;
                    }
                    edx = loc_24 + 1u;
                    edi = loc_30;
                    loc_24 = loc_24 + 1u;
    COW_AT(102e0a46)
                    esi = rd32(sp0 - 0x58u);
                }
    COW_AT(102e0a49)
                t141 = rd32(sp0 - 0x38u);
                wr32(sp0 - 0x1b8u, t141);
                wr32(sp0 - 0x1bcu, loc_3c);
                wr32(sp0 - 0x1c0u, loc_28);
                g->edx = edx;
                g->esp = sp0 - 0x1b4u;
                cow_thiscall(g, rd32(rd32(rd32(esi + 4u)) + 8u), rd32(esi + 4u), 3, loc_28, loc_3c, t141);
                t142 = g->edx;
                t143 = rd32(sp0 - 0x28u) + 1u;
                wr32(sp0 - 0x28u, t143);
                if (t143 < rd32(rd32(esi + 4u) + 0x105cu))
                {
                    edx = t142;
                    ebx = ebx + 0x10u;
                    loc_34 = rd32(sp0 - 0x34u);
                    loc_3c = rd32(sp0 - 0x3cu);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_2c = rd32(sp0 - 0x2cu);
                    loc_44 = rd32(sp0 - 0x44u);
                    loc_30 = rd32(sp0 - 0x30u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_28 = t143;
                    loc_1c = rd32(sp0 - 0x1cu);
                    loc_18 = rd32(sp0 - 0x18u);
                    goto L_102e055a;
                }
                edx = t142;
                loc_34 = rd32(sp0 - 0x34u);
                loc_3c = rd32(sp0 - 0x3cu);
                loc_20 = rd32(sp0 - 0x20u);
                loc_2c = rd32(sp0 - 0x2cu);
                loc_44 = rd32(sp0 - 0x44u);
                loc_30 = rd32(sp0 - 0x30u);
                loc_14 = rd32(sp0 - 0x14u);
                loc_28 = t143;
                loc_1c = rd32(sp0 - 0x1cu);
                loc_18 = rd32(sp0 - 0x18u);
            }
    COW_AT(102e0a72)
            wr32(sp0 - 0x14u, loc_14 + 0x10u);
            wr32(sp0 - 0x3cu, loc_3c + 1u);
            if (loc_3c + 1u < rd32(rd32(esi + 4u) + 0x1060u))
            {
                eax = rd32(esi + 4u);
                loc_3c = loc_3c + 1u;
                loc_14 = loc_14 + 0x10u;
                goto L_102e053b;
            }
            eax = rd32(esi + 4u);
            ecx = loc_3c + 1u;
        }
    COW_AT(102e0a8b)
        esi = 0u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_48 = rd32(sp0 - 0x48u);
L_102e0a94: ;
    COW_AT(102e0a94)
        t144 = rd32(sp0 - 0x4cu);
        wr32(sp0 - 0x1b8u, t144);
        g->eax = eax;
        g->esp = sp0 - 0x1b4u;
        t145 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, t144);
        t146 = g->ecx;
        t147 = g->edx;
        t148 = rd32(sp0 - 0x50u);
        wr32(sp0 - 0x1bcu, t148);
        g->esp = sp0 - 0x1b8u;
        t149 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t146, t147, 1, 1, t148);
        t150 = g->ecx;
        t151 = g->edx;
        t152 = rd32(sp0 - 0x40u);
        wr32(sp0 - 0x1c0u, t152);
        g->esp = sp0 - 0x1bcu;
        t153 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t150, t151, 1, 1, t152);
        t154 = g->ecx;
        t155 = g->edx;
        t156 = rd32(sp0 - 0x48u);
        wr32(sp0 - 0x1c4u, t156);
        g->esp = sp0 - 0x1c0u;
        t157 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t154, t155, 1, 1, t156);
        t158 = g->ecx;
        t159 = g->edx;
        t160 = rd32(sp0 - 0x34u);
        wr32(sp0 - 0x1c8u, t160);
        g->esp = sp0 - 0x1c4u;
        cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t158, t159, 1, 1, t160);
        t161 = g->edx;
        eax = esi;
        edx = t161;
        ebx = rd32(sp0 - 0x1b0u);
        edi = rd32(sp0 - 0x1b4u);
        loc_4 = rd32(sp0 - 4u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_1ac = rd32(sp0 - 0x1acu);
    }
    else
    {
        loc_10 = t1;
    COW_AT(102e03c4)
        eax = 0x80004005u;
        edx = in_edx;
        ebx = in_ebx;
        edi = in_edi;
        loc_4 = in_ebp;
        loc_1ac = in_esi;
    }
    COW_AT(102e0ac3)
    wr32(g->fs_base, loc_10);
    g->ebx = ebx;
    g->esi = loc_1ac;
    g->edi = edi;
    g->ebp = loc_4;
    g->edx = edx;
    return eax;
L_102e0a8f: ;
    COW_AT(102e0a8f)
    esi = 0x8007000eu;
    goto L_102e0a94;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e039f(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e03c4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_34;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        esi = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e03ceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_10;
        uint32_t loc_14;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x1acu);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x58u, self);
        wr32(sp0 - 0x48u, 0u);
        wr32(sp0 - 0x34u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0452u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e045bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0463u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_40;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_40 = rd32(sp0 - 0x40u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0487u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0499u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e04a0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e04afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_38;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e04d4u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1b4u;
        g->ebx = COW_IMG(0x102d2a17u);
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e04e3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e04e5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 8u, 1u);
        (void)sp0;
        return 1;
    }
    case 0x102e04f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_34;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0532u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x3cu, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e053bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0554u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_20;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x28u, 0u);
        wr32(sp0 - 0x1cu, 0xffffffffu);
        wr32(sp0 - 0x18u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x102e055au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0566u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e056du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e0597u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e05b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e05bcu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e05e2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e05f2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x24u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102e05feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a46u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a49u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_24;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        uint32_t loc_54;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_54 = rd32(sp0 - 0x54u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_24 = rd32(sp0 - 0x24u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a72u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_40;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0a94u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        uint32_t loc_28;
        uint32_t loc_2c;
        uint32_t loc_30;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_28 = rd32(sp0 - 0x28u);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1b4u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e0ac3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_14;
        uint32_t loc_1ac;
        uint32_t loc_34;
        uint32_t loc_4;
        uint32_t loc_48;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_1ac = rd32(sp0 - 0x1acu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_34 = rd32(sp0 - 0x34u);
        loc_14 = rd32(sp0 - 0x14u);
        loc_10 = rd32(sp0 - 0x10u);
        loc_4 = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1acu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e039f(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e039f(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
