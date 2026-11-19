/* f_0x102d0250 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_102d0250(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_504;
    uint32_t loc_508;
    uint32_t loc_50c;
    uint32_t loc_510;
    uint32_t loc_514;
    uint32_t loc_518;
    uint32_t loc_51c;
    uint32_t loc_520;
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
    uint32_t t68;
    uint32_t t69;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 1356u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102d027cu: ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x530u); in_esi = rd32(sp0 - 0x52cu); in_ebp = rd32(sp0 - 0x528u); in_ebx = rd32(sp0 - 0x524u); loc_514 = rd32(sp0 - 0x514u); g->ebp = rd32(sp0 - 0x528u); g->ebx = rd32(sp0 - 0x524u); g->edi = rd32(sp0 - 0x530u); g->esi = rd32(sp0 - 0x52cu); goto E_102d027c;
    case 0x102d028cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; in_edi = rd32(sp0 - 0x530u); in_esi = rd32(sp0 - 0x52cu); in_ebp = rd32(sp0 - 0x528u); in_ebx = rd32(sp0 - 0x524u); loc_514 = rd32(sp0 - 0x514u); g->ebp = rd32(sp0 - 0x528u); g->ebx = rd32(sp0 - 0x524u); g->edi = rd32(sp0 - 0x530u); g->esi = rd32(sp0 - 0x52cu); goto E_102d028c;
    case 0x102d02aeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02ae;
    case 0x102d02bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02bc;
    case 0x102d02c9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02c9;
    case 0x102d02cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02cb;
    case 0x102d02d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02d0;
    case 0x102d02d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02d4;
    case 0x102d02d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02d9;
    case 0x102d02e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02e8;
    case 0x102d02fdu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d02fd;
    case 0x102d0307u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0307;
    case 0x102d030cu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d030c;
    case 0x102d031bu: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d031b;
    case 0x102d032au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d032a;
    case 0x102d0334u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0334;
    case 0x102d033cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d033c;
    case 0x102d0341u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0341;
    case 0x102d0347u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0347;
    case 0x102d034du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d034d;
    case 0x102d0356u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0356;
    case 0x102d035bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d035b;
    case 0x102d035fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d035f;
    case 0x102d0385u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0385;
    case 0x102d03b6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d03b6;
    case 0x102d03beu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d03be;
    case 0x102d03edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); goto E_102d03ed;
    case 0x102d0413u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); goto E_102d0413;
    case 0x102d0425u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d0425;
    case 0x102d0432u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d0432;
    case 0x102d044fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d044f;
    case 0x102d0460u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d0460;
    case 0x102d047bu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d047b;
    case 0x102d0498u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); goto E_102d0498;
    case 0x102d04a8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04a8;
    case 0x102d04b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04b2;
    case 0x102d04b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04b9;
    case 0x102d04d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04d1;
    case 0x102d04dau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04da;
    case 0x102d04ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04dd;
    case 0x102d04e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04e8;
    case 0x102d04f0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d04f0;
    case 0x102d050cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d050c;
    case 0x102d0519u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0519;
    case 0x102d0546u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0546;
    case 0x102d055eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102d055e;
    case 0x102d0566u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102d0566;
    case 0x102d056au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_504 = rd32(sp0 - 0x504u); goto E_102d056a;
    case 0x102d057cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d057c;
    case 0x102d058eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d058e;
    case 0x102d0596u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0596;
    case 0x102d059bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d059b;
    case 0x102d05c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05c3;
    case 0x102d05c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05c7;
    case 0x102d05d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05d1;
    case 0x102d05dcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05dc;
    case 0x102d05e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05e7;
    case 0x102d05e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05e9;
    case 0x102d05eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05ee;
    case 0x102d05fdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d05fd;
    case 0x102d0602u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0602;
    case 0x102d0611u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0611;
    case 0x102d061bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d061b;
    case 0x102d062fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d062f;
    case 0x102d0634u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0634;
    case 0x102d0643u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0643;
    case 0x102d064du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d064d;
    case 0x102d0660u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0660;
    case 0x102d0674u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_518 = rd32(sp0 - 0x518u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0674;
    case 0x102d0683u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0683;
    case 0x102d0697u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0697;
    case 0x102d06b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06b1;
    case 0x102d06bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06bc;
    case 0x102d06c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06c3;
    case 0x102d06d0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06d0;
    case 0x102d06d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06d4;
    case 0x102d06d9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06d9;
    case 0x102d06e6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06e6;
    case 0x102d06efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d06ef;
    case 0x102d0705u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0705;
    case 0x102d0709u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0709;
    case 0x102d0725u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0725;
    case 0x102d0729u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0729;
    case 0x102d072eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d072e;
    case 0x102d0737u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0737;
    case 0x102d073bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d073b;
    case 0x102d0741u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0741;
    case 0x102d0749u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0749;
    case 0x102d0751u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_514 = rd32(sp0 - 0x514u); loc_510 = rd32(sp0 - 0x510u); loc_508 = rd32(sp0 - 0x508u); loc_504 = rd32(sp0 - 0x504u); goto E_102d0751;
    case 0x102d078cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); goto E_102d078c;
    case 0x102d079au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d079a;
    case 0x102d07a2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d07a2;
    case 0x102d07a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d07a6;
    case 0x102d07a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d07a9;
    case 0x102d07c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d07c6;
    case 0x102d07d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d07d1;
    case 0x102d080eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d080e;
    case 0x102d081eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d081e;
    case 0x102d082eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d082e;
    case 0x102d083eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d083e;
    case 0x102d0846u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0846;
    case 0x102d084eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d084e;
    case 0x102d0855u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0855;
    case 0x102d0858u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0858;
    case 0x102d0861u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0861;
    case 0x102d0865u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0865;
    case 0x102d086cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d086c;
    case 0x102d087au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d087a;
    case 0x102d088cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d088c;
    case 0x102d0891u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0891;
    case 0x102d0897u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d0897;
    case 0x102d089fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_510 = rd32(sp0 - 0x510u); goto E_102d089f;
    case 0x102d08a6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08a6;
    case 0x102d08b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08b9;
    case 0x102d08e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08e9;
    case 0x102d08ecu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08ec;
    case 0x102d08f3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08f3;
    case 0x102d08fau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d08fa;
    case 0x102d0906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0906;
    case 0x102d091bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d091b;
    case 0x102d092eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d092e;
    case 0x102d093fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d093f;
    case 0x102d0946u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0946;
    case 0x102d094cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d094c;
    case 0x102d0950u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0950;
    case 0x102d0957u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0957;
    case 0x102d095cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d095c;
    case 0x102d0962u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0962;
    case 0x102d096eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d096e;
    case 0x102d0976u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0976;
    case 0x102d09c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102d09c2;
    case 0x102d09d2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; goto E_102d09d2;
    case 0x102d09e2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d09e2;
    case 0x102d09efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d09ef;
    case 0x102d09fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d09fb;
    case 0x102d0a01u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0a01;
    case 0x102d0a09u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0a09;
    case 0x102d0a0du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); goto E_102d0a0d;
    case 0x102d0a3eu: edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a3e;
    case 0x102d0a48u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a48;
    case 0x102d0a51u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a51;
    case 0x102d0a58u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a58;
    case 0x102d0a61u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a61;
    case 0x102d0a68u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a68;
    case 0x102d0a71u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a71;
    case 0x102d0a78u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a78;
    case 0x102d0a81u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a81;
    case 0x102d0a88u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a88;
    case 0x102d0a91u: eax = g->eax; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); goto E_102d0a91;
    case 0x102d0a98u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0a98;
    case 0x102d0a9du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0a9d;
    case 0x102d0aa8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0aa8;
    case 0x102d0aacu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0aac;
    case 0x102d0ab1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0ab1;
    case 0x102d0ac1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0ac1;
    case 0x102d0adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0adb;
    case 0x102d0afdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0afd;
    case 0x102d0b11u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b11;
    case 0x102d0b15u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b15;
    case 0x102d0b29u: eax = g->eax; ecx = g->ecx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b29;
    case 0x102d0b32u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b32;
    case 0x102d0b52u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b52;
    case 0x102d0b6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b6c;
    case 0x102d0b6eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102d0b6e;
    case 0x102d0b72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b72;
    case 0x102d0b8au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b8a;
    case 0x102d0b92u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0b92;
    case 0x102d0bc8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102d0bc8;
    case 0x102d0bcdu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0bcd;
    case 0x102d0bd9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0bd9;
    case 0x102d0bf9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0bf9;
    case 0x102d0c17u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0c17;
    case 0x102d0c1cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0c1c;
    case 0x102d0c21u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0c21;
    case 0x102d0c5du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; goto E_102d0c5d;
    case 0x102d0c72u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0c72;
    case 0x102d0c88u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0c88;
    case 0x102d0ca6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; ebp = g->ebp; esi = g->esi; loc_520 = rd32(sp0 - 0x520u); loc_51c = rd32(sp0 - 0x51cu); loc_518 = rd32(sp0 - 0x518u); loc_510 = rd32(sp0 - 0x510u); loc_50c = rd32(sp0 - 0x50cu); loc_508 = rd32(sp0 - 0x508u); goto E_102d0ca6;
    default: break;
    }
#endif

    COW_AT(102d0250)
    wr32(sp0 - 0x524u, in_ebx);
    wr32(sp0 - 0x528u, in_ebp);
    wr32(sp0 - 0x52cu, in_esi);
    wr32(sp0 - 0x530u, in_edi);
    t1 = rd32(arg1 + 0x2d5cu);
    wr32(sp0 - 0x514u, t1);
    if (arg1 == arg2 + 0xc80u)
    {
        eax = arg1;
        ecx = t1;
        loc_514 = t1;
    }
    else
    {
        ecx = t1;
        loc_514 = t1;
    COW_AT(102d027c)
        wr32(sp0 - 0x534u, 0x1000u);
        wr32(sp0 - 0x538u, arg1);
        wr32(sp0 - 0x53cu, arg2 + 0xc80u);
        g->eax = arg1;
        g->esp = sp0 - 0x53cu;
        t2 = cow_thiscall(g, rd32(arg2 + 0x6770u), ecx, 0);
        t3 = g->ecx;
        eax = t2;
        ecx = t3;
        loc_514 = rd32(sp0 - 0x514u);
    }
    COW_AT(102d028c)
    wr32(sp0 - 0x534u, arg2 + 0xc80u);
    wr32(sp0 - 0x538u, sp0 - 0x400u);
    g->esp = sp0 - 0x538u;
    cow_thiscall(g, rd32(arg2 + 0x6768u), ecx, 0);
    wr32(sp0 - 0x510u, 0u);
    wr32(sp0 - 0x520u, 0u);
    wr32(sp0 - 0x518u, 0u);
    eax = 0u;
    ebp = 0u;
    loc_510 = 0u;
    loc_520 = 0u;
    loc_518 = 0u;
    loc_514 = rd32(sp0 - 0x514u);
L_102d02ae: ;
    COW_AT(102d02ae)
    edx = 0u;
    ebx = 0u;
    esi = (uint32_t)((int32_t)rd32(COW_IMG(0x10344dccu) + eax * 4u) >> 2u);
L_102d02bc: ;
    COW_AT(102d02bc)
    if ((int32_t)edx >= (int32_t)rd32(ebp * 4u + sp0 - 0x400u))
    {
        ecx = rd32(ebp * 4u + sp0 - 0x400u);
        ebx = ebx + rd32(ebp * 4u + sp0 - 0x400u);
    }
    else
    {
        ecx = rd32(ebp * 4u + sp0 - 0x400u);
        ebx = ebx + rd32(ebp * 4u + sp0 - 0x400u);
    COW_AT(102d02c9)
        edx = ecx;
    }
    COW_AT(102d02cb)
    if ((int32_t)ecx > 7)
    {
    COW_AT(102d02d0)
        wr32(sp0 - 0x510u, loc_510 + 1u);
        loc_510 = loc_510 + 1u;
    }
    COW_AT(102d02d4)
    if (ebp + 1u != esi)
    {
        ebp = ebp + 1u;
        goto L_102d02bc;
    }
    ebp = ebp + 1u;
    COW_AT(102d02d9)
    wr32(eax * 4u + sp0 - 0x480u, ebx);
    if ((int32_t)loc_518 >= (int32_t)edx)
    {
    COW_AT(102d034d)
        if ((int32_t)ebx < (int32_t)rd32(COW_IMG(0x10344b40u) + eax * 4u)) goto L_102d035b;
    COW_AT(102d0356)
        if ((int32_t)edx >= 3) goto L_102d035f;
L_102d035b: ;
    COW_AT(102d035b)
        edx = 0u;
        ebx = 0u;
    }
    else
    {
    COW_AT(102d02e8)
        wr32(sp0 - 0x518u, edx);
        if (rd32(arg1 + 0x2d64u) != 0u)
        {
            loc_518 = edx;
        }
        else
        {
            loc_518 = edx;
    COW_AT(102d02fd)
            if ((rd8(COW_IMG(0x10344dc8u) + eax * 4u) & 0x80u) == 0u) goto L_102d030c;
    COW_AT(102d0307)
            if ((int32_t)eax < 22) goto L_102d031b;
L_102d030c: ;
    COW_AT(102d030c)
            if ((int32_t)(loc_510 << 3u) < (int32_t)rd32(arg1 + 0x2d60u)) goto L_102d032a;
L_102d031b: ;
    COW_AT(102d031b)
            if ((int32_t)(loc_510 << 4u) >= (int32_t)rd32(arg1 + 0x2d60u)) goto L_102d035f;
L_102d032a: ;
    COW_AT(102d032a)
            if ((int32_t)eax <= 26)
            {
                ecx = 0x1cu;
            }
            else
            {
    COW_AT(102d0334)
                if ((int32_t)(eax + 2u) < 32)
                {
                    ecx = eax + 2u;
                }
                else
                {
    COW_AT(102d033c)
                    ecx = 0x20u;
                }
            }
    COW_AT(102d0341)
            if ((int32_t)loc_514 < (int32_t)ecx)
            {
    COW_AT(102d0347)
                wr32(sp0 - 0x514u, ecx);
                loc_514 = ecx;
            }
        }
    }
L_102d035f: ;
    COW_AT(102d035f)
    wr32(arg2 + eax * 4u + 0x80u, edx);
    wr32(eax * 4u + sp0 - 0x500u, loc_510);
    wr32(arg2 + eax * 4u, ebx + loc_520);
    wr32(sp0 - 0x520u, ebx + loc_520);
    if (eax + 1u != 0x20u)
    {
        eax = eax + 1u;
        loc_520 = ebx + loc_520;
        goto L_102d02ae;
    }
    loc_520 = ebx + loc_520;
    COW_AT(102d0385)
    wr32(arg2 + 0x100u, loc_514);
    wr32(sp0 - 0x50cu, 0xau);
    if ((int32_t)(rd32(arg1 + 0x2d60u) * 2u) >= (int32_t)(rd32(loc_514 * 4u + sp0 - 0x504u) * 0xcu))
    {
        eax = rd32(loc_514 * 4u + sp0 - 0x504u);
        ecx = rd32(arg1 + 0x2d60u) * 2u;
        edx = rd32(loc_514 * 4u + sp0 - 0x504u) * 0xcu;
        ebx = loc_514 * 4u + sp0 - 0x504u;
        loc_50c = 0xau;
    }
    else
    {
        eax = rd32(loc_514 * 4u + sp0 - 0x504u);
        ecx = rd32(arg1 + 0x2d60u) * 2u;
        edx = rd32(loc_514 * 4u + sp0 - 0x504u) * 0xcu;
        ebx = loc_514 * 4u + sp0 - 0x504u;
    COW_AT(102d03b6)
        wr32(sp0 - 0x50cu, 0xbu);
        loc_50c = 0xbu;
    }
    COW_AT(102d03be)
    wr32(sp0 - 0x534u, arg2);
    wr32(sp0 - 0x538u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x524u;
    t4 = cow_cdecl(g, COW_IMG(0x102d0d40u), 5, arg1, arg2, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu), rd32(sp0 - 0x528u));
    t5 = rd32(arg1 + 0x2d60u) - rd32(sp0 - 0x514u) * 3u - t4;
    wr32(sp0 - 0x51cu, t5);
    if ((int32_t)(rd32(arg1 + 0x2d60u) - rd32(sp0 - 0x514u) * 3u - t4) <= (int32_t)(rd32(ebx) << 5u))
    {
        ecx = rd32(sp0 - 0x514u) * 3u;
        loc_51c = t5;
    COW_AT(102d0413)
        t7 = sp0 - 0x500u - arg2;
        wr32(sp0 - 0x518u, t7);
        edx = rd32(sp0 - 0x514u);
        ebx = arg2;
        ebp = 0u;
        loc_518 = t7;
L_102d0425: ;
    COW_AT(102d0425)
        if ((int32_t)rd32(ebx + 0x80u) < 3)
        {
            eax = 0u;
            esi = rd32(ebx + 0x80u);
        }
        else
        {
            esi = rd32(ebx + 0x80u);
    COW_AT(102d0432)
            wr32(sp0 - 0x534u, 1u);
            t8 = rd32(sp0 - 0x50cu);
            wr32(sp0 - 0x538u, t8);
            t9 = (esi << 8u) - rd32(sp0 - 0x520u);
            wr32(sp0 - 0x53cu, t9);
            g->eax = 0u;
            g->esp = sp0 - 0x530u;
            t10 = cow_cdecl(g, COW_IMG(0x102d0e50u), 3, t9, t8, 1u);
            eax = t10;
            edx = rd32(sp0 - 0x514u);
            esi = t9;
            loc_51c = rd32(sp0 - 0x51cu);
            loc_518 = rd32(sp0 - 0x518u);
        }
    COW_AT(102d044f)
        wr32(ebx, eax);
        wr32(ebx + loc_518, esi);
        if ((int32_t)(ebp + 1u) < (int32_t)edx)
        {
            ecx = loc_518;
            ebx = ebx + 4u;
            ebp = ebp + 1u;
            goto L_102d0425;
        }
    COW_AT(102d0460)
        wr32(arg2 + 0x10cu, 0u);
        if (rd32(arg1 + 0x2d64u) == 0u)
        {
    COW_AT(102d047b)
            wr32(sp0 - 0x534u, arg2);
            wr32(sp0 - 0x538u, sp0 - 0x500u);
            wr32(sp0 - 0x53cu, loc_51c);
            g->eax = arg1;
            g->esp = sp0 - 0x480u;
            t11 = cow_bridge_indirect(g, COW_IMG(0x102d1570u), 0u, 47u, (const uint32_t[]){loc_51c, sp0 - 0x500u, arg2, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu), rd32(sp0 - 0x528u), rd32(sp0 - 0x524u), rd32(sp0 - 0x520u), loc_51c, loc_518, rd32(sp0 - 0x514u), rd32(sp0 - 0x510u), rd32(sp0 - 0x50cu), rd32(sp0 - 0x508u), rd32(sp0 - 0x504u), rd32(sp0 - 0x500u), rd32(sp0 - 0x4fcu), rd32(sp0 - 0x4f8u), rd32(sp0 - 0x4f4u), rd32(sp0 - 0x4f0u), rd32(sp0 - 0x4ecu), rd32(sp0 - 0x4e8u), rd32(sp0 - 0x4e4u), rd32(sp0 - 0x4e0u), rd32(sp0 - 0x4dcu), rd32(sp0 - 0x4d8u), rd32(sp0 - 0x4d4u), rd32(sp0 - 0x4d0u), rd32(sp0 - 0x4ccu), rd32(sp0 - 0x4c8u), rd32(sp0 - 0x4c4u), rd32(sp0 - 0x4c0u), rd32(sp0 - 0x4bcu), rd32(sp0 - 0x4b8u), rd32(sp0 - 0x4b4u), rd32(sp0 - 0x4b0u), rd32(sp0 - 0x4acu), rd32(sp0 - 0x4a8u), rd32(sp0 - 0x4a4u), rd32(sp0 - 0x4a0u), rd32(sp0 - 0x49cu), rd32(sp0 - 0x498u), rd32(sp0 - 0x494u), rd32(sp0 - 0x490u), rd32(sp0 - 0x48cu), rd32(sp0 - 0x488u), rd32(sp0 - 0x484u)}, g->ecx, g->edx, g->eax, 188u);
            wr32(sp0 - 0x51cu, loc_51c - t11);
            edx = rd32(sp0 - 0x514u);
            loc_51c = loc_51c - t11;
        }
    COW_AT(102d0498)
        wr32(sp0 - 0x520u, 0u);
        wr32(sp0 - 0x510u, arg2 + 0x80u);
        eax = 0u;
        esi = arg2 + 0x80u;
        loc_520 = 0u;
        loc_510 = arg2 + 0x80u;
L_102d04a8: ;
    COW_AT(102d04a8)
        wr32(sp0 - 0x508u, rd32(esi));
        if ((int32_t)rd32(esi) < 0)
        {
            ecx = rd32(esi);
            loc_508 = rd32(esi);
    COW_AT(102d0519)
            wr32(sp0 - 0x504u, 0u);
            wr32(sp0 - 0x518u, 0u);
            eax = loc_520;
            ebx = arg2 + (uint32_t)((int32_t)rd32(COW_IMG(0x10344dc8u) + loc_520 * 4u) >> 2u) * 0x10u + 0xc80u;
            ebp = (uint32_t)((int32_t)rd32(COW_IMG(0x10344dccu) + loc_520 * 4u) >> 2u);
            esi = (uint32_t)((int32_t)rd32(COW_IMG(0x10344dc8u) + loc_520 * 4u) >> 2u);
            loc_518 = 0u;
            loc_504 = 0u;
L_102d0546: ;
    COW_AT(102d0546)
            wr32(sp0 - 0x534u, ebx);
            g->eax = eax;
            g->esp = sp0 - 0x530u;
            t12 = cow_cdecl(g, COW_IMG(0x102d0e70u), 1, ebx);
            t13 = rd32(sp0 - 0x504u);
            wr32(esi * 4u + sp0 - 0x400u, t12);
            if ((int32_t)t13 >= (int32_t)t12)
            {
                eax = t12;
    COW_AT(102d0566)
                edx = rd32(sp0 - 0x504u);
                loc_504 = rd32(sp0 - 0x504u);
            }
            else
            {
                eax = t12;
    COW_AT(102d055e)
                wr32(sp0 - 0x504u, eax);
                edx = eax;
                loc_504 = eax;
            }
    COW_AT(102d056a)
            t14 = eax + rd32(sp0 - 0x518u);
            wr32(sp0 - 0x518u, t14);
            if ((int32_t)(esi + 1u) < (int32_t)ebp)
            {
                ecx = t14;
                ebx = ebx + 0x10u;
                esi = esi + 1u;
                loc_51c = rd32(sp0 - 0x51cu);
                loc_518 = t14;
                loc_520 = rd32(sp0 - 0x520u);
                loc_510 = rd32(sp0 - 0x510u);
                loc_508 = rd32(sp0 - 0x508u);
                goto L_102d0546;
            }
            loc_518 = t14;
    COW_AT(102d057c)
            t15 = rd32(rd32(sp0 - 0x510u) - 0x80u);
            t16 = rd32(sp0 - 0x510u);
            wr32(t16, edx);
            if (t15 == 0u)
            {
                eax = t15;
                ebp = t16;
    COW_AT(102d061b)
                t19 = rd32(sp0 + rd32(sp0 - 0x520u) * 4u - 0x500u) + 0x100u;
                t20 = rd32(sp0 - 0x520u);
                wr32(sp0 + t20 * 4u - 0x500u, t19);
                ebx = t20;
                esi = sp0 + t20 * 4u - 0x500u;
            }
            else
            {
                eax = t15;
                ebp = t16;
    COW_AT(102d058e)
                if ((uint32_t)((int32_t)(eax - 1u) >> 1u) <= 4u)
                {
                    eax = (uint32_t)((int32_t)(eax - 1u) >> 1u);
                }
                else
                {
    COW_AT(102d0596)
                    eax = 4u;
                }
    COW_AT(102d059b)
                if ((int32_t)rd32(arg1 + 0x2d60u) >= 1100)
                {
                    ecx = rd32(COW_IMG(0x10344db0u) + eax * 4u) * (edx + rd32(sp0 - 0x508u));
                    ebx = rd32(sp0 - 0x520u);
    COW_AT(102d05c7)
                    if ((int32_t)rd32(COW_IMG(0x10344ac0u) + ebx * 4u) <= 16)
                    {
    COW_AT(102d05d1)
                        if ((int32_t)rd32(ebx * 4u + sp0 - 0x500u) > 6144)
                        {
                            eax = rd32(ebx * 4u + sp0 - 0x500u);
    COW_AT(102d05dc)
                            if ((int32_t)(ecx * 2u) < (int32_t)(eax - 0x400u))
                            {
                                ecx = ecx * 2u;
                            }
                            else
                            {
                                eax = eax - 0x400u;
    COW_AT(102d05e7)
                                ecx = eax;
                            }
                        }
                    }
                }
                else
                {
                    ecx = rd32(COW_IMG(0x10344db0u) + eax * 4u) * (edx + rd32(sp0 - 0x508u));
                    ebx = rd32(sp0 - 0x520u);
    COW_AT(102d05c3)
                    ecx = ecx * 2u;
                }
    COW_AT(102d05e9)
                if ((int32_t)ebx > 1)
                {
    COW_AT(102d05ee)
                    t17 = rd32(ebx * 4u + sp0 - 0x504u) - (uint32_t)((int32_t)ecx >> 3u);
                    wr32(ebx * 4u + sp0 - 0x504u, t17);
                }
    COW_AT(102d05fd)
                if ((int32_t)ebx < 31)
                {
    COW_AT(102d0602)
                    t18 = rd32(ebx * 4u + sp0 - 0x4fcu) - (uint32_t)((int32_t)ecx >> 2u);
                    wr32(ebx * 4u + sp0 - 0x4fcu, t18);
                }
    COW_AT(102d0611)
                wr32(ebx * 4u + sp0 - 0x500u, rd32(ebx * 4u + sp0 - 0x500u) - ecx);
                eax = 0u;
                esi = ebx * 4u + sp0 - 0x500u;
            }
    COW_AT(102d062f)
            if ((int32_t)edx > 7)
            {
    COW_AT(102d0634)
                if ((int32_t)loc_518 > (int32_t)rd32(COW_IMG(0x10344b40u) + ebx * 4u))
                {
                    ecx = loc_518;
                    edx = rd32(COW_IMG(0x10344b40u) + ebx * 4u);
    COW_AT(102d0643)
                    if ((int32_t)rd32(esi) >= 1024)
                    {
                        esi = rd32(esi);
                        goto L_102d0660;
                    }
                    esi = rd32(esi);
    COW_AT(102d064d)
                    if ((int32_t)rd32(arg1 + 0x2d60u) <= 1800) goto L_102d0674;
                    edx = arg1;
L_102d0660: ;
    COW_AT(102d0660)
                    wr32(sp0 - 0x534u, 1u);
                    t21 = rd32(sp0 - 0x50cu);
                    wr32(sp0 - 0x538u, t21);
                    wr32(sp0 - 0x53cu, esi);
                    g->eax = t21;
                    g->esp = sp0 - 0x530u;
                    t22 = cow_cdecl(g, COW_IMG(0x102d0e50u), 3, esi, t21, 1u);
                    eax = t22;
                    ebp = rd32(sp0 - 0x510u);
                }
            }
L_102d0674: ;
    COW_AT(102d0674)
            t23 = rd32(sp0 - 0x514u);
            t24 = rd32(sp0 - 0x510u);
            wr32(ebp - 0x80u, eax);
            eax = rd32(sp0 - 0x520u);
            edx = t23;
            esi = t24;
            loc_51c = rd32(sp0 - 0x51cu);
        }
        else
        {
            ecx = rd32(esi);
    COW_AT(102d04b2)
            if (rd32(sp0 - 0x50cu) == 0xau)
            {
    COW_AT(102d04f0)
                if ((int32_t)(rd32(COW_IMG(0x10344ac0u) + eax * 4u) * ecx) > (int32_t)(rd32(eax * 4u + sp0 - 0x480u) << 3u))
                {
    COW_AT(102d050c)
                    wr32(eax * 4u + sp0 - 0x500u, rd32(eax * 4u + sp0 - 0x500u) + 0x100u);
                }
            }
            else
            {
    COW_AT(102d04b9)
                if ((int32_t)(rd32(COW_IMG(0x10344ac0u) + eax * 4u) * ecx) >= (int32_t)(rd32(eax * 4u + sp0 - 0x480u) * 5u)) goto L_102d04dd;
    COW_AT(102d04d1)
                if ((int32_t)ecx >= 62) goto L_102d0683;
    COW_AT(102d04da)
                wr32(esi, ecx + 1u);
L_102d04dd: ;
    COW_AT(102d04dd)
                if ((int32_t)rd32(esi) < 62)
                {
                    ecx = rd32(esi);
    COW_AT(102d04e8)
                    wr32(esi, ecx + 1u);
                }
            }
        }
L_102d0683: ;
    COW_AT(102d0683)
        wr32(sp0 - 0x520u, eax + 1u);
        wr32(sp0 - 0x510u, esi + 4u);
        if ((int32_t)(eax + 1u) < (int32_t)edx)
        {
            loc_520 = eax + 1u;
            eax = eax + 1u;
            loc_510 = esi + 4u;
            esi = esi + 4u;
            goto L_102d04a8;
        }
    }
    else
    {
        edx = rd32(ebx) << 5u;
        esi = t5;
        loc_51c = t5;
    COW_AT(102d03ed)
        wr32(sp0 - 0x534u, arg2);
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        wr32(sp0 - 0x53cu, sp0 - 0x500u);
        wr32(sp0 - 0x540u, esi);
        g->eax = sp0 - 0x400u;
        g->esp = sp0 - 0x4e4u;
        t6 = cow_bridge_indirect(g, COW_IMG(0x102d0ed0u), 0u, 23u, (const uint32_t[]){esi, sp0 - 0x500u, sp0 - 0x400u, arg2, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu), rd32(sp0 - 0x528u), rd32(sp0 - 0x524u), rd32(sp0 - 0x520u), loc_51c, rd32(sp0 - 0x518u), rd32(sp0 - 0x514u), rd32(sp0 - 0x510u), rd32(sp0 - 0x50cu), rd32(sp0 - 0x508u), rd32(sp0 - 0x504u), rd32(sp0 - 0x500u), rd32(sp0 - 0x4fcu), rd32(sp0 - 0x4f8u), rd32(sp0 - 0x4f4u), rd32(sp0 - 0x4f0u), rd32(sp0 - 0x4ecu), rd32(sp0 - 0x4e8u)}, g->ecx, g->edx, g->eax, 92u);
        wr32(sp0 - 0x51cu, esi - t6);
        edx = rd32(sp0 - 0x514u);
        loc_51c = esi - t6;
    }
    COW_AT(102d0697)
    wr32(sp0 - 0x520u, 0u);
    wr32(sp0 - 0x518u, 0u);
    wr32(sp0 - 0x510u, 0u);
    t25 = arg2 - (sp0 - 0x500u);
    wr32(sp0 - 0x508u, t25);
    ebp = t25;
    esi = 0u;
    loc_518 = 0u;
    loc_520 = 0u;
    loc_510 = 0u;
    loc_508 = t25;
L_102d06b1: ;
    COW_AT(102d06b1)
    if (rd32(ebp + esi * 4u + sp0 - 0x500u) == 0u)
    {
        eax = esi * 4u + sp0 - 0x500u;
    }
    else
    {
        eax = esi * 4u + sp0 - 0x500u;
        ebx = rd32(ebp + esi * 4u + sp0 - 0x500u);
    COW_AT(102d06bc)
        if ((int32_t)esi <= 1)
        {
            ecx = rd32(eax);
            goto L_102d06d4;
        }
        ecx = rd32(eax);
    COW_AT(102d06c3)
        if ((int32_t)ecx < (int32_t)(rd32(eax - 4u) - 0xf00u)) goto L_102d06e6;
    COW_AT(102d06d0)
        edx = rd32(sp0 - 0x514u);
L_102d06d4: ;
    COW_AT(102d06d4)
        if ((int32_t)esi >= (int32_t)(edx - 1u)) goto L_102d06ef;
    COW_AT(102d06d9)
        if ((int32_t)ecx >= (int32_t)(rd32(eax + 4u) - 0x1400u)) goto L_102d06ef;
L_102d06e6: ;
    COW_AT(102d06e6)
        wr32(eax + ebp, 0u);
L_102d0725: ;
    COW_AT(102d0725)
        edx = rd32(sp0 - 0x514u);
    }
    COW_AT(102d0729)
    if ((int32_t)(esi + 1u) < (int32_t)edx)
    {
        esi = esi + 1u;
        goto L_102d06b1;
    }
    COW_AT(102d072e)
    wr32(sp0 - 0x514u, edx - 1u);
    if ((int32_t)(edx - 1u) <= 0)
    {
        loc_514 = edx - 1u;
        edx = edx - 1u;
    }
    else
    {
        edx = edx - 1u;
    COW_AT(102d0737)
        eax = loc_51c;
L_102d073b: ;
    COW_AT(102d073b)
        if (rd32(arg2 + edx * 4u) != 0u) goto L_102d0749;
    COW_AT(102d0741)
        if ((int32_t)(edx - 1u) > 0)
        {
            eax = eax + 3u;
            edx = edx - 1u;
            goto L_102d073b;
        }
        eax = eax + 3u;
        edx = edx - 1u;
L_102d0749: ;
    COW_AT(102d0749)
        wr32(sp0 - 0x514u, edx);
        wr32(sp0 - 0x51cu, eax);
        loc_51c = eax;
        loc_514 = edx;
    }
    COW_AT(102d0751)
    wr32(sp0 - 0x534u, arg2);
    wr32(sp0 - 0x538u, arg1);
    wr32(sp0 - 0x514u, loc_514 + 1u);
    wr32(arg2 + 0x100u, loc_514 + 1u);
    g->eax = eax;
    g->esp = sp0 - 0x528u;
    t29 = cow_cdecl(g, COW_IMG(0x102d0da0u), 4, arg1, arg2, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu));
    t30 = t29 + rd32(sp0 - 0x51cu);
    wr32(sp0 - 0x51cu, t30);
    if ((int32_t)(t30 * 0xau) <= (int32_t)rd32(sp0 - 0x520u))
    {
        eax = rd32(sp0 - 0x520u);
        ecx = t30;
        edx = rd32(sp0 - 0x510u);
        ebx = t30 * 0xau;
        ebp = loc_514 + 1u;
        loc_51c = t30;
        goto L_102d079a;
    }
    eax = rd32(sp0 - 0x520u);
    ecx = t30;
    edx = rd32(sp0 - 0x510u);
    ebx = t30 * 0xau;
    ebp = loc_514 + 1u;
    loc_51c = t30;
    COW_AT(102d078c)
    t31 = edx - rd32(sp0 - 0x518u);
    wr32(sp0 - 0x510u, t31);
    if (edx == rd32(sp0 - 0x518u))
    {
        loc_510 = t31;
        goto L_102d089f;
    }
    edx = t31;
L_102d079a: ;
    COW_AT(102d079a)
    if ((int32_t)ecx >= 600)
    {
    COW_AT(102d07a6)
        ecx = ecx * 9u;
    }
    else
    {
    COW_AT(102d07a2)
        ecx = ebx;
    }
    COW_AT(102d07a9)
    t32 = cow_divs(g, (ecx - eax) << 0xau, edx * 0xau);
    t33 = cow_mods(g, (ecx - eax) << 0xau, edx * 0xau);
    wr32(sp0 - 0x510u, t32);
    if ((int32_t)(ecx - eax) >= 0)
    {
        loc_510 = t32;
    }
    else
    {
        edx = t32;
        loc_510 = t32;
    COW_AT(102d07c6)
        if (rd32(sp0 - 0x50cu) == 0xau)
        {
    COW_AT(102d07d1)
            t34 = edx + (uint32_t)((int32_t)edx >> 3u);
            wr32(sp0 - 0x510u, t34);
            t35 = rd32(sp0 - 0x500u) - (edx + (uint32_t)((int32_t)edx >> 3u));
            wr32(sp0 - 0x500u, t35);
            t36 = rd32(sp0 - 0x4fcu) - (uint32_t)((int32_t)(t34 * 0xbcu) >> 8u);
            wr32(sp0 - 0x4fcu, t36);
            eax = 2u;
            ecx = (uint32_t)((int32_t)(t34 * 0x61u) >> 8u);
            edx = t34;
            loc_510 = t34;
L_102d080e: ;
    COW_AT(102d080e)
            t37 = rd32(eax * 4u + sp0 - 0x500u) - ecx;
            wr32(eax * 4u + sp0 - 0x500u, t37);
            if ((int32_t)(eax + 1u) < 8)
            {
                eax = eax + 1u;
                goto L_102d080e;
            }
            eax = eax + 1u;
    COW_AT(102d081e)
            if ((int32_t)eax >= 18) goto L_102d083e;
            ecx = (uint32_t)((int32_t)(edx * 0x4au) >> 8u);
L_102d082e: ;
    COW_AT(102d082e)
            t38 = rd32(eax * 4u + sp0 - 0x500u) - ecx;
            wr32(eax * 4u + sp0 - 0x500u, t38);
            if ((int32_t)(eax + 1u) < 18)
            {
                eax = eax + 1u;
                goto L_102d082e;
            }
L_102d083e: ;
    COW_AT(102d083e)
            eax = 0u;
            ecx = arg2 + 0x80u;
L_102d0846: ;
    COW_AT(102d0846)
            if ((int32_t)(edx + rd32(eax * 4u + sp0 - 0x500u)) < 0)
            {
    COW_AT(102d084e)
                if ((int32_t)rd32(ecx) < 63)
                {
                    esi = rd32(ecx);
    COW_AT(102d0855)
                    wr32(ecx, esi + 1u);
                }
            }
    COW_AT(102d0858)
            if ((int32_t)(eax + 1u) < 18)
            {
                eax = eax + 1u;
                ecx = ecx + 4u;
                goto L_102d0846;
            }
            eax = eax + 1u;
    COW_AT(102d0861)
            if ((int32_t)eax < (int32_t)ebp)
            {
    COW_AT(102d0865)
                esi = arg2 + eax * 4u + 0x80u;
L_102d086c: ;
    COW_AT(102d086c)
                if ((int32_t)(edx + rd32(eax * 4u + sp0 - 0x500u)) < 1024)
                {
                    ecx = edx + rd32(eax * 4u + sp0 - 0x500u);
    COW_AT(102d087a)
                    if ((int32_t)(rd32(esi) - (uint32_t)((int32_t)(ecx - 0x400u) >> 0xau)) <= 63)
                    {
                        ecx = rd32(esi) - (uint32_t)((int32_t)(ecx - 0x400u) >> 0xau);
                    }
                    else
                    {
    COW_AT(102d088c)
                        ecx = 0x3fu;
                    }
    COW_AT(102d0891)
                    t39 = rd32(sp0 - 0x514u);
                    wr32(esi, ecx);
                    ebp = t39;
                }
    COW_AT(102d0897)
                if ((int32_t)(eax + 1u) < (int32_t)ebp)
                {
                    eax = eax + 1u;
                    esi = esi + 4u;
                    goto L_102d086c;
                }
            }
        }
    }
L_102d089f: ;
    COW_AT(102d089f)
    wr32(sp0 - 0x518u, ebp - 1u);
    esi = ebp - 1u;
    loc_518 = ebp - 1u;
L_102d08a6: ;
    COW_AT(102d08a6)
    if (rd32(esi * 4u + sp0 + rd32(sp0 - 0x508u) - 0x500u) != 0u)
    {
        eax = rd32(esi * 4u + sp0 + rd32(sp0 - 0x508u) - 0x500u);
        ebp = esi * 4u + sp0 + rd32(sp0 - 0x508u) - 0x500u;
    COW_AT(102d08b9)
        wr32(sp0 - 0x534u, 1u);
        t40 = rd32(sp0 - 0x50cu);
        wr32(sp0 - 0x538u, t40);
        t41 = loc_510 + rd32(esi * 4u + sp0 - 0x500u);
        wr32(sp0 - 0x53cu, t41);
        g->eax = eax;
        g->ecx = t40;
        g->edx = t41;
        g->esp = sp0 - 0x530u;
        t42 = cow_cdecl(g, COW_IMG(0x102d0e50u), 3, t41, t40, 1u);
        t43 = g->ecx;
        t44 = g->edx;
        wr32(ebp, t42);
        wr32(sp0 - 0x540u, arg2);
        wr32(sp0 - 0x544u, sp0 - 0x400u);
        wr32(sp0 - 0x548u, esi);
        g->eax = sp0 - 0x400u;
        g->esp = sp0 - 0x528u;
        t45 = cow_cdecl(g, COW_IMG(0x102d0cd0u), 8, esi, sp0 - 0x400u, arg2, rd32(sp0 - 0x53cu), rd32(sp0 - 0x538u), 1u, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu));
        wr32(esi * 4u + sp0 - 0x500u, ebx - t45);
        ebx = ebx - t45;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        loc_518 = rd32(sp0 - 0x518u);
    }
    COW_AT(102d08e9)
    if ((int32_t)(esi - 1u) >= 0)
    {
        esi = esi - 1u;
        goto L_102d08a6;
    }
    COW_AT(102d08ec)
    ebp = 0u;
    esi = 0u;
L_102d08f3: ;
    COW_AT(102d08f3)
    if (rd32(arg2 + esi * 4u) != 0u)
    {
        ecx = rd32(arg2 + esi * 4u);
    COW_AT(102d0906)
        if ((int32_t)rd32(COW_IMG(0x10344ac0u) + esi * 4u) <= (int32_t)(loc_51c * 2u - ebp * 2u - 0x10u))
        {
    COW_AT(102d092e)
            if ((int32_t)ecx >= 7)
            {
                eax = rd32(esi * 4u + sp0 - 0x500u) - ebp * 0xau;
                goto L_102d094c;
            }
            eax = rd32(esi * 4u + sp0 - 0x500u) - ebp * 0xau;
    COW_AT(102d093f)
            if ((int32_t)eax <= 4000) goto L_102d094c;
    COW_AT(102d0946)
            wr32(arg2 + esi * 4u, ecx + 1u);
L_102d0976: ;
    COW_AT(102d0976)
            t46 = arg2 + rd32(COW_IMG(0x10344dc8u) + esi * 4u) * 4u + 0xc80u;
            wr32(sp0 - 0x534u, t46);
            t47 = rd32(COW_IMG(0x10344ac0u) + esi * 4u);
            wr32(sp0 - 0x538u, t47);
            t48 = rd32(arg2 + esi * 4u + 0x80u);
            wr32(sp0 - 0x53cu, t48);
            t49 = rd32(arg2 + esi * 4u);
            wr32(sp0 - 0x540u, t49);
            g->eax = t48;
            g->esp = sp0 - 0x540u;
            t50 = cow_thiscall(g, rd32(arg2 + 0x677cu), t49, 0);
            t51 = rd32(arg2 + esi * 4u);
            wr32(esi * 4u + sp0 - 0x500u, t50);
            if (t50 * 2u != rd32(COW_IMG(0x10344bbcu) + t51 * 4u) * rd32(COW_IMG(0x10344ac0u) + esi * 4u) + 0xcu)
            {
                eax = t50;
    COW_AT(102d09d2)
                t52 = rd32(arg2 + esi * 4u + 0x80u);
                wr32(esi * 4u + sp0 - 0x480u, t52);
                ebp = eax + ebp;
                loc_51c = rd32(sp0 - 0x51cu);
                loc_518 = rd32(sp0 - 0x518u);
            }
            else
            {
    COW_AT(102d09c2)
                wr32(arg2 + esi * 4u, 0u);
                wr32(esi * 4u + sp0 - 0x480u, 0xffffffffu);
                loc_51c = rd32(sp0 - 0x51cu);
                loc_518 = rd32(sp0 - 0x518u);
            }
        }
        else
        {
    COW_AT(102d091b)
            wr32(arg2 + esi * 4u, 0u);
            wr32(esi * 4u + sp0 - 0x480u, 0xffffffffu);
        }
    }
    else
    {
    COW_AT(102d08fa)
        wr32(esi * 4u + sp0 - 0x480u, 0xffffffffu);
    }
    COW_AT(102d09e2)
    if ((int32_t)(esi + 1u) < (int32_t)rd32(sp0 - 0x514u))
    {
        esi = esi + 1u;
        goto L_102d08f3;
    }
    esi = esi + 1u;
    COW_AT(102d09ef)
    if ((int32_t)loc_518 <= 0)
    {
        eax = loc_51c;
        ebx = loc_518;
        goto L_102d0a0d;
    }
    eax = loc_51c;
    ebx = loc_518;
L_102d09fb: ;
    COW_AT(102d09fb)
    if (rd32(arg2 + ebx * 4u) != 0u) goto L_102d0a09;
    COW_AT(102d0a01)
    if ((int32_t)(ebx - 1u) > 0)
    {
        eax = eax + 3u;
        ebx = ebx - 1u;
        goto L_102d09fb;
    }
    eax = eax + 3u;
    ebx = ebx - 1u;
L_102d0a09: ;
    COW_AT(102d0a09)
    wr32(sp0 - 0x51cu, eax);
    loc_51c = eax;
L_102d0a0d: ;
    COW_AT(102d0a0d)
    wr32(sp0 - 0x50cu, eax - ebp);
    wr32(arg2 + 0x100u, ebx + 1u);
    wr32(sp0 - 0x520u, 0u);
    if (rd32(arg1 + 0x2af0u) + rd32(arg1 + 0x2d58u) == 0u)
    {
        edx = rd32(arg1 + 0x2af0u);
        ebx = ebx + 1u;
        loc_50c = eax - ebp;
        loc_520 = 0u;
    }
    else
    {
        ebx = ebx + 1u;
        loc_50c = eax - ebp;
    COW_AT(102d0a3e)
        if (rd32(arg1 + 0x2d64u) != 0u)
        {
            edx = rd32(arg1 + 0x2d64u);
            loc_520 = 0u;
        }
        else
        {
            edx = rd32(arg1 + 0x2d64u);
    COW_AT(102d0a48)
            if (rd32(sp0 - 0x480u) <= 0x40u)
            {
    COW_AT(102d0a51)
                wr32(sp0 - 0x480u, 0x40u);
            }
    COW_AT(102d0a58)
            if (rd32(sp0 - 0x47cu) <= 0x40u)
            {
    COW_AT(102d0a61)
                wr32(sp0 - 0x47cu, 0x40u);
            }
    COW_AT(102d0a68)
            if (rd32(sp0 - 0x478u) <= 0x40u)
            {
    COW_AT(102d0a71)
                wr32(sp0 - 0x478u, 0x40u);
            }
    COW_AT(102d0a78)
            if (rd32(sp0 - 0x474u) <= 0x40u)
            {
    COW_AT(102d0a81)
                wr32(sp0 - 0x474u, 0x40u);
            }
    COW_AT(102d0a88)
            if (rd32(sp0 - 0x470u) > 0x40u)
            {
                loc_520 = 0u;
            }
            else
            {
    COW_AT(102d0a91)
                wr32(sp0 - 0x470u, 0x40u);
                loc_520 = 0u;
            }
        }
    }
L_102d0a98: ;
    COW_AT(102d0a98)
    eax = 0u;
    edx = 0xffffffffu;
L_102d0a9d: ;
    COW_AT(102d0a9d)
    if ((int32_t)edx < (int32_t)rd32(eax * 4u + sp0 - 0x480u))
    {
        ecx = rd32(eax * 4u + sp0 - 0x480u);
    COW_AT(102d0aa8)
        edx = ecx;
        esi = eax;
    }
    COW_AT(102d0aac)
    if ((int32_t)(eax + 1u) < (int32_t)ebx)
    {
        eax = eax + 1u;
        goto L_102d0a9d;
    }
    COW_AT(102d0ab1)
    if ((int32_t)edx < 0)
    {
        ecx = loc_520;
        edx = loc_51c;
        goto L_102d0ca6;
    }
    ecx = loc_520;
    edx = loc_51c;
    COW_AT(102d0ac1)
    t53 = rd32(esi * 4u + sp0 - 0x500u);
    wr32(esi * 4u + sp0 - 0x480u, 0xffffffffu);
    if ((int32_t)(ecx + t53) <= (int32_t)edx)
    {
        ebp = t53;
    COW_AT(102d0bcd)
        if ((int32_t)rd32(arg2 + esi * 4u) < 7)
        {
            eax = rd32(arg2 + esi * 4u);
    COW_AT(102d0bd9)
            if ((int32_t)(rd32(COW_IMG(0x10344bc0u) + eax * 4u) * (uint32_t)((int32_t)rd32(COW_IMG(0x10344ac0u) + esi * 4u) >> 1u)) >= (int32_t)(loc_51c - ecx - 7u))
            {
                edx = loc_51c - ecx - 7u;
            }
            else
            {
    COW_AT(102d0bf9)
                t63 = rd32(arg2 + esi * 4u) + 1u;
                wr32(sp0 - 0x518u, t63);
                if ((int32_t)loc_50c <= (int32_t)(rd32(COW_IMG(0x10344ac0u) + esi * 4u) * 4u))
                {
                    eax = rd32(COW_IMG(0x10344ac0u) + esi * 4u);
                    loc_518 = t63;
                }
                else
                {
                    eax = rd32(COW_IMG(0x10344ac0u) + esi * 4u);
                    ecx = t63;
                    loc_518 = t63;
    COW_AT(102d0c17)
                    if ((int32_t)ecx < 7)
                    {
    COW_AT(102d0c1c)
                        wr32(sp0 - 0x518u, ecx + 1u);
                        loc_518 = ecx + 1u;
                    }
                }
    COW_AT(102d0c21)
                t64 = arg2 + rd32(COW_IMG(0x10344dc8u) + esi * 4u) * 4u + 0xc80u;
                wr32(sp0 - 0x534u, t64);
                wr32(sp0 - 0x538u, eax);
                t65 = rd32(arg2 + esi * 4u + 0x80u);
                wr32(sp0 - 0x53cu, t65);
                wr32(sp0 - 0x540u, loc_518);
                g->eax = t65;
                g->esp = sp0 - 0x540u;
                t66 = cow_thiscall(g, rd32(arg2 + 0x677cu), loc_518, 0);
                if ((int32_t)(((int32_t)rd32(sp0 - 0x50cu) <= 0) - 1u & rd32(sp0 - 0x50cu)) < (int32_t)(t66 - ebp))
                {
                    edx = ((int32_t)rd32(sp0 - 0x50cu) <= 0) - 1u & rd32(sp0 - 0x50cu);
                    loc_51c = rd32(sp0 - 0x51cu);
                    loc_50c = rd32(sp0 - 0x50cu);
                    loc_520 = rd32(sp0 - 0x520u);
                }
                else
                {
                    eax = t66;
    COW_AT(102d0c5d)
                    t67 = rd32(sp0 - 0x518u);
                    t68 = rd32(sp0 - 0x50cu);
                    wr32(arg2 + esi * 4u, t67);
                    t69 = ebp + t68 - eax;
                    wr32(sp0 - 0x50cu, t69);
                    edx = t67;
                    ebp = eax;
                    loc_51c = rd32(sp0 - 0x51cu);
                    loc_50c = t69;
                    loc_520 = rd32(sp0 - 0x520u);
                }
            }
        }
    }
    else
    {
        ebp = t53;
    COW_AT(102d0adb)
        t54 = rd32(COW_IMG(0x10344bbcu) + rd32(arg2 + esi * 4u) * 4u) * (uint32_t)((int32_t)rd32(COW_IMG(0x10344ac0u) + esi * 4u) >> 1u) + 6u;
        wr32(sp0 - 0x518u, t54);
        if ((int32_t)(ebx - 1u) <= (int32_t)esi)
        {
            ecx = t54;
            ebx = ebx - 1u;
            loc_518 = t54;
        }
        else
        {
            ecx = t54;
            ebx = ebx - 1u;
            loc_518 = t54;
    COW_AT(102d0afd)
            t55 = arg2 - (sp0 - 0x480u);
            wr32(sp0 - 0x508u, t55);
            eax = t55;
            loc_508 = t55;
L_102d0b15: ;
    COW_AT(102d0b15)
            if (rd32(eax + ebx * 4u + sp0 - 0x480u) == 0u)
            {
                eax = eax + ebx * 4u + sp0 - 0x480u;
                goto L_102d0b32;
            }
            eax = eax + ebx * 4u + sp0 - 0x480u;
    COW_AT(102d0b29)
            if (rd32(ebx * 4u + sp0 - 0x480u) == 0xffffffffu) goto L_102d0b52;
L_102d0b32: ;
    COW_AT(102d0b32)
            wr32(eax, 0u);
            wr32(sp0 - 0x51cu, loc_51c + 3u);
            wr32(ebx * 4u + sp0 - 0x480u, 0xffffffffu);
            if ((int32_t)(ebx - 1u) > (int32_t)esi)
            {
                ebx = ebx - 1u;
                loc_51c = loc_51c + 3u;
                goto L_102d0b11;
            }
            ebx = ebx - 1u;
            loc_51c = loc_51c + 3u;
        }
L_102d0b52: ;
    COW_AT(102d0b52)
        wr32(arg2 + 0x100u, ebx + 1u);
        if ((int32_t)(ebp + loc_520) <= (int32_t)loc_51c)
        {
            edx = loc_51c;
            ebx = ebx + 1u;
        }
        else
        {
            edx = loc_51c;
            ebx = ebx + 1u;
    COW_AT(102d0b6c)
L_102d0b72: ;
    COW_AT(102d0b72)
            t56 = rd32(arg2 + esi * 4u + 0x80u) + 1u;
            t57 = rd32(arg2 + esi * 4u + 0x80u);
            wr32(arg2 + esi * 4u + 0x80u, t56);
            if ((int32_t)(t57 + 1u) >= 64) goto L_102d0c72;
            eax = t56;
    COW_AT(102d0b8a)
            if ((int32_t)ebp <= (int32_t)ecx) goto L_102d0c72;
    COW_AT(102d0b92)
            t58 = arg2 + rd32(COW_IMG(0x10344dc8u) + esi * 4u) * 4u + 0xc80u;
            wr32(sp0 - 0x534u, t58);
            t59 = rd32(COW_IMG(0x10344ac0u) + esi * 4u);
            wr32(sp0 - 0x538u, t59);
            wr32(sp0 - 0x53cu, eax);
            t60 = rd32(arg2 + esi * 4u);
            wr32(sp0 - 0x540u, t60);
            g->eax = eax;
            g->edx = t60;
            g->esp = sp0 - 0x540u;
            t61 = cow_thiscall(g, rd32(arg2 + 0x677cu), t59, 0);
            t62 = g->edx;
            if ((int32_t)(t61 + rd32(sp0 - 0x520u)) > (int32_t)rd32(sp0 - 0x51cu))
            {
                edx = t62;
                ebp = t61;
                goto L_102d0b6e;
            }
            edx = t62;
            ebp = t61;
    COW_AT(102d0bc8)
            loc_51c = rd32(sp0 - 0x51cu);
            loc_50c = rd32(sp0 - 0x50cu);
            loc_520 = rd32(sp0 - 0x520u);
        }
    }
L_102d0c72: ;
    COW_AT(102d0c72)
    wr32(sp0 - 0x520u, ebp + loc_520);
    if ((int32_t)(ebp + loc_520) <= (int32_t)loc_51c)
    {
        loc_520 = ebp + loc_520;
    }
    else
    {
        eax = ebp + loc_520;
    COW_AT(102d0c88)
        wr32(sp0 - 0x520u, eax - ebp);
        wr32(sp0 - 0x50cu, ebp + loc_50c);
        wr32(arg2 + esi * 4u, 0u);
        loc_50c = ebp + loc_50c;
        loc_520 = eax - ebp;
    }
    goto L_102d0a98;
L_102d06ef: ;
    COW_AT(102d06ef)
    t26 = loc_510 + rd32(COW_IMG(0x10344ac0u) + esi * 4u);
    wr32(sp0 - 0x510u, t26);
    if (ebx != 7u)
    {
        edx = t26;
        loc_510 = t26;
    }
    else
    {
        eax = rd32(COW_IMG(0x10344ac0u) + esi * 4u);
        edx = t26;
        loc_510 = t26;
    COW_AT(102d0705)
        wr32(sp0 - 0x518u, eax + loc_518);
        loc_518 = eax + loc_518;
    }
    COW_AT(102d0709)
    wr32(sp0 - 0x534u, arg2);
    wr32(sp0 - 0x538u, sp0 - 0x400u);
    wr32(sp0 - 0x53cu, esi);
    g->eax = sp0 - 0x400u;
    g->esp = sp0 - 0x51cu;
    t27 = cow_cdecl(g, COW_IMG(0x102d0cd0u), 8, esi, sp0 - 0x400u, arg2, rd32(sp0 - 0x530u), rd32(sp0 - 0x52cu), rd32(sp0 - 0x528u), rd32(sp0 - 0x524u), loc_520);
    t28 = t27 + rd32(sp0 - 0x520u);
    wr32(sp0 - 0x520u, t28);
    eax = t27;
    loc_51c = rd32(sp0 - 0x51cu);
    loc_518 = rd32(sp0 - 0x518u);
    loc_520 = t28;
    loc_510 = rd32(sp0 - 0x510u);
    loc_508 = rd32(sp0 - 0x508u);
    goto L_102d0725;
L_102d094c: ;
    COW_AT(102d094c)
    if (esi != 0u)
    {
    COW_AT(102d0950)
        if ((int32_t)eax < 300)
        {
    COW_AT(102d0957)
            if ((int32_t)ecx <= 1)
            {
    COW_AT(102d0962)
                if (rd32(arg2 + esi * 4u + 0x80u) != 0x3fu)
                {
                    eax = rd32(arg2 + esi * 4u + 0x80u);
    COW_AT(102d096e)
                    wr32(arg2 + esi * 4u + 0x80u, eax + 1u);
                }
            }
            else
            {
    COW_AT(102d095c)
                wr32(arg2 + esi * 4u, ecx - 1u);
            }
        }
    }
    goto L_102d0976;
L_102d0b11: ;
    COW_AT(102d0b11)
    eax = loc_508;
    goto L_102d0b15;
L_102d0b6e: ;
    COW_AT(102d0b6e)
    ecx = rd32(sp0 - 0x518u);
    loc_51c = rd32(sp0 - 0x51cu);
    loc_518 = rd32(sp0 - 0x518u);
    loc_50c = rd32(sp0 - 0x50cu);
    loc_520 = rd32(sp0 - 0x520u);
    goto L_102d0b72;
L_102d0ca6: ;
    COW_AT(102d0ca6)
    g->ebx = rd32(sp0 - 0x524u);
    g->esi = rd32(sp0 - 0x52cu);
    g->edi = rd32(sp0 - 0x530u);
    g->ebp = rd32(sp0 - 0x528u);
    return ecx + rd32(arg1 + 0x2d60u) - edx;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102d0250(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102d027cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_514;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x530u);
        in_esi = rd32(sp0 - 0x52cu);
        in_ebp = rd32(sp0 - 0x528u);
        in_ebx = rd32(sp0 - 0x524u);
        loc_514 = rd32(sp0 - 0x514u);
        g->esp = sp0 - 0x530u;
        g->eax = arg1;
        g->esi = arg2 + 0xc80u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d028cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_514;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        in_edi = rd32(sp0 - 0x530u);
        in_esi = rd32(sp0 - 0x52cu);
        in_ebp = rd32(sp0 - 0x528u);
        in_ebx = rd32(sp0 - 0x524u);
        loc_514 = rd32(sp0 - 0x514u);
        g->esp = sp0 - 0x530u;
        g->esi = arg2 + 0xc80u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d02aeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02bcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02c9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d02fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ecx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0307u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ecx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d030cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ecx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d031bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ecx = arg1;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d032au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0334u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d033cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0341u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0347u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d034du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0356u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d035bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d035fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d0385u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d03b6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d03beu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        wr32(sp0 - 0x538u, sp0 - 0x400u);
        (void)sp0;
        return 1;
    }
    case 0x102d03edu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0413u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0425u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0432u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->eax = 0u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d044fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0460u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d047bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->eax = arg1;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0498u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04a8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04b2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04dau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04e8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d04f0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d050cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0519u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0546u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d055eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0566u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d056au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d057cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d058eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0596u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d059bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05c7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05dcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05e7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d05fdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0602u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0611u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d061bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d062fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0634u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0643u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d064du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0660u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0674u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_518;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_518 = rd32(sp0 - 0x518u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0683u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0697u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06b1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06bcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06d0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06d9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06e6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d06efu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0705u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0709u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0725u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0729u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d072eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0737u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d073bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0741u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0749u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0751u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_504;
        uint32_t loc_508;
        uint32_t loc_510;
        uint32_t loc_514;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_514 = rd32(sp0 - 0x514u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_508 = rd32(sp0 - 0x508u);
        loc_504 = rd32(sp0 - 0x504u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d078cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d079au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d07a2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d07a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d07a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d07c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d07d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d080eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d081eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d082eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d083eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0846u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d084eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0855u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0858u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0861u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0865u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d086cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d087au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d088cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0891u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0897u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d089fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08a6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08ecu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08f3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d08fau:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0906u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d091bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d092eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d093fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0946u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d094cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0950u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0957u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d095cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0962u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d096eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0976u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d09c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d09d2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d09e2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->ebx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d09efu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d09fbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0a01u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0a09u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0a0du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0a3eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->eax = arg1;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a48u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a51u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a58u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a61u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a68u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a71u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a78u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a81u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a88u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a91u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        eax = g->eax;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        g->esp = sp0 - 0x530u;
        g->ecx = 0x40u;
        g->edi = arg2;
        wr32(sp0 - 0x520u, 0u);
        (void)sp0;
        return 1;
    }
    case 0x102d0a98u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0a9du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0aa8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0aacu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0ab1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0ac1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0adbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0afdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b11u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b15u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b29u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edx = 0xffffffffu;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b32u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b52u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b6cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b6eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b8au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0b92u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0bc8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0bcdu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0bd9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0bf9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c17u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c1cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c21u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c5du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
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
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c72u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0c88u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        g->edi = arg2;
        (void)sp0;
        return 1;
    }
    case 0x102d0ca6u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_508;
        uint32_t loc_50c;
        uint32_t loc_510;
        uint32_t loc_518;
        uint32_t loc_51c;
        uint32_t loc_520;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_520 = rd32(sp0 - 0x520u);
        loc_51c = rd32(sp0 - 0x51cu);
        loc_518 = rd32(sp0 - 0x518u);
        loc_510 = rd32(sp0 - 0x510u);
        loc_50c = rd32(sp0 - 0x50cu);
        loc_508 = rd32(sp0 - 0x508u);
        g->esp = sp0 - 0x530u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102d0250(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102d0250(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
