/* f_0x101c6360 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=5 */
uint32_t cow_fn_101c6360(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_424;
    uint32_t loc_428;
    uint32_t loc_42c;
    uint32_t loc_430;
    uint32_t loc_434;
    uint32_t loc_438;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
    uint32_t in_ebp = g->ebp;
    const uint32_t arg5 = rd32(sp0 + 0x14u);
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 1096u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x101c637fu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x438u); in_esi = rd32(sp0 - 0x434u); in_ebp = rd32(sp0 - 0x430u); in_ebx = rd32(sp0 - 0x42cu); g->ebp = rd32(sp0 - 0x430u); g->ebx = rd32(sp0 - 0x42cu); g->edi = rd32(sp0 - 0x438u); g->esi = rd32(sp0 - 0x434u); goto E_101c637f;
    case 0x101c6383u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; edi = g->edi; in_edi = rd32(sp0 - 0x438u); in_esi = rd32(sp0 - 0x434u); in_ebp = rd32(sp0 - 0x430u); in_ebx = rd32(sp0 - 0x42cu); g->ebp = rd32(sp0 - 0x430u); g->ebx = rd32(sp0 - 0x42cu); g->edi = rd32(sp0 - 0x438u); g->esi = rd32(sp0 - 0x434u); goto E_101c6383;
    case 0x101c6389u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; edi = g->edi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c6389;
    case 0x101c6397u: eax = g->eax; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c6397;
    case 0x101c639cu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c639c;
    case 0x101c63a3u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c63a3;
    case 0x101c63aau: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c63aa;
    case 0x101c63b0u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c63b0;
    case 0x101c63b7u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c63b7;
    case 0x101c63c7u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); goto E_101c63c7;
    case 0x101c63d4u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63d4;
    case 0x101c63dbu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63db;
    case 0x101c63e2u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63e2;
    case 0x101c63e8u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63e8;
    case 0x101c63efu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63ef;
    case 0x101c63f8u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63f8;
    case 0x101c63ffu: ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c63ff;
    case 0x101c6404u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c6404;
    case 0x101c640bu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c640b;
    case 0x101c6412u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c6412;
    case 0x101c6418u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_424 = rd32(sp0 - 0x424u); goto E_101c6418;
    case 0x101c6423u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6423;
    case 0x101c6427u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6427;
    case 0x101c642fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c642f;
    case 0x101c6439u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6439;
    case 0x101c6445u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6445;
    case 0x101c644cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c644c;
    case 0x101c6450u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6450;
    case 0x101c6454u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6454;
    case 0x101c6458u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6458;
    case 0x101c645du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c645d;
    case 0x101c6461u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6461;
    case 0x101c6466u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6466;
    case 0x101c6467u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6467;
    case 0x101c646bu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c646b;
    case 0x101c646fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c646f;
    case 0x101c6476u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; loc_438 = rd32(sp0 - 0x438u); loc_434 = rd32(sp0 - 0x434u); loc_430 = rd32(sp0 - 0x430u); loc_42c = rd32(sp0 - 0x42cu); loc_428 = rd32(sp0 - 0x428u); loc_424 = rd32(sp0 - 0x424u); goto E_101c6476;
    case 0x101c64bdu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64bd;
    case 0x101c64cfu: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64cf;
    case 0x101c64d3u: ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64d3;
    case 0x101c64dbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64db;
    case 0x101c64dfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64df;
    case 0x101c64e3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64e3;
    case 0x101c64e7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64e7;
    case 0x101c64f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64f1;
    case 0x101c64f5u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64f5;
    case 0x101c64fcu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c64fc;
    case 0x101c6506u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6506;
    case 0x101c650au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c650a;
    case 0x101c6517u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6517;
    case 0x101c6533u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6533;
    case 0x101c6535u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6535;
    case 0x101c653fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c653f;
    case 0x101c654bu: eax = g->eax; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c654b;
    case 0x101c6552u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c6552;
    case 0x101c6559u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c6559;
    case 0x101c655du: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c655d;
    case 0x101c6561u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c6561;
    case 0x101c6565u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c6565;
    case 0x101c656fu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c656f;
    case 0x101c6572u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; edi = g->edi; goto E_101c6572;
    case 0x101c657au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c657a;
    case 0x101c6584u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6584;
    case 0x101c6589u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6589;
    case 0x101c658au: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c658a;
    case 0x101c6596u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6596;
    case 0x101c65abu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c65ab;
    case 0x101c65b0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65b0;
    case 0x101c65b4u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65b4;
    case 0x101c65c0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65c0;
    case 0x101c65c7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65c7;
    case 0x101c65cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65cb;
    case 0x101c65cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65cf;
    case 0x101c65d3u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65d3;
    case 0x101c65ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65dd;
    case 0x101c65e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65e0;
    case 0x101c65e8u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65e8;
    case 0x101c65f2u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65f2;
    case 0x101c65f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65f6;
    case 0x101c65f7u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c65f7;
    case 0x101c6601u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c6601;
    case 0x101c6620u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_101c6620;
    case 0x101c6627u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c6627;
    case 0x101c6637u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; esi = g->esi; goto E_101c6637;
    case 0x101c664eu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c664e;
    case 0x101c665cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c665c;
    case 0x101c6669u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c6669;
    case 0x101c6675u: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; goto E_101c6675;
    case 0x101c667cu: eax = g->eax; ecx = g->ecx; edx = g->edx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c667c;
    case 0x101c668du: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c668d;
    case 0x101c6693u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c6693;
    case 0x101c669cu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c669c;
    case 0x101c66a1u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c66a1;
    case 0x101c66a4u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c66a4;
    case 0x101c66a6u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; goto E_101c66a6;
    case 0x101c66b4u: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c66b4;
    case 0x101c66bbu: eax = g->eax; ecx = g->ecx; self = g->ebx; ebp = g->ebp; esi = g->esi; edi = g->edi; goto E_101c66bb;
    case 0x101c66cfu: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; goto E_101c66cf;
    case 0x101c66f8u: eax = g->eax; ecx = g->ecx; ebp = g->ebp; edi = g->edi; goto E_101c66f8;
    default: break;
    }
