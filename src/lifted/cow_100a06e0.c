/* f_0x100a06e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a06e0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_8;
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
    uint32_t t66;
    uint32_t t67;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100a0700u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); in_ebp = rd32(sp0 - 0x28u); g->ebp = rd32(sp0 - 0x28u); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_100a0700;
    case 0x100a0709u: in_eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_ebx = g->ebx; in_ebp = g->ebp; esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x30u); in_esi = rd32(sp0 - 0x2cu); g->edi = rd32(sp0 - 0x30u); g->esi = rd32(sp0 - 0x2cu); goto E_100a0709;
    case 0x100a0722u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0722;
    case 0x100a0729u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0729;
    case 0x100a0736u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0736;
    case 0x100a073fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100a073f;
    case 0x100a0750u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a0750;
    case 0x100a0759u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100a0759;
    case 0x100a0760u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100a0760;
    case 0x100a0773u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0773;
    case 0x100a077au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100a077a;
    case 0x100a0785u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0785;
    case 0x100a078eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_100a078e;
    case 0x100a079cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a079c;
    case 0x100a07a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_8 = rd32(sp0 - 8u); goto E_100a07a5;
    case 0x100a07acu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a07ac;
    case 0x100a07c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a07c8;
    case 0x100a07f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a07f6;
    case 0x100a07ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_8 = rd32(sp0 - 8u); goto E_100a07ff;
    case 0x100a082du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a082d;
    case 0x100a0872u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0872;
    case 0x100a0876u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0876;
    case 0x100a087eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a087e;
    case 0x100a0896u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0896;
    case 0x100a089au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a089a;
    case 0x100a089fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a089f;
    case 0x100a08a4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08a4;
    case 0x100a08aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a08ae;
    case 0x100a08b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a08b7;
    case 0x100a08bbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08bb;
    case 0x100a08bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08bf;
    case 0x100a08c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08c4;
    case 0x100a08c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08c9;
    case 0x100a08d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08d2;
    case 0x100a08e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08e6;
    case 0x100a08f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08f1;
    case 0x100a08fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a08fb;
    case 0x100a0907u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0907;
    case 0x100a0912u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0912;
    case 0x100a0922u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0922;
    case 0x100a0926u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_18 = rd32(sp0 - 0x18u); goto E_100a0926;
    case 0x100a0962u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0962;
    case 0x100a0980u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0980;
    case 0x100a0989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0989;
    case 0x100a0992u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0992;
    case 0x100a09a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09a8;
    case 0x100a09b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09b6;
    case 0x100a09ceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09ce;
    case 0x100a09dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09dc;
    case 0x100a09f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09f0;
    case 0x100a09feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a09fe;
    case 0x100a0a0cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a0c;
    case 0x100a0a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a16;
    case 0x100a0a1du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a1d;
    case 0x100a0a22u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a22;
    case 0x100a0a2fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a2f;
    case 0x100a0a3du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0a3d;
    case 0x100a0a4du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0a4d;
    case 0x100a0a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0a57;
    case 0x100a0a76u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a76;
    case 0x100a0a9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_20 = rd32(sp0 - 0x20u); loc_1c = rd32(sp0 - 0x1cu); loc_18 = rd32(sp0 - 0x18u); loc_14 = rd32(sp0 - 0x14u); goto E_100a0a9b;
    case 0x100a0aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0aad;
    case 0x100a0ab4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0ab4;
    case 0x100a0ac7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0ac7;
    case 0x100a0aceu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0ace;
    case 0x100a0ad2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0ad2;
    case 0x100a0adcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0adc;
    case 0x100a0afbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_100a0afb;
    default: break;
    }
#endif

    COW_AT(100a06e0)
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    t1 = rd32(sp0 + 0xcu);
    wr8(sp0 - 0x24u, 0u);
    wr8(sp0 - 0x23u, 0u);
    t2 = rd16(t1 + 0x10u);
    wr8(sp0 - 0x22u, 0u);
    if ((uint16_t)t2 < 0x61u)
    {
        esi = t1;
        goto L_100a0709;
    }
    COW_AT(100a0700)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    return in_eax & 0xffffff00u;
L_100a0709: ;
    COW_AT(100a0709)
    t3 = (in_ebp & 0xffff0000u) | rd16(esi + 0xcu);
    wr32(sp0 - 0x34u, (uint16_t)t3);
    g->ecx = (uint16_t)t3;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t4 = cow_call_regs(g, COW_IMG(0x10086fc0u), in_eax, g->ecx, g->edx, 1, 1, (uint16_t)t3);
    t5 = g->ecx;
    t6 = g->edx;
    if ((uint8_t)t4 != 0u)
    {
        ecx = t5;
        edx = t6;
        ebp = t3;
        goto L_100a0729;
    }
    eax = t4;
    edx = t6;
    COW_AT(100a0722)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
L_100a0729: ;
    COW_AT(100a0729)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a073f;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(100a0736)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a073f: ;
    COW_AT(100a073f)
    t7 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t7);
    if (rd32(eax + 0x78u) == rd32(esi + 4u))
    {
        eax = rd32(eax + 0x78u);
        goto L_100a0759;
    }
    eax = rd32(eax + 0x78u);
    edx = rd32(esi + 4u);
    COW_AT(100a0750)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a0759: ;
    COW_AT(100a0759)
    if (rd32(esi + 8u) == 0u) goto L_100a07ac;
    edx = rd32(esi + 8u);
    COW_AT(100a0760)
    t8 = rd16(esi + 0xeu);
    wr32(sp0 - 0x34u, t8);
    g->ecx = t8;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t9 = cow_call_regs(g, COW_IMG(0x10086fc0u), eax, g->ecx, g->edx, 1, 1, t8);
    t10 = g->ecx;
    t11 = g->edx;
    if ((uint8_t)t9 != 0u)
    {
        ecx = t10;
        edx = t11;
        goto L_100a077a;
    }
    eax = t9;
    edx = t11;
    COW_AT(100a0773)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax;
L_100a077a: ;
    COW_AT(100a077a)
    if (rd32(COW_IMG(0x10480af0u) + ecx * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
        goto L_100a078e;
    }
    eax = rd32(COW_IMG(0x10480af0u) + ecx * 4u);
    COW_AT(100a0785)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a078e: ;
    COW_AT(100a078e)
    t12 = rd32(eax + 0x74u);
    wr32(sp0 - 8u, t12);
    if (rd32(eax + 0x78u) == edx)
    {
        ecx = rd32(eax + 0x78u);
        goto L_100a07a5;
    }
    COW_AT(100a079c)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a07a5: ;
    COW_AT(100a07a5)
    wr8(sp0 - 0x24u, 0xfu);
    edi = 0u;
L_100a07c8: ;
    COW_AT(100a07c8)
    wr16(COW_IMG(0x10482f40u), (uint16_t)ebp);
    t14 = rd16(esi + 0xeu);
    wr16(COW_IMG(0x104855aau), (uint16_t)t14);
    t15 = edi + ((edx & 0xffff0000u) | (uint16_t)(rd16(esi + 0x10u) * 2u));
    wr32(sp0 - 0x34u, t15);
    wr32(sp0 - 0x38u, 4u);
    g->eax = eax;
    g->esp = sp0 - 0x30u;
    t16 = cow_call_regs(g, COW_IMG(0x100964a0u), g->eax, g->ecx, t15, 1, 2, 4u, t15);
    t17 = g->edx;
    wr32(sp0 - 8u, t16);
    if (t16 != 0u)
    {
        eax = t16;
        edx = t17;
        loc_8 = t16;
        goto L_100a07ff;
    }
    eax = t16;
    edx = t17;
    COW_AT(100a07f6)
    g->ebx = in_ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return eax & 0xffffff00u;
L_100a07ac: ;
    COW_AT(100a07ac)
    t13 = rd16(COW_IMG(0x10485f7au));
    wr8(sp0 - 0x24u, (uint8_t)(((eax & 0xffffff00u) | ecx != (uint32_t)(int16_t)t13) * 8u + 7u));
    eax = ((eax & 0xffffff00u) | ecx != (uint32_t)(int16_t)t13) * 8u + 7u;
    edx = (uint32_t)(int16_t)t13;
    edi = 1u;
    goto L_100a07c8;
L_100a07ff: ;
    COW_AT(100a07ff)
    wr32(sp0 - 0x34u, 2u);
    t18 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
    wr32(sp0 - 0x38u, t18);
    t19 = rd32(esi + 4u);
    wr32(sp0 - 0x3cu, t19);
    wr8(sp0 - 0x23u, 0u);
    wr8(sp0 - 0x22u, 0u);
    g->eax = t18;
    g->edx = edx;
    g->esp = sp0 - 0x38u;
    t20 = cow_thiscall_cdecl(g, COW_IMG(0x100a1770u), t19, 1, t19);
    t21 = g->ecx;
    t22 = g->edx;
    wr32(sp0 - 0x3cu, t20);
    g->ecx = t21;
    g->edx = t22;
    g->esp = sp0 - 0x30u;
    t23 = cow_call_regs(g, COW_IMG(0x100a1a00u), t20, g->ecx, g->edx, 1, 3, t20, rd32(sp0 - 0x38u), 2u);
    t24 = g->ecx;
    t25 = g->edx;
    if ((uint8_t)t23 != 0u)
    {
        eax = t23;
        edx = t25;
        ebx = in_ebx;
        goto L_100a0afb;
    }
    eax = t23;
    ecx = t24;
    edx = t25;
    COW_AT(100a082d)
    wr32(sp0 - 0x34u, in_ebx);
    t26 = (edx & 0xffff0000u) | rd16(esi + 0x14u);
    wr32(sp0 - 0x38u, t26);
    t27 = (eax & 0xffff0000u) | rd16(esi + 0x12u);
    wr32(sp0 - 0x3cu, t27);
    t28 = (ecx & 0xffff0000u) | rd16(esi + 0x10u);
    wr32(sp0 - 0x40u, t28);
    g->eax = t27;
    g->esp = sp0 - 0x38u;
    t29 = cow_cdecl(g, COW_IMG(0x100a0b30u), 2, t28, t27);
    wr32(sp0 - 0x18u, t29);
    t30 = (ebp & 0xffff0000u) | rd16(esi + 0xcu);
    if (rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0x1bcu) == 0u)
    {
        ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u);
        edx = (t30 & 0xff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0xeeu);
        ebp = t30;
        edi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0x170u);
        loc_18 = t29;
        goto L_100a087e;
    }
    eax = (t29 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0x1bcu);
    ecx = rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u);
    edx = (t30 & 0xff00u) | rd8(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0xeeu);
    ebp = t30;
    edi = rd32(rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) + 0x170u);
    loc_18 = t29;
    COW_AT(100a0872)
    if ((uint8_t)eax == 0x15u) goto L_100a087e;
    COW_AT(100a0876)
    if ((uint8_t)eax != 0x18u) goto L_100a0a9b;
L_100a087e: ;
    COW_AT(100a087e)
    t31 = rd32(ecx + 0x128u);
    wr32(sp0 + 0xcu, t31);
    if (t31 >> 2u & 1u)
    {
        eax = t31;
    }
    else
    {
        eax = t31;
        ebx = t31 >> 2u;
    COW_AT(100a0896)
        if (edi == 0u) goto L_100a08bb;
    COW_AT(100a089a)
        if (edi == 4u) goto L_100a08bb;
    COW_AT(100a089f)
        if (edi == 0x2fu) goto L_100a08bb;
    COW_AT(100a08a4)
        wr32(sp0 - 0x38u, edi);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x34u;
        t32 = cow_thiscall(g, COW_IMG(0x10095790u), ecx, 1, edi);
        t33 = g->ecx;
        t34 = g->edx;
        if ((uint8_t)t32 != 0u)
        {
            ecx = t33;
            edx = t34;
            goto L_100a08b7;
        }
        eax = t32;
        ecx = t33;
        edx = t34;
    COW_AT(100a08ae)
        if (edi != 0x30u)
        {
            loc_18 = rd32(sp0 - 0x18u);
            goto L_100a0a9b;
        }
L_100a08b7: ;
    COW_AT(100a08b7)
        eax = rd32(sp0 + 0xcu);
        loc_18 = rd32(sp0 - 0x18u);
L_100a08bb: ;
    COW_AT(100a08bb)
        if ((uint8_t)edx == 0u) goto L_100a08d2;
    COW_AT(100a08bf)
        if ((uint8_t)edx == 1u) goto L_100a08d2;
    COW_AT(100a08c4)
        if ((uint8_t)edx == 6u) goto L_100a08d2;
    COW_AT(100a08c9)
        if ((uint8_t)edx != 7u) goto L_100a0a9b;
L_100a08d2: ;
    COW_AT(100a08d2)
        t35 = rd32(ecx + 0x120u);
        if (!(t35 >> 9u & 1u))
        {
            ecx = t35;
        }
        else
        {
            ecx = t35;
            edx = t35 >> 9u;
    COW_AT(100a08e6)
            if (eax >> 0x1cu & 1u)
            {
                eax = eax >> 0x1cu;
            }
            else
            {
                eax = eax >> 0x1cu;
    COW_AT(100a08f1)
                if (rd8(esi + 0x16u) != 1u)
                {
    COW_AT(100a08fb)
                    if (ecx >> 7u & 1u)
                    {
                        ecx = ecx >> 7u;
                    }
                    else
                    {
                        ecx = ecx >> 7u;
    COW_AT(100a0907)
                        if (loc_18 != 0xffffffffu)
                        {
    COW_AT(100a0912)
                            wr16(sp0 + 0xcu, rd16(esi + 0xeu));
                            if (rd32(esi + 8u) != 0u)
                            {
                                eax = rd32(esi + 8u);
                            }
                            else
                            {
                                eax = rd32(esi + 8u);
    COW_AT(100a0922)
                                wr32(sp0 + 0xcu, ebp);
                            }
    COW_AT(100a0926)
                            wr32(sp0 - 0x38u, 0u);
                            t36 = (ecx & 0xffff0000u) | rd16(esi + 0x14u);
                            wr32(sp0 - 0x3cu, t36);
                            t37 = (edx & 0xffff0000u) | rd16(esi + 0x12u);
                            wr32(sp0 - 0x40u, t37);
                            t38 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
                            wr32(sp0 - 0x44u, t38);
                            t39 = rd32(sp0 + 0xcu);
                            wr32(sp0 - 0x48u, t39);
                            wr32(sp0 - 0x4cu, ebp);
                            g->ebx = ebx;
                            g->ecx = t39;
                            g->edx = t37;
                            g->esp = sp0 - 0x34u;
                            t40 = cow_call_regs(g, COW_IMG(0x100a0b90u), t38, g->ecx, g->edx, 1, 6, ebp, t39, t38, t37, t36, 0u);
                            t41 = g->ecx;
                            t42 = g->edx;
                            wr32(sp0 - 0x18u, t40);
                            wr32(sp0 - 0x50u, 9u);
                            t43 = rd16(esi + 0x12u);
                            wr32(sp0 - 0x10u, t43);
                            g->eax = t43;
                            g->ecx = t41;
                            g->edx = t42;
                            g->esp = sp0 - 0x4cu;
                            t44 = cow_cdecl(g, COW_IMG(0x10193890u), 1, 9u);
                            t45 = g->ecx;
                            t46 = g->edx;
                            if ((uint8_t)t44 != 0u)
                            {
                                eax = t44;
                                ecx = t45;
                                loc_18 = rd32(sp0 - 0x18u);
                            }
                            else
                            {
                                eax = t44;
                                ecx = t45;
                                edx = t46;
    COW_AT(100a0962)
                                t47 = (eax & 0xffff0000u) | rd16(esi + 0x10u);
                                wr32(sp0 - 0x38u, t47);
                                g->eax = t47;
                                g->ecx = ecx;
                                g->esp = sp0 - 0x34u;
                                t48 = cow_cdecl(g, COW_IMG(0x100a0b10u), 1, t47);
                                t49 = g->ecx;
                                if (t48 == 0x7au)
                                {
                                    eax = t48;
                                    ecx = t49;
                                    loc_18 = rd32(sp0 - 0x18u);
                                }
                                else
                                {
                                    eax = t48;
                                    ecx = t49;
                                    ebx = (uint16_t)t47;
    COW_AT(100a0980)
                                    if (eax == 0x7cu)
                                    {
                                        loc_18 = rd32(sp0 - 0x18u);
                                    }
                                    else
                                    {
    COW_AT(100a0989)
                                        if (ebx == 0xffffffffu)
                                        {
                                            loc_18 = rd32(sp0 - 0x18u);
                                        }
                                        else
                                        {
    COW_AT(100a0992)
                                            wr32(sp0 - 0x1cu, esi + 0x18u);
                                            wr32(sp0 - 0x20u, esi + 0x2cu);
                                            wr32(sp0 - 0x14u, 5u);
                                            loc_1c = esi + 0x18u;
                                            loc_20 = esi + 0x2cu;
                                            loc_14 = 5u;
L_100a09a8: ;
    COW_AT(100a09a8)
                                            if (rd32(loc_1c) != 0u)
                                            {
                                                ebp = rd32(loc_1c);
    COW_AT(100a09b6)
                                                if (rd32(COW_IMG(0x10480af0u) + rd16(loc_20) * 4u) != 0u)
                                                {
                                                    ecx = rd32(COW_IMG(0x10480af0u) + rd16(loc_20) * 4u);
    COW_AT(100a09ce)
                                                    if (rd32(ecx + 0xa0u) != 0u)
                                                    {
                                                        edi = rd32(ecx + 0xa0u);
    COW_AT(100a09dc)
                                                        t50 = rd32(ecx + 0x120u);
                                                        if (t50 >> 9u & 1u)
                                                        {
                                                            eax = t50;
    COW_AT(100a09f0)
                                                            if (!(rd32(ecx + 0x128u) >> 2u & 1u))
                                                            {
    COW_AT(100a09fe)
                                                                if (!(rd32(ecx + 0x124u) >> 0xcu & 1u))
                                                                {
    COW_AT(100a0a0c)
                                                                    if (!(eax >> 7u & 1u))
                                                                    {
                                                                        edx = eax >> 7u;
    COW_AT(100a0a16)
                                                                        if (!(eax >> 8u & 1u))
                                                                        {
    COW_AT(100a0a1d)
                                                                            if (rd32(ecx + 0x78u) == ebp)
                                                                            {
    COW_AT(100a0a22)
                                                                                if (rd32(ecx + 0x12cu) >> 0x16u & 1u)
                                                                                {
                                                                                    eax = rd32(ecx + 0x12cu) >> 0x16u;
    COW_AT(100a0a2f)
                                                                                    wr32(sp0 - 0x38u, 0xffu);
                                                                                    g->eax = eax;
                                                                                    g->esp = sp0 - 0x34u;
                                                                                    t51 = cow_thiscall(g, COW_IMG(0x10095820u), ecx, 1, 0xffu);
                                                                                    t52 = g->ecx;
                                                                                    if ((uint8_t)t51 != 0u)
                                                                                    {
                                                                                        loc_1c = rd32(sp0 - 0x1cu);
                                                                                        loc_20 = rd32(sp0 - 0x20u);
                                                                                        loc_14 = rd32(sp0 - 0x14u);
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        eax = t51;
                                                                                        ecx = t52;
    COW_AT(100a0a3d)
                                                                                        t53 = rd32(ecx + 0x16cu);
                                                                                        wr32(sp0 - 0x38u, t53);
                                                                                        g->eax = eax;
                                                                                        g->esp = sp0 - 0x34u;
                                                                                        t54 = cow_thiscall(g, COW_IMG(0x10095820u), ecx, 1, t53);
                                                                                        t55 = g->ecx;
                                                                                        if ((uint8_t)t54 != 0u)
                                                                                        {
                                                                                            loc_1c = rd32(sp0 - 0x1cu);
                                                                                            loc_20 = rd32(sp0 - 0x20u);
                                                                                            loc_14 = rd32(sp0 - 0x14u);
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            ecx = t55;
    COW_AT(100a0a4d)
                                                                                            if (rd32(edi + 0x8c4u) != 0u)
                                                                                            {
                                                                                                loc_1c = rd32(sp0 - 0x1cu);
                                                                                                loc_20 = rd32(sp0 - 0x20u);
                                                                                                loc_14 = rd32(sp0 - 0x14u);
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                                eax = rd32(edi + 0x8c4u);
    COW_AT(100a0a57)
                                                                                                wr32(sp0 - 0x38u, 0u);
                                                                                                t56 = (eax & 0xffff0000u) | rd16(esi + 0x14u);
                                                                                                wr32(sp0 - 0x3cu, t56);
                                                                                                t57 = rd32(sp0 - 0x10u);
                                                                                                wr32(sp0 - 0x40u, t57);
                                                                                                wr32(sp0 - 0x44u, ebx);
                                                                                                t58 = rd32(sp0 + 0xcu);
                                                                                                wr32(sp0 - 0x48u, t58);
                                                                                                t59 = (ecx & 0xffff0000u) | rd16(ecx + 0x74u);
                                                                                                wr32(sp0 - 0x4cu, t59);
                                                                                                g->ebx = ebx;
                                                                                                g->esp = sp0 - 0x34u;
                                                                                                cow_call_regs(g, COW_IMG(0x100a0b90u), t58, g->ecx, g->edx, 1, 6, t59, t58, ebx, t57, t56, 0u);
                                                                                                loc_1c = rd32(sp0 - 0x1cu);
                                                                                                loc_20 = rd32(sp0 - 0x20u);
                                                                                                loc_14 = rd32(sp0 - 0x14u);
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
    COW_AT(100a0a76)
                                            wr32(sp0 - 0x20u, loc_20 + 2u);
                                            wr32(sp0 - 0x1cu, loc_1c + 4u);
                                            wr32(sp0 - 0x14u, loc_14 - 1u);
                                            if (loc_14 != 1u)
                                            {
                                                loc_1c = loc_1c + 4u;
                                                loc_20 = loc_20 + 2u;
                                                loc_14 = loc_14 - 1u;
                                                goto L_100a09a8;
                                            }
                                            eax = loc_14 - 1u;
                                            ecx = loc_1c + 4u;
                                            loc_18 = rd32(sp0 - 0x18u);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
L_100a0a9b: ;
    COW_AT(100a0a9b)
    wr32(sp0 - 0x38u, sp0 - 0xcu);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = sp0 - 0xcu;
    g->esp = sp0 - 0x34u;
    t60 = cow_cdecl(g, COW_IMG(0x100e47a0u), 1, sp0 - 0xcu);
    t61 = g->ecx;
    t62 = g->edx;
    if ((uint8_t)t60 != 1u)
    {
        eax = t60;
        edx = t62;
        ebx = rd32(sp0 - 0x34u);
        goto L_100a0afb;
    }
    eax = t60;
    ecx = t61;
    edx = t62;
    ebx = rd32(sp0 - 0x34u);
    COW_AT(100a0aad)
    if (rd32(sp0 - 0x18u) != 0xffffffffu) goto L_100a0ac7;
    COW_AT(100a0ab4)
    wr32(sp0 - 0x34u, 0x79u);
    g->ebx = ebx;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x30u;
    t63 = cow_cdecl(g, COW_IMG(0x100767f0u), 1, 0x79u);
    t64 = g->edx;
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = t64;
    return (t63 & 0xffffff00u) | 1u;
L_100a0ac7: ;
    COW_AT(100a0ac7)
    if (rd8(esi + 0x16u) == 1u) goto L_100a0ad2;
    eax = (eax & 0xffffff00u) | rd8(esi + 0x16u);
    COW_AT(100a0ace)
    if ((uint8_t)eax != 0u) goto L_100a0afb;
L_100a0ad2: ;
    COW_AT(100a0ad2)
    if ((rd8(rd32(sp0 - 0xcu) + 4u) & 8u) != 0u)
    {
        eax = rd32(sp0 - 0xcu);
    }
    else
    {
        eax = rd32(sp0 - 0xcu);
    COW_AT(100a0adc)
        wr32(sp0 - 0x34u, 0u);
        wr32(sp0 - 0x38u, 0u);
        wr32(sp0 - 0x3cu, 0u);
        wr32(sp0 - 0x40u, sp0 - 0x24u);
        wr32(sp0 - 0x44u, 0u);
        t65 = rd32(sp0 - 8u);
        wr32(sp0 - 0x48u, t65);
        wr32(sp0 - 0x4cu, COW_IMG(0x103d3c84u));
        g->esp = sp0 - 0x30u;
        t66 = cow_call_regs(g, COW_IMG(0x100ad660u), eax, sp0 - 0x24u, t65, 1, 7, COW_IMG(0x103d3c84u), t65, 0u, sp0 - 0x24u, 0u, 0u, 0u);
        t67 = g->edx;
        eax = t66;
        edx = t67;
    }
L_100a0afb: ;
    COW_AT(100a0afb)
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100a06e0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100a0700u:
    {
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        in_ebp = rd32(sp0 - 0x28u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a0709u:
    {
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_ebx = g->ebx;
        in_ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x30u);
        in_esi = rd32(sp0 - 0x2cu);
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x28u, in_ebp);
        (void)sp0;
        return 1;
    }
    case 0x100a0722u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a0729u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a0736u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a073fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a0750u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a0759u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a0760u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a0773u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a077au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a0785u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a078eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a079cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a07a5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        g->edi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100a07acu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a07c8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a07f6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a07ffu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a082du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t in_ebx;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    case 0x100a0872u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0876u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a087eu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0896u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a089au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a089fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08a4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08aeu:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08b7u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08bbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08bfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08c4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08c9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08d2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08e6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a08fbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0907u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0912u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0922u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0926u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_18;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0962u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0980u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0989u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0992u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09a8u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09b6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09ceu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09f0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a09feu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a0cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a16u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a1du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a22u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a2fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a3du:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a4du:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a57u:
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
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a76u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0a9bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_14;
        uint32_t loc_18;
        uint32_t loc_1c;
        uint32_t loc_20;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_20 = rd32(sp0 - 0x20u);
        loc_1c = rd32(sp0 - 0x1cu);
        loc_18 = rd32(sp0 - 0x18u);
        loc_14 = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x34u;
        (void)sp0;
        return 1;
    }
    case 0x100a0aadu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0ab4u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0ac7u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0aceu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0ad2u:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0adcu:
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
        g->esp = sp0 - 0x30u;
        wr32(sp0 - 0x38u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x100a0afbu:
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
        g->esp = sp0 - 0x30u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100a06e0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100a06e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
