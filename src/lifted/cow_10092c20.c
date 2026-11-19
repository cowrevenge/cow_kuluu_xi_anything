/* f_0x10092c20 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10092c20(Guest* g)
{
    double d21;
    double d22;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    double d46;
    double d47;
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
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t3;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t4;
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
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10092c32u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c32;
    case 0x10092c3cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c3c;
    case 0x10092c40u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c40;
    case 0x10092c44u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c44;
    case 0x10092c48u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c48;
    case 0x10092c4cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c4c;
    case 0x10092c54u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092c54;
    case 0x10092ce2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092ce2;
    case 0x10092cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092cec;
    case 0x10092cfbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092cfb;
    case 0x10092d05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d05;
    case 0x10092d17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d17;
    case 0x10092d23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d23;
    case 0x10092d33u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d33;
    case 0x10092d3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d3f;
    case 0x10092d51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d51;
    case 0x10092d5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d5d;
    case 0x10092d6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d6d;
    case 0x10092d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d79;
    case 0x10092d91u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092d91;
    case 0x10092db3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092db3;
    case 0x10092dbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092dbf;
    case 0x10092dcfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092dcf;
    case 0x10092ddbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092ddb;
    case 0x10092df0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092df0;
    case 0x10092e02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e02;
    case 0x10092e15u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e15;
    case 0x10092e27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e27;
    case 0x10092e3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e3c;
    case 0x10092e4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e4e;
    case 0x10092e61u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e61;
    case 0x10092e73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092e73;
    case 0x10092ee9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092ee9;
    case 0x10092ef3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092ef3;
    case 0x10092f02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092f02;
    case 0x10092f0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; in_esi = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 0xcu); in_ebx = rd32(sp0 - 8u); in_edi = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 0xcu); g->ebx = rd32(sp0 - 8u); g->edi = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x10u); goto E_10092f0c;
    case 0x10092f21u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f21;
    case 0x10092f2du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f2d;
    case 0x10092f3du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f3d;
    case 0x10092f49u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f49;
    case 0x10092f5bu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f5b;
    case 0x10092f67u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f67;
    case 0x10092f77u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f77;
    case 0x10092f83u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 4u); g->edi = rd32(sp0 - 4u); goto E_10092f83;
    default: break;
    }
#endif

    COW_AT(10092c20)
    if ((rd32(self + 0x120u) >> 8u & 2u) == 0u)
    {
        eax = rd32(self + 0x120u);
    }
    else
    {
        eax = rd32(self + 0x120u);
    COW_AT(10092c32)
        if (rd8(self + 0xeeu) == 0u) goto L_10092c54;
        eax = (eax & 0xffffff00u) | rd8(self + 0xeeu);
    COW_AT(10092c3c)
        if ((uint8_t)eax == 1u) goto L_10092c54;
    COW_AT(10092c40)
        if ((uint8_t)eax == 2u) goto L_10092c54;
    COW_AT(10092c44)
        if ((uint8_t)eax == 6u) goto L_10092c54;
    COW_AT(10092c48)
        if ((uint8_t)eax == 7u) goto L_10092c54;
    COW_AT(10092c4c)
        if ((uint8_t)eax != 8u) goto L_10092f83;
L_10092c54: ;
    COW_AT(10092c54)
        t1 = rd32(self + 0xa0u) + 0x34u;
        g->eax = t1;
        g->edx = in_edx;
        g->esp = sp0 - 0x10u;
        t2 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t1, self + 4u);
        t3 = g->edx;
        t4 = rd32(self + 0xa0u) + 0x5fcu;
        g->ecx = t4;
        t5 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x18u;
        t6 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t4, self + 4u);
        t7 = g->ecx;
        wr32(t5 + 0x608u, 0x3f800000u);
        t8 = rd32(self + 0xa0u) + 0x5c4u;
        g->edx = t8;
        g->esp = sp0 - 0x20u;
        t9 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t8, self + 4u);
        t10 = g->edx;
        g->edx = t10;
        t11 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x100a57c0u), t11, 1, self + 4u);
        t12 = g->ecx;
        t13 = g->edx;
        t14 = rd32(self + 0xa0u) + 0xc4u;
        g->eax = t14;
        g->ecx = t12;
        g->edx = t13;
        t15 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t14, self + 4u);
        t16 = g->ecx;
        t17 = g->edx;
        t18 = rd32(self + 0xa0u) + 0x44u;
        t19 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x18u;
        t20 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t18, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t18;
            ebp = t19;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t18), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t18;
            ebp = t19;
    COW_AT(10092ce2)
            d21 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d21);
        }
    COW_AT(10092cec)
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092cfb)
            d22 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d22);
        }
    COW_AT(10092d05)
        d23 = (double)rdf32(ebp + 0x48u);
        if ((cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d23, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092d17)
            d24 = fr(g, (double)rdf32(ebp + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d24);
        }
    COW_AT(10092d23)
        d25 = (double)rdf32(ebp + 0x48u);
        if (!(d25 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d25, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092d33)
            d26 = fr(g, (double)rdf32(ebp + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x48u, (float)d26);
        }
    COW_AT(10092d3f)
        d27 = (double)rdf32(ebp + 0x4cu);
        if ((cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d27, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092d51)
            d28 = fr(g, (double)rdf32(ebp + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d28);
        }
    COW_AT(10092d5d)
        d29 = (double)rdf32(ebp + 0x4cu);
        if (!(d29 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d29, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092d6d)
            d30 = fr(g, (double)rdf32(ebp + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebp + 0x4cu, (float)d30);
        }
    COW_AT(10092d79)
        t31 = rd32(self + 0xa0u);
        g->eax = eax;
        g->edx = rd32(t31);
        t32 = rd32(t31);
        g->esp = sp0 - 0x10u;
        t33 = cow_thiscall(g, rd32(t32 + 0x318u), t31, 0);
        t34 = g->ecx;
        t35 = g->edx;
        if (t33 == 0u)
        {
            eax = t33;
            ecx = t34;
            edx = t35;
            ebx = t31;
    COW_AT(10092d91)
            g->eax = eax;
            g->esp = sp0 - 0x10u;
            t36 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, ebx + 0x61cu, self + 0x14u);
            d37 = (double)rdf32(ebx + 0x61cu);
            if ((cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = ebx + 0x61cu;
            }
            else
            {
                eax = cow_fsw(g, d37, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
                ebp = ebx + 0x61cu;
    COW_AT(10092db3)
                d38 = fr(g, (double)rdf32(ebp) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d38);
            }
    COW_AT(10092dbf)
            if (!((double)rdf32(ebp) < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebp), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092dcf)
                d39 = fr(g, (double)rdf32(ebp) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebp, (float)d39);
            }
    COW_AT(10092ddb)
            d40 = (double)rdf32(ebx + 0x620u);
            if ((cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d40, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092df0)
                d41 = fr(g, (double)rdf32(ebx + 0x620u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d41);
            }
    COW_AT(10092e02)
            d42 = (double)rdf32(ebx + 0x620u);
            if (!(d42 < (double)rdf32(COW_IMG(0x10329d28u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
            }
            else
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092e15)
                d43 = fr(g, (double)rdf32(ebx + 0x620u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x620u, (float)d43);
            }
    COW_AT(10092e27)
            d44 = (double)rdf32(ebx + 0x624u);
            if ((cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
            {
                eax = cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            }
            else
            {
                eax = cow_fsw(g, d44, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092e3c)
                d45 = fr(g, (double)rdf32(ebx + 0x624u) - (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d45);
            }
    COW_AT(10092e4e)
            d46 = (double)rdf32(ebx + 0x624u);
            if (d46 < (double)rdf32(COW_IMG(0x10329d28u)))
            {
    COW_AT(10092e61)
                d47 = fr(g, (double)rdf32(ebx + 0x624u) + (double)rdf32(COW_IMG(0x10329d2cu)));
                wrf32(ebx + 0x624u, (float)d47);
            }
        }
    COW_AT(10092e73)
        t48 = rd32(self + 0x14u);
        t49 = rd32(self + 0xa0u);
        wr32(t49 + 0xe4u, t48);
        t50 = rd32(self + 0x18u);
        wr32(t49 + 0xe8u, t50);
        t51 = rd32(self + 0x1cu);
        wr32(t49 + 0xecu, t51);
        t52 = rd32(self + 0x20u);
        wr32(t49 + 0xf0u, t52);
        t53 = rd32(self + 0x14u);
        t54 = rd32(self + 0xa0u);
        wr32(t54 + 0xe4u, t53);
        t55 = rd32(self + 0x18u);
        wr32(t54 + 0xe8u, t55);
        t56 = rd32(self + 0x1cu);
        wr32(t54 + 0xecu, t56);
        t57 = rd32(self + 0x20u);
        wr32(t54 + 0xf0u, t57);
        t58 = rd32(self + 0xa0u) + 0x44u;
        g->eax = t54;
        t59 = rd32(self + 0xa0u);
        g->esp = sp0 - 0x10u;
        t60 = cow_cdecl(g, COW_IMG(0x10026e90u), 2, t58, self + 0x14u);
        if ((cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t58;
            edi = t59;
        }
        else
        {
            eax = cow_fsw(g, (double)rdf32(t58), (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
            ebx = t58;
            edi = t59;
    COW_AT(10092ee9)
            d61 = fr(g, (double)rdf32(ebx) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d61);
        }
    COW_AT(10092ef3)
        if (!((double)rdf32(ebx) < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(ebx), (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092f02)
            d62 = fr(g, (double)rdf32(ebx) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(ebx, (float)d62);
        }
    COW_AT(10092f0c)
        d63 = (double)rdf32(edi + 0x48u);
        if ((cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d63, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092f21)
            d64 = fr(g, (double)rdf32(edi + 0x48u) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d64);
        }
    COW_AT(10092f2d)
        d65 = (double)rdf32(edi + 0x48u);
        if (!(d65 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d65, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092f3d)
            d66 = fr(g, (double)rdf32(edi + 0x48u) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x48u, (float)d66);
        }
    COW_AT(10092f49)
        d67 = (double)rdf32(edi + 0x4cu);
        if ((cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u) != 0u)
        {
            eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
        }
        else
        {
            eax = cow_fsw(g, d67, (double)rdf32(COW_IMG(0x10329d30u)), 0u) & 0x4100u;
    COW_AT(10092f5b)
            d68 = fr(g, (double)rdf32(edi + 0x4cu) - (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d68);
        }
    COW_AT(10092f67)
        d69 = (double)rdf32(edi + 0x4cu);
        if (!(d69 < (double)rdf32(COW_IMG(0x10329d28u))))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d69, (double)rdf32(COW_IMG(0x10329d28u)), 0u);
    COW_AT(10092f77)
            d70 = fr(g, (double)rdf32(edi + 0x4cu) + (double)rdf32(COW_IMG(0x10329d2cu)));
            wrf32(edi + 0x4cu, (float)d70);
        }
    }
L_10092f83: ;
    COW_AT(10092f83)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10092c20(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10092c32u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c3cu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c40u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c44u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c48u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c4cu:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092c54u:
    {
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        g->edi = self;
        (void)sp0;
        return 1;
    }
    case 0x10092ce2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092cecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092cfbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d17u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d33u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d3fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d51u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d5du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d6du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d79u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092d91u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092db3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092dbfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092dcfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092ddbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092df0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e15u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e27u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e3cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e4eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e61u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092e73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->esi = self + 0x14u;
        (void)sp0;
        return 1;
    }
    case 0x10092ee9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10092ef3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10092f02u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10092f0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_esi = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 0xcu);
        in_ebx = rd32(sp0 - 8u);
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        (void)sp0;
        return 1;
    }
    case 0x10092f21u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f2du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f3du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f49u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f5bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f67u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f77u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x10092f83u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 4u);
        g->esp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10092c20(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_10092c20(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
