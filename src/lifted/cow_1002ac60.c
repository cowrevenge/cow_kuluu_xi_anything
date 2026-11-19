/* f_0x1002ac60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1002ac60(Guest* g)
{
    double d11;
    double d12;
    double d21;
    double d26;
    double d4;
    double d40;
    double d58;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_108;
    uint32_t loc_110;
    double loc_110_f;
    uint32_t loc_128;
    uint32_t loc_12c;
    uint32_t loc_130;
    uint32_t loc_f8;
    uint32_t t1;
    uint32_t t10;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t25;
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
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t64;
    uint32_t t65;
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
    uint32_t t75;
    uint32_t t76;
    uint32_t t77;
    uint32_t t78;
    uint32_t t79;
    uint32_t t8;
    uint32_t t80;
    uint32_t t81;
    uint32_t t82;
    uint32_t t83;
    uint32_t t84;
    uint32_t t85;
    uint32_t t86;
    uint32_t t87;
    uint32_t t88;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 356u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x1002aca3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_128 = rd32(sp0 - 0x128u); in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1002aca3;
    case 0x1002aca8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_128 = rd32(sp0 - 0x128u); in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1002aca8;
    case 0x1002acb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_128 = rd32(sp0 - 0x128u); in_edi = rd32(sp0 - 0x120u); in_esi = rd32(sp0 - 0x11cu); in_ebp = rd32(sp0 - 0x118u); in_ebx = rd32(sp0 - 0x114u); g->ebp = rd32(sp0 - 0x118u); g->ebx = rd32(sp0 - 0x114u); g->edi = rd32(sp0 - 0x120u); g->esi = rd32(sp0 - 0x11cu); goto E_1002acb6;
    case 0x1002ad6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_110_f = rdf32(sp0 - 0x110u); goto E_1002ad6d;
    case 0x1002adb3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_110_f = rdf32(sp0 - 0x110u); goto E_1002adb3;
    case 0x1002ae13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae13;
    case 0x1002ae18u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae18;
    case 0x1002ae1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae1d;
    case 0x1002ae22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae22;
    case 0x1002ae27u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae27;
    case 0x1002ae2cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae2c;
    case 0x1002ae31u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae31;
    case 0x1002ae36u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae36;
    case 0x1002ae3bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae3b;
    case 0x1002ae40u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae40;
    case 0x1002ae45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae45;
    case 0x1002ae4au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae4a;
    case 0x1002ae4fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae4f;
    case 0x1002ae54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae54;
    case 0x1002ae59u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae59;
    case 0x1002ae5eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae5e;
    case 0x1002ae63u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae63;
    case 0x1002ae68u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae68;
    case 0x1002ae6du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae6d;
    case 0x1002ae72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae72;
    case 0x1002ae77u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae77;
    case 0x1002ae7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae7c;
    case 0x1002ae81u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae81;
    case 0x1002ae86u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae86;
    case 0x1002ae8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae8b;
    case 0x1002ae96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_f8 = rd32(sp0 - 0xf8u); goto E_1002ae96;
    case 0x1002aea2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_110 = rd32(sp0 - 0x110u); loc_f8 = rd32(sp0 - 0xf8u); goto E_1002aea2;
    case 0x1002aebau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002aeba;
    case 0x1002aec7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002aec7;
    case 0x1002aed1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; goto E_1002aed1;
    case 0x1002aed8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1002aed8;
    case 0x1002aef2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_128 = rd32(sp0 - 0x128u); goto E_1002aef2;
    case 0x1002af06u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_128 = rd32(sp0 - 0x128u); goto E_1002af06;
    case 0x1002af8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1002af8a;
    case 0x1002af96u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1002af96;
    case 0x1002afb6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002afb6;
    case 0x1002afbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_108 = rd32(sp0 - 0x108u); goto E_1002afbd;
    case 0x1002afd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002afd9;
    case 0x1002afedu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002afed;
    case 0x1002b0e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); goto E_1002b0e6;
    case 0x1002b0fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_130 = rd32(sp0 - 0x130u); loc_12c = rd32(sp0 - 0x12cu); loc_128 = rd32(sp0 - 0x128u); loc_108 = rd32(sp0 - 0x108u); goto E_1002b0fa;
    case 0x1002b118u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002b118;
    case 0x1002b125u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_1002b125;
    default: break;
    }
#endif

    COW_AT(1002ac60)
    wr32(sp0 - 0x114u, in_ebx);
    wr32(sp0 - 0x118u, in_ebp);
    wr32(sp0 - 0x11cu, in_esi);
    wr32(sp0 - 0x120u, in_edi);
    wr32(sp0 - 0x124u, sp0 - 0x90u);
    wr32(sp0 - 0x128u, 3u);
    wr32(sp0 - 0xb4u, self);
    wr8(sp0 - 0x10au, 3u);
    wr8(sp0 - 0x109u, 7u);
    g->eax = sp0 - 0x90u;
    g->edx = in_edx;
    g->esp = sp0 - 0x120u;
    t1 = cow_thiscall(g, COW_IMG(0x1002a750u), self, 2, 3u, sp0 - 0x90u);
    t2 = g->edx;
    wr32(sp0 - 0x124u, sp0 - 0xf4u);
    wr32(sp0 - 0x128u, 4u);
    cow_thiscall(g, COW_IMG(0x1002a750u), self, 2, 4u, sp0 - 0xf4u);
    t3 = g->ecx;
    if (arg2 == 5u)
    {
        ecx = t3;
        goto L_1002aca8;
    }
    ecx = t3;
    COW_AT(1002aca3)
    if (arg2 != 0x55u) goto L_1002acb6;
L_1002aca8: ;
    COW_AT(1002aca8)
    d4 = fr(g, (double)rdf32(sp0 - 0xf0u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0xf0u, (float)(double)(float)d4);
L_1002acb6: ;
    COW_AT(1002acb6)
    wr32(sp0 - 0x124u, sp0 - 0x90u);
    wr32(sp0 - 0x128u, sp0 - 0xf4u);
    g->eax = sp0 - 0xf4u;
    g->edx = sp0 - 0x90u;
    g->esp = sp0 - 0x120u;
    t5 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, sp0 - 0xf4u, sp0 - 0x90u);
    t6 = g->edx;
    wr32(sp0 - 0x12cu, sp0 - 0xf4u);
    g->ecx = sp0 - 0xf4u;
    g->esp = sp0 - 0x128u;
    cow_call_regs(g, COW_IMG(0x100274b0u), t5, g->ecx, g->edx, 1, 1, sp0 - 0xf4u);
    t7 = g->ecx;
    wr32(sp0 - 0x130u, sp0 - 0x90u);
    wr32(sp0 - 0x134u, self + 0xb0u);
    wr32(sp0 - 0x138u, sp0 - 0xb0u);
    g->eax = sp0 - 0xb0u;
    g->esp = sp0 - 0x12cu;
    t8 = cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xb0u, self + 0xb0u, sp0 - 0x90u);
    wr32(sp0 - 0x13cu, sp0 - 0xb0u);
    wr32(sp0 - 0x140u, sp0 - 0xb0u);
    g->ecx = sp0 - 0xb0u;
    g->edx = sp0 - 0xb0u;
    g->esp = sp0 - 0x138u;
    cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xb0u, sp0 - 0xb0u);
    t9 = g->ecx;
    t10 = g->edx;
    d11 = cow_take_float(g);
    wr32(sp0 - 0x144u, sp0 - 0xb0u);
    d12 = (double)(float)fr(g, sqrt(d11));
    wrf32(sp0 - 0x108u, (float)d12);
    g->esp = sp0 - 0x140u;
    t13 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xb0u, g->ecx, g->edx, 1, 1, sp0 - 0xb0u);
    wr32(sp0 - 0x148u, sp0 - 0xb0u);
    wr32(sp0 - 0x14cu, sp0 - 0x104u);
    g->esp = sp0 - 0x144u;
    cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0x104u, sp0 - 0xb0u);
    wr32(sp0 - 0x150u, sp0 - 0x90u);
    wr32(sp0 - 0x154u, arg1);
    wr32(sp0 - 0x158u, sp0 - 0xa0u);
    g->ecx = arg1;
    g->edx = sp0 - 0xa0u;
    g->esp = sp0 - 0x14cu;
    cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xa0u, arg1, sp0 - 0x90u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x15cu, sp0 - 0xa0u);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x158u;
    t16 = cow_call_regs(g, COW_IMG(0x100274b0u), sp0 - 0xa0u, g->ecx, g->edx, 1, 1, sp0 - 0xa0u);
    t17 = g->ecx;
    t18 = g->edx;
    g->ecx = t17;
    g->esp = sp0 - 0x120u;
    t19 = cow_call_regs(g, COW_IMG(0x10014cf0u), t16, g->ecx, g->edx, 1, 0);
    t20 = g->ecx;
    d21 = cow_take_float(g);
    wrf32(sp0 - 0x110u, (float)(double)(float)d21);
    if ((cow_fsw(g, d21, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) != 0u)
    {
        ecx = t20;
        goto L_1002adb3;
    }
    loc_110_f = (double)(float)d21;
L_1002ad6d: ;
    COW_AT(1002ad6d)
    wr32(sp0 - 0x124u, 0x3d000000u);
    wr32(sp0 - 0x128u, sp0 - 0x104u);
    wr32(sp0 - 0x12cu, sp0 - 0xa0u);
    wr32(sp0 - 0x130u, sp0 - 0x104u);
    g->eax = sp0 - 0x104u;
    g->edx = sp0 - 0xa0u;
    g->esp = sp0 - 0x120u;
    t22 = cow_cdecl(g, COW_IMG(0x100276a0u), 4, sp0 - 0x104u, sp0 - 0xa0u, sp0 - 0x104u, 0x3d000000u);
    t23 = g->edx;
    wr32(sp0 - 0x134u, sp0 - 0x104u);
    g->ecx = sp0 - 0x104u;
    g->esp = sp0 - 0x130u;
    t24 = cow_call_regs(g, COW_IMG(0x100274b0u), t22, g->ecx, g->edx, 1, 1, sp0 - 0x104u);
    t25 = g->ecx;
    d26 = fr(g, (double)rdf32(sp0 - 0x110u) - (double)rdf32(COW_IMG(0x1032961cu)));
    wrf32(sp0 - 0x110u, (float)(double)(float)d26);
    if ((cow_fsw(g, d26, (double)rdf32(COW_IMG(0x103295d8u)), 0u) & 0x4100u) == 0u)
    {
        loc_110_f = (double)(float)d26;
        goto L_1002ad6d;
    }
    ecx = t25;
L_1002adb3: ;
    COW_AT(1002adb3)
    wr32(sp0 - 0x124u, sp0 - 0x104u);
    wr32(sp0 - 0x128u, sp0 - 0xb0u);
    g->eax = sp0 - 0xb0u;
    g->esp = sp0 - 0x120u;
    t27 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, sp0 - 0xb0u, sp0 - 0x104u);
    t28 = rd32(sp0 - 0x108u);
    wr32(sp0 - 0x12cu, t28);
    wr32(sp0 - 0x130u, sp0 - 0x104u);
    g->edx = sp0 - 0x104u;
    g->esp = sp0 - 0x128u;
    cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x104u, t28);
    t29 = g->edx;
    wr32(sp0 - 0x134u, sp0 - 0x90u);
    wr32(sp0 - 0x138u, sp0 - 0x104u);
    g->esp = sp0 - 0x130u;
    cow_cdecl(g, COW_IMG(0x10026f20u), 2, sp0 - 0x104u, sp0 - 0x90u);
    t30 = rd32(self + 0xbcu);
    wr32(sp0 - 0xf8u, t30);
    t31 = rd32(sp0 - 0x104u);
    t32 = rd32(sp0 - 0x100u);
    t33 = rd32(sp0 - 0xfcu);
    wr32(self + 0xb0u, t31);
    wr32(self + 0xb4u, t32);
    wr32(self + 0xb8u, t33);
    if (arg2 == 5u)
    {
        eax = t31;
        edx = t33;
        loc_f8 = t30;
        goto L_1002ae96;
    }
    eax = t31;
    edx = t33;
    loc_f8 = t30;
    COW_AT(1002ae13)
    if (arg2 == 0x55u) goto L_1002ae96;
    COW_AT(1002ae18)
    if (arg2 == 0x2fu) goto L_1002ae96;
    COW_AT(1002ae1d)
    if (arg2 == 0x3fu) goto L_1002ae96;
    COW_AT(1002ae22)
    if (arg2 == 0x40u) goto L_1002ae96;
    COW_AT(1002ae27)
    if (arg2 == 0x41u) goto L_1002ae96;
    COW_AT(1002ae2c)
    if (arg2 == 0x42u) goto L_1002ae96;
    COW_AT(1002ae31)
    if (arg2 == 0x43u) goto L_1002ae96;
    COW_AT(1002ae36)
    if (arg2 == 0x44u) goto L_1002ae96;
    COW_AT(1002ae3b)
    if (arg2 == 0x45u) goto L_1002ae96;
    COW_AT(1002ae40)
    if (arg2 == 0x46u) goto L_1002ae96;
    COW_AT(1002ae45)
    if (arg2 == 0x47u) goto L_1002ae96;
    COW_AT(1002ae4a)
    if (arg2 == 0x48u) goto L_1002ae96;
    COW_AT(1002ae4f)
    if (arg2 == 0x49u) goto L_1002ae96;
    COW_AT(1002ae54)
    if (arg2 == 0x4au) goto L_1002ae96;
    COW_AT(1002ae59)
    if (arg2 == 0x4bu) goto L_1002ae96;
    COW_AT(1002ae5e)
    if (arg2 == 0x4cu) goto L_1002ae96;
    COW_AT(1002ae63)
    if (arg2 == 0x4du) goto L_1002ae96;
    COW_AT(1002ae68)
    if (arg2 == 0x4eu) goto L_1002ae96;
    COW_AT(1002ae6d)
    if (arg2 == 0x4fu) goto L_1002ae96;
    COW_AT(1002ae72)
    if (arg2 == 0x50u) goto L_1002ae96;
    COW_AT(1002ae77)
    if (arg2 == 0x51u) goto L_1002ae96;
    COW_AT(1002ae7c)
    if (arg2 == 0x52u) goto L_1002ae96;
    COW_AT(1002ae81)
    if (arg2 == 0x53u) goto L_1002ae96;
    COW_AT(1002ae86)
    if (arg2 == 0x30u) goto L_1002ae96;
    COW_AT(1002ae8b)
    wr32(sp0 - 0x110u, 2u);
    ebp = 2u;
    loc_110 = 2u;
L_1002aea2: ;
    COW_AT(1002aea2)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t34 = cow_thiscall(g, COW_IMG(0x10027990u), sp0 - 0x40u, 0);
    t35 = g->edx;
    eax = t34;
    edx = t35;
    ebx = 2u;
    esi = sp0 - 0x70u;
L_1002aeba: ;
    COW_AT(1002aeba)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t36 = cow_thiscall(g, COW_IMG(0x10032a40u), esi, 0);
    t37 = g->edx;
    if (ebx != 1u)
    {
        eax = t36;
        edx = t37;
        ebx = ebx - 1u;
        esi = esi + 0x10u;
        goto L_1002aeba;
    }
    eax = t36;
    edx = t37;
    COW_AT(1002aec7)
    if ((int32_t)ebp <= 0)
    {
        loc_128 = sp0 - 0xb0u;
        loc_130 = sp0 - 0x104u;
        loc_12c = rd32(sp0 - 0x12cu);
    }
    else
    {
    COW_AT(1002aed1)
        ebx = sp0 - 0x70u;
        esi = 0u;
        loc_128 = sp0 - 0xb0u;
        loc_130 = sp0 - 0x104u;
        loc_12c = rd32(sp0 - 0x12cu);
L_1002aed8: ;
    COW_AT(1002aed8)
        wr32(sp0 - 0x124u, esi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t38 = cow_thiscall(g, COW_IMG(0x10035270u), self + 8u, 1, esi);
        t39 = g->edx;
        if ((double)rdf32(t38) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            ecx = t38;
            goto L_1002af06;
        }
        eax = (t38 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(t38), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t38;
        edx = t39;
        loc_128 = rd32(sp0 - 0x128u);
        loc_130 = rd32(sp0 - 0x130u);
    COW_AT(1002aef2)
        d40 = (double)rdf32(ecx + 4u);
        if (d40 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d40, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            loc_12c = rd32(sp0 - 0x12cu);
            goto L_1002af8a;
        }
L_1002af06: ;
    COW_AT(1002af06)
        wr32(sp0 - 0x124u, ecx);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x12cu, sp0 - 0xf4u);
        wr32(sp0 - 0x130u, sp0 - 0xa0u);
        g->esp = sp0 - 0x120u;
        cow_stdcall(g, COW_IMG(0x1002b140u), 4, sp0 - 0xa0u, sp0 - 0xf4u, sp0 - 0xb0u, ecx);
        t41 = rd32(sp0 - 0xf8u);
        wr32(sp0 - 0x124u, t41);
        wr32(sp0 - 0x128u, sp0 - 0xa0u);
        wr32(sp0 - 0x12cu, sp0 - 0xf4u);
        cow_thiscall(g, COW_IMG(0x10033360u), ebx, 3, sp0 - 0xf4u, sp0 - 0xa0u, t41);
        wr32(sp0 - 0xe4u, rd32(ebx));
        t42 = rd32(ebx + 4u);
        wr32(sp0 - 0xe0u, t42);
        t43 = rd32(ebx + 8u);
        wr32(sp0 - 0xdcu, t43);
        t44 = rd32(ebx + 0xcu);
        wr32(sp0 - 0xd8u, t44);
        g->edx = t44;
        cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0xe4u, 0);
        t45 = g->edx;
        wr32(sp0 - 0x124u, sp0 - 0x40u);
        g->eax = sp0 - 0x40u;
        g->edx = t45;
        t46 = cow_thiscall(g, COW_IMG(0x10032fe0u), sp0 - 0xe4u, 1, sp0 - 0x40u);
        t47 = g->edx;
        wr32(sp0 - 0x124u, sp0 - 0xb0u);
        g->edx = t47;
        t48 = cow_thiscall(g, COW_IMG(0x10028290u), sp0 - 0x40u, 1, sp0 - 0xb0u);
        t49 = g->edx;
        g->edx = t49;
        t50 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t51 = g->edx;
        eax = t50;
        edx = t51;
        loc_128 = sp0 - 0xa0u;
        loc_130 = sp0 - 0xa0u;
        loc_12c = sp0 - 0xf4u;
L_1002af8a: ;
    COW_AT(1002af8a)
        if ((int32_t)(esi + 1u) < (int32_t)ebp)
        {
            ebx = ebx + 0x10u;
            esi = esi + 1u;
            goto L_1002aed8;
        }
    }
    COW_AT(1002af96)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t52 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xc4u, 0);
    t53 = g->edx;
    g->edx = t53;
    t54 = cow_thiscall(g, COW_IMG(0x10032a40u), sp0 - 0xd4u, 0);
    t55 = g->edx;
    wr32(sp0 - 0x108u, 0u);
    if ((int32_t)ebp <= 0)
    {
        eax = t54;
        edx = t55;
    }
    else
    {
        eax = t54;
        edx = t55;
    COW_AT(1002afb6)
        ebx = 0u;
        ebp = sp0 - 0x70u;
        edi = self;
        loc_108 = 0u;
        loc_128 = rd32(sp0 - 0x128u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = rd32(sp0 - 0x130u);
L_1002afbd: ;
    COW_AT(1002afbd)
        wr32(sp0 - 0x124u, ebx);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x120u;
        t56 = cow_thiscall(g, COW_IMG(0x10035270u), edi + 8u, 1, ebx);
        t57 = g->edx;
        if ((double)rdf32(t56) != (double)rdf32(COW_IMG(0x103295d8u)))
        {
            eax = (t56 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(t56), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
            esi = edi + 8u;
            goto L_1002afed;
        }
        eax = (t56 & 0xffff0000u) | (uint16_t)cow_fsw(g, (double)rdf32(t56), (double)rdf32(COW_IMG(0x103295d8u)), 0u);
        ecx = t56;
        edx = t57;
        esi = edi + 8u;
    COW_AT(1002afd9)
        d58 = (double)rdf32(ecx + 4u);
        if (d58 == (double)rdf32(COW_IMG(0x103295d8u)))
        {
            loc_128 = rd32(sp0 - 0x128u);
            loc_12c = rd32(sp0 - 0x12cu);
            loc_130 = rd32(sp0 - 0x130u);
            goto L_1002b0e6;
        }
        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d58, (double)rdf32(COW_IMG(0x103295d8u)), 0u);
L_1002afed: ;
    COW_AT(1002afed)
        t59 = (uint32_t)(int8_t)rd8(ebx + sp0 - 0x10au);
        wr32(sp0 - 0x124u, t59);
        g->eax = eax;
        g->edx = t59;
        g->esp = sp0 - 0x120u;
        t60 = cow_thiscall(g, COW_IMG(0x1002a9b0u), edi, 1, t59);
        t61 = g->edx;
        wr32(sp0 - 0x124u, t60);
        t62 = cow_thiscall(g, COW_IMG(0x10035390u), esi, 1, t60);
        t63 = rd32(edi + 0x14u);
        esi = t62 * 0x40u + rd32(edi + 0x14u);
        edi = sp0 - 0x160u;
        ecx = 0x10u;
        while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        cow_call_regs(g, COW_IMG(0x10032e70u), t62, sp0 - 0xc4u, g->edx, 0, 16, rd32(sp0 - 0x160u), sp0 - 0xa0u, sp0 - 0xa0u, rd32(sp0 - 0x154u), sp0 - 0x90u, sp0 - 0x104u, sp0 - 0xb0u, sp0 - 0xb0u, sp0 - 0xb0u, sp0 - 0xb0u, sp0 - 0x104u, sp0 - 0x90u, rd32(sp0 - 0x130u), rd32(sp0 - 0x12cu), rd32(sp0 - 0x128u), rd32(sp0 - 0x124u));
        t64 = rd32(sp0 - 0xc4u);
        wr32(sp0 - 0xd4u, t64);
        t65 = rd32(sp0 - 0xc0u);
        wr32(sp0 - 0xd0u, t65);
        t66 = rd32(sp0 - 0xbcu);
        wr32(sp0 - 0xccu, t66);
        t67 = rd32(sp0 - 0xb8u);
        wr32(sp0 - 0xc8u, t67);
        cow_thiscall(g, COW_IMG(0x10032e10u), sp0 - 0xd4u, 0);
        wr32(sp0 - 0x124u, sp0 - 0xc4u);
        wr32(sp0 - 0x128u, sp0 - 0xe4u);
        wr32(sp0 - 0x12cu, ebp);
        wr32(sp0 - 0x130u, sp0 - 0x50u);
        g->eax = sp0 - 0x50u;
        g->edx = sp0 - 0xe4u;
        g->esp = sp0 - 0x128u;
        t68 = cow_thiscall(g, COW_IMG(0x10032b50u), sp0 - 0xd4u, 2, sp0 - 0x50u, ebp);
        t69 = g->edx;
        g->esp = sp0 - 0x120u;
        t70 = cow_thiscall(g, COW_IMG(0x10032b50u), t68, 2, sp0 - 0xe4u, sp0 - 0xc4u);
        wr32(ebp, rd32(t70));
        t71 = rd32(t70 + 4u);
        wr32(ebp + 4u, t71);
        t72 = rd32(t70 + 8u);
        wr32(ebp + 8u, t72);
        t73 = rd32(t70 + 0xcu);
        wr32(ebp + 0xcu, t73);
        g->eax = t73;
        g->edx = t72;
        t74 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t75 = g->edx;
        t76 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t77 = COW_IMG(0x1045f030u) + t60 * 0x34u;
        wr32(sp0 - 0x124u, t77);
        wr32(sp0 - 0x128u, sp0 - 0x80u);
        t78 = cow_thiscall(g, COW_IMG(0x10032b50u), ebp, 2, sp0 - 0x80u, t77);
        wr32(t77, rd32(t78));
        t79 = rd32(t78 + 4u);
        wr32(t77 + 4u, t79);
        t80 = rd32(t78 + 8u);
        wr32(t77 + 8u, t80);
        t81 = rd32(t78 + 0xcu);
        wr32(t77 + 0xcu, t81);
        g->edx = t81;
        cow_stdcall(g, COW_IMG(0x10032a70u), 0);
        t82 = g->edx;
        edx = t82;
        ebx = rd32(sp0 - 0x108u);
        edi = rd32(sp0 - 0xb4u);
        loc_128 = sp0 - 0x80u;
        loc_12c = rd32(sp0 - 0x12cu);
        loc_130 = sp0 - 0x50u;
L_1002b0e6: ;
    COW_AT(1002b0e6)
        wr32(sp0 - 0x108u, ebx + 1u);
        if ((int32_t)(ebx + 1u) < (int32_t)rd32(sp0 - 0x110u))
        {
            eax = rd32(sp0 - 0x110u);
            ebp = ebp + 0x10u;
            loc_108 = ebx + 1u;
            ebx = ebx + 1u;
            goto L_1002afbd;
        }
        eax = rd32(sp0 - 0x110u);
    }
    COW_AT(1002b0fa)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t83 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t84 = g->edx;
    g->edx = t84;
    t85 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t86 = g->edx;
    eax = t85;
    edx = t86;
    esi = sp0 - 0x50u;
    edi = 2u;
L_1002b118: ;
    COW_AT(1002b118)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x120u;
    t87 = cow_stdcall(g, COW_IMG(0x10032a70u), 0);
    t88 = g->edx;
    if (edi != 1u)
    {
        eax = t87;
        edx = t88;
        esi = esi - 0x10u;
        edi = edi - 1u;
        goto L_1002b118;
    }
    eax = t87;
    edx = t88;
    COW_AT(1002b125)
    g->esp = sp0 - 0x120u;
    cow_stdcall(g, COW_IMG(0x100279a0u), 0);
    g->ebx = rd32(sp0 - 0x114u);
    g->esi = rd32(sp0 - 0x11cu);
    g->edi = rd32(sp0 - 0x120u);
    g->ebp = rd32(sp0 - 0x118u);
    return;
L_1002ae96: ;
    COW_AT(1002ae96)
    wr32(sp0 - 0x110u, 1u);
    ebp = 1u;
    loc_110 = 1u;
    goto L_1002aea2;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_1002ac60(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x1002aca3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x124u, sp0 - 0xf4u);
        wr32(sp0 - 0xb4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002aca8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x124u, sp0 - 0xf4u);
        wr32(sp0 - 0xb4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002acb6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        uint32_t loc_128;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_128 = rd32(sp0 - 0x128u);
        in_edi = rd32(sp0 - 0x120u);
        in_esi = rd32(sp0 - 0x11cu);
        in_ebp = rd32(sp0 - 0x118u);
        in_ebx = rd32(sp0 - 0x114u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x124u, sp0 - 0xf4u);
        wr32(sp0 - 0xb4u, self);
        (void)sp0;
        return 1;
    }
    case 0x1002ad6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_110_f;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_110_f = rdf32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        g->ebx = self + 0xb0u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x154u, arg1);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x1002adb3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        double loc_110_f;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_110_f = rdf32(sp0 - 0x110u);
        g->esp = sp0 - 0x120u;
        g->ebx = self + 0xb0u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x154u, arg1);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0xb0u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae13u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae18u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae1du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae22u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae27u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae2cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae31u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae36u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae3bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae40u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae45u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae4au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae4fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae54u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae59u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae5eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae63u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae6du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae77u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae7cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae86u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        g->esi = arg2;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae8bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002ae96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002aea2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_110;
        uint32_t loc_f8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_110 = rd32(sp0 - 0x110u);
        loc_f8 = rd32(sp0 - 0xf8u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002aebau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002aec7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002aed1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        g->esp = sp0 - 0x120u;
        g->esi = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x130u, sp0 - 0x104u);
        wr32(sp0 - 0x128u, sp0 - 0xb0u);
        wr32(sp0 - 0x124u, sp0 - 0x104u);
        (void)sp0;
        return 1;
    }
    case 0x1002aed8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002aef2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002af06u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002af8au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002af96u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002afb6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        g->esp = sp0 - 0x120u;
        g->ebx = 0u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        wr32(sp0 - 0x108u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x1002afbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_108;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002afd9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002afedu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002b0e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002b0fau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_108;
        uint32_t loc_128;
        uint32_t loc_12c;
        uint32_t loc_130;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_130 = rd32(sp0 - 0x130u);
        loc_12c = rd32(sp0 - 0x12cu);
        loc_128 = rd32(sp0 - 0x128u);
        loc_108 = rd32(sp0 - 0x108u);
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002b118u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    case 0x1002b125u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x120u;
        wr32(sp0 - 0x15cu, sp0 - 0xa0u);
        wr32(sp0 - 0x158u, sp0 - 0xa0u);
        wr32(sp0 - 0x150u, sp0 - 0x90u);
        wr32(sp0 - 0x14cu, sp0 - 0x104u);
        wr32(sp0 - 0x148u, sp0 - 0xb0u);
        wr32(sp0 - 0x144u, sp0 - 0xb0u);
        wr32(sp0 - 0x140u, sp0 - 0xb0u);
        wr32(sp0 - 0x13cu, sp0 - 0xb0u);
        wr32(sp0 - 0x138u, sp0 - 0x104u);
        wr32(sp0 - 0x134u, sp0 - 0x90u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_1002ac60(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_1002ac60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
