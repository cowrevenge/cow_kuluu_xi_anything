/* f_0x10023700 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=5 */
void cow_fn_10023700(Guest* g)
{
    double d13;
    double d19;
    double d20;
    double d21;
    double d22;
    double d23;
    double d39;
    double d44;
    double d45;
    double d46;
    double d47;
    double d48;
    double d70;
    double d71;
    double d72;
    double d93;
    double d94;
    double d95;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_34;
    uint32_t loc_38;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    uint32_t t11;
    uint32_t t12;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t2;
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
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
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
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t96;
    uint32_t t97;
    uint32_t t98;
    uint32_t t99;
    double x0;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg4 = rd32(sp0 + 0x10u);
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 116u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10023740u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->edi; in_edi = rd32(sp0 - 0x4cu); in_esi = rd32(sp0 - 0x48u); in_ebp = rd32(sp0 - 0x44u); in_ebx = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); g->ebp = rd32(sp0 - 0x44u); g->ebx = rd32(sp0 - 0x40u); g->edi = rd32(sp0 - 0x4cu); g->esi = rd32(sp0 - 0x48u); goto E_10023740;
    case 0x1002374au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_1002374a;
    case 0x10023758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023758;
    case 0x10023762u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023762;
    case 0x1002376cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002376c;
    case 0x10023773u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023773;
    case 0x10023797u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023797;
    case 0x100237b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100237b2;
    case 0x100237c1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100237c1;
    case 0x100237d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100237d1;
    case 0x100237fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100237fd;
    case 0x10023815u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023815;
    case 0x10023820u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023820;
    case 0x10023823u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023823;
    case 0x10023837u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_34 = rd32(sp0 - 0x34u); goto E_10023837;
    case 0x10023852u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_10023852;
    case 0x10023860u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_10023860;
    case 0x1002386eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002386e;
    case 0x10023878u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023878;
    case 0x1002387fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_1002387f;
    case 0x10023886u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023886;
    case 0x100238aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100238aa;
    case 0x100238c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100238c5;
    case 0x100238d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_100238d4;
    case 0x100238e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_100238e4;
    case 0x10023910u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023910;
    case 0x10023928u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023928;
    case 0x10023933u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023933;
    case 0x10023936u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023936;
    case 0x10023953u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_4c = rd32(sp0 - 0x4cu); loc_48 = rd32(sp0 - 0x48u); loc_44 = rd32(sp0 - 0x44u); loc_40 = rd32(sp0 - 0x40u); loc_3c = rd32(sp0 - 0x3cu); loc_38 = rd32(sp0 - 0x38u); loc_34 = rd32(sp0 - 0x34u); goto E_10023953;
    case 0x10023979u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023979;
    case 0x10023989u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023989;
    case 0x10023991u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10023991;
    case 0x100239b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_100239b0;
    case 0x10023a00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a00;
    case 0x10023a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023a0f;
    case 0x10023a23u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023a23;
    case 0x10023a3eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a3e;
    case 0x10023a45u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a45;
    case 0x10023a54u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a54;
    case 0x10023a57u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a57;
    case 0x10023a5fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a5f;
    case 0x10023a6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a6e;
    case 0x10023a73u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023a73;
    case 0x10023a75u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023a75;
    case 0x10023a92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10023a92;
    case 0x10023aadu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10023aad;
    case 0x10023af6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023af6;
    case 0x10023b05u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023b05;
    case 0x10023b19u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023b19;
    case 0x10023b34u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b34;
    case 0x10023b3fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b3f;
    case 0x10023b4eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b4e;
    case 0x10023b51u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b51;
    case 0x10023b55u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b55;
    case 0x10023b64u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b64;
    case 0x10023b69u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; x0 = ST(0); g->top = (g->top + 1u) & 7u; goto E_10023b69;
    case 0x10023b6bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; goto E_10023b6b;
    case 0x10023b88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10023b88;
    case 0x10023b97u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; self = g->edi; loc_38 = rd32(sp0 - 0x38u); goto E_10023b97;
    case 0x10023bb2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10023bb2;
    case 0x10023bbdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10023bbd;
    case 0x10023bc0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_10023bc0;
    default: break;
    }
