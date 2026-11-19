/* f_0x100c3480 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_100c3480(Guest* g)
{
    double d27;
    double d28;
    double d36;
    double d37;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_620;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    uint32_t t89;
    uint32_t t9;
    uint32_t t90;
    uint32_t t91;
    uint32_t t92;
    uint32_t t93;
    uint32_t t94;
    uint32_t zf;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 1604u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x100c34a5u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x62cu); in_esi = rd32(sp0 - 0x628u); in_ebx = rd32(sp0 - 0x624u); g->ebx = rd32(sp0 - 0x624u); g->edi = rd32(sp0 - 0x62cu); g->esi = rd32(sp0 - 0x628u); goto E_100c34a5;
    case 0x100c34afu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34af;
    case 0x100c34b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34b9;
    case 0x100c34c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34c3;
    case 0x100c34cdu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34cd;
    case 0x100c34d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34d9;
    case 0x100c34e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34e5;
    case 0x100c34f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c34f1;
    case 0x100c3508u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3508;
    case 0x100c351du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c351d;
    case 0x100c3536u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3536;
    case 0x100c354fu: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x62cu); in_esi = rd32(sp0 - 0x628u); in_ebx = rd32(sp0 - 0x624u); g->ebx = rd32(sp0 - 0x624u); g->edi = rd32(sp0 - 0x62cu); g->esi = rd32(sp0 - 0x628u); goto E_100c354f;
    case 0x100c3558u: eax = g->eax; self = g->ecx; edx = g->edx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x62cu); in_esi = rd32(sp0 - 0x628u); in_ebx = rd32(sp0 - 0x624u); g->ebx = rd32(sp0 - 0x624u); g->edi = rd32(sp0 - 0x62cu); g->esi = rd32(sp0 - 0x628u); goto E_100c3558;
    case 0x100c3584u: eax = g->eax; ecx = g->ecx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3584;
    case 0x100c358bu: eax = g->eax; ecx = g->ecx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c358b;
    case 0x100c35a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c35a2;
    case 0x100c35a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; edi = g->edi; zf = g->zf; goto E_100c35a9;
    case 0x100c35b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c35b5;
    case 0x100c35bfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c35bf;
    case 0x100c35c4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c35c4;
    case 0x100c35d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_edi = rd32(sp0 - 0x62cu); in_esi = rd32(sp0 - 0x628u); in_ebx = rd32(sp0 - 0x624u); g->ebx = rd32(sp0 - 0x624u); g->edi = rd32(sp0 - 0x62cu); g->esi = rd32(sp0 - 0x628u); goto E_100c35d9;
    case 0x100c3600u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3600;
    case 0x100c360fu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c360f;
    case 0x100c364au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c364a;
    case 0x100c3654u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3654;
    case 0x100c365eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c365e;
    case 0x100c366au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c366a;
    case 0x100c3674u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3674;
    case 0x100c3680u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3680;
    case 0x100c3690u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; loc_620 = rd32(sp0 - 0x620u); goto E_100c3690;
    case 0x100c36a7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36a7;
    case 0x100c36b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36b3;
    case 0x100c36b5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; in_ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36b5;
    case 0x100c36c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_ebp = rd32(sp0 - 0x630u); g->ebp = rd32(sp0 - 0x630u); goto E_100c36c5;
    case 0x100c36cau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_ebp = rd32(sp0 - 0x630u); g->ebp = rd32(sp0 - 0x630u); goto E_100c36ca;
    case 0x100c36cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_ebp = rd32(sp0 - 0x630u); g->ebp = rd32(sp0 - 0x630u); goto E_100c36cf;
    case 0x100c36d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; in_ebp = rd32(sp0 - 0x630u); g->ebp = rd32(sp0 - 0x630u); goto E_100c36d4;
    case 0x100c36e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36e0;
    case 0x100c36e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36e2;
    case 0x100c36e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36e7;
    case 0x100c36ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36ec;
    case 0x100c36f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36f5;
    case 0x100c36fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c36fd;
    case 0x100c3712u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3712;
    case 0x100c3724u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3724;
    case 0x100c373au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c373a;
    case 0x100c374cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c374c;
    case 0x100c3753u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3753;
    case 0x100c3758u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3758;
    case 0x100c375du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c375d;
    case 0x100c376fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c376f;
    case 0x100c3781u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3781;
    case 0x100c3793u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3793;
    case 0x100c3797u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3797;
    case 0x100c379cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c379c;
    case 0x100c37aau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37aa;
    case 0x100c37afu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37af;
    case 0x100c37d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37d3;
    case 0x100c37dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37dc;
    case 0x100c37deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37de;
    case 0x100c37e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37e9;
    case 0x100c37f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c37f3;
    case 0x100c3803u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3803;
    case 0x100c3813u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3813;
    case 0x100c3841u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3841;
    case 0x100c3860u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; self = g->esi; edi = g->edi; zf = g->zf; goto E_100c3860;
    default: break;
    }
#endif

    COW_AT(100c3480)
    wr32(sp0 - 0x624u, in_ebx);
    wr32(sp0 - 0x628u, in_esi);
    t1 = rd32(COW_IMG(0x104807fcu)) + 1u;
    wr32(COW_IMG(0x104807fcu), t1);
    wr32(sp0 - 0x62cu, in_edi);
    if (rd32(self + 0x54u) != 0u)
    {
        eax = rd32(self + 0x54u);
        edx = t1;
        goto L_100c354f;
    }
    eax = rd32(self + 0x54u);
    edx = t1;
    COW_AT(100c34a5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t2 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t3 = g->ecx;
    t4 = g->edx;
    if (t2 == 1u)
    {
        eax = t2;
        edx = t4;
        goto L_100c3508;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    COW_AT(100c34af)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t5 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 9u)
    {
        eax = t5;
        edx = t7;
        goto L_100c3508;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(100c34b9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t8 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t9 = g->ecx;
    t10 = g->edx;
    if (t8 == 0xbu)
    {
        eax = t8;
        edx = t10;
        goto L_100c3508;
    }
    eax = t8;
    ecx = t9;
    edx = t10;
    COW_AT(100c34c3)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t11 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t12 = g->ecx;
    t13 = g->edx;
    if (t11 == 0x32u)
    {
        eax = t11;
        edx = t13;
        goto L_100c3508;
    }
    eax = t11;
    ecx = t12;
    edx = t13;
    COW_AT(100c34cd)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t14 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t15 = g->ecx;
    t16 = g->edx;
    if (t14 == 0x2cfu)
    {
        eax = t14;
        edx = t16;
        goto L_100c3508;
    }
    eax = t14;
    ecx = t15;
    edx = t16;
    COW_AT(100c34d9)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t17 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t18 = g->ecx;
    t19 = g->edx;
    if (t17 == 0x32bu)
    {
        eax = t17;
        edx = t19;
        goto L_100c3508;
    }
    eax = t17;
    ecx = t18;
    edx = t19;
    COW_AT(100c34e5)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t20 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t21 = g->edx;
    if (t20 == 0x32du)
    {
        eax = t20;
        edx = t21;
        goto L_100c3508;
    }
    COW_AT(100c34f1)
    wr16(self + 0x58u, 0u);
    wr32(self + 0x54u, 2u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = in_ebp;
    return 0u;
L_100c3508: ;
    COW_AT(100c3508)
    g->esp = sp0 - 0x62cu;
    t22 = cow_call_regs(g, COW_IMG(0x100c3140u), eax, self, g->edx, 1, 0);
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t22 * 4u) != 0u) goto L_100c3536;
    COW_AT(100c351d)
    wr16(self + 0x58u, 0x3cu);
    wr32(self + 0x54u, 2u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = in_ebp;
    return 0u;
L_100c3536: ;
    COW_AT(100c3536)
    wr16(self + 0x58u, 0x258u);
    wr32(self + 0x54u, 1u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = in_ebp;
    return 0u;
L_100c354f: ;
    COW_AT(100c354f)
    if (eax != 1u) goto L_100c35d9;
    COW_AT(100c3558)
    t23 = (uint32_t)(int16_t)rd16(self + 0x58u);
    wr32(sp0 - 0x620u, t23);
    wrf32(sp0 - 0x620u, (float)(double)(float)(double)(int32_t)t23);
    g->ecx = self;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t24 = cow_call_regs(g, COW_IMG(0x10014cf0u), t23, g->ecx, g->edx, 1, 0);
    t25 = g->ecx;
    t26 = g->edx;
    d27 = cow_take_float(g);
    d28 = fr(g, (double)rdf32(sp0 - 0x620u) - d27);
    fpush(g, d28);
    t29 = cow_call_regs(g, COW_IMG(0x10311c6cu), t24, g->ecx, g->edx, 1, 0);
    wr16(self + 0x58u, (uint16_t)t29);
    if ((int16_t)t29 > 0)
    {
        eax = t29;
    }
    else
    {
        eax = t29;
    COW_AT(100c3584)
        wr16(self + 0x58u, 0u);
        wr32(self + 0x54u, 2u);
    }
    COW_AT(100c358b)
    g->edx = 2u;
    g->esp = sp0 - 0x62cu;
    t30 = cow_call_regs(g, COW_IMG(0x100c3140u), eax, self, g->edx, 1, 0);
    t31 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u) != 0u)
    {
        eax = rd32(COW_IMG(0x10480af0u) + (uint16_t)t30 * 4u);
        edx = t31;
        goto L_100c35b5;
    }
    edx = t31;
    COW_AT(100c35a2)
    wr16(self + 0x58u, 0u);
    wr32(self + 0x54u, edx);
L_100c35a9: ;
    COW_AT(100c35a9)
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = in_ebp;
    return 0u;
L_100c35b5: ;
    COW_AT(100c35b5)
    if (rd32(eax + 0x170u) == edx) goto L_100c35c4;
    eax = rd32(eax + 0x170u);
    COW_AT(100c35bf)
    if (eax != 3u) goto L_100c35a9;
L_100c35c4: ;
    COW_AT(100c35c4)
    wr16(self + 0x58u, 0x3cu);
    wr32(self + 0x54u, edx);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = in_ebp;
    return 0u;
L_100c35d9: ;
    COW_AT(100c35d9)
    t32 = (uint32_t)(int16_t)rd16(self + 0x58u);
    wr32(sp0 - 0x620u, t32);
    wrf32(sp0 - 0x620u, (float)(double)(float)(double)(int32_t)t32);
    g->ecx = t32;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t33 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
    t34 = g->ecx;
    t35 = g->edx;
    d36 = cow_take_float(g);
    g->edx = t35;
    d37 = fr(g, (double)rdf32(sp0 - 0x620u) - d36);
    fpush(g, d37);
    t38 = cow_call_regs(g, COW_IMG(0x10311c6cu), t33, g->ecx, g->edx, 1, 0);
    t39 = g->edx;
    wr16(self + 0x58u, (uint16_t)t38);
    if ((int16_t)t38 > 0) goto L_100c35a9;
    eax = t38;
    edx = t39;
    COW_AT(100c3600)
    t40 = rd32(self + 0x40u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t41 = cow_thiscall(g, COW_IMG(0x100c2fb0u), t40, 0);
    t42 = g->edx;
    if (t41 != 2u) goto L_100c35a9;
    eax = t41;
    edx = t42;
    edi = t40;
    COW_AT(100c360f)
    g->eax = eax;
    g->esp = sp0 - 0x62cu;
    t43 = cow_thiscall(g, COW_IMG(0x100c30f0u), self, 0);
    t44 = g->ecx;
    wr32(sp0 - 0x630u, t43);
    wr32(sp0 - 0x634u, sp0 - 0x61cu);
    t45 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, sp0 - 0x61cu, 1, 2, sp0 - 0x61cu, t43);
    g->edx = t45;
    t46 = cow_thiscall(g, COW_IMG(0x100c2fe0u), edi, 0);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0x630u, t46);
    wr32(sp0 - 0x634u, t48);
    t49 = cow_call_regs(g, COW_IMG(0x100c2d00u), g->eax, g->ecx, t48, 1, 2, t48, t46);
    t50 = g->edx;
    wr32(sp0 - 0x620u, 0xffffffffu);
    g->edx = 0xffffffffu;
    t51 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t52 = g->ecx;
    t53 = g->edx;
    if (t51 == 9u)
    {
        eax = t51;
        edx = t53;
        loc_620 = 0xffffffffu;
        goto L_100c3690;
    }
    eax = t51;
    ecx = t52;
    edx = t53;
    COW_AT(100c364a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t54 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t55 = g->ecx;
    t56 = g->edx;
    if (t54 == 0xbu)
    {
        eax = t54;
        edx = t56;
        loc_620 = 0xffffffffu;
        goto L_100c3690;
    }
    eax = t54;
    ecx = t55;
    edx = t56;
    COW_AT(100c3654)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t57 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t58 = g->ecx;
    t59 = g->edx;
    if (t57 == 0x32u)
    {
        eax = t57;
        edx = t59;
        loc_620 = rd32(sp0 - 0x620u);
        goto L_100c3690;
    }
    eax = t57;
    ecx = t58;
    edx = t59;
    COW_AT(100c365e)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t60 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t61 = g->ecx;
    t62 = g->edx;
    if (t60 == 0x2cfu)
    {
        eax = t60;
        edx = t62;
        loc_620 = rd32(sp0 - 0x620u);
        goto L_100c3690;
    }
    eax = t60;
    ecx = t61;
    edx = t62;
    COW_AT(100c366a)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t63 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t64 = g->ecx;
    t65 = g->edx;
    if (t63 == 0x2du)
    {
        eax = t63;
        edx = t65;
        loc_620 = rd32(sp0 - 0x620u);
        goto L_100c3690;
    }
    eax = t63;
    ecx = t64;
    edx = t65;
    COW_AT(100c3674)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t66 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t67 = g->ecx;
    t68 = g->edx;
    if (t66 == 0x32bu)
    {
        eax = t66;
        edx = t68;
        loc_620 = rd32(sp0 - 0x620u);
        goto L_100c3690;
    }
    eax = t66;
    ecx = t67;
    edx = t68;
    COW_AT(100c3680)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t69 = cow_thiscall(g, COW_IMG(0x100c3130u), ecx, 0);
    t70 = g->edx;
    if (t69 != 0x32du)
    {
        eax = t69;
        edx = t70;
        ebp = in_ebp;
        goto L_100c37de;
    }
    eax = t69;
    edx = t70;
    loc_620 = rd32(sp0 - 0x620u);
L_100c3690: ;
    COW_AT(100c3690)
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t71 = cow_call_regs(g, COW_IMG(0x100c3150u), eax, self, g->edx, 1, 0);
    t72 = g->ecx;
    t73 = g->edx;
    if (rd32(COW_IMG(0x10480af0u) + (uint16_t)t71 * 4u) == 0u)
    {
        ecx = t72;
        edx = t73;
        edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)t71 * 4u);
    COW_AT(100c36b3)
        ebx = 0u;
    }
    else
    {
        ecx = t72;
        edx = t73;
        edi = rd32(COW_IMG(0x10480af0u) + (uint16_t)t71 * 4u);
    COW_AT(100c36a7)
        ebx = rd16(edi + 0x210u) != 0u;
    }
    COW_AT(100c36b5)
    wr32(sp0 - 0x630u, in_ebp);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ebp = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    }
    else
    {
        eax = rd32(COW_IMG(0x10456a28u));
        ebp = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    COW_AT(100c36c5)
        if (ebp == 2u) goto L_100c36cf;
    COW_AT(100c36ca)
        if (ebp != 3u) goto L_100c36d4;
L_100c36cf: ;
    COW_AT(100c36cf)
        ebp = 1u;
    }
L_100c36d4: ;
    COW_AT(100c36d4)
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x630u;
    t74 = cow_thiscall(g, COW_IMG(0x100c3130u), self, 0);
    t75 = g->edx;
    if (t74 > 0x32u)
    {
        eax = t74;
        edx = t75;
        goto L_100c374c;
    }
    eax = t74;
    edx = t75;
    zf = t74 == 0x32u;
    COW_AT(100c36e0)
    if (zf) goto L_100c373a;
    COW_AT(100c36e2)
    if (eax == 9u) goto L_100c3724;
    eax = eax - 9u;
    COW_AT(100c36e7)
    if (eax == 2u) goto L_100c3712;
    eax = eax - 2u;
    COW_AT(100c36ec)
    if (eax != 0x22u)
    {
        eax = eax - 0x22u;
        goto L_100c3793;
    }
    eax = eax - 0x22u;
    COW_AT(100c36f5)
    if ((uint8_t)ebx == 0u) goto L_100c3793;
    COW_AT(100c36fd)
    eax = ebp + 0x14u;
    edx = 5u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x50u);
L_100c3797: ;
    COW_AT(100c3797)
    if (edi == 0u)
    {
        ebp = rd32(sp0 - 0x630u);
        goto L_100c37dc;
    }
    ebp = rd32(sp0 - 0x630u);
    COW_AT(100c379c)
    if (!(rd32(edi + 0x120u) >> 9u & 1u)) goto L_100c37dc;
    COW_AT(100c37aa)
    if (edx != 0xffffffffu)
    {
    COW_AT(100c37af)
        g->eax = eax;
        g->edx = rd32(edi + 0xa0u);
        t77 = rd32(edi + 0xa0u);
        t78 = rd32(rd32(edi + 0xa0u));
        g->esp = sp0 - 0x62cu;
        t79 = cow_thiscall(g, COW_IMG(0x100c3100u), self, 0);
        t80 = g->edx;
        wr32(sp0 - 0x630u, t79);
        wr32(sp0 - 0x634u, sp0 - 0x61cu);
        wr32(sp0 - 0x638u, 0x6e69616du);
        wr32(sp0 - 0x63cu, t80);
        wr32(sp0 - 0x640u, ebx);
        g->eax = sp0 - 0x61cu;
        g->edx = t80;
        t81 = cow_thiscall(g, rd32(t78 + 0x2c4u), t80, 5, ebx, t80, 0x6e69616du, sp0 - 0x61cu, t79);
        t82 = g->edx;
        eax = t81;
        edx = t82;
    }
    COW_AT(100c37d3)
    if (ebx != 0xffffffffu) goto L_100c3860;
L_100c37dc: ;
    COW_AT(100c37dc)
L_100c37de: ;
    COW_AT(100c37de)
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t84 = cow_call_regs(g, COW_IMG(0x100c3120u), eax, self, g->edx, 1, 0);
    t85 = g->ecx;
    t86 = g->edx;
    if ((uint8_t)t84 != 0u)
    {
        eax = t84;
        ecx = t85;
        goto L_100c3841;
    }
    eax = t84;
    ecx = t85;
    edx = t86;
    COW_AT(100c37e9)
    g->edx = edx;
    g->esp = sp0 - 0x62cu;
    t87 = cow_call_regs(g, COW_IMG(0x100c3160u), eax, ecx, g->edx, 1, 0);
    t88 = g->edx;
    if ((uint16_t)t87 == 0u)
    {
        eax = t87;
        edx = t88;
    }
    else
    {
        eax = t87;
    COW_AT(100c37f3)
        if (rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u) == 0u)
        {
            edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
            eax = (uint16_t)eax;
        }
        else
        {
            edx = rd32(COW_IMG(0x10480af0u) + (uint16_t)eax * 4u);
            eax = (uint16_t)eax;
    COW_AT(100c3803)
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x62cu;
            t89 = cow_thiscall(g, COW_IMG(0x100c2fe0u), rd32(self + 0x40u), 0);
            t90 = g->edx;
            wr32(sp0 - 0x630u, t89);
            g->edx = t90;
            t91 = cow_call_regs(g, COW_IMG(0x10087df0u), t89, t90, g->edx, 0, 1, t89);
            t92 = g->edx;
            eax = t91;
            edx = t92;
        }
    }
    COW_AT(100c3813)
    wr32(sp0 - 0x630u, 0u);
    wr32(sp0 - 0x634u, 1u);
    wr32(sp0 - 0x638u, 0u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x638u;
    t93 = cow_thiscall(g, COW_IMG(0x100c3100u), self, 0);
    t94 = g->edx;
    wr32(sp0 - 0x63cu, t93);
    wr32(sp0 - 0x640u, sp0 - 0x61cu);
    g->ebx = 0u;
    g->esp = sp0 - 0x62cu;
    cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, sp0 - 0x61cu, t93, 0u, 1u, 0u);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = ebp;
    return 1u;
L_100c3712: ;
    COW_AT(100c3712)
    eax = ebp + 4u;
    edx = 1u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x10u);
    goto L_100c3797;
L_100c3724: ;
    COW_AT(100c3724)
    t76 = -((uint8_t)ebx != 0u) & 4u;
    eax = ebp + t76 * 4u;
    edx = t76;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + t76 * 0x10u);
    goto L_100c3797;
L_100c373a: ;
    COW_AT(100c373a)
    eax = ebp + 8u;
    edx = 2u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x20u);
    goto L_100c3797;
L_100c374c: ;
    COW_AT(100c374c)
    if (eax == 0x2cfu) goto L_100c3781;
    eax = eax - 0x2cfu;
    COW_AT(100c3753)
    if (eax == 0x5cu) goto L_100c376f;
    eax = eax - 0x5cu;
    COW_AT(100c3758)
    if (eax != 2u)
    {
        eax = eax - 2u;
        goto L_100c3793;
    }
    COW_AT(100c375d)
    eax = ebp + 0x1cu;
    edx = 7u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x70u);
    goto L_100c3797;
L_100c376f: ;
    COW_AT(100c376f)
    eax = ebp + 0x18u;
    edx = 6u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x60u);
    goto L_100c3797;
L_100c3781: ;
    COW_AT(100c3781)
    eax = ebp + 0xcu;
    edx = 3u;
    ebx = rd32(COW_IMG(0x1035d570u) + ebp * 4u + 0x30u);
    goto L_100c3797;
L_100c3793: ;
    COW_AT(100c3793)
    ebx = rd32(sp0 - 0x620u);
    goto L_100c3797;
L_100c3841: ;
    COW_AT(100c3841)
    wr32(sp0 - 0x630u, sp0 - 0x61cu);
    g->esp = sp0 - 0x62cu;
    cow_call_regs(g, COW_IMG(0x100c3170u), g->eax, g->ecx, sp0 - 0x61cu, 1, 1, sp0 - 0x61cu);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = rd32(sp0 - 0x62cu);
    g->ebp = ebp;
    return 1u;
L_100c3860: ;
    COW_AT(100c3860)
    t83 = rd32(sp0 - 0x62cu);
    wr32(self + 0x54u, 0u);
    g->ebx = rd32(sp0 - 0x624u);
    g->esi = rd32(sp0 - 0x628u);
    g->edi = t83;
    g->ebp = ebp;
    return 1u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_100c3480(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x100c34a5u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x62cu);
        in_esi = rd32(sp0 - 0x628u);
        in_ebx = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c34afu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34b9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34c3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34cdu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34e5u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c34f1u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3508u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c351du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c3536u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c354fu:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x62cu);
        in_esi = rd32(sp0 - 0x628u);
        in_ebx = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c3558u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x62cu);
        in_esi = rd32(sp0 - 0x628u);
        in_ebx = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x100c3584u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->edx = 2u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c358bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->edx = 2u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c35a2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c35a9u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c35b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c35bfu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c35c4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c35d9u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_edi = rd32(sp0 - 0x62cu);
        in_esi = rd32(sp0 - 0x628u);
        in_ebx = rd32(sp0 - 0x624u);
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3600u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c360fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c364au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        wr32(sp0 - 0x620u, 0xffffffffu);
        (void)sp0;
        return 1;
    }
    case 0x100c3654u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c365eu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c366au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3674u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3680u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3690u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t loc_620;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        loc_620 = rd32(sp0 - 0x620u);
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c36a7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c36b3u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c36b5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        in_ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c36c5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_ebp = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36cau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_ebp = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36cfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_ebp = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36d4u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        in_ebp = rd32(sp0 - 0x630u);
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36e0u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36e2u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36ecu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c36fdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3712u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3724u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c373au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c374cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3753u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3758u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c375du:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c376fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3781u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3793u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c3797u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x630u;
        (void)sp0;
        return 1;
    }
    case 0x100c379cu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c37aau:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c37afu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c37d3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c37dcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    case 0x100c37deu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c37e9u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c37f3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3803u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3813u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3841u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x100c3860u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        uint32_t zf;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        self = g->esi;
        edi = g->edi;
        zf = g->zf;
        g->esp = sp0 - 0x62cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_100c3480(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_100c3480(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
