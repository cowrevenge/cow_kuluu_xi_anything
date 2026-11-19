/* f_0x100c9c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100c9c10(Guest* g)
{
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
    double d12;
    double d120;
    double d131;
    double d145;
    double d16;
    double d20;
    double d29;
    double d30;
    double d44;
    double d56;
    double d57;
    double d58;
    double d61;
    double d62;
    double d63;
    double d64;
    double d65;
    double d75;
    double d76;
    double d77;
    double d78;
    double d79;
    double d8;
    double d80;
    double d81;
    double d82;
    double d83;
    double d84;
    double d85;
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
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    double loc_1c_f;
    uint32_t loc_20;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_4c;
    double loc_50_f;
    uint32_t loc_58;
    uint32_t loc_5c;
    uint32_t loc_60;
    uint32_t loc_64;
    int64_t q47;
    uint32_t t1;
    uint32_t t10;
    uint32_t t100;
    uint32_t t101;
    uint32_t t102;
    uint32_t t103;
    uint32_t t104;
    uint32_t t105;
    uint32_t t106;
    uint32_t t107;
    uint32_t t108;
    uint32_t t109;
    uint32_t t11;
    uint32_t t121;
    uint32_t t122;
    uint32_t t123;
    uint32_t t124;
    uint32_t t125;
    uint32_t t126;
    uint32_t t127;
    uint32_t t128;
    uint32_t t129;
    uint32_t t13;
    uint32_t t130;
    uint32_t t132;
    uint32_t t133;
    uint32_t t134;
    uint32_t t135;
    uint32_t t136;
    uint32_t t137;
    uint32_t t138;
    uint32_t t139;
    uint32_t t14;
    uint32_t t140;
    uint32_t t141;
    uint32_t t142;
    uint32_t t143;
    uint32_t t144;
    uint32_t t146;
    uint32_t t147;
    uint32_t t148;
    uint32_t t149;
    uint32_t t15;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t3;
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
    uint32_t t45;
    uint32_t t46;
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t70;
    uint32_t t71;
    uint32_t t72;
    uint32_t t73;
    uint32_t t74;
    uint32_t t86;
    uint32_t t9;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 156u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c9c25u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100c9c25;
    case 0x100c9c2bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100c9c2b;
    case 0x100c9c40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100c9c40;
    case 0x100c9c49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100c9c49;
    case 0x100c9c55u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x60u); in_esi = rd32(sp0 - 0x5cu); in_ebp = rd32(sp0 - 0x58u); g->ebp = rd32(sp0 - 0x58u); g->edi = rd32(sp0 - 0x60u); g->esi = rd32(sp0 - 0x5cu); goto E_100c9c55;
    case 0x100c9c6fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_50_f = rdf32(sp0 - 0x50u); goto E_100c9c6f;
    case 0x100c9da5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); x0 = ST(0); goto E_100c9da5;
    case 0x100c9da7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); x0 = ST(0); goto E_100c9da7;
    case 0x100c9db2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100c9db2;
    case 0x100c9dbau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100c9dba;
    case 0x100c9e23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e23;
    case 0x100c9e2du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e2d;
    case 0x100c9e4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e4a;
    case 0x100c9e58u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e58;
    case 0x100c9e69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e69;
    case 0x100c9e77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_1c_f = rdf32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100c9e77;
    case 0x100c9f2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f2f;
    case 0x100c9f39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f39;
    case 0x100c9f48u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f48;
    case 0x100c9f52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f52;
    case 0x100c9f64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f64;
    case 0x100c9f70u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f70;
    case 0x100c9f80u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f80;
    case 0x100c9f8cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f8c;
    case 0x100c9f9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9f9e;
    case 0x100c9faau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9faa;
    case 0x100c9fbau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9fba;
    case 0x100c9fc6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9fc6;
    case 0x100c9fe5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9fe5;
    case 0x100c9fefu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9fef;
    case 0x100c9ffeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100c9ffe;
    case 0x100ca008u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca008;
    case 0x100ca01au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca01a;
    case 0x100ca026u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca026;
    case 0x100ca036u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca036;
    case 0x100ca042u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca042;
    case 0x100ca054u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca054;
    case 0x100ca060u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca060;
    case 0x100ca070u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca070;
    case 0x100ca07cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca07c;
    case 0x100ca0deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca0de;
    case 0x100ca103u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca103;
    case 0x100ca10du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca10d;
    case 0x100ca11cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca11c;
    case 0x100ca126u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca126;
    case 0x100ca13bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca13b;
    case 0x100ca14du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca14d;
    case 0x100ca160u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca160;
    case 0x100ca172u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca172;
    case 0x100ca187u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca187;
    case 0x100ca199u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca199;
    case 0x100ca1acu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca1ac;
    case 0x100ca1beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_60 = rd32(sp0 - 0x60u); goto E_100ca1be;
    case 0x100ca215u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100ca215;
    case 0x100ca22fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_44 = rd32(sp0 - 0x44u); goto E_100ca22f;
    case 0x100ca27bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca27b;
    case 0x100ca285u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca285;
    case 0x100ca294u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca294;
    case 0x100ca299u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca299;
    case 0x100ca2a3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2a3;
    case 0x100ca2b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2b2;
    case 0x100ca2b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2b4;
    case 0x100ca2b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2b7;
    case 0x100ca2bau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2ba;
    case 0x100ca2ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; goto E_100ca2ce;
    case 0x100ca2e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->ebp; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100ca2e0;
    case 0x100ca305u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100ca305;
    case 0x100ca306u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; loc_64 = rd32(sp0 - 0x64u); loc_60 = rd32(sp0 - 0x60u); loc_5c = rd32(sp0 - 0x5cu); loc_58 = rd32(sp0 - 0x58u); loc_50_f = rdf32(sp0 - 0x50u); loc_4c = rd32(sp0 - 0x4cu); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_20 = rd32(sp0 - 0x20u); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100ca306;
    default: break;
    }
#endif

    COW_AT(100c9c10)
    wr32(sp0 - 0x58u, in_ebp);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    wr8(sp0 - 0x51u, 0u);
    eax = in_eax;
    edx = in_edx;
    esi = self + 0x770u;
    edi = 0u;
L_100c9c25: ;
    COW_AT(100c9c25)
    if (rd32(esi) == 0u)
    {
        ecx = rd32(esi);
        goto L_100c9c40;
    }
    ecx = rd32(esi);
    COW_AT(100c9c2b)
    t1 = rd32(ecx);
    wr8(sp0 - 0x51u, 1u);
    g->eax = t1;
    g->edx = edx;
    g->esp = sp0 - 0x60u;
    t2 = cow_thiscall(g, rd32(t1 + 0x1e4u), ecx, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        ebx = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
        goto L_100ca306;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
L_100c9c40: ;
    COW_AT(100c9c40)
    if ((int32_t)(edi + 1u) < 8)
    {
        esi = esi + 4u;
        edi = edi + 1u;
        goto L_100c9c25;
    }
    COW_AT(100c9c49)
    if (rd8(sp0 - 0x51u) == 0u)
    {
        ebx = in_ebx;
        loc_58 = in_ebp;
        loc_5c = in_esi;
        loc_60 = in_edi;
    }
    else
    {
        eax = (eax & 0xffffff00u) | rd8(sp0 - 0x51u);
    COW_AT(100c9c55)
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t5 = cow_stdcall(g, COW_IMG(0x100877b0u), 0);
        t6 = g->ecx;
        t7 = g->edx;
        d8 = cow_take_float(g);
        wrf32(sp0 - 0x50u, (float)(double)(float)d8);
        if (d8 <= (double)rdf32(COW_IMG(0x103295d8u)))
        {
            ebx = in_ebx;
            loc_58 = in_ebp;
            loc_5c = in_esi;
            loc_60 = in_edi;
        }
        else
        {
            eax = (t5 & 0xffff0000u) | (uint16_t)cow_fsw(g, d8, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            ecx = t6;
            edx = t7;
            loc_50_f = (double)(float)d8;
    COW_AT(100c9c6f)
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x60u;
            t9 = cow_stdcall(g, COW_IMG(0x100877f0u), 0);
            t10 = g->ecx;
            t11 = g->edx;
            d12 = cow_take_float(g);
            wrf32(sp0 - 0x4cu, (float)(double)(float)d12);
            g->ecx = t10;
            g->edx = t11;
            t13 = cow_stdcall(g, COW_IMG(0x10087770u), 0);
            t14 = g->ecx;
            t15 = g->edx;
            d16 = cow_take_float(g);
            wrf32(sp0 - 0x2cu, (float)(double)(float)d16);
            wr32(sp0 - 0x28u, 0u);
            g->ecx = t14;
            g->edx = t15;
            t17 = cow_stdcall(g, COW_IMG(0x10087790u), 0);
            t18 = g->ecx;
            t19 = g->edx;
            d20 = cow_take_float(g);
            wrf32(sp0 - 0x24u, (float)(double)(float)d20);
            t21 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            wr32(sp0 - 0x64u, t21 + 0x44u);
            g->eax = t21 + 0x44u;
            g->edx = rd32(self);
            t22 = rd32(self);
            g->esp = sp0 - 0x64u;
            t23 = cow_thiscall(g, rd32(t22 + 0x1bcu), self, 0);
            t24 = g->ecx;
            t25 = g->edx;
            wr32(sp0 - 0x68u, t23);
            wr32(sp0 - 0x6cu, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            g->esp = sp0 - 0x60u;
            t26 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, t23, rd32(sp0 - 0x64u));
            wr32(sp0 - 0x70u, sp0 - 0x38u);
            wr32(sp0 - 0x74u, sp0 - 0x38u);
            wr32(sp0 - 0x34u, 0u);
            g->ecx = sp0 - 0x38u;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x6cu;
            cow_cdecl(g, COW_IMG(0x10027620u), 2, sp0 - 0x38u, sp0 - 0x38u);
            t27 = g->ecx;
            t28 = g->edx;
            d29 = cow_take_float(g);
            d30 = fr(g, d29 + (double)rdf32(sp0 - 0x4cu));
            wr32(sp0 - 0x78u, sp0 - 0x38u);
            wrf32(sp0 - 0x3cu, (float)(double)(float)d30);
            g->esp = sp0 - 0x74u;
            t31 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0x38u, g->ecx, g->edx, 1, 1, sp0 - 0x38u);
            t32 = rd32(sp0 - 0x3cu);
            wr32(sp0 - 0x7cu, t32);
            wr32(sp0 - 0x80u, sp0 - 0x38u);
            g->ecx = t32;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x78u;
            t33 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x38u, t32);
            t34 = g->ecx;
            t35 = g->edx;
            g->ecx = t34;
            g->edx = t35;
            g->esp = sp0 - 0x80u;
            t36 = cow_stdcall(g, COW_IMG(0x10015250u), 0);
            t37 = g->ecx;
            t38 = g->edx;
            wr32(sp0 - 0x84u, t36 + 0x44u);
            wr32(sp0 - 0x88u, sp0 - 0x38u);
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x38u, t36 + 0x44u);
            wr32(sp0 - 0x8cu, sp0 - 0x2cu);
            wr32(sp0 - 0x90u, sp0 - 0x38u);
            wr32(sp0 - 0x94u, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            g->edx = sp0 - 0x38u;
            g->esp = sp0 - 0x88u;
            t39 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, sp0 - 0x38u, sp0 - 0x2cu);
            t40 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x98u, sp0 - 0x38u);
            g->ecx = sp0 - 0x38u;
            g->edx = t40;
            g->esp = sp0 - 0x94u;
            t41 = cow_call_regs(g, COW_IMG(0x100274b0u), t39, g->ecx, g->edx, 1, 1, sp0 - 0x38u);
            t42 = g->ecx;
            t43 = g->edx;
            g->edx = t43;
            d44 = fr(g, fr(g, atan2((double)rdf32(sp0 - 0x38u), (double)rdf32(sp0 - 0x30u))) * (double)rdf32(COW_IMG(0x10331378u)));
            fpush(g, d44);
            g->esp = sp0 - 0x60u;
            t45 = cow_call_regs(g, COW_IMG(0x10311c6cu), t41, g->ecx, g->edx, 1, 0);
            t46 = g->edx;
            q47 = (int64_t)cow_muls(0x88888889u, t45);
            t48 = (uint32_t)((int32_t)(t45 + cow_qhi(q47)) >> 3u);
            wr32(sp0 - 0x64u, sp0 - 0x2cu);
            wr32(sp0 - 0x44u, 0u);
            g->eax = -(t48 * 3u) - (t48 >> 0x1fu) * 3u - 0xcu;
            g->edx = rd32(self);
            t49 = rd32(self);
            g->esp = sp0 - 0x64u;
            t50 = cow_thiscall(g, rd32(t49 + 0x1bcu), self, 0);
            t51 = g->ecx;
            t52 = g->edx;
            wr32(sp0 - 0x68u, t50);
            wr32(sp0 - 0x6cu, sp0 - 0x38u);
            g->eax = sp0 - 0x38u;
            g->edx = t52;
            g->esp = sp0 - 0x60u;
            t53 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x38u, t50, sp0 - 0x2cu);
            t54 = g->edx;
            wr32(sp0 - 0x34u, 0u);
            wr32(sp0 - 0x70u, sp0 - 0x38u);
            g->esp = sp0 - 0x6cu;
            t55 = cow_cdecl(g, COW_IMG(0x10027600u), 1, sp0 - 0x38u);
            d56 = cow_take_float(g);
            d57 = fr(g, (double)rdf32(sp0 - 0x50u) - d56);
            if (!(d57 < (double)rdf32(COW_IMG(0x103295d8u))))
            {
                eax = (t55 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                esi = -(t48 * 0xfu) - (t48 >> 0x1fu) * 0xfu - 0x3cu;
                x0 = d57;
            }
            else
            {
                eax = (t55 & 0xffff0000u) | (uint16_t)cow_fsw(g, d57, (double)rdf32(COW_IMG(0x103295d8u)), 1u);
                esi = -(t48 * 0xfu) - (t48 >> 0x1fu) * 0xfu - 0x3cu;
                x0 = d57;
    COW_AT(100c9da5)
                x0 = -x0;
            }
    COW_AT(100c9da7)
            d58 = (double)rdf32(sp0 - 0x4cu);
            if (!(x0 < d58))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, d58, 0u);
    COW_AT(100c9db2)
                wr32(sp0 - 0x44u, 1u);
            }
    COW_AT(100c9dba)
            wr32(sp0 - 0x10u, 0u);
            wr32(sp0 - 0xcu, 0u);
            wr32(sp0 - 8u, 0u);
            wr32(sp0 - 4u, 0x3f800000u);
            wr32(sp0 - 0x20u, 0u);
            wr32(sp0 - 0x1cu, 0u);
            wr32(sp0 - 0x18u, 0u);
            wr32(sp0 - 0x14u, 0x3f800000u);
            g->eax = eax;
            g->esp = sp0 - 0x60u;
            t59 = cow_thiscall(g, rd32(rd32(self) + 0x1bcu), self, 0);
            wr32(sp0 - 0x4cu, esi);
            t60 = rd32(t59 + 4u);
            wr32(sp0 - 0xcu, t60);
            wr32(sp0 - 0x40u, self + 0x770u);
            wr32(sp0 - 0x3cu, 8u);
            wr32(sp0 - 0x64u, in_ebx);
            eax = self + 0x770u;
            loc_64 = in_ebx;
            loc_20 = 0u;
            loc_18 = 0u;
            loc_14 = 0x3f800000u;
            loc_4c = esi;
            loc_40 = self + 0x770u;
            loc_3c = 8u;
L_100c9e23: ;
    COW_AT(100c9e23)
            if (rd32(eax) != 0u)
            {
                ebx = rd32(eax);
    COW_AT(100c9e2d)
                d61 = fr(g, (double)(int32_t)loc_4c * (double)rdf32(COW_IMG(0x1032a840u)));
                wrf32(sp0 - 0x1cu, (float)(double)(float)d61);
                if ((cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    loc_1c_f = (double)(float)d61;
                }
                else
                {
                    eax = cow_fsw(g, d61, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    loc_1c_f = (double)(float)d61;
    COW_AT(100c9e4a)
                    d62 = fr(g, loc_1c_f - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x1cu, (float)(double)(float)d62);
                    loc_1c_f = (double)(float)d62;
                }
    COW_AT(100c9e58)
                if (!(loc_1c_f < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, loc_1c_f, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c9e69)
                    d63 = fr(g, loc_1c_f + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(sp0 - 0x1cu, (float)(double)(float)d63);
                    loc_1c_f = (double)(float)d63;
                }
    COW_AT(100c9e77)
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                wr32(sp0 - 0x6cu, ebx + 0x34u);
                d64 = fr(g, fr(g, fr(g, sin(loc_1c_f)) * (double)rdf32(sp0 - 0x50u)) + (double)rdf32(sp0 - 0x2cu));
                wrf32(sp0 - 0x10u, (float)(double)(float)d64);
                d65 = fr(g, fr(g, fr(g, cos(loc_1c_f)) * (double)rdf32(sp0 - 0x50u)) + (double)rdf32(sp0 - 0x24u));
                wrf32(sp0 - 8u, (float)(double)(float)d65);
                g->edx = ebx + 0x34u;
                g->esp = sp0 - 0x64u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x34u, sp0 - 0x10u);
                t66 = g->edx;
                wr32(sp0 - 0x70u, sp0 - 0x10u);
                wr32(sp0 - 0x74u, ebx + 0xc4u);
                g->eax = sp0 - 0x10u;
                g->esp = sp0 - 0x6cu;
                t67 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0xc4u, sp0 - 0x10u);
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                g->edx = sp0 - 0x10u;
                g->esp = sp0 - 0x64u;
                cow_thiscall(g, COW_IMG(0x100a57c0u), ebx, 1, sp0 - 0x10u);
                t68 = g->edx;
                wr32(sp0 - 0x68u, sp0 - 0x10u);
                wr32(sp0 - 0x6cu, ebx + 0x5c4u);
                g->ecx = ebx + 0x5c4u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5c4u, sp0 - 0x10u);
                t69 = g->ecx;
                wr32(sp0 - 0x70u, sp0 - 0x10u);
                wr32(sp0 - 0x74u, ebx + 0x5fcu);
                g->eax = ebx + 0x5fcu;
                g->esp = sp0 - 0x6cu;
                t70 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x5fcu, sp0 - 0x10u);
                wr32(sp0 - 0x78u, sp0 - 0x10u);
                wr32(sp0 - 0x7cu, ebx + 0x9d8u);
                wr32(ebx + 0x608u, 0x3f800000u);
                g->ecx = sp0 - 0x10u;
                g->edx = ebx + 0x9d8u;
                g->esp = sp0 - 0x74u;
                cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x9d8u, sp0 - 0x10u);
                t71 = g->ecx;
                t72 = g->edx;
                wr32(ebx + 0x9e4u, 0x3f800000u);
                wr32(sp0 - 0x80u, sp0 - 0x20u);
                wr32(sp0 - 0x84u, ebx + 0x44u);
                g->eax = sp0 - 0x20u;
                g->edx = t72;
                g->esp = sp0 - 0x7cu;
                t73 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x44u, sp0 - 0x20u);
                t74 = g->edx;
                d75 = (double)rdf32(ebx + 0x44u);
                if ((cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t74;
                    esi = ebx + 0x44u;
                }
                else
                {
                    eax = cow_fsw(g, d75, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    edx = t74;
                    esi = ebx + 0x44u;
    COW_AT(100c9f2f)
                    d76 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d76);
                }
    COW_AT(100c9f39)
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c9f48)
                    d77 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d77);
                }
    COW_AT(100c9f52)
                d78 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d78, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d78, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d78, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c9f64)
                    d79 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d79);
                }
    COW_AT(100c9f70)
                d80 = (double)rdf32(ebx + 0x48u);
                if (!(d80 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d80, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c9f80)
                    d81 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d81);
                }
    COW_AT(100c9f8c)
                d82 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d82, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d82, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d82, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c9f9e)
                    d83 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d83);
                }
    COW_AT(100c9faa)
                d84 = (double)rdf32(ebx + 0x4cu);
                if (!(d84 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d84, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c9fba)
                    d85 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d85);
                }
    COW_AT(100c9fc6)
                wr32(sp0 - 0x68u, sp0 - 0x20u);
                wr32(sp0 - 0x6cu, esi);
                g->eax = eax;
                g->esp = sp0 - 0x64u;
                t86 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, esi, sp0 - 0x20u);
                if ((cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100c9fe5)
                    d87 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d87);
                }
    COW_AT(100c9fef)
                if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100c9ffe)
                    d88 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(esi, (float)d88);
                }
    COW_AT(100ca008)
                d89 = (double)rdf32(ebx + 0x48u);
                if ((cow_fsw(g, d89, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d89, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d89, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100ca01a)
                    d90 = fr(g, (double)rdf32(ebx + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d90);
                }
    COW_AT(100ca026)
                d91 = (double)rdf32(ebx + 0x48u);
                if (!(d91 < (double)rdf32(COW_IMG(0x10329d28u))))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d91, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100ca036)
                    d92 = fr(g, (double)rdf32(ebx + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x48u, (float)d92);
                }
    COW_AT(100ca042)
                d93 = (double)rdf32(ebx + 0x4cu);
                if ((cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                {
                    eax = cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                }
                else
                {
                    eax = cow_fsw(g, d93, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100ca054)
                    d94 = fr(g, (double)rdf32(ebx + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d94);
                }
    COW_AT(100ca060)
                d95 = (double)rdf32(ebx + 0x4cu);
                if (d95 < (double)rdf32(COW_IMG(0x10329d28u)))
                {
    COW_AT(100ca070)
                    d96 = fr(g, (double)rdf32(ebx + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
                    wrf32(ebx + 0x4cu, (float)d96);
                }
    COW_AT(100ca07c)
                t97 = rd32(sp0 - 0x20u);
                wr32(ebx + 0xe4u, t97);
                t98 = rd32(sp0 - 0x1cu);
                wr32(ebx + 0xe8u, t98);
                t99 = rd32(sp0 - 0x18u);
                wr32(ebx + 0xecu, t99);
                t100 = rd32(sp0 - 0x14u);
                wr32(ebx + 0xf0u, t100);
                t101 = rd32(sp0 - 0x20u);
                wr32(ebx + 0xe4u, t101);
                t102 = rd32(sp0 - 0x1cu);
                wr32(ebx + 0xe8u, t102);
                t103 = rd32(sp0 - 0x18u);
                wr32(ebx + 0xecu, t103);
                t104 = rd32(sp0 - 0x14u);
                t105 = rd32(ebx);
                wr32(ebx + 0xf0u, t104);
                g->eax = t104;
                g->edx = t105;
                g->esp = sp0 - 0x5cu;
                t106 = cow_thiscall(g, rd32(t105 + 0x318u), ebx, 2, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
                t107 = g->ecx;
                t108 = g->edx;
                if (t106 != 0u)
                {
                    eax = t106;
                }
                else
                {
                    ecx = t107;
                    edx = t108;
    COW_AT(100ca0de)
                    wr32(sp0 - 0x60u, sp0 - 0x18u);
                    wr32(sp0 - 0x64u, ebx + 0x61cu);
                    g->eax = sp0 - 0x18u;
                    g->esp = sp0 - 0x5cu;
                    t109 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, sp0 - 0x18u);
                    d110 = (double)rdf32(ebx + 0x61cu);
                    if ((cow_fsw(g, d110, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d110, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        esi = ebx + 0x61cu;
                    }
                    else
                    {
                        eax = cow_fsw(g, d110, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                        esi = ebx + 0x61cu;
    COW_AT(100ca103)
                        d111 = fr(g, (double)rdf32(esi) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d111);
                    }
    COW_AT(100ca10d)
                    if (!((double)rdf32(esi) < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(esi), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100ca11c)
                        d112 = fr(g, (double)rdf32(esi) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(esi, (float)d112);
                    }
    COW_AT(100ca126)
                    d113 = (double)rdf32(ebx + 0x620u);
                    if ((cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d113, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100ca13b)
                        d114 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d114);
                    }
    COW_AT(100ca14d)
                    d115 = (double)rdf32(ebx + 0x620u);
                    if (!(d115 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d115, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d115, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100ca160)
                        d116 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x620u, (float)d116);
                    }
    COW_AT(100ca172)
                    d117 = (double)rdf32(ebx + 0x624u);
                    if ((cow_fsw(g, d117, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
                    {
                        eax = cow_fsw(g, d117, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                    }
                    else
                    {
                        eax = cow_fsw(g, d117, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(100ca187)
                        d118 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d118);
                    }
    COW_AT(100ca199)
                    d119 = (double)rdf32(ebx + 0x624u);
                    if (!(d119 < (double)rdf32(COW_IMG(0x10329d28u))))
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d119, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(100ca1ac)
                        d120 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                        wrf32(ebx + 0x624u, (float)d120);
                    }
                }
    COW_AT(100ca1be)
                g->eax = eax;
                g->edx = rd32(self);
                t121 = rd32(self);
                t122 = rd32(ebx);
                g->esp = sp0 - 0x54u;
                t123 = cow_thiscall(g, rd32(t121 + 0x218u), self, 2, rd32(sp0 - 0x5cu), rd32(sp0 - 0x58u));
                t124 = g->edx;
                wr32(sp0 - 0x58u, t123);
                g->edx = t124;
                g->esp = sp0 - 0x58u;
                cow_thiscall(g, rd32(t122 + 0x214u), ebx, 0);
                t125 = g->edx;
                g->eax = rd32(self);
                g->edx = t125;
                t126 = rd32(self);
                t127 = rd32(ebx);
                t128 = cow_thiscall(g, rd32(t126 + 0x220u), self, 0);
                t129 = g->ecx;
                t130 = g->edx;
                d131 = cow_take_float(g);
                wr32(sp0 - 0x5cu, t129);
                wrf32(sp0 - 0x5cu, (float)(double)(float)d131);
                g->esp = sp0 - 0x5cu;
                t132 = cow_thiscall(g, rd32(t127 + 0x21cu), ebx, 0);
                g->edx = rd32(self);
                t133 = rd32(self);
                t134 = rd32(ebx);
                t135 = cow_thiscall(g, rd32(t133 + 0x188u), self, 0);
                t136 = g->edx;
                wr32(sp0 - 0x60u, t135);
                g->esp = sp0 - 0x60u;
                cow_thiscall(g, rd32(t134 + 0x184u), ebx, 0);
                wr32(sp0 - 0x44u, 5u);
                eax = ebx + 0x388u;
                edx = self - ebx;
                loc_44 = 5u;
L_100ca215: ;
    COW_AT(100ca215)
                esi = eax + edx;
                edi = eax;
                ecx = 0x1au;
                while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
                wr32(sp0 - 0x44u, loc_44 - 1u);
                if (loc_44 != 1u)
                {
                    eax = eax + 0x68u;
                    loc_44 = loc_44 - 1u;
                    goto L_100ca215;
                }
                ecx = loc_44 - 1u;
                loc_44 = loc_44 - 1u;
    COW_AT(100ca22f)
                t137 = rd32(self + 0x590u);
                wr32(ebx + 0x590u, t137);
                t138 = (ecx & 0xffffff00u) | rd8(self + 0x17cu);
                wr32(sp0 - 0x64u, t138);
                g->esp = sp0 - 0x60u;
                t139 = cow_call_regs(g, COW_IMG(0x100aaee0u), t137, ebx, g->edx, 0, 1, t138);
                g->edx = rd32(self);
                t140 = rd32(self);
                t141 = rd32(ebx);
                t142 = cow_thiscall(g, rd32(t140 + 0x204u), self, 0);
                t143 = g->ecx;
                t144 = g->edx;
                d145 = cow_take_float(g);
                wr32(sp0 - 0x64u, t143);
                wrf32(sp0 - 0x64u, (float)(double)(float)d145);
                g->edx = t144;
                g->esp = sp0 - 0x64u;
                cow_thiscall(g, rd32(t141 + 0x208u), ebx, 0);
                t146 = g->edx;
                g->eax = rd32(self);
                g->edx = t146;
                t147 = rd32(self);
                t148 = cow_thiscall(g, rd32(t147 + 0x198u), self, 0);
                t149 = g->edx;
                wr8(ebx + 0x5e0u, (uint8_t)t148);
                if (rd32(sp0 - 0x44u) != 0u)
                {
                    eax = rd32(sp0 - 0x44u);
                    edx = t149;
                    goto L_100ca294;
                }
                eax = rd32(sp0 - 0x44u);
                edx = t149;
    COW_AT(100ca27b)
                if ((rd8(ebx + 0x8acu) & 4u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
                    goto L_100ca2b2;
                }
                eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
    COW_AT(100ca285)
                wr8(ebx + 0x8acu, eax & 0xfbu);
                eax = (eax & 0xffffff00u) | (eax & 0xfbu);
                ecx = 2u;
L_100ca2b4: ;
    COW_AT(100ca2b4)
                if (ecx == 1u)
                {
    COW_AT(100ca2ce)
                    wr32(sp0 - 0x68u, 0u);
                    wr32(sp0 - 0x6cu, ebx);
                    wr32(sp0 - 0x70u, 0x6e6f6665u);
                    g->esp = sp0 - 0x64u;
                    cow_thiscall(g, rd32(rd32(ebx) + 0x298u), ebx, 3, 0x6e6f6665u, ebx, 0u);
                    loc_64 = rd32(sp0 - 0x64u);
                    loc_20 = rd32(sp0 - 0x20u);
                    loc_18 = rd32(sp0 - 0x18u);
                    loc_14 = rd32(sp0 - 0x14u);
                    loc_4c = rd32(sp0 - 0x4cu);
                    loc_40 = rd32(sp0 - 0x40u);
                    loc_3c = rd32(sp0 - 0x3cu);
                }
                else
                {
                    ecx = ecx - 1u;
    COW_AT(100ca2b7)
                    if (ecx != 1u)
                    {
                        loc_64 = rd32(sp0 - 0x64u);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_14 = rd32(sp0 - 0x14u);
                        loc_4c = rd32(sp0 - 0x4cu);
                        loc_40 = rd32(sp0 - 0x40u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                    else
                    {
    COW_AT(100ca2ba)
                        wr32(sp0 - 0x68u, 0u);
                        wr32(sp0 - 0x6cu, ebx);
                        wr32(sp0 - 0x70u, 0x666f6665u);
                        g->esp = sp0 - 0x64u;
                        cow_thiscall(g, rd32(rd32(ebx) + 0x298u), ebx, 3, 0x666f6665u, ebx, 0u);
                        loc_64 = rd32(sp0 - 0x64u);
                        loc_20 = rd32(sp0 - 0x20u);
                        loc_18 = rd32(sp0 - 0x18u);
                        loc_14 = rd32(sp0 - 0x14u);
                        loc_4c = rd32(sp0 - 0x4cu);
                        loc_40 = rd32(sp0 - 0x40u);
                        loc_3c = rd32(sp0 - 0x3cu);
                    }
                }
            }
    COW_AT(100ca2e0)
            wr32(sp0 - 0x40u, loc_40 + 4u);
            wr32(sp0 - 0x4cu, loc_4c + 0xfu);
            wr32(sp0 - 0x3cu, loc_3c - 1u);
            if (loc_3c != 1u)
            {
                eax = loc_40 + 4u;
                loc_4c = loc_4c + 0xfu;
                loc_40 = loc_40 + 4u;
                loc_3c = loc_3c - 1u;
                goto L_100c9e23;
            }
    COW_AT(100ca305)
            ebx = loc_64;
            loc_58 = rd32(sp0 - 0x58u);
            loc_5c = rd32(sp0 - 0x5cu);
            loc_60 = rd32(sp0 - 0x60u);
        }
    }
L_100ca306: ;
    COW_AT(100ca306)
    g->ebx = ebx;
    g->esi = loc_5c;
    g->edi = loc_60;
    g->ebp = loc_58;
    return;
L_100ca294: ;
    COW_AT(100ca294)
    if (eax != 1u) goto L_100ca2b2;
    COW_AT(100ca299)
    if ((rd8(ebx + 0x8acu) & 4u) != 0u)
    {
        eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
        goto L_100ca2b2;
    }
    eax = (eax & 0xffffff00u) | rd8(ebx + 0x8acu);
    COW_AT(100ca2a3)
    wr8(ebx + 0x8acu, (uint8_t)(eax | 4u));
    eax = (eax & 0xffffff00u) | (uint8_t)(eax | 4u);
    ecx = 1u;
    goto L_100ca2b4;
L_100ca2b2: ;
    COW_AT(100ca2b2)
    ecx = 0u;
    goto L_100ca2b4;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c9c10(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c9c25u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9c2bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9c40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9c49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9c55u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x60u);
        in_esi = rd32(sp0 - 0x5cu);
        in_ebp = rd32(sp0 - 0x58u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9c6fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        double loc_50_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_50_f = rdf32(sp0 - 0x50u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x100c9da5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x38u);
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        wr32(sp0 - 0x74u, sp0 - 0x38u);
        wr32(sp0 - 0x70u, sp0 - 0x38u);
        wr32(sp0 - 0x6cu, sp0 - 0x38u);
        wr32(sp0 - 0x64u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100c9da7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        x0 = ST(0);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x38u);
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        wr32(sp0 - 0x74u, sp0 - 0x38u);
        wr32(sp0 - 0x70u, sp0 - 0x38u);
        wr32(sp0 - 0x6cu, sp0 - 0x38u);
        wr32(sp0 - 0x64u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100c9db2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x38u);
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        wr32(sp0 - 0x74u, sp0 - 0x38u);
        wr32(sp0 - 0x70u, sp0 - 0x38u);
        wr32(sp0 - 0x6cu, sp0 - 0x38u);
        wr32(sp0 - 0x64u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100c9dbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x38u);
        wr32(sp0 - 0x78u, sp0 - 0x38u);
        wr32(sp0 - 0x74u, sp0 - 0x38u);
        wr32(sp0 - 0x70u, sp0 - 0x38u);
        wr32(sp0 - 0x6cu, sp0 - 0x38u);
        wr32(sp0 - 0x64u, sp0 - 0x2cu);
        (void)sp0;
        return 1;
    }
    case 0x100c9e23u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9e2du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9e4au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9e58u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9e69u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9e77u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        double loc_1c_f;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c_f = rdf32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f2fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f48u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f52u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f64u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f70u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f80u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f8cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9f9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9faau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9fbau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9fc6u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x10u);
        (void)sp0;
        return 1;
    }
    case 0x100c9fe5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100c9fefu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100c9ffeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca008u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca01au:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca026u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca036u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca042u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca054u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca060u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca070u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca07cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca0deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca103u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca10du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca11cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca126u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca13bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca14du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca160u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca172u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca187u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca199u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca1acu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x100ca1beu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_60;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_60 = rd32(sp0 - 0x60u);
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca215u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca22fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_44;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_44 = rd32(sp0 - 0x44u);
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca27bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca285u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca294u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca299u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2a3u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2b2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2b4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2bau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2ceu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        wr32(sp0 - 0x80u, sp0 - 0x20u);
        wr32(sp0 - 0x78u, sp0 - 0x10u);
        wr32(sp0 - 0x70u, sp0 - 0x10u);
        wr32(sp0 - 0x68u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x100ca2e0u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100ca305u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x64u;
        wr32(sp0 - 0x98u, sp0 - 0x38u);
        wr32(sp0 - 0x94u, sp0 - 0x38u);
        wr32(sp0 - 0x90u, sp0 - 0x38u);
        wr32(sp0 - 0x8cu, sp0 - 0x2cu);
        wr32(sp0 - 0x88u, sp0 - 0x38u);
        (void)sp0;
        return 1;
    }
    case 0x100ca306u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_20;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_4c;
        double loc_50_f;
        uint32_t loc_58;
        uint32_t loc_5c;
        uint32_t loc_60;
        uint32_t loc_64;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        loc_64 = rd32(sp0 - 0x64u);
        loc_60 = rd32(sp0 - 0x60u);
        loc_5c = rd32(sp0 - 0x5cu);
        loc_58 = rd32(sp0 - 0x58u);
        loc_50_f = rdf32(sp0 - 0x50u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_20 = rd32(sp0 - 0x20u);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c9c10(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_100c9c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