#endif

    COW_AT(10023700)
    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    t1 = arg4 + rd16(rd32(self + 0x42u)) * 0x3cu;
    wr32(sp0 - 0x34u, t1);
    t2 = rd32(rd32(COW_IMG(0x1065cb04u)) + 0x134u);
    wr32(sp0 - 0x3cu, t2);
    if ((int32_t)rd16(self + 0x5au) >= (int32_t)rd16(rd32(self + 0x42u)))
    {
        ebx = rd16(self + 0x5au);
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
        loc_34 = t1;
        loc_3c = t2;
    }
    else
    {
        ecx = t2;
        ebx = rd16(self + 0x5au);
        loc_34 = t1;
        loc_3c = t2;
    COW_AT(10023740)
        edx = ebx * 0xfu;
        esi = arg4 + ebx * 0x3cu + 0x24u;
        loc_40 = in_ebx;
        loc_44 = in_ebp;
        loc_48 = in_esi;
        loc_4c = in_edi;
L_1002374a: ;
    COW_AT(1002374a)
        wr32(sp0 - 0x50u, esi - 0xcu);
        wr32(sp0 - 0x54u, esi - 0x18u);
        wr32(sp0 - 0x58u, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, esi, esi - 0x18u, esi - 0xcu);
        t3 = g->ecx;
        t4 = g->edx;
        ecx = t3;
        edx = t4;
        ebp = esi - 0x18u;
    COW_AT(10023758)
        t5 = rd32(self + 0x70u);
        wr32(sp0 - 0x5cu, t5);
        wr32(sp0 - 0x60u, esi);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        cow_cdecl(g, COW_IMG(0x100272b0u), 2, esi, t5);
        t6 = g->ecx;
        t7 = g->edx;
        ecx = t6;
        edx = t7;
    COW_AT(10023762)
        wr32(sp0 - 0x64u, ebp);
        wr32(sp0 - 0x68u, esi - 0xcu);
        g->eax = esi - 0xcu;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t8 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, esi - 0xcu, ebp);
        t9 = g->ecx;
        t10 = g->edx;
        eax = t8;
        ecx = t9;
        edx = t10;
    COW_AT(1002376c)
        wr32(sp0 - 0x6cu, esi);
        wr32(sp0 - 0x70u, ebp);
        g->eax = eax;
        g->esp = sp0 - 0x68u;
        t11 = cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebp, esi);
        eax = t11;
    COW_AT(10023773)
        t12 = rd32(sp0 + 4u);
        d13 = fr(g, fr(g, (double)rdf32(self + 0x74u) * (double)rdf32(COW_IMG(0x1032a378u))) + (double)rdf32(esi - 0x14u));
        wrf32(esi - 0x14u, (float)d13);
        if (rd8(t12 + 0x17cu) != 0u)
        {
            ecx = t12;
        }
        else
        {
            ecx = t12;
    COW_AT(10023797)
            t14 = rd32(COW_IMG(0x1065cb04u)) + 0x124u;
            wr32(sp0 - 0x50u, t14);
            wr32(sp0 - 0x54u, esi + 0xcu);
            wr32(sp0 - 0x58u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->esp = sp0 - 0x4cu;
            t15 = cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x24u, esi + 0xcu, t14);
            eax = t15;
    COW_AT(100237b2)
            wr32(sp0 - 0x5cu, sp0 - 0x24u);
            wr32(sp0 - 0x60u, sp0 - 0x24u);
            g->eax = eax;
            g->ecx = sp0 - 0x24u;
            g->edx = sp0 - 0x24u;
            g->esp = sp0 - 0x58u;
            t16 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x24u, sp0 - 0x24u);
            t17 = g->ecx;
            t18 = g->edx;
            d19 = cow_take_float(g);
            eax = t16;
            ecx = t17;
            edx = t18;
            x0 = d19;
    COW_AT(100237c1)
            if (x0 < (double)rdf32(COW_IMG(0x10329a18u)))
            {
    COW_AT(100237d1)
                d20 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x124u) - (double)rdf32(esi + 0xcu));
                wrf32(sp0 - 0x24u, (float)(double)(float)d20);
                d21 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x128u) - (double)rdf32(esi + 0x10u));
                wrf32(sp0 - 0x20u, (float)(double)(float)d21);
                d22 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x12cu) - (double)rdf32(esi + 0x14u));
                wrf32(sp0 - 0x1cu, (float)(double)(float)d22);
            }
    COW_AT(100237fd)
            d23 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(COW_IMG(0x1032a378u)));
            wr32(sp0 - 0x50u, ecx);
            wrf32(sp0 - 0x50u, (float)(double)(float)d23);
            wr32(sp0 - 0x54u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t24 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x24u, cow_f2bits((double)(float)d23));
            t25 = g->edx;
            eax = t24;
            edx = t25;
    COW_AT(10023815)
            wr32(sp0 - 0x58u, sp0 - 0x24u);
            wr32(sp0 - 0x5cu, ebp);
            g->ecx = sp0 - 0x24u;
            g->esp = sp0 - 0x54u;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebp, sp0 - 0x24u);
            t26 = g->ecx;
            ecx = t26;
    COW_AT(10023820)
        }
    COW_AT(10023823)
        if ((int32_t)(ebx + 1u) < (int32_t)rd16(rd32(self + 0x42u)))
        {
            edx = rd32(self + 0x42u);
            ebx = ebx + 1u;
            esi = esi + 0x3cu;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_34 = rd32(sp0 - 0x34u);
            loc_3c = rd32(sp0 - 0x3cu);
            goto L_1002374a;
        }
        ebx = ebx + 1u;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_34 = rd32(sp0 - 0x34u);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    COW_AT(10023837)
    t27 = rd16(self + 0x5cu);
    wr32(sp0 - 0x38u, t27);
    if ((int32_t)t27 < (int32_t)rd16(rd32(self + 0x42u) + 2u))
    {
        eax = t27;
        edx = rd16(rd32(self + 0x42u) + 2u);
        loc_38 = t27;
    COW_AT(10023852)
        ecx = loc_34;
        esi = eax * 0x3cu + loc_34 + 0x24u;
        eax = eax * 0xfu;
L_10023860: ;
    COW_AT(10023860)
        wr32(sp0 - 0x50u, esi - 0xcu);
        wr32(sp0 - 0x54u, esi - 0x18u);
        wr32(sp0 - 0x58u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->esp = sp0 - 0x4cu;
        t28 = cow_cdecl(g, COW_IMG(0x10027120u), 3, esi, esi - 0x18u, esi - 0xcu);
        t29 = g->ecx;
        eax = t28;
        ecx = t29;
        ebx = esi - 0x18u;
        ebp = esi - 0xcu;
    COW_AT(1002386e)
        t30 = rd32(self + 0x70u);
        wr32(sp0 - 0x5cu, t30);
        wr32(sp0 - 0x60u, esi);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = t30;
        g->esp = sp0 - 0x58u;
        t31 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, esi, t30);
        t32 = g->ecx;
        t33 = g->edx;
        eax = t31;
        ecx = t32;
        edx = t33;
    COW_AT(10023878)
        wr32(sp0 - 0x64u, ebx);
        wr32(sp0 - 0x68u, ebp);
        g->eax = eax;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x60u;
        t34 = cow_cdecl(g, COW_IMG(0x10026eb0u), 2, ebp, ebx);
        t35 = g->ecx;
        t36 = g->edx;
        eax = t34;
        ecx = t35;
        edx = t36;
    COW_AT(1002387f)
        wr32(sp0 - 0x6cu, esi);
        wr32(sp0 - 0x70u, ebx);
        g->ecx = ecx;
        g->esp = sp0 - 0x68u;
        cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebx, esi);
        t37 = g->ecx;
        ecx = t37;
    COW_AT(10023886)
        t38 = rd32(sp0 + 4u);
        d39 = fr(g, fr(g, (double)rdf32(self + 0x74u) * (double)rdf32(COW_IMG(0x1032a378u))) + (double)rdf32(esi - 0x14u));
        wrf32(esi - 0x14u, (float)d39);
        if (rd8(t38 + 0x17cu) == 0u)
        {
            eax = t38;
    COW_AT(100238aa)
            t40 = rd32(COW_IMG(0x1065cb04u)) + 0x124u;
            wr32(sp0 - 0x50u, t40);
            wr32(sp0 - 0x54u, esi + 0xcu);
            wr32(sp0 - 0x58u, sp0 - 0x24u);
            g->edx = sp0 - 0x24u;
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x10026fa0u), 3, sp0 - 0x24u, esi + 0xcu, t40);
            t41 = g->edx;
            edx = t41;
            ebp = esi + 0xcu;
    COW_AT(100238c5)
            wr32(sp0 - 0x5cu, sp0 - 0x24u);
            wr32(sp0 - 0x60u, sp0 - 0x24u);
            g->eax = sp0 - 0x24u;
            g->ecx = sp0 - 0x24u;
            g->esp = sp0 - 0x58u;
            t42 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x24u, sp0 - 0x24u);
            t43 = g->ecx;
            d44 = cow_take_float(g);
            eax = t42;
            ecx = t43;
            x0 = d44;
    COW_AT(100238d4)
            if (!(x0 < (double)rdf32(COW_IMG(0x10329a18u))))
            {
                eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x0, (double)rdf32(COW_IMG(0x10329a18u)), 0u);
            }
            else
            {
    COW_AT(100238e4)
                d45 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x124u) - (double)rdf32(ebp));
                wrf32(sp0 - 0x24u, (float)(double)(float)d45);
                d46 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x128u) - (double)rdf32(esi + 0x10u));
                wrf32(sp0 - 0x20u, (float)(double)(float)d46);
                d47 = fr(g, (double)rdf32(rd32(COW_IMG(0x1065cb04u)) + 0x12cu) - (double)rdf32(esi + 0x14u));
                wrf32(sp0 - 0x1cu, (float)(double)(float)d47);
                eax = rd32(COW_IMG(0x1065cb04u));
            }
    COW_AT(10023910)
            d48 = fr(g, (double)rdf32(sp0 - 0x3cu) * (double)rdf32(COW_IMG(0x1032a378u)));
            wr32(sp0 - 0x50u, ecx);
            wrf32(sp0 - 0x50u, (float)(double)(float)d48);
            wr32(sp0 - 0x54u, sp0 - 0x24u);
            g->ecx = ecx;
            g->edx = sp0 - 0x24u;
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x24u, cow_f2bits((double)(float)d48));
            t49 = g->ecx;
            t50 = g->edx;
            ecx = t49;
            edx = t50;
    COW_AT(10023928)
            wr32(sp0 - 0x58u, sp0 - 0x24u);
            wr32(sp0 - 0x5cu, ebx);
            g->esp = sp0 - 0x54u;
            cow_cdecl(g, COW_IMG(0x10026f20u), 2, ebx, sp0 - 0x24u);
    COW_AT(10023933)
        }
    COW_AT(10023936)
        t51 = rd32(sp0 - 0x38u) + 1u;
        t52 = rd32(sp0 - 0x38u);
        wr32(sp0 - 0x38u, t51);
        if ((int32_t)(t52 + 1u) < (int32_t)rd16(rd32(self + 0x42u) + 2u))
        {
            eax = t51;
            ecx = rd32(self + 0x42u);
            edx = rd16(rd32(self + 0x42u) + 2u);
            esi = esi + 0x3cu;
            loc_40 = rd32(sp0 - 0x40u);
            loc_44 = rd32(sp0 - 0x44u);
            loc_48 = rd32(sp0 - 0x48u);
            loc_4c = rd32(sp0 - 0x4cu);
            loc_3c = rd32(sp0 - 0x3cu);
            loc_38 = t51;
            goto L_10023860;
        }
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
    }
    COW_AT(10023953)
    wr8(COW_IMG(0x10456e3cu), 1u);
    wr32(sp0 - 0x50u, 4u);
    t53 = (uint32_t)((int32_t)(rd16(self + 0x64u) + rd16(self + 0x66u) + ((uint32_t)((int32_t)(rd16(self + 0x64u) + rd16(self + 0x66u)) >> 0x1fu) & 3u)) >> 2u);
    wr32(sp0 - 0x54u, t53);
    t54 = rd16(self + 0x64u);
    t55 = rd16(self + 0x66u);
    g->esp = sp0 - 0x4cu;
    t56 = cow_call_regs(g, COW_IMG(0x10028640u), t53, t54, (uint32_t)((int32_t)(t54 + t55) >> 0x1fu) & 3u, 1, 2, t53, 4u);
    t57 = g->ecx;
    t58 = g->edx;
    eax = t56;
    ecx = t57;
    edx = t58;
    COW_AT(10023979)
    wr32(COW_IMG(0x10456e38u), eax);
    if (eax != 0u)
    {
    COW_AT(10023989)
        wr32(sp0 - 0x38u, 4u);
        loc_38 = 4u;
L_10023991: ;
    COW_AT(10023991)
        t59 = rd16(self + 0x64u);
        t60 = rd32(self + 0x5eu);
        wr32(sp0 + 4u, 0u);
        if ((int32_t)(t59 >> 2u) <= 0)
        {
            ebp = t60 + (t59 >> 2u) * 8u;
            esi = t60;
            goto L_10023a92;
        }
        ebp = t60 + (t59 >> 2u) * 8u;
        esi = t60;
L_100239b0: ;
    COW_AT(100239b0)
        t61 = (ebx & 0xffff0000u) | rd16(esi);
        t62 = rd32(esi + 4u);
        wr32(sp0 - 0x34u, t62);
        t63 = (ecx & 0xffff0000u) | rd16(esi + 2u);
        wr32(sp0 - 0x30u, t63);
        t64 = arg4 + (t61 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x3cu, t64);
        wr32(sp0 - 0x50u, t64);
        t65 = arg4 + (t63 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x54u, t65);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x2cu, t65);
        g->edx = sp0 - 0x18u;
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0x18u, t65, t64);
        t66 = g->edx;
        edx = t66;
        ebx = t61;
    COW_AT(10023a00)
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        g->eax = sp0 - 0x18u;
        g->ecx = sp0 - 0x18u;
        g->edx = edx;
        g->esp = sp0 - 0x58u;
        t67 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0x18u, sp0 - 0x18u);
        t68 = g->ecx;
        t69 = g->edx;
        d70 = cow_take_float(g);
        eax = t67;
        ecx = t68;
        edx = t69;
        x0 = d70;
    COW_AT(10023a0f)
        if ((cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u) != 0u)
        {
            x0 = fr(g, sqrt(x0));
    COW_AT(10023a73)
        }
        else
        {
            eax = cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u;
            x0 = fr(g, sqrt(x0));
    COW_AT(10023a23)
            d71 = fr(g, (double)rdf32(sp0 - 0x34u) - x0);
            wr32(sp0 - 0x50u, ecx);
            d72 = fr(g, fr(g, d71 * (double)rdf32(self + 0x68u)) / x0);
            wrf32(sp0 - 0x50u, (float)(double)(float)d72);
            wr32(sp0 - 0x54u, sp0 - 0x18u);
            g->ecx = ecx;
            g->edx = sp0 - 0x18u;
            g->esp = sp0 - 0x4cu;
            cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0x18u, cow_f2bits((double)(float)d72));
            t73 = g->ecx;
            t74 = g->edx;
            ecx = t73;
            edx = t74;
    COW_AT(10023a3e)
            if ((int8_t)(ebx >> 8u) >= 0)
            {
    COW_AT(10023a45)
                wr32(sp0 - 0x50u, sp0 - 0x18u);
                t75 = rd32(sp0 - 0x3cu);
                wr32(sp0 - 0x54u, t75);
                g->ecx = t75;
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x100270a0u), 2, t75, sp0 - 0x18u);
                t76 = g->ecx;
                t77 = g->edx;
                ecx = t76;
                edx = t77;
    COW_AT(10023a54)
            }
    COW_AT(10023a57)
            if ((int8_t)(rd32(sp0 - 0x30u) >> 8u) >= 0)
            {
    COW_AT(10023a5f)
                wr32(sp0 - 0x50u, sp0 - 0x18u);
                t78 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x54u, t78);
                g->edx = sp0 - 0x18u;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x10026f20u), 2, t78, sp0 - 0x18u);
                t79 = g->edx;
                edx = t79;
    COW_AT(10023a6e)
            }
        }
    COW_AT(10023a75)
        t80 = rd32(sp0 + 4u) + 1u;
        t81 = rd16(self + 0x64u);
        t82 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t80);
        if ((int32_t)(t82 + 1u) < (int32_t)(t81 >> 2u))
        {
            ecx = t81 >> 2u;
            esi = esi + 8u;
            loc_38 = rd32(sp0 - 0x38u);
            goto L_100239b0;
        }
        ecx = t81 >> 2u;
        esi = esi + 8u;
        loc_38 = rd32(sp0 - 0x38u);