#endif

    COW_AT(101c6360)
    wr32(sp0 - 0x42cu, in_ebx);
    wr32(sp0 - 0x430u, in_ebp);
    wr32(sp0 - 0x434u, in_esi);
    wr32(sp0 - 0x438u, in_edi);
    if ((int32_t)rd32(self + 0x6a4u) < 0) goto L_101c6383;
    eax = rd32(self + 0x6a4u);
    COW_AT(101c637f)
    if ((int32_t)eax < (int32_t)arg2)
    {
        loc_42c = in_ebx;
        loc_430 = in_ebp;
        loc_434 = in_esi;
        loc_438 = in_edi;
        goto L_101c6389;
    }
L_101c6383: ;
    COW_AT(101c6383)
    wr32(self + 0x6a4u, 0u);
    loc_42c = rd32(sp0 - 0x42cu);
    loc_430 = rd32(sp0 - 0x430u);
    loc_434 = rd32(sp0 - 0x434u);
    loc_438 = rd32(sp0 - 0x438u);
L_101c6389: ;
    COW_AT(101c6389)
    if ((int32_t)arg2 <= 1)
    {
        ecx = 0u;
    }
    else
    {
    COW_AT(101c6397)
        eax = 1u;
        ecx = 0u;
L_101c639c: ;
    COW_AT(101c639c)
        t1 = rd8(arg1 + eax - 1u);
        if ((uint8_t)t1 != 0x7fu) goto L_101c63aa;
    COW_AT(101c63a3)
        t2 = rd8(arg1 + ecx + 1u);
        if ((uint8_t)t2 == 0xffu) goto L_101c63b0;
L_101c63aa: ;
    COW_AT(101c63aa)
        if ((int32_t)(eax + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            goto L_101c639c;
        }
        ecx = ecx + 1u;
    }
L_101c63b0: ;
    COW_AT(101c63b0)
    if (ecx + 1u != arg2)
    {
        eax = ecx + 1u;
        goto L_101c63c7;
    }
    eax = ecx + 1u;
    COW_AT(101c63b7)
    g->ebx = loc_42c;
    g->esi = loc_434;
    g->edi = loc_438;
    g->ebp = loc_430;
    g->edx = arg2;
    return 0xffffffffu;
L_101c63c7: ;
    COW_AT(101c63c7)
    wr32(sp0 - 0x424u, ecx);
    if ((int32_t)(eax + 1u) >= (int32_t)arg2)
    {
        ebp = ecx;
        loc_424 = ecx;
        goto L_101c63e8;
    }
    ebp = ecx;
    loc_424 = ecx;
    ecx = eax + 1u;
L_101c63d4: ;
    COW_AT(101c63d4)
    t3 = rd8(arg1 + ecx - 1u);
    if ((uint8_t)t3 != 0x7fu) goto L_101c63e2;
    COW_AT(101c63db)
    t4 = rd8(arg1 + eax + 1u);
    if ((uint8_t)t4 == 0xffu) goto L_101c63e8;
L_101c63e2: ;
    COW_AT(101c63e2)
    if ((int32_t)(ecx + 1u) < (int32_t)arg2)
    {
        eax = eax + 1u;
        ecx = ecx + 1u;
        goto L_101c63d4;
    }
    eax = eax + 1u;
L_101c63e8: ;
    COW_AT(101c63e8)
    if ((int32_t)(eax + 1u) >= (int32_t)arg2)
    {
        esi = 0u;
    }
    else
    {
    COW_AT(101c63ef)
        wr32(sp0 - 0x420u, eax);
        esi = 1u;
    }
    COW_AT(101c63f8)
    if ((int32_t)arg2 <= 1)
    {
        eax = 0u;
    }
    else
    {
    COW_AT(101c63ff)
        eax = 0u;
        ecx = 1u;
L_101c6404: ;
    COW_AT(101c6404)
        t5 = rd8(arg1 + ecx - 1u);
        if ((uint8_t)t5 != 0x7fu) goto L_101c6412;
    COW_AT(101c640b)
        t6 = rd8(arg1 + eax + 1u);
        if ((uint8_t)t6 == 0xfeu) goto L_101c6418;
L_101c6412: ;
    COW_AT(101c6412)
        if ((int32_t)(ecx + 1u) < (int32_t)arg2)
        {
            eax = eax + 1u;
            ecx = ecx + 1u;
            goto L_101c6404;
        }
        eax = eax + 1u;
    }
L_101c6418: ;
    COW_AT(101c6418)
    wr32(sp0 - 0x428u, eax);
    if ((int32_t)(eax + 1u) < (int32_t)arg2)
    {
        loc_428 = eax;
    }
    else
    {
    COW_AT(101c6423)
        wr32(sp0 - 0x428u, ebp);
        loc_428 = ebp;
    }
    COW_AT(101c6427)
    if ((int32_t)ebp < (int32_t)rd32(self + 0x6a4u))
    {
    COW_AT(101c642f)
        wr32(self + 0x6a4u, 0u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_438 = rd32(sp0 - 0x438u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
    }
    COW_AT(101c6439)
    if ((int32_t)rd32(self + 0x6a4u) <= 0)
    {
        ecx = 0u;
        edx = rd32(self + 0x6a4u);
        goto L_101c646b;
    }
    ecx = 0u;
    edx = rd32(self + 0x6a4u);
L_101c6445: ;
    COW_AT(101c6445)
    if (rd8(arg1 + ecx) < 0x80u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
        goto L_101c6450;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101c644c)
    if ((uint8_t)eax <= 0x9fu) goto L_101c6458;
L_101c6450: ;
    COW_AT(101c6450)
    if ((uint8_t)eax < 0xe0u) goto L_101c645d;
    COW_AT(101c6454)
    if ((uint8_t)eax > 0xffu) goto L_101c645d;
L_101c6458: ;
    COW_AT(101c6458)
    ecx = ecx + 2u;
L_101c6467: ;
    COW_AT(101c6467)
    if ((int32_t)ecx < (int32_t)edx) goto L_101c6445;
L_101c646b: ;
    COW_AT(101c646b)
    if (ecx != edx)
    {
    COW_AT(101c646f)
        wr32(self + 0x6a4u, edx - 1u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_430 = rd32(sp0 - 0x430u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_438 = rd32(sp0 - 0x438u);
        loc_424 = rd32(sp0 - 0x424u);
        loc_428 = rd32(sp0 - 0x428u);
    }
    COW_AT(101c6476)
    t7 = rd32(esi * 4u + sp0 - 0x424u) - rd32(self + 0x6a4u);
    t8 = rd32(self + 0x6a4u);
    esi = arg1 + t8;
    edi = sp0 - 0x41cu;
    ecx = t7 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t7 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    wr8(sp0 + t7 - 0x41cu, 0x7fu);
    wr8(sp0 + t7 - 0x41bu, 0xffu);
    wr8(sp0 + t7 - 0x41au, 0u);
    g->edx = t7;
    g->esp = sp0 - 0x428u;
    t9 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t10 = g->ecx;
    t11 = g->edx;
    eax = t9;
    ecx = t10;
    edx = t11;
    esi = t7 + 2u;
    COW_AT(101c64bd)
    if ((int32_t)eax <= (int32_t)arg5)
    {
        edi = 0u;
        goto L_101c6517;
    }
    ebp = eax;
    edi = 0u;
L_101c64cf: ;
    COW_AT(101c64cf)
    if ((int32_t)edi >= (int32_t)esi) goto L_101c6517;
    COW_AT(101c64d3)
    if (rd8(edi + sp0 - 0x41cu) < 0x80u)
    {
        eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x41cu);
        goto L_101c64df;
    }
    eax = (arg5 & 0xffffff00u) | rd8(edi + sp0 - 0x41cu);
    COW_AT(101c64db)
    if ((uint8_t)eax <= 0x9fu) goto L_101c64e7;
L_101c64df: ;
    COW_AT(101c64df)
    if ((uint8_t)eax < 0xe0u) goto L_101c64f1;
    COW_AT(101c64e3)
    if ((uint8_t)eax > 0xffu) goto L_101c64f1;
L_101c64e7: ;
    COW_AT(101c64e7)
    eax = 0xeu;
    edi = edi + 2u;
L_101c650a: ;
    COW_AT(101c650a)
    if ((int32_t)(ebp - eax) > (int32_t)arg5)
    {
        ebp = ebp - eax;
        goto L_101c64cf;
    }
L_101c6517: ;
    COW_AT(101c6517)
    t16 = edi + rd32(self + 0x6a4u);
    t17 = rd32(sp0 - 0x424u);
    wr32(self + 0x6a4u, t16);
    if ((int32_t)t17 >= (int32_t)t16)
    {
        eax = rd32(sp0 - 0x428u);
    }
    else
    {
        eax = rd32(sp0 - 0x428u);
    COW_AT(101c6533)
        edx = 0u;
L_101c6535: ;
    COW_AT(101c6535)
        if ((int32_t)rd32(self + 0x6a4u) <= 0) goto L_101c6596;
    COW_AT(101c653f)
        if ((int32_t)rd32(self + 0x6a4u) > 0)
        {
    COW_AT(101c654b)
            ecx = 0u;
L_101c6552: ;
    COW_AT(101c6552)
            if (rd8(arg1 + ecx) < 0x80u)
            {
                eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
                goto L_101c655d;
            }
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101c6559)
            if ((uint8_t)eax <= 0x9fu) goto L_101c6565;
L_101c655d: ;
    COW_AT(101c655d)
            if ((uint8_t)eax < 0xe0u) goto L_101c656f;
    COW_AT(101c6561)
            if ((uint8_t)eax > 0xffu) goto L_101c656f;
L_101c6565: ;
    COW_AT(101c6565)
            eax = 1u;
            ecx = ecx + 2u;
L_101c6572: ;
    COW_AT(101c6572)
            if ((int32_t)ecx < (int32_t)rd32(self + 0x6a4u)) goto L_101c6552;
        }
    COW_AT(101c657a)
        if (eax == 0u)
        {
            ecx = rd32(self + 0x6a4u);
    COW_AT(101c6589)
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(self + 0x6a4u);
    COW_AT(101c6584)
            ecx = ecx - 2u;
        }
    COW_AT(101c658a)
        wr32(self + 0x6a4u, ecx);
        if ((int32_t)(edx + 1u) < 5)
        {
            edx = edx + 1u;
            goto L_101c6535;
        }
    }
L_101c6596: ;
    COW_AT(101c6596)
    if ((int32_t)rd32(sp0 - 0x424u) < (int32_t)rd32(self + 0x6a4u))
    {
        ecx = rd32(self + 0x6a4u);
        edx = rd32(sp0 - 0x424u);
    COW_AT(101c65ab)
L_101c65b0: ;
    COW_AT(101c65b0)
        if ((int32_t)ecx <= 0) goto L_101c6601;
    COW_AT(101c65b4)
        if ((int32_t)rd32(self + 0x6a4u) <= 0) goto L_101c65e8;
        ecx = 0u;
L_101c65c0: ;
    COW_AT(101c65c0)
        if (rd8(arg1 + ecx) < 0x80u)
        {
            eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
            goto L_101c65cb;
        }
        eax = (eax & 0xffffff00u) | rd8(arg1 + ecx);
    COW_AT(101c65c7)
        if ((uint8_t)eax <= 0x9fu) goto L_101c65d3;
L_101c65cb: ;
    COW_AT(101c65cb)
        if ((uint8_t)eax < 0xe0u) goto L_101c65dd;
    COW_AT(101c65cf)
        if ((uint8_t)eax > 0xffu) goto L_101c65dd;
L_101c65d3: ;
    COW_AT(101c65d3)
        eax = 1u;
        ecx = ecx + 2u;
L_101c65e0: ;
    COW_AT(101c65e0)
        if ((int32_t)ecx < (int32_t)rd32(self + 0x6a4u)) goto L_101c65c0;
L_101c65e8: ;
    COW_AT(101c65e8)
        if (eax == 0u)
        {
            ecx = rd32(self + 0x6a4u);
    COW_AT(101c65f6)
            ecx = ecx - 1u;
        }
        else
        {
            ecx = rd32(self + 0x6a4u);
    COW_AT(101c65f2)
            ecx = ecx - 2u;
        }
    COW_AT(101c65f7)
        wr32(self + 0x6a4u, ecx);
        if ((int32_t)edx < (int32_t)ecx) goto L_101c65b0;
    }
L_101c6601: ;
    COW_AT(101c6601)
    t18 = arg2 - rd32(self + 0x6a4u);
    wr32(sp0 - 0x43cu, t18);
    t19 = arg1 + rd32(self + 0x6a4u);
    wr32(sp0 - 0x440u, t19);
    wr32(sp0 - 0x444u, sp0 - 0x41cu);
    g->eax = t19;
    g->ecx = t18;
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x430u;
    t20 = cow_cdecl(g, COW_IMG(0x1018fe70u), 5, sp0 - 0x41cu, t19, t18, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u));
    t21 = g->ecx;
    t22 = g->edx;
    eax = t20;
    ecx = t21;
    edx = t22;
    COW_AT(101c6620)
    if (eax == 0u) goto L_101c6637;
    COW_AT(101c6627)
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = rd32(sp0 - 0x438u);
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = edx;
    return 0xffffffffu;
L_101c645d: ;
    COW_AT(101c645d)
    if ((uint8_t)eax != 0x7fu)
    {
    COW_AT(101c6466)
        ecx = ecx + 1u;
    }
    else
    {
    COW_AT(101c6461)
        ecx = ecx + 2u;
    }
    goto L_101c6467;
L_101c64f1: ;
    COW_AT(101c64f1)
    if ((uint8_t)eax != 0x7fu)
    {
    COW_AT(101c64fc)
        t12 = (ecx & 0xffff0000u) | (uint16_t)(uint32_t)(int8_t)eax;
        wr32(sp0 - 0x43cu, t12);
        g->eax = eax;
        g->ecx = t12;
        g->edx = edx;
        g->esp = sp0 - 0x438u;
        t13 = cow_cdecl(g, COW_IMG(0x1011cec0u), 1, t12);
        t14 = g->ecx;
        t15 = g->edx;
        eax = t13;
        ecx = t14;
        edx = t15;
    COW_AT(101c6506)
        edi = edi + 1u;
    }
    else
    {
    COW_AT(101c64f5)
        eax = 0u;
        edi = edi + 2u;
    }
    goto L_101c650a;
L_101c656f: ;
    COW_AT(101c656f)
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101c6572;
L_101c65dd: ;
    COW_AT(101c65dd)
    eax = 0u;
    ecx = ecx + 1u;
    goto L_101c65e0;
L_101c6637: ;
    COW_AT(101c6637)
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    t23 = rd32(self + 0x6a4u);
    wr8(arg2 + sp0 - t23 - 0x41cu, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x428u;
    t24 = cow_call_regs(g, COW_IMG(0x10190830u), sp0 - 0x41cu, ecx, g->edx, 1, 5, rd32(sp0 - 0x43cu), rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t25 = g->ecx;
    t26 = g->edx;
    eax = t24;
    ecx = t25;
    edx = t26;
    ebp = arg2 - t23;
    COW_AT(101c664e)
    if ((int32_t)eax <= (int32_t)arg5) goto L_101c667c;
L_101c665c: ;
    COW_AT(101c665c)
    wr32(sp0 - 0x43cu, ebp);
    wr32(sp0 - 0x440u, sp0 - 0x41cu);
    g->eax = eax;
    g->esp = sp0 - 0x438u;
    t27 = cow_thiscall(g, COW_IMG(0x101c6720u), self, 2, sp0 - 0x41cu, ebp);
    t28 = g->ecx;
    eax = t27;
    ecx = t28;
    COW_AT(101c6669)
    wr32(sp0 - 0x43cu, sp0 - 0x41cu);
    g->edx = sp0 - 0x41cu;
    g->esp = sp0 - 0x428u;
    t29 = cow_call_regs(g, COW_IMG(0x10190830u), eax, ecx, g->edx, 1, 5, sp0 - 0x41cu, rd32(sp0 - 0x438u), rd32(sp0 - 0x434u), rd32(sp0 - 0x430u), rd32(sp0 - 0x42cu));
    t30 = g->ecx;
    t31 = g->edx;
    ecx = t30;
    edx = t31;
    ebp = eax;
    eax = t29;
    COW_AT(101c6675)
    if ((int32_t)eax > (int32_t)arg5) goto L_101c665c;
L_101c667c: ;
    COW_AT(101c667c)
    if ((int32_t)rd32(self + 0x6a4u) < 0) goto L_101c66b4;
    eax = rd32(self + 0x6a4u);
L_101c668d: ;
    COW_AT(101c668d)
    t32 = rd8(arg1 + eax);
    if ((uint8_t)t32 != 0x7fu) goto L_101c66a1;
    COW_AT(101c6693)
    if ((int8_t)rd8(arg1 + eax + 1u) < 100)
    {
        ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
        goto L_101c66a1;
    }
    ecx = (ecx & 0xffffff00u) | rd8(arg1 + eax + 1u);
    COW_AT(101c669c)
    if ((int8_t)ecx < 120) goto L_101c66a6;
L_101c66a1: ;
    COW_AT(101c66a1)
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        goto L_101c668d;
    }
    COW_AT(101c66a4)
L_101c66b4: ;
    COW_AT(101c66b4)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, 0x64u);
L_101c66bb: ;
    COW_AT(101c66bb)
    if ((int32_t)rd32(sp0 - 0x428u) >= (int32_t)rd32(self + 0x6a4u))
    {
        ecx = ebp;
        goto L_101c66f8;
    }
    ecx = ebp;
    COW_AT(101c66cf)
    wr8(arg3 + 2u, 0x7fu);
    wr8(arg3 + 3u, 0xfeu);
    t33 = ecx;
    esi = sp0 - 0x41cu;
    edi = arg3 + 4u;
    ecx = t33 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t33 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = rd32(sp0 - 0x438u);
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = t33;
    return ebp + 4u;
L_101c66a6: ;
    COW_AT(101c66a6)
    wr8(arg3, 0x7fu);
    wr8(arg3 + 1u, rd8(arg1 + eax + 1u));
    if ((int32_t)eax >= 0) goto L_101c66bb;
    goto L_101c66b4;
L_101c66f8: ;
    COW_AT(101c66f8)
    t34 = ecx;
    esi = sp0 - 0x41cu;
    edi = arg3 + 2u;
    ecx = t34 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t34 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t35 = rd32(sp0 - 0x438u);
    wr8(arg3 + ebp + 2u, 0u);
    g->ebx = rd32(sp0 - 0x42cu);
    g->esi = rd32(sp0 - 0x434u);
    g->edi = t35;
    g->ebp = rd32(sp0 - 0x430u);
    g->edx = arg3;
    return ebp + 2u;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101c6360(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x101c637fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x438u);
        in_esi = rd32(sp0 - 0x434u);
        in_ebp = rd32(sp0 - 0x430u);
        in_ebx = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c6383u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x438u);
        in_esi = rd32(sp0 - 0x434u);
        in_ebp = rd32(sp0 - 0x430u);
        in_ebx = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c6389u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c6397u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->ecx = 0u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c639cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63a3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63b7u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101c63c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63d4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63dbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63e2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->esi = 0u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63efu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63f8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c63ffu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->eax = 0u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6404u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c640bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6412u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6418u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edx = arg2;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6423u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6427u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c642fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6439u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6445u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c644cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6450u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6454u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6458u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c645du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6461u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6466u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6467u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c646bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c646fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6476u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        uint32_t loc_424;
        uint32_t loc_428;
        uint32_t loc_42c;
        uint32_t loc_430;
        uint32_t loc_434;
        uint32_t loc_438;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        loc_438 = rd32(sp0 - 0x438u);
        loc_434 = rd32(sp0 - 0x434u);
        loc_430 = rd32(sp0 - 0x430u);
        loc_42c = rd32(sp0 - 0x42cu);
        loc_428 = rd32(sp0 - 0x428u);
        loc_424 = rd32(sp0 - 0x424u);
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64bdu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x101c64cfu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101c64d3u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->eax = arg5;
        (void)sp0;
        return 1;
    }
    case 0x101c64dbu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64dfu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64e3u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64e7u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64f1u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64f5u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c64fcu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6506u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x43cu;
        (void)sp0;
        return 1;
    }
    case 0x101c650au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6517u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6533u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6535u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c653fu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c654bu:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->ecx = 0u;
        (void)sp0;
        return 1;
    }
    case 0x101c6552u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6559u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c655du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6561u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6565u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c656fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6572u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c657au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6584u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6589u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c658au:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c6596u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        (void)sp0;
        return 1;
    }
    case 0x101c65abu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65b0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65b4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65c0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65c7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65cbu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65cfu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65d3u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65ddu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65e0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65e8u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65f2u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65f6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c65f7u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = 0xfffffffeu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6601u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6620u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x444u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101c6627u:
    {
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101c6637u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->ebp = arg2;
        g->edi = arg1;
        wr32(sp0 - 0x444u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101c664eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x43cu;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c665cu:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = arg5;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6669u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x438u;
        g->esi = arg5;
        g->edi = arg1;
        wr32(sp0 - 0x440u, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101c6675u:
    {
        const uint32_t arg5 = rd32(sp0 + 0x14u);
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        g->esp = sp0 - 0x43cu;
        g->esi = arg5;
        g->edi = arg1;
        wr32(sp0 - 0x440u, sp0 - 0x41cu);
        wr32(sp0 - 0x43cu, sp0 - 0x41cu);
        (void)sp0;
        return 1;
    }
    case 0x101c667cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c668du:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c6693u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c669cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c66a1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c66a4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c66a6u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->edi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x101c66b4u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c66bbu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        self = g->ebx;
        ebp = g->ebp;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        (void)sp0;
        return 1;
    }
    case 0x101c66cfu:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->esi = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    case 0x101c66f8u:
    {
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ebp;
        uint32_t ecx;
        uint32_t edi;
        eax = g->eax;
        ecx = g->ecx;
        ebp = g->ebp;
        edi = g->edi;
        g->esp = sp0 - 0x438u;
        g->edx = arg3;
        g->esi = sp0 - 0x41cu;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101c6360(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101c6360(g);
    g->esp = sp0;
    rt_return(g, r, 20u);
}
/* COW_ADAPTER END */
