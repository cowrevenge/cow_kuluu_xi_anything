/* f_0x10212aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10212aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_edx = g->edx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10212ab6u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ab6;
    case 0x10212abdu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212abd;
    case 0x10212aceu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ace;
    case 0x10212adau: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ada;
    case 0x10212ae9u: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ae9;
    case 0x10212afbu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212afb;
    case 0x10212b0du: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b0d;
    case 0x10212b1fu: ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b1f;
    case 0x10212b31u: ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b31;
    case 0x10212b45u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b45;
    case 0x10212b4fu: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b4f;
    case 0x10212b56u: self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b56;
    case 0x10212b66u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b66;
    case 0x10212b73u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b73;
    case 0x10212b8bu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b8b;
    case 0x10212b9du: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212b9d;
    case 0x10212ba6u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ba6;
    case 0x10212badu: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212bad;
    case 0x10212bbau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212bba;
    case 0x10212beau: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212bea;
    case 0x10212c12u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c12;
    case 0x10212c23u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c23;
    case 0x10212c32u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c32;
    case 0x10212c37u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c37;
    case 0x10212c40u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c40;
    case 0x10212c4au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c4a;
    case 0x10212c54u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c54;
    case 0x10212c63u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c63;
    case 0x10212c68u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c68;
    case 0x10212c71u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c71;
    case 0x10212c7bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c7b;
    case 0x10212c96u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212c96;
    case 0x10212cabu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212cab;
    case 0x10212cc2u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212cc2;
    case 0x10212cdeu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212cde;
    case 0x10212cf5u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212cf5;
    case 0x10212d01u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d01;
    case 0x10212d12u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d12;
    case 0x10212d21u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d21;
    case 0x10212d30u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d30;
    case 0x10212d35u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d35;
    case 0x10212d52u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d52;
    case 0x10212d6au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d6a;
    case 0x10212d79u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d79;
    case 0x10212d9bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212d9b;
    case 0x10212da2u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212da2;
    case 0x10212db7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212db7;
    case 0x10212dceu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212dce;
    case 0x10212deau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212dea;
    case 0x10212e01u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e01;
    case 0x10212e1bu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e1b;
    case 0x10212e30u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e30;
    case 0x10212e45u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e45;
    case 0x10212e5du: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e5d;
    case 0x10212e75u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e75;
    case 0x10212e8du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212e8d;
    case 0x10212ea0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ea0;
    case 0x10212eb7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212eb7;
    case 0x10212ec6u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ec6;
    case 0x10212ed5u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ed5;
    case 0x10212ef7u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ef7;
    case 0x10212f07u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f07;
    case 0x10212f27u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f27;
    case 0x10212f3cu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f3c;
    case 0x10212f51u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f51;
    case 0x10212f6du: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f6d;
    case 0x10212f82u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f82;
    case 0x10212f95u: eax = g->eax; ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212f95;
    case 0x10212facu: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212fac;
    case 0x10212fc4u: ecx = g->ecx; in_edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212fc4;
    case 0x10212fdcu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212fdc;
    case 0x10212febu: self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212feb;
    case 0x10212ffau: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10212ffa;
    case 0x1021300bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021300b;
    case 0x1021302du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021302d;
    case 0x10213033u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213033;
    case 0x10213036u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213036;
    case 0x1021303du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021303d;
    case 0x10213045u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213045;
    case 0x10213047u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213047;
    case 0x1021304fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021304f;
    case 0x10213057u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213057;
    case 0x10213061u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213061;
    case 0x10213069u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213069;
    case 0x10213071u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213071;
    case 0x10213089u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213089;
    case 0x10213097u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213097;
    case 0x102130aeu: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102130ae;
    case 0x102130c3u: eax = g->eax; self = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102130c3;
    case 0x102130dau: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102130da;
    case 0x102130efu: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_102130ef;
    case 0x10213104u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213104;
    case 0x10213113u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213113;
    case 0x1021312au: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_1021312a;
    case 0x10213142u: ecx = g->ecx; edx = g->edx; self = g->esi; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213142;
    case 0x10213155u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = rd32(sp0 - 8u); in_ebx = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 4u); g->esi = rd32(sp0 - 8u); goto E_10213155;
    default: break;
    }
#endif

    COW_AT(10212aa0)
    if (rd32(self + 0x110u) - 3u > 0xbu) goto L_10213155;
    eax = rd32(self + 0x110u) - 3u;
    COW_AT(10212ab6)
    t1 = rd32(COW_IMG(0x1021315cu) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10212abdu: goto L_10212abd;
    case 0x10212cf5u: goto L_10212cf5;
    case 0x10212d12u: goto L_10212d12;
    case 0x10212eb7u: goto L_10212eb7;
    case 0x10212fdcu: goto L_10212fdc;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ab6u), "switch");
    }
    return;
L_10212abd: ;
    COW_AT(10212abd)
    if (rd32(self + 0x10cu) == 0u) goto L_10212b45;
    COW_AT(10212ace)
    if ((uint32_t)(int16_t)arg1 - 3u > 0xfu) goto L_10213155;
    COW_AT(10212ada)
    t18 = rd32(COW_IMG(0x1021318cu) + rd8(COW_IMG(0x102131a4u) + (uint32_t)(int16_t)arg1 - 3u) * 4u);
    switch (t18 - RD)
    {
    case 0x10212ae9u: goto L_10212ae9;
    case 0x10212afbu: goto L_10212afb;
    case 0x10212b0du: goto L_10212b0d;
    case 0x10212b1fu: goto L_10212b1f;
    case 0x10212b31u: goto L_10212b31;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ae2u), "switch");
    }
    return;
L_10212ae9: ;
    COW_AT(10212ae9)
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212afb: ;
    COW_AT(10212afb)
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 7u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b0d: ;
    COW_AT(10212b0d)
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 6u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b1f: ;
    COW_AT(10212b1f)
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x101c6920u), (uint32_t)(int16_t)arg1 - 3u, rd32(COW_IMG(0x10662da0u)), g->edx, 0, 1, 8u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b31: ;
    COW_AT(10212b31)
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(rd32(rd32(COW_IMG(0x10662d40u))) + 8u), rd32(COW_IMG(0x10662d40u)), 3, 2u, 0u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b45: ;
    COW_AT(10212b45)
    if ((uint32_t)(int16_t)arg1 - 1u > 8u) goto L_10213155;
    COW_AT(10212b4f)
    t19 = rd32(COW_IMG(0x102131b4u) + (uint32_t)(int16_t)arg1 * 4u - 4u);
    switch (t19 - RD)
    {
    case 0x10212b56u: goto L_10212b56;
    case 0x10212b73u: goto L_10212b73;
    case 0x10212c96u: goto L_10212c96;
    case 0x10212cc2u: goto L_10212cc2;
    case 0x10212e01u: goto L_10212e01;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212b4fu), "switch");
    }
    return;
L_10212b56: ;
    COW_AT(10212b56)
    g->eax = (uint32_t)(int16_t)arg1 - 1u;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t52 = cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    t53 = g->edx;
    if ((uint16_t)arg2 == 0u) goto L_10213155;
    eax = t52;
    edx = t53;
    COW_AT(10212b66)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x10216620u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b73: ;
    COW_AT(10212b73)
    t25 = rd32(self + 0x128u);
    t26 = rd32(self + 0x124u);
    wr8(self + 0x13cu, 1u);
    if (t25 != t26 - 1u)
    {
        eax = t25;
        ecx = t26 - 1u;
        goto L_10212b9d;
    }
    eax = t25;
    ecx = t26 - 1u;
    COW_AT(10212b8b)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t27 = cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    t28 = g->edx;
    cow_stdcall(g, COW_IMG(0x10216620u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212b9d: ;
    COW_AT(10212b9d)
    if (eax > 4u) goto L_10213155;
    COW_AT(10212ba6)
    t29 = rd32(COW_IMG(0x102131d8u) + eax * 4u);
    switch (t29 - RD)
    {
    case 0x10212badu: goto L_10212bad;
    case 0x10212beau: goto L_10212bea;
    case 0x10212c12u: goto L_10212c12;
    case 0x10212c23u: goto L_10212c23;
    case 0x10212c54u: goto L_10212c54;
    default: rt_fatal(g, COW_IMG(0x10212ba6u), "switch");
    }
    return;
L_10212bad: ;
    COW_AT(10212bad)
    if (rd8(self + 0x1c2u) != 1u)
    {
        edx = in_edx;
        goto L_10213057;
    }
    COW_AT(10212bba)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t48 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t49 = g->edx;
    cow_call_regs(g, COW_IMG(0x101c68a0u), t48, rd32(COW_IMG(0x10662da0u)), t49, 1, 0);
    t50 = rd32(self + 0x108u);
    wr32(self + 0x10cu, t50);
    t51 = rd32(t50 + 0x24u);
    cow_thiscall(g, COW_IMG(0x101c6870u), rd32(COW_IMG(0x10662da0u)), 1, t51);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212bea: ;
    COW_AT(10212bea)
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t42 = g->edx;
    t43 = rd32(rd32(COW_IMG(0x10578468u)) + 8u);
    g->eax = rd32(COW_IMG(0x10578468u));
    g->edx = t42;
    t44 = rd32(COW_IMG(0x10578468u));
    t45 = cow_thiscall(g, COW_IMG(0x1015e6e0u), COW_IMG(0x10621838u), 5, t43, 1u, 1u, 0u, 0u);
    t46 = g->ecx;
    t47 = g->edx;
    g->ebx = 0u;
    cow_stdcall(g, COW_IMG(0x10233b80u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212c12: ;
    COW_AT(10212c12)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t40 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t41 = g->edx;
    cow_stdcall(g, COW_IMG(0x10216500u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212c23: ;
    COW_AT(10212c23)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t33 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t34 = g->edx;
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t34;
    }
    else
    {
        eax = t33;
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t34;
    COW_AT(10212c32)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t35 = g->ecx;
        t36 = g->edx;
        ecx = t35;
        edx = t36;
    }
    COW_AT(10212c37)
    if (rd32(COW_IMG(0x105781f8u)) == 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    }
    else
    {
        eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10212c40)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t37 = cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
        t38 = g->ecx;
        t39 = g->edx;
        eax = t37;
        ecx = t38;
        edx = t39;
    }
    COW_AT(10212c4a)
    g->esp = sp0 - 8u;
    cow_stdcall(g, COW_IMG(0x1021bb60u), 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212c54: ;
    COW_AT(10212c54)
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t30 = cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t31 = g->edx;
    if (rd32(COW_IMG(0x10664530u)) == 0u)
    {
        edx = t31;
    }
    else
    {
        eax = t30;
        ecx = rd32(COW_IMG(0x10664530u));
        edx = t31;
    COW_AT(10212c63)
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x102169c0u), ecx, 0);
        t32 = g->edx;
        edx = t32;
    }
    COW_AT(10212c68)
    if (rd32(COW_IMG(0x105781f8u)) != 0u)
    {
        eax = rd32(COW_IMG(0x105781f8u));
    COW_AT(10212c71)
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x10221300u), eax + 0x20u, 1, 8u);
    }
    COW_AT(10212c7b)
    wr32(self + 0x110u, 0xdu);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212c96: ;
    COW_AT(10212c96)
    t23 = rd32(self + 0x128u);
    wr8(self + 0x12cu, 1u);
    if ((int32_t)t23 <= 0) goto L_10213155;
    eax = t23;
    COW_AT(10212cab)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t24 = rd32(self + 0x128u) - 1u;
    wr32(self + 0x128u, t24);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212cc2: ;
    COW_AT(10212cc2)
    t20 = rd32(self + 0x128u);
    t21 = rd32(self + 0x124u);
    wr8(self + 0x12cu, 1u);
    if ((int32_t)t20 >= (int32_t)(t21 - 1u)) goto L_10213155;
    eax = t20;
    edx = t21 - 1u;
    COW_AT(10212cde)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t22 = rd32(self + 0x128u) + 1u;
    wr32(self + 0x128u, t22);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212cf5: ;
    COW_AT(10212cf5)
    if ((uint16_t)arg1 != 6u) goto L_10213155;
    COW_AT(10212d01)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), self, 0);
    wr8(self + 0x120u, 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212d12: ;
    COW_AT(10212d12)
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    COW_AT(10212d21)
    t9 = rd32(COW_IMG(0x102131ecu) + rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t9 - RD)
    {
    case 0x10212d30u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212d30;
    case 0x10212d52u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212d52;
    case 0x10212da2u: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212da2;
    case 0x10212dceu: ecx = rd8(COW_IMG(0x1021321cu) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212dce;
    case 0x10212e01u: goto L_10212e01;
    case 0x10212e1bu: goto L_10212e1b;
    case 0x10212e30u: goto L_10212e30;
    case 0x10212e45u: goto L_10212e45;
    case 0x10212e5du: goto L_10212e5d;
    case 0x10212e75u: goto L_10212e75;
    case 0x10212e8du: goto L_10212e8d;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212d29u), "switch");
    }
    return;
L_10212d30: ;
    COW_AT(10212d30)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
L_10212d35: ;
    COW_AT(10212d35)
    wr32(self + 0x110u, 2u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212d52: ;
    COW_AT(10212d52)
    t16 = rd32(self + 0x138u);
    t17 = rd32(self + 0x130u);
    wr8(self + 0x13cu, 1u);
    if (t16 == t17 - 1u)
    {
        eax = t16;
        edx = t17 - 1u;
        goto L_10212d9b;
    }
    eax = t16;
    edx = t17 - 1u;
    COW_AT(10212d6a)
    if ((rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u) == 1u)
    {
        ecx = (ecx & 0xffffff00u) | (rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u);
        eax = rd32(eax * 4u + self + 0x10u);
        goto L_10212d9b;
    }
    ecx = (ecx & 0xffffff00u) | (rd8(rd32(eax * 4u + self + 0x10u) + 0x29u) & 1u);
    eax = rd32(eax * 4u + self + 0x10u);
    COW_AT(10212d79)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    wr32(self + 0x110u, 9u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212d9b: ;
    COW_AT(10212d9b)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    goto L_10212d35;
L_10212da2: ;
    COW_AT(10212da2)
    t14 = rd32(self + 0x138u);
    wr8(self + 0x13cu, 1u);
    if ((int32_t)t14 <= 0) goto L_10213155;
    eax = t14;
    COW_AT(10212db7)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t15 = rd32(self + 0x138u) - 1u;
    wr32(self + 0x138u, t15);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212dce: ;
    COW_AT(10212dce)
    t11 = rd32(self + 0x138u);
    t12 = rd32(self + 0x130u);
    wr8(self + 0x13cu, 1u);
    if ((int32_t)t11 >= (int32_t)(t12 - 1u)) goto L_10213155;
    eax = t11;
    edx = t12 - 1u;
    COW_AT(10212dea)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), ecx, 0);
    t13 = rd32(self + 0x138u) + 1u;
    wr32(self + 0x138u, t13);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e01: ;
    COW_AT(10212e01)
    wr16(self + 0x178u, (rd16(self + 0x178u) & 0xff00u) | (rd16(self + 0x178u) & 0xf1u) | 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e1b: ;
    COW_AT(10212e1b)
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xfu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e30: ;
    COW_AT(10212e30)
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xfffffff1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e45: ;
    COW_AT(10212e45)
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0x96u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e5d: ;
    COW_AT(10212e5d)
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xffffff6au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e75: ;
    COW_AT(10212e75)
    wr8(self + 0x13cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214530u), self, 1, 0xffffff6au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212e8d: ;
    COW_AT(10212e8d)
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    COW_AT(10212ea0)
    wr8(self + 0x13cu, 0u);
    t10 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214570u), self, 2, t10, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212eb7: ;
    COW_AT(10212eb7)
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    COW_AT(10212ec6)
    t7 = rd32(COW_IMG(0x10213238u) + rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t7 - RD)
    {
    case 0x10212ed5u: ecx = rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ed5;
    case 0x10212ef7u: ecx = rd8(COW_IMG(0x10213260u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ef7;
    case 0x10212f27u: goto L_10212f27;
    case 0x10212f3cu: goto L_10212f3c;
    case 0x10212f51u: goto L_10212f51;
    case 0x10212f6du: goto L_10212f6d;
    case 0x10212f82u: goto L_10212f82;
    case 0x10212facu: goto L_10212fac;
    case 0x10212fc4u: goto L_10212fc4;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212eceu), "switch");
    }
    return;
L_10212ed5: ;
    COW_AT(10212ed5)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 7u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212ef7: ;
    COW_AT(10212ef7)
    if (rd32(self + 0x148u) != 0u) goto L_10213155;
    eax = rd32(self + 0x148u);
    COW_AT(10212f07)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 7u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212f27: ;
    COW_AT(10212f27)
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212f3c: ;
    COW_AT(10212f3c)
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfffffff1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212f51: ;
    COW_AT(10212f51)
    wr16(self + 0x178u, (rd16(self + 0x178u) & 0xfff1u) | 1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212f6d: ;
    COW_AT(10212f6d)
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xfffffff1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212f82: ;
    COW_AT(10212f82)
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    COW_AT(10212f95)
    wr8(self + 0x14cu, 0u);
    t8 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214610u), self, 2, t8, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212fac: ;
    COW_AT(10212fac)
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0xffffff6au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212fc4: ;
    COW_AT(10212fc4)
    wr8(self + 0x14cu, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102145c0u), self, 1, 0x96u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10212fdc: ;
    COW_AT(10212fdc)
    if ((uint32_t)(int16_t)arg1 - 1u > 0x1au) goto L_10213155;
    COW_AT(10212feb)
    t2 = rd32(COW_IMG(0x1021327cu) + rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u) * 4u);
    switch (t2 - RD)
    {
    case 0x10212e01u: goto L_10212e01;
    case 0x10212ffau: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10212ffa;
    case 0x1021300bu: eax = (uint32_t)(int16_t)arg1 - 1u; ecx = self; edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1021300b;
    case 0x10213089u: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10213089;
    case 0x102130aeu: goto L_102130ae;
    case 0x102130dau: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102130da;
    case 0x102130efu: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_102130ef;
    case 0x10213104u: goto L_10213104;
    case 0x1021312au: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_1021312a;
    case 0x10213142u: edx = rd8(COW_IMG(0x102132a8u) + (uint32_t)(int16_t)arg1 - 1u); goto L_10213142;
    case 0x10213155u: goto L_10213155;
    default: rt_fatal(g, COW_IMG(0x10212ff3u), "switch");
    }
    return;
L_10212ffa: ;
    COW_AT(10212ffa)
    if (rd32(self + 0x154u) != rd32(self + 0x150u) - 1u)
    {
        eax = rd32(self + 0x154u);
        ecx = rd32(self + 0x150u) - 1u;
        goto L_1021302d;
    }
    eax = rd32(self + 0x154u);
    ecx = rd32(self + 0x150u) - 1u;
L_1021300b: ;
    COW_AT(1021300b)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037bf0u), ecx, 0);
    wr32(self + 0x110u, 1u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_1021302d: ;
    COW_AT(1021302d)
    if (eax == 0u) goto L_10213061;
    COW_AT(10213033)
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_10213047;
    }
    eax = eax - 1u;
    COW_AT(10213036)
    if (eax != 1u) goto L_10213155;
    eax = eax - 1u;
    COW_AT(1021303d)
    if (rd8(self + 0x1c5u) == 0u) goto L_10213057;
    COW_AT(10213045)
L_10213071: ;
    COW_AT(10213071)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b90u), ecx, 0);
    t6 = (rd32(self + 0x11cu) & 0xffffff00u) | (uint8_t)(rd32(self + 0x11cu) | 1u);
    wr32(self + 0x11cu, t6);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10213047: ;
    COW_AT(10213047)
    if (rd8(self + 0x1c3u) == 0u) goto L_10213057;
    COW_AT(1021304f)
    if (rd8(self + 0x1c4u) != 0u) goto L_10213071;
L_10213057: ;
    COW_AT(10213057)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10213061: ;
    COW_AT(10213061)
    if (rd8(self + 0x1c3u) == 0u) goto L_10213057;
    COW_AT(10213069)
    if (rd8(self + 0x1c4u) != 0u) goto L_10213057;
    goto L_10213071;
L_10213089: ;
    COW_AT(10213089)
    if ((int32_t)rd32(self + 0x154u) <= 0) goto L_10213155;
    eax = rd32(self + 0x154u);
    COW_AT(10213097)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t5 = rd32(self + 0x154u) - 1u;
    wr32(self + 0x154u, t5);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_102130ae: ;
    COW_AT(102130ae)
    if ((int32_t)rd32(self + 0x154u) >= (int32_t)(rd32(self + 0x150u) - 1u)) goto L_10213155;
    eax = rd32(self + 0x154u);
    edx = rd32(self + 0x150u) - 1u;
    COW_AT(102130c3)
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10037b30u), self, 0);
    t4 = rd32(self + 0x154u) + 1u;
    wr32(self + 0x154u, t4);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_102130da: ;
    COW_AT(102130da)
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xfu);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_102130ef: ;
    COW_AT(102130ef)
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xfffffff1u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10213104: ;
    COW_AT(10213104)
    if (rd32(rd32(self + 8u) + 0x88u) == 0u) goto L_10213155;
    eax = rd32(rd32(self + 8u) + 0x88u);
    COW_AT(10213113)
    wr8(self + 0x158u, 0u);
    t3 = rd32(eax + 0x14u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x102146a0u), self, 2, t3, 0u);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_1021312a: ;
    COW_AT(1021312a)
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0xffffff6au);
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
L_10213142: ;
    COW_AT(10213142)
    wr8(self + 0x158u, 0u);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10214660u), self, 1, 0x96u);
L_10213155: ;
    COW_AT(10213155)
    g->ebx = in_ebx;
    g->esi = in_esi;
    return;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_10212aa0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10212ab6u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212abdu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212aceu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212adau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212ae9u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10212afbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10212b0du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10212b1fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        (void)sp0;
        return 1;
    }
    case 0x10212b31u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 3u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212b45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212b4fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212b56u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212b66u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212b73u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212b8bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212b9du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212ba6u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212badu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212bbau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212beau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212c23u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c32u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c37u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c40u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212c4au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212c54u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c63u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c68u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c71u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c7bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212c96u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212cabu:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212cc2u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212cdeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212cf5u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212d01u:
    {
        uint32_t eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212d12u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212d21u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212d30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212d35u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212d52u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212d6au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212d79u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212d9bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212da2u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212db7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212dceu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212deau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212e01u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e1bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e30u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e45u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e5du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e75u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212e8du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212ea0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212eb7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212ec6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212ed5u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212ef7u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212f07u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212f27u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212f3cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212f51u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212f6du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212f82u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10212f95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10212facu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212fc4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edx;
        uint32_t in_esi;
        ecx = g->ecx;
        in_edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10212fdcu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212febu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10212ffau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1021300bu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x1021302du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10213033u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213036u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021303du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213045u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10213047u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021304fu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213057u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10213061u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213069u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x10213071u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10213089u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x10213097u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x102130aeu:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x102130c3u:
    {
        uint32_t eax;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->esi = self;
        (void)sp0;
        return 1;
    }
    case 0x102130dau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x102130efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213104u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    case 0x10213113u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->ebx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x1021312au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213142u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_esi;
        ecx = g->ecx;
        edx = g->edx;
        self = g->esi;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        g->eax = (uint32_t)(int16_t)arg1 - 1u;
        (void)sp0;
        return 1;
    }
    case 0x10213155u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = rd32(sp0 - 8u);
        in_ebx = rd32(sp0 - 4u);
        g->esp = sp0 - 8u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_10212aa0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_10212aa0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
