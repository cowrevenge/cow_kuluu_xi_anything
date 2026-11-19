/* f_0x102f6c31 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_102f6c31(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
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
    case 0x102f6c67u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c67;
    case 0x102f6c6cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c6c;
    case 0x102f6c75u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c75;
    case 0x102f6c79u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c79;
    case 0x102f6c7eu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c7e;
    case 0x102f6c8du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c8d;
    case 0x102f6c93u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c93;
    case 0x102f6c9cu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6c9c;
    case 0x102f6ca0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6ca0;
    case 0x102f6ca5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6ca5;
    case 0x102f6cb5u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cb5;
    case 0x102f6cbau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cba;
    case 0x102f6cbfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cbf;
    case 0x102f6ccfu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6ccf;
    case 0x102f6cd4u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cd4;
    case 0x102f6cdau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cda;
    case 0x102f6ce1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6ce1;
    case 0x102f6ce6u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6ce6;
    case 0x102f6cecu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cec;
    case 0x102f6cf1u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cf1;
    case 0x102f6cf7u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6cf7;
    case 0x102f6d03u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d03;
    case 0x102f6d12u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d12;
    case 0x102f6d22u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d22;
    case 0x102f6d31u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d31;
    case 0x102f6d39u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d39;
    case 0x102f6d40u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d40;
    case 0x102f6d45u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d45;
    case 0x102f6d51u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); self = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d51;
    case 0x102f6d59u: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d59;
    case 0x102f6d5du: eax = g->eax; in_esi = g->ecx; edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d5d;
    case 0x102f6d6du: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d6d;
    case 0x102f6d76u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d76;
    case 0x102f6d90u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d90;
    case 0x102f6d95u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6d95;
    case 0x102f6da0u: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6da0;
    case 0x102f6dabu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6dab;
    case 0x102f6dafu: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6daf;
    case 0x102f6ddau: eax = g->eax; ecx = g->ecx; edx = g->edx; in_esi = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x10u); in_ebx = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0xcu); g->edi = rd32(sp0 - 0x10u); goto E_102f6dda;
    default: break;
    }
#endif

    COW_AT(102f6c31)
    t1 = rd32(in_esi + 0x17cu);
    g->esp = sp0 - 8u;
    cow_call_regs(g, COW_IMG(0x102f69d3u), g->eax, self, in_edx, 1, 3, in_esi, in_edi, in_ebx);
    t2 = g->edx;
    g->esp = sp0 - 0x10u;
    t3 = cow_call_regs(g, COW_IMG(0x102f6bc2u), in_esi, in_esi, t2, 1, 0);
    t4 = g->ecx;
    wr32(t1 + 0xcu, 0u);
    g->ecx = t4;
    t5 = cow_call_regs(g, COW_IMG(0x102f6962u), g->eax, g->ecx, in_esi, 1, 0);
    t6 = g->ecx;
    t7 = g->edx;
    wr8(t1 + 0x10u, (uint8_t)t5);
    wr32(t1 + 0x14u, 0u);
    wr32(t1 + 0x18u, 0u);
    if (rd8(in_esi + 0x4au) == 0u)
    {
        eax = (t5 & 0xffffff00u) | rd8(in_esi + 0x4au);
        ecx = t6;
        edx = t7;
        edi = t1;
        goto L_102f6c6c;
    }
    eax = (t5 & 0xffffff00u) | rd8(in_esi + 0x4au);
    ecx = t6;
    edx = t7;
    edi = t1;
    COW_AT(102f6c67)
    if (rd8(in_esi + 0x40u) != 0u) goto L_102f6c75;
L_102f6c6c: ;
    COW_AT(102f6c6c)
    wr8(in_esi + 0x58u, 0u);
    wr8(in_esi + 0x59u, 0u);
    wr8(in_esi + 0x5au, 0u);
L_102f6c75: ;
    COW_AT(102f6c75)
    if ((uint8_t)eax != 0u)
    {
    COW_AT(102f6c79)
        if (rd8(in_esi + 0x41u) != 0u)
        {
    COW_AT(102f6c7e)
            wr32(rd32(in_esi) + 0x14u, 0x2eu);
            g->eax = rd32(in_esi);
            g->edx = edx;
            t8 = rd32(in_esi);
            g->esp = sp0 - 0x14u;
            t9 = cow_thiscall(g, rd32(t8), ecx, 0);
            t10 = g->edx;
            eax = t9;
            ecx = in_esi;
            edx = t10;
        }
    COW_AT(102f6c8d)
        if (rd32(in_esi + 0x64u) == 3u) goto L_102f6ce1;
    COW_AT(102f6c93)
        wr8(in_esi + 0x59u, 0u);
        wr8(in_esi + 0x5au, 0u);
        wr32(in_esi + 0x74u, 0u);
L_102f6c9c: ;
    COW_AT(102f6c9c)
        wr8(in_esi + 0x58u, 1u);
L_102f6ca0: ;
    COW_AT(102f6ca0)
        if (rd8(in_esi + 0x58u) != 0u)
        {
    COW_AT(102f6ca5)
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10308453u), g->eax, ecx, edx, 1, 3, in_esi, in_edi, in_ebx);
            t11 = g->edx;
            t12 = rd32(in_esi + 0x1a4u);
            wr32(edi + 0x14u, t12);
            eax = t12;
            ecx = in_esi;
            edx = t11;
        }
    COW_AT(102f6cb5)
        if (rd8(in_esi + 0x5au) != 0u) goto L_102f6cbf;
    COW_AT(102f6cba)
        if (rd8(in_esi + 0x59u) == 0u) goto L_102f6ccf;
L_102f6cbf: ;
    COW_AT(102f6cbf)
        g->esp = sp0;
        cow_call_regs(g, COW_IMG(0x10307932u), g->eax, ecx, edx, 1, 5, in_esi, in_edi, in_ebx, self, in_ebp);
        t13 = g->edx;
        t14 = rd32(in_esi + 0x1a4u);
        wr32(edi + 0x18u, t14);
        eax = t14;
        ecx = in_esi;
        edx = t13;
    }
L_102f6ccf: ;
    COW_AT(102f6ccf)
    if (rd8(in_esi + 0x41u) == 0u)
    {
    COW_AT(102f6cd4)
        if (rd8(edi + 0x10u) == 0u)
        {
    COW_AT(102f6cf7)
            g->eax = eax;
            g->esp = sp0;
            t16 = cow_call_regs(g, COW_IMG(0x10306377u), g->eax, ecx, edx, 1, 5, in_esi, in_edi, in_ebx, self, in_ebp);
            t17 = g->ecx;
            t18 = g->edx;
            g->esp = sp0 - 0xcu;
            cow_call_regs(g, COW_IMG(0x10305981u), g->eax, t17, t18, 1, 3, in_esi, in_esi, in_edi);
            t19 = g->edx;
            edx = t19;
        }
        else
        {
    COW_AT(102f6cda)
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x10306970u), g->eax, ecx, edx, 1, 5, in_esi, in_edi, in_ebx, self, in_ebp);
            t15 = g->edx;
            edx = t15;
        }
    COW_AT(102f6d03)
        t20 = rd8(in_esi + 0x5au);
        g->eax = t20;
        g->esp = sp0 - 4u;
        t21 = cow_call_regs(g, COW_IMG(0x103054c2u), g->eax, in_esi, edx, 1, 5, in_esi, t20, in_edi, in_ebx, self);
        t22 = g->edx;
        eax = t21;
        ecx = t20;
        edx = t22;
    }
    COW_AT(102f6d12)
    g->eax = eax;
    g->esp = sp0 - 8u;
    t23 = cow_call_regs(g, COW_IMG(0x10305227u), g->eax, ecx, edx, 1, 3, in_esi, in_edi, in_ebx);
    t24 = g->edx;
    if (rd8(in_esi + 0xc9u) == 0u)
    {
        eax = t23;
        edx = t24;
    COW_AT(102f6d31)
        if (rd8(in_esi + 0xc8u) == 0u)
        {
    COW_AT(102f6d40)
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x10304461u), g->eax, in_esi, edx, 1, 3, in_esi, in_edi, in_ebx);
            t27 = g->edx;
            edx = t27;
        }
        else
        {
    COW_AT(102f6d39)
            g->esp = sp0;
            cow_call_regs(g, COW_IMG(0x1030500fu), g->eax, in_esi, edx, 1, 5, in_esi, in_edi, in_ebx, self, in_ebp);
            t26 = g->edx;
            edx = t26;
        }
    }
    else
    {
        edx = t24;
    COW_AT(102f6d22)
        wr32(rd32(in_esi) + 0x14u, 1u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_thiscall(g, rd32(rd32(in_esi)), in_esi, 0);
        t25 = g->edx;
        edx = t25;
    }
    COW_AT(102f6d45)
    if (rd8(rd32(in_esi + 0x18cu) + 0x10u) != 0u)
    {
        eax = rd32(in_esi + 0x18cu);
        loc_8 = self;
        goto L_102f6d59;
    }
    eax = rd32(in_esi + 0x18cu);
    COW_AT(102f6d51)
    if (rd8(in_esi + 0x40u) == 0u)
    {
        loc_8 = self & 0xffffff00u;
        goto L_102f6d5d;
    }
    loc_8 = self & 0xffffff00u;
L_102f6d59: ;
    COW_AT(102f6d59)
    loc_8 = (loc_8 & 0xffffff00u) | 1u;
L_102f6d5d: ;
    COW_AT(102f6d5d)
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t28 = cow_call_regs(g, COW_IMG(0x10303a91u), g->eax, in_esi, edx, 1, 3, in_esi, loc_8, in_edi);
    t29 = g->edx;
    if (rd8(in_esi + 0x41u) != 0u)
    {
        ecx = loc_8;
        edx = t29;
    }
    else
    {
        eax = t28;
        ecx = loc_8;
        edx = t29;
    COW_AT(102f6d6d)
        g->esp = sp0 - 0xcu;
        cow_call_regs(g, COW_IMG(0x10302e52u), g->eax, ecx, edx, 1, 3, in_esi, 0u, in_edi);
        t30 = g->edx;
        ecx = 0u;
        edx = t30;
    }
    COW_AT(102f6d76)
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(rd32(in_esi + 4u) + 0x18u), ecx, 0);
    t31 = g->ecx;
    t32 = g->edx;
    g->edx = t32;
    g->esp = sp0 - 0x18u;
    cow_thiscall(g, rd32(rd32(in_esi + 0x18cu) + 8u), t31, 0);
    t33 = g->edx;
    if (rd32(in_esi + 8u) == 0u)
    {
        edx = t33;
    }
    else
    {
        ecx = rd32(in_esi + 8u);
        edx = t33;
    COW_AT(102f6d90)
        if (rd8(in_esi + 0x40u) == 0u)
        {
    COW_AT(102f6d95)
            if (rd8(rd32(in_esi + 0x18cu) + 0x10u) != 0u)
            {
    COW_AT(102f6da0)
                if (rd8(in_esi + 0xc8u) == 0u)
                {
                    eax = rd32(in_esi + 0x20u);
                }
                else
                {
                    eax = rd32(in_esi + 0x20u);
    COW_AT(102f6dab)
                    eax = eax * 3u + 2u;
                }
    COW_AT(102f6daf)
                wr32(ecx + 4u, 0u);
                t34 = rd32(in_esi + 0x118u) * eax;
                wr32(rd32(in_esi + 8u) + 8u, t34);
                wr32(rd32(in_esi + 8u) + 0xcu, 0u);
                t35 = (rd8(in_esi + 0x5au) != 0u) + 2u;
                wr32(rd32(in_esi + 8u) + 0x10u, t35);
                wr32(edi + 0xcu, rd32(edi + 0xcu) + 1u);
            }
        }
    }
    COW_AT(102f6dda)
    g->ebx = in_ebx;
    g->edi = in_edi;
    g->edx = edx;
    return;
L_102f6ce1: ;
    COW_AT(102f6ce1)
    if (rd32(in_esi + 0x74u) == 0u) goto L_102f6cec;
    COW_AT(102f6ce6)
    wr8(in_esi + 0x59u, 1u);
    goto L_102f6ca0;
L_102f6cec: ;
    COW_AT(102f6cec)
    if (rd8(in_esi + 0x50u) == 0u) goto L_102f6c9c;
    COW_AT(102f6cf1)
    wr8(in_esi + 0x5au, 1u);
    goto L_102f6ca0;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f6c31(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f6c67u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c6cu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c75u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c79u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c7eu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c8du:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c93u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6c9cu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6ca0u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6ca5u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cb5u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cbau:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cbfu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6ccfu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cd4u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cdau:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6ce1u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6ce6u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cecu:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cf1u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6cf7u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d03u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d12u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6d22u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d31u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d39u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d40u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d45u:
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
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x14u, in_esi);
        (void)sp0;
        return 1;
    }
    case 0x102f6d51u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        self = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102f6d59u:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102f6d5du:
    {
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        in_esi = g->ecx;
        edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        g->esi = in_esi;
        (void)sp0;
        return 1;
    }
    case 0x102f6d6du:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6d76u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6d90u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6d95u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6da0u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6dabu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6dafu:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebx = 0u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f6ddau:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_8;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        in_esi = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x10u);
        in_ebx = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x10u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f6c31(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f6c31(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