L_10023a92: ;
    COW_AT(10023a92)
        t83 = rd16(self + 0x66u);
        wr32(sp0 + 4u, 0u);
        if ((t83 & 0xfffcu) == 0u)
        {
            edx = t83 & 0xfffcu;
            goto L_10023b88;
        }
L_10023aad: ;
    COW_AT(10023aad)
        t84 = rd32(ebp + 4u);
        wr32(sp0 - 0x28u, t84);
        t85 = (esi & 0xffff0000u) | rd16(ebp);
        t86 = (ebx & 0xffff0000u) | rd16(ebp + 2u);
        t87 = arg4 + (t85 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x2cu, t87);
        wr32(sp0 - 0x50u, t87);
        t88 = arg4 + (t86 & 0x7fffu) * 0x3cu + 0xcu;
        wr32(sp0 - 0x54u, t88);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x30u, t88);
        g->ecx = sp0 - 0xcu;
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10027120u), 3, sp0 - 0xcu, t88, t87);
        t89 = g->ecx;
        ecx = t89;
        ebx = t86;
        esi = t85;
    COW_AT(10023af6)
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        g->eax = sp0 - 0xcu;
        g->ecx = ecx;
        g->edx = sp0 - 0xcu;
        g->esp = sp0 - 0x58u;
        t90 = cow_cdecl(g, COW_IMG(0x10027530u), 2, sp0 - 0xcu, sp0 - 0xcu);
        t91 = g->ecx;
        t92 = g->edx;
        d93 = cow_take_float(g);
        eax = t90;
        ecx = t91;
        edx = t92;
        x0 = d93;
    COW_AT(10023b05)
        if ((cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u) != 0u)
        {
            x0 = fr(g, sqrt(x0));
    COW_AT(10023b69)
        }
        else
        {
            eax = cow_fsw(g, fr(g, sqrt(x0)), (double)rdf32(COW_IMG(0x1032a1a8u)), 1u) & 0x4100u;
            x0 = fr(g, sqrt(x0));
    COW_AT(10023b19)
            d94 = fr(g, (double)rdf32(sp0 - 0x28u) - x0);
            wr32(sp0 - 0x50u, ecx);
            d95 = fr(g, fr(g, d94 * (double)rdf32(self + 0x6cu)) / x0);
            wrf32(sp0 - 0x50u, (float)(double)(float)d95);
            wr32(sp0 - 0x54u, sp0 - 0xcu);
            g->eax = eax;
            g->ecx = sp0 - 0xcu;
            g->edx = edx;
            g->esp = sp0 - 0x4cu;
            t96 = cow_cdecl(g, COW_IMG(0x100272b0u), 2, sp0 - 0xcu, cow_f2bits((double)(float)d95));
            t97 = g->ecx;
            t98 = g->edx;
            eax = t96;
            ecx = t97;
            edx = t98;
    COW_AT(10023b34)
            if ((esi & 0x8000u) == 0u)
            {
    COW_AT(10023b3f)
                wr32(sp0 - 0x50u, sp0 - 0xcu);
                t99 = rd32(sp0 - 0x2cu);
                wr32(sp0 - 0x54u, t99);
                g->eax = t99;
                g->edx = sp0 - 0xcu;
                g->esp = sp0 - 0x4cu;
                t100 = cow_cdecl(g, COW_IMG(0x100270a0u), 2, t99, sp0 - 0xcu);
                t101 = g->edx;
                eax = t100;
                edx = t101;
    COW_AT(10023b4e)
            }
    COW_AT(10023b51)
            if ((int8_t)(ebx >> 8u) >= 0)
            {
    COW_AT(10023b55)
                wr32(sp0 - 0x50u, sp0 - 0xcu);
                t102 = rd32(sp0 - 0x30u);
                wr32(sp0 - 0x54u, t102);
                g->edx = t102;
                g->esp = sp0 - 0x4cu;
                cow_cdecl(g, COW_IMG(0x10026f20u), 2, t102, sp0 - 0xcu);
                t103 = g->edx;
                edx = t103;
    COW_AT(10023b64)
            }
        }
    COW_AT(10023b6b)
        t104 = rd32(sp0 + 4u) + 1u;
        t105 = rd16(self + 0x66u);
        t106 = rd32(sp0 + 4u);
        wr32(sp0 + 4u, t104);
        if ((int32_t)(t106 + 1u) < (int32_t)(t105 >> 2u))
        {
            ebp = ebp + 8u;
            loc_38 = rd32(sp0 - 0x38u);
            goto L_10023aad;
        }
        ecx = t105 >> 2u;
        loc_38 = rd32(sp0 - 0x38u);
