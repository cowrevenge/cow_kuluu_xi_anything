/* f_0x102041d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_102041d0(Guest* g)
{
    double d61;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_2c;
    uint32_t loc_30;
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
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
    uint32_t t66;
    uint32_t t67;
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 124u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102041e6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x24u); goto E_102041e6;
    case 0x102042c5u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102042c5;
    case 0x102042e7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102042e7;
    case 0x102042ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102042ec;
    case 0x102042f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_102042f1;
    case 0x10204325u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x28u); in_esi = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 0x20u); in_ebx = rd32(sp0 - 0x1cu); g->ebp = rd32(sp0 - 0x20u); g->ebx = rd32(sp0 - 0x1cu); g->edi = rd32(sp0 - 0x28u); g->esi = rd32(sp0 - 0x24u); goto E_10204325;
    case 0x1020433bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020433b;
    case 0x10204378u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204378;
    case 0x10204382u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204382;
    case 0x1020438bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020438b;
    case 0x102043c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102043c8;
    case 0x102043d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102043d2;
    case 0x1020440bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020440b;
    case 0x10204413u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204413;
    case 0x1020444bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020444b;
    case 0x102044a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044a4;
    case 0x102044b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044b0;
    case 0x102044b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044b4;
    case 0x102044c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044c3;
    case 0x102044cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044cb;
    case 0x102044cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044cd;
    case 0x102044d5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044d5;
    case 0x102044d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044d9;
    case 0x102044f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_102044f6;
    case 0x10204501u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204501;
    case 0x10204509u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204509;
    case 0x1020450du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020450d;
    case 0x10204516u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204516;
    case 0x1020451fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020451f;
    case 0x10204523u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204523;
    case 0x10204527u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204527;
    case 0x1020452bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020452b;
    case 0x10204531u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204531;
    case 0x10204535u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204535;
    case 0x1020453eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_1020453e;
    case 0x10204540u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204540;
    case 0x10204543u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; loc_2c = rd32(sp0 - 0x2cu); goto E_10204543;
    case 0x10204568u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10204568;
    case 0x10204573u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_10204573;
    case 0x1020457au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; goto E_1020457a;
    case 0x10204589u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; goto E_10204589;
    case 0x10204591u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10204591;
    case 0x10204595u: eax = g->eax; self = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; edi = g->edi; loc_30 = rd32(sp0 - 0x30u); loc_2c = rd32(sp0 - 0x2cu); goto E_10204595;
    default: break;
    }
#endif

    COW_AT(102041d0)
    wr32(sp0 - 0x1cu, in_ebx);
    wr32(sp0 - 0x20u, in_ebp);
    wr32(sp0 - 0x24u, in_esi);
    wr32(sp0 - 0x28u, in_edi);
    if (rd8(self + 0x40u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x40u);
        goto L_102042c5;
    }
    COW_AT(102041e6)
    wr32(sp0 - 0x2cu, 1u);
    wr32(sp0 - 0x30u, 1u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, sp0 - 0x10u);
    t1 = rd32(self + 8u);
    wr16(sp0 - 0x10u, 0u);
    wr16(sp0 - 0xeu, 0u);
    wr16(sp0 - 0xcu, 0u);
    wr16(sp0 - 0xau, 0u);
    g->ebx = 0u;
    g->esp = sp0 - 0x28u;
    cow_thiscall(g, COW_IMG(0x10118900u), t1, 4, sp0 - 0x10u, 1u, 1u, 1u);
    wr32(sp0 - 0x2cu, self + 0x41u);
    wr32(sp0 - 0x30u, 0x64u);
    t2 = rd32(sp0 - 0xeu) + 7u;
    wr32(sp0 - 0x34u, t2);
    t3 = rd32(sp0 - 0x10u) + 0x1au;
    wr32(sp0 - 0x38u, t3);
    g->ebx = 0u;
    t4 = rd32(sp0 - 0xeu);
    t5 = rd32(sp0 - 0x10u);
    cow_cdecl(g, COW_IMG(0x101cb090u), 4, t3, t2, 0x64u, self + 0x41u);
    wr32(sp0 - 0x3cu, self + 0x42u);
    wr32(sp0 - 0x40u, 0x64u);
    wr32(sp0 - 0x44u, t4 + 0x11u);
    wr32(sp0 - 0x48u, t5 + 0x31u);
    g->ebx = 0u;
    g->eax = t5 + 0x31u;
    g->edx = t4 + 0x11u;
    g->esp = sp0 - 0x38u;
    t6 = cow_cdecl(g, COW_IMG(0x101cb1b0u), 4, t5 + 0x31u, t4 + 0x11u, 0x64u, self + 0x42u);
    t7 = g->edx;
    wr32(sp0 - 0x2cu, 0x80808080u);
    t8 = rd32(self + 0x48u);
    wr32(sp0 - 0x30u, t8);
    wr32(sp0 - 0x34u, t4);
    wr32(sp0 - 0x38u, t5);
    g->ecx = self;
    g->esp = sp0 - 0x28u;
    cow_stdcall(g, COW_IMG(0x10202380u), 4, t5, t4, t8, 0x80808080u);
    t9 = g->ecx;
    t10 = (uint32_t)(int16_t)rd16(self + 0x46u);
    wr32(sp0 - 0x2cu, t10);
    wr32(sp0 - 0x30u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x34u, sp0 - 0x18u);
    g->ebx = 0u;
    g->esp = sp0 - 0x20u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x18u, COW_IMG(0x10352ff0u), t10, in_edi, in_esi);
    wr32(sp0 - 0x38u, 0x3f800000u);
    wr32(sp0 - 0x3cu, 0x3f800000u);
    wr32(sp0 - 0x40u, 0u);
    wr32(sp0 - 0x44u, 0x80808080u);
    wr32(sp0 - 0x48u, sp0 - 0x18u);
    wr32(sp0 - 0x4cu, t4 + 0xau);
    wr32(sp0 - 0x50u, t5 + 0x62u);
    g->eax = t5 + 0x62u;
    g->esp = sp0 - 0x34u;
    t11 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x18u, 7, t5 + 0x62u, t4 + 0xau, sp0 - 0x18u, 0x80808080u, 0u, 0x3f800000u, 0x3f800000u);
    t12 = (uint32_t)(int16_t)rd16(self + 0x44u);
    wr32(sp0 - 0x54u, t12);
    wr32(sp0 - 0x58u, COW_IMG(0x10352ff0u));
    wr32(sp0 - 0x5cu, sp0 - 0x18u);
    g->ebx = 0u;
    g->ecx = t12;
    g->edx = sp0 - 0x18u;
    g->esp = sp0 - 0x48u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x18u, COW_IMG(0x10352ff0u), t12, rd32(sp0 - 0x50u), rd32(sp0 - 0x4cu));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x60u, 0x3f800000u);
    wr32(sp0 - 0x64u, 0x3f800000u);
    wr32(sp0 - 0x68u, 0u);
    wr32(sp0 - 0x6cu, 0x80808080u);
    wr32(sp0 - 0x70u, sp0 - 0x18u);
    wr32(sp0 - 0x74u, t4 + 1u);
    wr32(sp0 - 0x78u, t5 + 0x58u);
    g->eax = sp0 - 0x18u;
    g->edx = t14;
    g->esp = sp0 - 0x5cu;
    t15 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t5 + 0x58u, t4 + 1u, sp0 - 0x18u, 0x80808080u, 0u, 0x3f800000u, 0x3f800000u);
    t16 = g->edx;
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = t16;
    return t15;
L_102042c5: ;
    COW_AT(102042c5)
    t17 = rd8(COW_IMG(0x10663b52u));
    wr16(sp0 - 8u, 0u);
    wr16(sp0 - 6u, 0u);
    wr16(sp0 - 4u, 0u);
    wr16(sp0 - 2u, 0u);
    if ((uint8_t)t17 == 0u)
    {
        eax = (eax & 0xffffff00u) | t17;
    }
    else
    {
        eax = (eax & 0xffffff00u) | t17;
    COW_AT(102042e7)
        edx = in_edx;
        ebp = 1u;
        edi = COW_IMG(0x10663b52u);
L_102042ec: ;
    COW_AT(102042ec)
        if ((int32_t)ebp > 6) goto L_10204325;
    COW_AT(102042f1)
        wr32(sp0 - 0x2cu, 1u);
        wr32(sp0 - 0x30u, 1u);
        wr32(sp0 - 0x34u, ebp);
        wr32(sp0 - 0x38u, sp0 - 8u);
        g->ebx = 0u;
        g->edi = edi;
        g->esp = sp0 - 0x28u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, ebp, 1u, 1u);
        wr32(sp0 - 0x2cu, edi - 0x7au);
        t18 = rd32(sp0 - 6u);
        wr32(sp0 - 0x30u, t18);
        t19 = rd32(sp0 - 8u);
        wr32(sp0 - 0x34u, t19);
        g->ebx = 0u;
        g->eax = t18;
        g->edx = edi - 0x7au;
        t20 = cow_thiscall(g, COW_IMG(0x10202530u), self, 3, t19, t18, edi - 0x7au);
        t21 = g->edx;
        if (rd8(edi + 0x7cu) != 0u)
        {
            eax = (t20 & 0xffffff00u) | rd8(edi + 0x7cu);
            edx = t21;
            ebp = ebp + 1u;
            edi = edi + 0x7cu;
            goto L_102042ec;
        }
        eax = (t20 & 0xffffff00u) | rd8(edi + 0x7cu);
    }
L_10204325: ;
    COW_AT(10204325)
    wr32(sp0 - 0x2cu, sp0 - 8u);
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x28u;
    t22 = cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, sp0 - 8u);
    t23 = g->edx;
    if (rd8(COW_IMG(0x106643a6u)) == 0u)
    {
        eax = (t22 & 0xffffff00u) | rd8(COW_IMG(0x106643a6u));
        edx = t23;
    }
    else
    {
    COW_AT(1020433b)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x80808080u);
        t24 = (uint32_t)(int16_t)rd16(sp0 - 6u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x24u)) >> 0x1fu)) >> 1u);
        wr32(sp0 - 0x38u, t24);
        t25 = (uint32_t)(int16_t)rd16(sp0 - 8u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x20u)) >> 0x1fu)) >> 1u);
        wr32(sp0 - 0x3cu, t25);
        g->eax = (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x4cu) + 0x20u)) >> 0x1fu)) >> 1u);
        g->edx = t25;
        t26 = rd16(rd32(self + 0x4cu) + 0x22u);
        t27 = rd16(rd32(self + 0x4cu) + 0x20u);
        g->esp = sp0 - 0x28u;
        t28 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x4cu), 5, t25, t24, 0x80808080u, 0u, 0u);
        t29 = g->edx;
        eax = t28;
        edx = t29;
    }
    COW_AT(10204378)
    if (rd32(COW_IMG(0x10578214u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10578214u));
    COW_AT(10204382)
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t30 = cow_stdcall(g, COW_IMG(0x1013eff0u), 0);
        if ((uint8_t)t30 != 0u)
        {
    COW_AT(1020438b)
            wr32(sp0 - 0x2cu, 0u);
            wr32(sp0 - 0x30u, 0u);
            wr32(sp0 - 0x34u, 0x80808080u);
            t31 = (uint32_t)(int16_t)rd16(sp0 - 6u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x24u)) >> 0x1fu)) >> 1u);
            wr32(sp0 - 0x38u, t31);
            t32 = (uint32_t)(int16_t)rd16(sp0 - 8u) + (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x20u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x22u) - (uint32_t)(int16_t)rd16(rd32(self + 0x50u) + 0x20u)) >> 0x1fu)) >> 1u);
            wr32(sp0 - 0x3cu, t32);
            g->esp = sp0 - 0x28u;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x50u), 5, t32, t31, 0x80808080u, 0u, 0u);
        }
    }
    COW_AT(102043c8)
    if (rd32(rd32(COW_IMG(0x10578484u)) + 0x74u) == 0u)
    {
        eax = rd32(COW_IMG(0x10578484u));
    }
    else
    {
    COW_AT(102043d2)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x80808080u);
        t33 = (uint32_t)(int16_t)rd16(sp0 - 6u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x24u)) >> 0x1fu)) >> 1u);
        wr32(sp0 - 0x38u, t33);
        t34 = (uint32_t)(int16_t)rd16(sp0 - 4u) + (uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x20u) * 2u - (uint32_t)(int16_t)rd16(rd32(self + 0x54u) + 0x22u) * 2u;
        wr32(sp0 - 0x3cu, t34);
        g->eax = (uint32_t)(int16_t)rd16(sp0 - 4u);
        t35 = rd16(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        t36 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x54u), 5, t34, t33, 0x80808080u, 0u, 0u);
        eax = t36;
    }
    COW_AT(1020440b)
    if (rd32(COW_IMG(0x10663490u)) != 0u)
    {
    COW_AT(10204413)
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x80808080u);
        t37 = (uint32_t)(int16_t)rd16(sp0 - 6u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x24u) - (uint32_t)((int32_t)((uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x26u) - (uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x24u)) >> 0x1fu)) >> 1u);
        wr32(sp0 - 0x38u, t37);
        t38 = (uint32_t)(int16_t)rd16(sp0 - 4u) + (uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x20u) - (uint32_t)(int16_t)rd16(rd32(self + 0x58u) + 0x22u);
        wr32(sp0 - 0x3cu, t38);
        g->eax = (uint32_t)(int16_t)rd16(sp0 - 4u);
        t39 = rd16(sp0 - 4u);
        g->esp = sp0 - 0x28u;
        t40 = cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x58u), 5, t38, t37, 0x80808080u, 0u, 0u);
        eax = t40;
    }
    COW_AT(1020444b)
    t41 = rd32(sp0 - 6u) - 6u;
    wr32(sp0 - 0x2cu, t41);
    t42 = rd32(sp0 - 8u) - 0x1cu;
    wr32(sp0 - 0x30u, t42);
    g->esp = sp0 - 0x28u;
    cow_call_regs(g, COW_IMG(0x10202410u), eax, g->ecx, g->edx, 0, 2, t42, t41);
    t43 = (uint32_t)(int16_t)rd16(self + 0x3cu);
    wr32(sp0 - 0x10u, t43);
    wr32(sp0 - 0x2cu, 0xb4u);
    t44 = rd16(self + 0x3eu);
    t45 = rd32(COW_IMG(0x10621940u));
    t46 = rd32(COW_IMG(0x1062193cu));
    t47 = rd16(rd32(COW_IMG(0x1062193cu)) + 0x44u);
    wr16(sp0 - 0x18u, (uint16_t)t44);
    g->ecx = t45;
    t48 = cow_call_regs(g, COW_IMG(0x10193850u), (t43 & 0xffff0000u) | t44, g->ecx, g->edx, 1, 1, 0xb4u);
    t49 = g->ecx;
    if (rd32(COW_IMG(0x10621940u)) == 0u)
    {
        edi = (uint32_t)(int16_t)t47;
        goto L_102044d5;
    }
    eax = rd32(COW_IMG(0x10621940u));
    ecx = (t49 & 0xffffff00u) | t48 == 2u;
    ebx = t45 + 0x40u;
    edi = (uint32_t)(int16_t)t47;
    COW_AT(102044a4)
    if (rd32(eax + 8u) == 0u) goto L_102044d5;
    COW_AT(102044b0)
    if ((uint8_t)ecx == 0u)
    {
    COW_AT(102044c3)
        if ((int32_t)edi < (int16_t)rd16(ebx + 4u))
        {
            eax = (uint32_t)(int16_t)rd16(ebx + 4u);
    COW_AT(102044cb)
            edi = eax;
        }
    COW_AT(102044cd)
        ebx = rd32(sp0 - 0x18u);
        ebp = 0u;
    }
    else
    {
    COW_AT(102044b4)
        ebp = (uint32_t)(int16_t)rd16(ebx + 4u) - (uint32_t)(int16_t)rd16(ebx);
        ebx = rd32(sp0 - 0x18u);
    }
L_102044d9: ;
    COW_AT(102044d9)
    t50 = (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
    if ((int32_t)(t50 - (ebp + edi)) <= (int32_t)((uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u))
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
        ecx = t50;
        edx = ebp + edi;
    COW_AT(10204501)
        if ((int32_t)(ecx - edi) <= (int32_t)eax)
        {
    COW_AT(1020451f)
            if ((int32_t)ecx > (int32_t)edi)
            {
    COW_AT(10204527)
                if ((int32_t)ecx >= (int32_t)edx)
                {
    COW_AT(10204531)
                    edi = edx - eax;
                    edx = edx - eax;
                }
                else
                {
    COW_AT(1020452b)
                    edi = ecx - eax;
                }
            }
            else
            {
    COW_AT(10204523)
                edi = edi - eax;
            }
    COW_AT(10204535)
            if ((int16_t)rd16(self + 0x3cu) < (int16_t)ebx)
            {
                eax = (eax & 0xffff0000u) | rd16(self + 0x3cu);
            }
            else
            {
    COW_AT(1020453e)
                eax = ebx;
            }
    COW_AT(10204540)
            ebp = (uint32_t)(int16_t)eax;
        }
        else
        {
    COW_AT(10204509)
            if ((int32_t)ecx >= (int32_t)edx)
            {
    COW_AT(10204516)
                ebp = (uint32_t)(int16_t)ebx;
                edi = edx - eax;
                edx = edx - eax;
            }
            else
            {
    COW_AT(1020450d)
                ebp = (uint32_t)(int16_t)ebx;
                edi = ecx - eax;
            }
        }
    }
    else
    {
        eax = (uint32_t)(int16_t)rd16(sp0 - 4u) - (uint32_t)(int16_t)rd16(sp0 - 8u) - 8u;
        ecx = t50;
        edx = ebp + edi;
    COW_AT(102044f6)
        ebp = (uint32_t)(int16_t)rd16(sp0 - 2u);
        edi = ecx - eax;
    }
    COW_AT(10204543)
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0u);
    wr32(sp0 - 0x34u, 8u);
    t51 = rd16(self + 0x3cu);
    wr16(self + 0x5cu, (uint16_t)edi);
    wr16(self + 0x5eu, (uint16_t)t51);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = (edx & 0xffff0000u) | t51;
    g->esp = sp0 - 0x28u;
    t52 = cow_thiscall(g, COW_IMG(0x1015ed10u), COW_IMG(0x10621838u), 3, 8u, 0u, 0u);
    t53 = g->edx;
    if ((uint8_t)t52 != 0u)
    {
        eax = t52;
        edx = t53;
        goto L_10204591;
    }
    eax = t52;
    edx = t53;
    ebp = ebp - 0x17u;
    COW_AT(10204568)
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t54 = cow_call_regs(g, COW_IMG(0x10202960u), eax, self, g->edx, 0, 2, edi, ebp);
    t55 = g->edx;
    if ((uint8_t)t54 == 0u)
    {
        eax = t54;
        edx = t55;
    }
    else
    {
        eax = t54;
        edx = t55;
    COW_AT(10204573)
        wr16(self + 0x5eu, (uint16_t)ebp);
        ebp = ebp - 0x10u;
    }
    COW_AT(1020457a)
    wr32(sp0 - 0x2cu, ebp);
    wr32(sp0 - 0x30u, edi);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t56 = cow_call_regs(g, COW_IMG(0x10202a40u), eax, self, g->edx, 0, 2, edi, ebp);
    t57 = g->edx;
    if ((uint8_t)t56 == 0u)
    {
        eax = t56;
        edx = t57;
        goto L_10204591;
    }
    eax = t56;
    edx = t57;
    COW_AT(10204589)
    wr32(sp0 - 0x2cu, ebp);
    wr16(self + 0x5eu, (uint16_t)ebp);
    wr32(sp0 - 0x30u, edi);
    loc_2c = ebp;
    loc_30 = edi;
L_10204595: ;
    COW_AT(10204595)
    wr32(sp0 - 0x34u, 0u);
    g->edi = edi;
    g->eax = eax;
    g->esp = sp0 - 0x28u;
    t58 = cow_fastcall(g, COW_IMG(0x10202110u), self, edx, 3, 0u, loc_30, loc_2c);
    t59 = g->ecx;
    t60 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd16(COW_IMG(0x106218bau)) - rd16(COW_IMG(0x106218b6u))) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x10u, t60);
    d61 = fr(g, fr(g, (double)rdf32(COW_IMG(0x1033b10cu)) * (double)(int32_t)t60) + (double)(int32_t)t60);
    fpush(g, d61);
    t62 = cow_call_regs(g, COW_IMG(0x10311c6cu), t60, g->ecx, g->edx, 1, 0);
    wr32(sp0 - 0x2cu, t62);
    t63 = (uint32_t)((int32_t)((uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) - (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu)) >> 1u);
    wr32(sp0 - 0x10u, t63);
    g->edx = (uint32_t)((int32_t)(uint32_t)(int16_t)(rd32(COW_IMG(0x106218b8u)) - rd32(COW_IMG(0x106218b4u))) >> 0x1fu);
    t64 = rd32(COW_IMG(0x106218b8u));
    t65 = rd32(COW_IMG(0x106218b4u));
    fpush(g, (double)(int32_t)t63);
    g->esp = sp0 - 0x2cu;
    t66 = cow_call_regs(g, COW_IMG(0x10311c6cu), t63, g->ecx, g->edx, 1, 0);
    t67 = g->edx;
    wr32(sp0 - 0x30u, t66);
    g->edx = t67;
    g->esp = sp0 - 0x28u;
    t68 = cow_call_regs(g, COW_IMG(0x10202af0u), t66, self, g->edx, 0, 2, t66, rd32(sp0 - 0x2cu));
    t69 = g->edx;
    g->ebx = rd32(sp0 - 0x1cu);
    g->esi = rd32(sp0 - 0x24u);
    g->edi = rd32(sp0 - 0x28u);
    g->ebp = rd32(sp0 - 0x20u);
    g->edx = t69;
    return t68;
L_102044d5: ;
    COW_AT(102044d5)
    ebx = rd32(sp0 - 0x10u);
    ebp = 0u;
    goto L_102044d9;
L_10204591: ;
    COW_AT(10204591)
    wr32(sp0 - 0x2cu, 0xffffffffu);
    wr32(sp0 - 0x30u, 0xffffffffu);
    loc_2c = 0xffffffffu;
    loc_30 = 0xffffffffu;
    goto L_10204595;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102041d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102041e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x28u, in_edi);
        (void)sp0;
        return 1;
    }
    case 0x102042c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102042e7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        g->ebp = 1u;
        (void)sp0;
        return 1;
    }
    case 0x102042ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102042f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10204325u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x28u);
        in_esi = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 0x20u);
        in_ebx = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020433bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        wr32(sp0 - 0x2cu, sp0 - 8u);
        (void)sp0;
        return 1;
    }
    case 0x10204378u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10204382u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020438bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102043c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102043d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020440bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10204413u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1020444bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044a4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102044b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044b4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044c3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044cbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044cdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044d5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->ebp = 0u;
        (void)sp0;
        return 1;
    }
    case 0x102044d9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x102044f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204501u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204509u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1020450du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204516u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1020451fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204523u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204527u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1020452bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204531u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204535u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1020453eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204540u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204543u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204568u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10204573u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x1020457au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        (void)sp0;
        return 1;
    }
    case 0x10204589u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x28u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10204591u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x28u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10204595u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_2c;
        uint32_t loc_30;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_30 = rd32(sp0 - 0x30u);
        loc_2c = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102041d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102041d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
