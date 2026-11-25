/* f_0x102e5838 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_102e5838(Guest* g)
{
    double d17;
    double d19;
    double d23;
    double d24;
    double d25;
    double d26;
    double d27;
    double d28;
    double d29;
    double d30;
    double d31;
    double d32;
    double d33;
    double d34;
    double d35;
    double d36;
    double d37;
    double d38;
    double d39;
    double d40;
    double d41;
    double d42;
    double d43;
    double d44;
    double d45;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    double loc_10_f;
    double loc_8_f;
    double loc_c_f;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t18;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t3;
    uint32_t t4;
    uint32_t t46;
    uint32_t t47;
    uint32_t t48;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    double x1;
    double x2;
    double x3;
    double x4;
    double x5;
    uint32_t sp0 = COW_ENTRY_SP0(g);
    uint32_t in_eax = g->eax;
    uint32_t self = g->ecx;
    uint32_t in_ebx = g->ebx;
    uint32_t in_esi = g->esi;
    uint32_t in_edi = g->edi;
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102e584au: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_102e584a;
    case 0x102e5854u: in_eax = g->eax; ecx = g->ecx; in_ebx = g->ebx; self = g->esi; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_102e5854;
    case 0x102e5864u: in_eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5864;
    case 0x102e586cu: in_eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e586c;
    case 0x102e5874u: in_eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5874;
    case 0x102e5880u: in_eax = g->eax; ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5880;
    case 0x102e5887u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5887;
    case 0x102e588fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e588f;
    case 0x102e58b7u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e58b7;
    case 0x102e58efu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e58ef;
    case 0x102e5906u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5906;
    case 0x102e59deu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e59de;
    case 0x102e59e4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e59e4;
    case 0x102e59edu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e59ed;
    case 0x102e59f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e59f1;
    case 0x102e59ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e59ff;
    case 0x102e5a03u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a03;
    case 0x102e5a0fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a0f;
    case 0x102e5a13u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a13;
    case 0x102e5a16u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a16;
    case 0x102e5a25u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a25;
    case 0x102e5a29u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a29;
    case 0x102e5a35u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a35;
    case 0x102e5a39u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x4 = ST(0); x3 = ST(1); x2 = ST(2); x1 = ST(3); x0 = ST(4); g->top = (g->top + 5u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a39;
    case 0x102e5a3cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x5 = ST(0); x4 = ST(1); x3 = ST(2); x2 = ST(3); x1 = ST(4); x0 = ST(5); g->top = (g->top + 6u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a3c;
    case 0x102e5a7cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a7c;
    case 0x102e5a82u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a82;
    case 0x102e5a8bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a8b;
    case 0x102e5a8fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a8f;
    case 0x102e5a9eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5a9e;
    case 0x102e5aa2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5aa2;
    case 0x102e5aaeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5aae;
    case 0x102e5ab2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ab2;
    case 0x102e5ab5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ab5;
    case 0x102e5ac4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ac4;
    case 0x102e5ac8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ac8;
    case 0x102e5ad4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ad4;
    case 0x102e5ad8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5ad8;
    case 0x102e5adbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x3 = ST(0); x2 = ST(1); x1 = ST(2); x0 = ST(3); g->top = (g->top + 4u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5adb;
    case 0x102e5afau: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); x2 = ST(0); x1 = ST(1); x0 = ST(2); g->top = (g->top + 3u) & 7u; g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5afa;
    case 0x102e5b00u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5b00;
    case 0x102e5b02u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; edi = g->edi; in_edi = rd32(sp0 - 0x1cu); in_ebx = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x18u); g->edi = rd32(sp0 - 0x1cu); g->esi = rd32(sp0 - 0x14u); goto E_102e5b02;
    case 0x102e5b04u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_ebx = g->ebx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); loc_10_f = rdf32(sp0 - 0x10u); loc_c_f = rdf32(sp0 - 0xcu); loc_8_f = rdf32(sp0 - 8u); g->ebp = rd32(sp0 - 4u); g->esi = rd32(sp0 - 0x14u); goto E_102e5b04;
    default: break;
    }
#endif

    COW_AT(102e5838)
    t1 = rd32(self + 0x1090u);
    if (t1 != 0u)
    {
    COW_AT(102e5854)
        if (rd32(sp0 + 4u) < rd32(self + 0x1074u))
        {
            ebx = rd32(sp0 + 8u);
            edi = rd32(sp0 + 4u);
            goto L_102e5880;
        }
        ebx = rd32(sp0 + 8u);
        edi = rd32(sp0 + 4u);
    COW_AT(102e5864)
        if (edi >= rd32(self + 0x107cu)) goto L_102e5880;
    COW_AT(102e586c)
        if (ebx < rd32(self + 0x1080u)) goto L_102e5880;
    COW_AT(102e5874)
        if (ebx < rd32(self + 0x1084u)) goto L_102e5b00;
L_102e5880: ;
    COW_AT(102e5880)
        g->eax = in_eax;
        g->esp = sp0 - 0x1cu;
        COW_RET(0x102e5887u);
        t2 = cow_thiscall(g, COW_IMG(0x102e55b1u), self, 0);
        eax = t2;
    COW_AT(102e5887)
        if ((int32_t)eax < 0) goto L_102e5b02;
    COW_AT(102e588f)
        t3 = rd32(sp0 + 0xcu);
        wr32(self + 0x107cu, edi + 1u);
        wr32(self + 0x1074u, edi);
        wr32(self + 0x1080u, ebx);
        wr32(self + 0x1084u, ebx + 1u);
        if (t3 != 0u)
        {
    COW_AT(102e58b7)
            t4 = rd32(self + 0x18u) + rd32(self + 0x1070u) * 2u + rd32(self + 0x1050u) * edi + rd32(self + 0x1054u) * ebx;
            t5 = rd32(self + 0x1070u);
            t6 = rd32(self + 0x1050u);
            t7 = rd32(self + 0x1054u);
            t8 = rd32(self + 0x106cu);
            t9 = rd32(self + 0x1078u);
            wr32(sp0 + 4u, t4);
            wr32(sp0 + 0xcu, t5);
            if (t5 < t9)
            {
                ecx = t6 * edi + t7 * ebx;
                edx = t8;
                ebx = t4;
    COW_AT(102e58ef)
                x2 = (double)rdf32(COW_IMG(0x1032a1acu));
                x1 = (double)rdf32(COW_IMG(0x1032961cu));
                x0 = (double)rdf32(COW_IMG(0x103295d8u));
L_102e5906: ;
    COW_AT(102e5906)
                t10 = (uint8_t)((rd16(self + 0x1094u) & 0x1fu) != 0u ? rd16(ebx) >> (rd16(self + 0x1094u) & 0x1fu) : rd16(ebx));
                t11 = rd16(ebx);
                t12 = rd16(self + 0x1098u);
                t13 = rd16(self + 0x1094u);
                wr32(sp0 + 8u, t10);
                t14 = (uint8_t)((t12 & 0x1fu) != 0u ? t11 >> (t12 & 0x1fu) : t11);
                t15 = rd32(sp0 + 4u);
                t16 = rd32(sp0 + 8u);
                wr32(sp0 + 8u, t14);
                d17 = (double)(float)fr(g, (double)(int32_t)t16 - x2);
                t18 = rd16(t15 + 2u);
                d19 = fr(g, (double)(int32_t)rd32(sp0 + 8u) - (double)rdf32(COW_IMG(0x1032ae60u)));
                wr32(sp0 + 8u, t18);
                t20 = (uint8_t)((t13 & 0x1fu) != 0u ? (uint16_t)t18 >> (t13 & 0x1fu) : (uint16_t)t18);
                t21 = rd16(self + 0x1098u);
                wr32(sp0 + 4u, t20);
                t22 = (uint8_t)((t21 & 0x1fu) != 0u ? (uint16_t)rd32(sp0 + 8u) >> (t21 & 0x1fu) : (uint16_t)rd32(sp0 + 8u));
                d23 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - x2);
                wr32(sp0 + 4u, t22);
                d24 = fr(g, (double)(int32_t)rd32(sp0 + 4u) - (double)rdf32(COW_IMG(0x1032ae60u)));
                wrf32(sp0 + 8u, (float)d24);
                d25 = fr(g, d17 * (double)rdf32(COW_IMG(0x10346228u)));
                d26 = fr(g, d24 * (double)rdf32(COW_IMG(0x1034622cu)));
                wrf32(sp0 + 4u, (float)d25);
                wrf32(edx, (float)fr(g, d25 + d26));
                d27 = (double)(float)fr(g, (double)(float)d19 * (double)rdf32(COW_IMG(0x10346224u)));
                d28 = (double)(float)fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u)));
                d29 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - d27) - fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u))));
                d30 = fr(g, (double)rdf32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10346220u)));
                wrf32(sp0 + 8u, (float)d29);
                g->st[g->top & 7u] = d29;
                wrf32(edx + 4u, (float)d29);
                d31 = (double)(float)fr(g, (double)(float)d19 * (double)rdf32(COW_IMG(0x1034621cu)));
                d32 = fr(g, fr(g, (double)(float)d19 * (double)rdf32(COW_IMG(0x1034621cu))) + (double)rdf32(sp0 + 4u));
                wrf32(sp0 + 4u, (float)d32);
                wrf32(edx + 8u, (float)d32);
                wrf32(edx + 0xcu, (float)1.0);
                d33 = fr(g, d25 + d26);
                if (!(d33 < x0))
                {
                    eax = (t22 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, x0, 6u);
                    ecx = ((ecx | t13) & 0xffff0000u) | t21;
                    ebx = t15;
                    loc_c_f = d27;
                    loc_8_f = d31;
                    loc_10_f = d28;
                    x5 = d33;
                    x4 = d26;
                    x3 = d23;
    COW_AT(102e59e4)
                    if ((cow_fsw(g, x5, x1, 6u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x5, x1, 6u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x5, x1, 6u);
    COW_AT(102e59ed)
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (t22 & 0xffff0000u) | (uint16_t)cow_fsw(g, d33, x0, 6u);
                    ecx = ((ecx | t13) & 0xffff0000u) | t21;
                    ebx = t15;
                    loc_c_f = d27;
                    loc_8_f = d31;
                    loc_10_f = d28;
                    x5 = d33;
                    x4 = d26;
                    x3 = d23;
    COW_AT(102e59de)
                    x5 = 0.0;
                }
    COW_AT(102e59f1)
                wrf32(edx, (float)x5);
                d34 = (double)rdf32(sp0 + 8u);
                if (!(d34 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, x0, 5u);
    COW_AT(102e5a03)
                    d35 = (double)rdf32(sp0 + 8u);
                    if ((cow_fsw(g, d35, x1, 5u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, x1, 5u);
    COW_AT(102e5a13)
                        x5 = (double)rdf32(sp0 + 8u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d35, x1, 5u);
    COW_AT(102e5a0f)
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d34, x0, 5u);
    COW_AT(102e59ff)
                    x5 = 0.0;
                }
    COW_AT(102e5a16)
                wrf32(edx + 4u, (float)x5);
                d36 = (double)rdf32(sp0 + 4u);
                if (!(d36 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, x0, 5u);
    COW_AT(102e5a29)
                    d37 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d37, x1, 5u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, x1, 5u);
    COW_AT(102e5a39)
                        x5 = (double)rdf32(sp0 + 4u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d37, x1, 5u);
    COW_AT(102e5a35)
                        x5 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d36, x0, 5u);
    COW_AT(102e5a25)
                    x5 = 0.0;
                }
    COW_AT(102e5a3c)
                wrf32(edx + 8u, (float)x5);
                d38 = fr(g, x3 * (double)rdf32(COW_IMG(0x10346228u)));
                wrf32(sp0 + 4u, (float)d38);
                wrf32(edx + 0x10u, (float)fr(g, d38 + x4));
                d39 = fr(g, fr(g, (double)rdf32(sp0 + 4u) - loc_c_f) - loc_10_f);
                wrf32(sp0 + 8u, (float)d39);
                wrf32(edx + 0x14u, (float)d39);
                d40 = fr(g, (double)rdf32(sp0 + 4u) + loc_8_f);
                wrf32(sp0 + 4u, (float)d40);
                wrf32(edx + 0x18u, (float)d40);
                wrf32(edx + 0x1cu, (float)1.0);
                d41 = fr(g, d38 + x4);
                if (!(d41 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, x0, 4u);
                    x3 = d41;
    COW_AT(102e5a82)
                    if ((cow_fsw(g, x3, x1, 4u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, x1, 4u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, x3, x1, 4u);
    COW_AT(102e5a8b)
                        x3 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d41, x0, 4u);
                    x3 = d41;
    COW_AT(102e5a7c)
                    x3 = 0.0;
                }
    COW_AT(102e5a8f)
                wrf32(edx + 0x10u, (float)x3);
                d42 = (double)rdf32(sp0 + 8u);
                if (!(d42 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, x0, 3u);
    COW_AT(102e5aa2)
                    d43 = (double)rdf32(sp0 + 8u);
                    if ((cow_fsw(g, d43, x1, 3u) >> 8u & 0x41u) != 0u)
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, x1, 3u);
    COW_AT(102e5ab2)
                        x3 = (double)rdf32(sp0 + 8u);
                    }
                    else
                    {
                        eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d43, x1, 3u);
    COW_AT(102e5aae)
                        x3 = 1.0;
                    }
                }
                else
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d42, x0, 3u);
    COW_AT(102e5a9e)
                    x3 = 0.0;
                }
    COW_AT(102e5ab5)
                wrf32(edx + 0x14u, (float)x3);
                d44 = (double)rdf32(sp0 + 4u);
                if (!(d44 < x0))
                {
                    eax = (eax & 0xffff0000u) | (uint16_t)cow_fsw(g, d44, x0, 3u);
    COW_AT(102e5ac8)
                    d45 = (double)rdf32(sp0 + 4u);
                    if ((cow_fsw(g, d45, x1, 3u) >> 8u & 0x41u) != 0u)
                    {
    COW_AT(102e5ad8)
                        x3 = (double)rdf32(sp0 + 4u);
                    }
                    else
                    {
    COW_AT(102e5ad4)
                        x3 = 1.0;
                    }
                }
                else
                {
    COW_AT(102e5ac4)
                    x3 = 0.0;
                }
    COW_AT(102e5adb)
                t46 = rd32(sp0 + 0xcu);
                wr32(sp0 + 0xcu, t46 + 2u);
                wrf32(edx + 0x18u, (float)x3);
                t47 = rd32(sp0 + 0xcu);
                t48 = rd32(self + 0x1078u);
                wr32(sp0 + 4u, ebx + 4u);
                if (t47 < t48)
                {
                    edx = edx + 0x20u;
                    ebx = ebx + 4u;
                    goto L_102e5906;
                }
    COW_AT(102e5afa)
            }
        }
L_102e5b00: ;
    COW_AT(102e5b00)
        eax = 0u;
L_102e5b02: ;
    COW_AT(102e5b02)
    }
    else
    {
    COW_AT(102e584a)
        eax = 0x8007000eu;
    }
    COW_AT(102e5b04)
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    return eax;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102e5838(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102e584au:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5854u:
    {
        uint32_t ecx;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5864u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e586cu:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5874u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5880u:
    {
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_eax;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        in_eax = g->eax;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5887u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e588fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e58b7u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e58efu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5906u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e59deu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e59e4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e59edu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e59f1u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e59ffu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a03u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a0fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a13u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a16u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a25u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a29u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a35u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a39u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x4 = ST(0);
        x3 = ST(1);
        x2 = ST(2);
        x1 = ST(3);
        x0 = ST(4);
        g->top = (g->top + 5u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a3cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        double x4;
        double x5;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x5 = ST(0);
        x4 = ST(1);
        x3 = ST(2);
        x2 = ST(3);
        x1 = ST(4);
        x0 = ST(5);
        g->top = (g->top + 6u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a7cu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a82u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a8bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a8fu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5a9eu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5aa2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5aaeu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ab2u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ab5u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ac4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ac8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ad4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5ad8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5adbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        double x3;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x3 = ST(0);
        x2 = ST(1);
        x1 = ST(2);
        x0 = ST(3);
        g->top = (g->top + 4u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->edi = 0xffu;
        (void)sp0;
        return 1;
    }
    case 0x102e5afau:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        double x0;
        double x1;
        double x2;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        x2 = ST(0);
        x1 = ST(1);
        x0 = ST(2);
        g->top = (g->top + 3u) & 7u;
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5b00u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5b02u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x1cu);
        in_ebx = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102e5b04u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        double loc_10_f;
        double loc_8_f;
        double loc_c_f;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_ebx = g->ebx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        loc_10_f = rdf32(sp0 - 0x10u);
        loc_c_f = rdf32(sp0 - 0xcu);
        loc_8_f = rdf32(sp0 - 8u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102e5838(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_102e5838(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