L_10023b88: ;
    COW_AT(10023b88)
        wr32(sp0 - 0x38u, loc_38 - 1u);
        if (loc_38 != 1u)
        {
            loc_38 = loc_38 - 1u;
            goto L_10023991;
        }
    COW_AT(10023b97)
        wr32(sp0 - 0x50u, arg5);
        wr32(sp0 - 0x54u, arg4);
        wr32(sp0 - 0x58u, arg3);
        wr32(sp0 - 0x5cu, arg2);
        g->edx = arg2;
        g->esp = sp0 - 0x4cu;
        cow_thiscall(g, COW_IMG(0x10023bd0u), self, 4, arg2, arg3, arg4, arg5);
        t107 = g->ecx;
        t108 = g->edx;
        ecx = t107;
        edx = t108;
    COW_AT(10023bb2)
        wr32(sp0 - 0x50u, rd32(COW_IMG(0x10456e38u)));
        g->esp = sp0 - 0x4cu;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, rd32(COW_IMG(0x10456e38u)));
    COW_AT(10023bbd)
    }
    COW_AT(10023bc0)
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = rd32(sp0 - 0x44u);
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10023700(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10023740u:
    {
        const uint32_t arg4 = rd32(sp0 + 0x10u);
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
        uint32_t loc_34;
        uint32_t loc_3c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->edi;
        in_edi = rd32(sp0 - 0x4cu);
        in_esi = rd32(sp0 - 0x48u);
        in_ebp = rd32(sp0 - 0x44u);
        in_ebx = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        g->esi = arg4;
        (void)sp0;
        return 1;
    }
    case 0x1002374au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023758u:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10023762u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002376cu:
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
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x10023773u:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x10023797u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x100237b2u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100237c1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100237d1u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100237fdu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023815u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023820u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023823u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023837u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023852u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023860u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x1002386eu:
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
        g->esp = sp0 - 0x58u;
        (void)sp0;
        return 1;
    }
    case 0x10023878u:
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
        g->esp = sp0 - 0x60u;
        (void)sp0;
        return 1;
    }
    case 0x1002387fu:
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
        g->esp = sp0 - 0x68u;
        (void)sp0;
        return 1;
    }
    case 0x10023886u:
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
        g->esp = sp0 - 0x70u;
        (void)sp0;
        return 1;
    }
    case 0x100238aau:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x100238c5u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100238d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x100238e4u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023910u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023928u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x5cu, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023933u:
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
        g->esp = sp0 - 0x5cu;
        wr32(sp0 - 0x60u, sp0 - 0x24u);
        wr32(sp0 - 0x58u, sp0 - 0x24u);
        wr32(sp0 - 0x54u, sp0 - 0x24u);
        (void)sp0;
        return 1;
    }
    case 0x10023936u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023953u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_34;
        uint32_t loc_38;
        uint32_t loc_3c;
        uint32_t loc_40;
        uint32_t loc_44;
        uint32_t loc_48;
        uint32_t loc_4c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_4c = rd32(sp0 - 0x4cu);
        loc_48 = rd32(sp0 - 0x48u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_40 = rd32(sp0 - 0x40u);
        loc_3c = rd32(sp0 - 0x3cu);
        loc_38 = rd32(sp0 - 0x38u);
        loc_34 = rd32(sp0 - 0x34u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023979u:
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
        g->esp = sp0 - 0x54u;
        (void)sp0;
        return 1;
    }
    case 0x10023989u:
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
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023991u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x100239b0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023a00u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a0fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a23u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a3eu:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a45u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x54u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a54u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x50u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a57u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a5fu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a6eu:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        wr32(sp0 - 0x50u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a73u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a75u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0x18u);
        wr32(sp0 - 0x5cu, sp0 - 0x18u);
        wr32(sp0 - 0x58u, sp0 - 0x18u);
        (void)sp0;
        return 1;
    }
    case 0x10023a92u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023aadu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023af6u:
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
        g->esp = sp0 - 0x58u;
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b05u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x60u;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b19u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b34u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b3fu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x54u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b4eu:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b51u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b55u:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b64u:
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
        g->esp = sp0 - 0x54u;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        wr32(sp0 - 0x50u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b69u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        double x0;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        x0 = ST(0);
        g->top = (g->top + 1u) & 7u;
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b6bu:
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
        g->esp = sp0 - 0x4cu;
        wr32(sp0 - 0x60u, sp0 - 0xcu);
        wr32(sp0 - 0x5cu, sp0 - 0xcu);
        wr32(sp0 - 0x58u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x10023b88u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023b97u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_38;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        self = g->edi;
        loc_38 = rd32(sp0 - 0x38u);
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023bb2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    case 0x10023bbdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x50u;
        (void)sp0;
        return 1;
    }
    case 0x10023bc0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x4cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10023700(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10023700(g);
    g->esp = sp0;
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */
