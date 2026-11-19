/* f_0x102f806c - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f806c(Guest* g)
{
    unsigned cf;
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_8;
    uint32_t loc_c;
    unsigned of;
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
    uint32_t t3;
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
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    cow_frame(g, sp0, 84u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f807eu: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102f807e;
    case 0x102f808bu: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_102f808b;
    case 0x102f8091u: self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; goto E_102f8091;
    case 0x102f809eu: eax = g->eax; self = g->ecx; in_edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; in_edi = rd32(sp0 - 0x2cu); in_esi = rd32(sp0 - 0x28u); in_ebx = rd32(sp0 - 0x24u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x24u); g->edi = rd32(sp0 - 0x2cu); g->esi = rd32(sp0 - 0x28u); goto E_102f809e;
    case 0x102f80f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f80f4;
    case 0x102f80fdu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f80fd;
    case 0x102f8103u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8103;
    case 0x102f8108u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8108;
    case 0x102f8115u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8115;
    case 0x102f811au: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f811a;
    case 0x102f811fu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f811f;
    case 0x102f8124u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8124;
    case 0x102f8129u: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8129;
    case 0x102f812eu: ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f812e;
    case 0x102f813bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f813b;
    case 0x102f8142u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8142;
    case 0x102f8147u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8147;
    case 0x102f814cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f814c;
    case 0x102f8151u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8151;
    case 0x102f815eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f815e;
    case 0x102f8166u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8166;
    case 0x102f816bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f816b;
    case 0x102f8170u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8170;
    case 0x102f8175u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8175;
    case 0x102f817au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f817a;
    case 0x102f817fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f817f;
    case 0x102f818cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f818c;
    case 0x102f8192u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8192;
    case 0x102f819fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f819f;
    case 0x102f81a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81a5;
    case 0x102f81b2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81b2;
    case 0x102f81b8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81b8;
    case 0x102f81c5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; cf = g->cf; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81c5;
    case 0x102f81f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81f4;
    case 0x102f81f8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81f8;
    case 0x102f81fbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81fb;
    case 0x102f81feu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f81fe;
    case 0x102f8202u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8202;
    case 0x102f820bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f820b;
    case 0x102f8214u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8214;
    case 0x102f821du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f821d;
    case 0x102f8224u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; of = g->of; loc_10 = rd32(sp0 - 0x10u); loc_c = rd32(sp0 - 0xcu); loc_8 = rd32(sp0 - 8u); goto E_102f8224;
    default: break;
    }
#endif

    COW_AT(102f806c)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_esi);
    wr32(sp0 - 0x2cu, in_edi);
    if (rd32(rd32(sp0 + 4u) + 0x58u) == 0u)
    {
        esi = rd32(sp0 + 4u);
        goto L_102f808b;
    }
    esi = rd32(sp0 + 4u);
    COW_AT(102f807e)
    wr32(sp0 - 0x30u, COW_IMG(0x10348accu));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), self, in_edx, 2, esi, COW_IMG(0x10348accu));
    rt_fatal(g, COW_IMG(0x102f8084u), "no way on");
L_102f808b: ;
    COW_AT(102f808b)
    if (rd32(sp0 + 0xcu) == 0xdu) goto L_102f809e;
    COW_AT(102f8091)
    wr32(sp0 - 0x30u, COW_IMG(0x10348ab8u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), self, in_edx, 2, esi, COW_IMG(0x10348ab8u));
    rt_fatal(g, COW_IMG(0x102f8097u), "no way on");
L_102f809e: ;
    COW_AT(102f809e)
    wr32(esi + 0x58u, rd32(esi + 0x58u) | 1u);
    wr32(sp0 - 0x30u, 0xdu);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    wr32(sp0 - 0x38u, esi);
    g->eax = sp0 - 0x20u;
    g->ecx = self;
    g->esp = sp0 - 0x24u;
    t1 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, in_edx, 1, 5, esi, sp0 - 0x20u, 0xdu, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x3cu, 0u);
    wr32(sp0 - 0x40u, esi);
    g->ecx = t2;
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t3, 1, 5, esi, 0u, rd32(sp0 - 0x38u), sp0 - 0x20u, 0xdu);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(sp0 - 0x44u, sp0 - 0x20u);
    g->eax = sp0 - 0x20u;
    g->ecx = t4;
    g->edx = t5;
    g->esp = sp0 - 0x40u;
    t6 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 - 0x20u);
    t7 = g->ecx;
    t8 = g->edx;
    wr32(sp0 - 0x48u, sp0 - 0x1cu);
    g->eax = sp0 - 0x1cu;
    g->ecx = t7;
    g->edx = t8;
    g->esp = sp0 - 0x44u;
    t9 = cow_cdecl(g, COW_IMG(0x102f76dau), 1, sp0 - 0x1cu);
    t10 = g->ecx;
    t11 = g->edx;
    t12 = rd8(sp0 - 0x18u);
    wr32(sp0 + 4u, t9);
    t13 = rd8(sp0 - 0x17u);
    wr32(sp0 + 0xcu, t13);
    t14 = rd8(sp0 - 0x16u);
    wr32(sp0 - 0x10u, t14);
    t15 = rd8(sp0 - 0x15u);
    wr32(sp0 - 0xcu, t15);
    t16 = rd8(sp0 - 0x14u);
    wr32(sp0 - 8u, t16);
    if (t6 == 0u)
    {
        eax = t16;
        ecx = t10;
        edx = t11;
        goto L_102f8108;
    }
    ecx = t10;
    edx = t11;
    ebx = t12;
    edi = t6;
    loc_10 = t14;
    loc_c = t15;
    loc_8 = t16;
    COW_AT(102f80f4)
    if (edi > 0x7fffffffu)
    {
        eax = 0x7fffffffu;
        goto L_102f8108;
    }
    COW_AT(102f80fd)
    if (rd32(sp0 + 4u) == 0u)
    {
        eax = 0x7fffffffu;
        goto L_102f8108;
    }
    COW_AT(102f8103)
    if (rd32(sp0 + 4u) <= 0x7fffffffu) goto L_102f8115;
    eax = 0x7fffffffu;
L_102f8108: ;
    COW_AT(102f8108)
    wr32(sp0 - 0x30u, COW_IMG(0x10348a9cu));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10348a9cu));
    rt_fatal(g, COW_IMG(0x102f810eu), "no way on");
L_102f8115: ;
    COW_AT(102f8115)
    if (ebx == 1u) goto L_102f813b;
    COW_AT(102f811a)
    if (ebx == 2u) goto L_102f813b;
    COW_AT(102f811f)
    if (ebx == 4u) goto L_102f813b;
    COW_AT(102f8124)
    if (ebx == 8u) goto L_102f813b;
    COW_AT(102f8129)
    if (ebx == 0x10u) goto L_102f813b;
    COW_AT(102f812e)
    wr32(sp0 - 0x30u, COW_IMG(0x10348a80u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10348a80u));
    rt_fatal(g, COW_IMG(0x102f8134u), "no way on");
L_102f813b: ;
    COW_AT(102f813b)
    if ((int32_t)rd32(sp0 + 0xcu) < 0)
    {
        eax = rd32(sp0 + 0xcu);
        goto L_102f8151;
    }
    eax = rd32(sp0 + 0xcu);
    COW_AT(102f8142)
    if (eax == 1u) goto L_102f8151;
    COW_AT(102f8147)
    if (eax == 5u) goto L_102f8151;
    COW_AT(102f814c)
    if ((int32_t)eax <= 6) goto L_102f815e;
L_102f8151: ;
    COW_AT(102f8151)
    wr32(sp0 - 0x30u, COW_IMG(0x10348a64u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10348a64u));
    rt_fatal(g, COW_IMG(0x102f8157u), "no way on");
L_102f815e: ;
    COW_AT(102f815e)
    if (rd32(sp0 + 0xcu) != 3u)
    {
        eax = rd32(sp0 + 0xcu);
        goto L_102f816b;
    }
    eax = rd32(sp0 + 0xcu);
    COW_AT(102f8166)
    if ((int32_t)ebx > 8) goto L_102f817f;
L_102f816b: ;
    COW_AT(102f816b)
    if (eax == 2u) goto L_102f817a;
    COW_AT(102f8170)
    if (eax == 4u) goto L_102f817a;
    COW_AT(102f8175)
    if (eax != 6u) goto L_102f818c;
L_102f817a: ;
    COW_AT(102f817a)
    if ((int32_t)ebx >= 8) goto L_102f818c;
L_102f817f: ;
    COW_AT(102f817f)
    wr32(sp0 - 0x30u, COW_IMG(0x10348a30u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10348a30u));
    rt_fatal(g, COW_IMG(0x102f8185u), "no way on");
L_102f818c: ;
    COW_AT(102f818c)
    if ((int32_t)loc_8 < 2) goto L_102f819f;
    COW_AT(102f8192)
    wr32(sp0 - 0x30u, COW_IMG(0x10348a0cu));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x10348a0cu));
    rt_fatal(g, COW_IMG(0x102f8198u), "no way on");
L_102f819f: ;
    COW_AT(102f819f)
    if (loc_10 == 0u) goto L_102f81b2;
    COW_AT(102f81a5)
    wr32(sp0 - 0x30u, COW_IMG(0x103489e8u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x103489e8u));
    rt_fatal(g, COW_IMG(0x102f81abu), "no way on");
L_102f81b2: ;
    COW_AT(102f81b2)
    if (loc_c == 0u) goto L_102f81c5;
    COW_AT(102f81b8)
    wr32(sp0 - 0x30u, COW_IMG(0x103489c8u));
    wr32(sp0 - 0x34u, esi);
    g->esi = esi;
    g->esp = sp0 - 0x2cu;
    cow_fastcall(g, COW_IMG(0x102ef234u), ecx, edx, 2, esi, COW_IMG(0x103489c8u));
    rt_fatal(g, COW_IMG(0x102f81beu), "no way on");
L_102f81c5: ;
    COW_AT(102f81c5)
    t17 = rd32(sp0 + 0xcu);
    t18 = rd32(sp0 + 4u);
    wr8(esi + 0x113u, (uint8_t)loc_8);
    wr32(esi + 0xb8u, edi);
    wr32(esi + 0xbcu, t18);
    wr8(esi + 0x117u, (uint8_t)ebx);
    wr8(esi + 0x116u, (uint8_t)t17);
    if ((uint8_t)t17 == 0u)
    {
        eax = (uint8_t)t17;
        ecx = t17;
        edx = t18;
        of = 0u;
        goto L_102f821d;
    }
    eax = (uint8_t)t17;
    ecx = t17;
    edx = t18;
    COW_AT(102f81f4)
    if (eax == 2u)
    {
        of = eax - 1u == 0x80000000u;
        eax = eax - 2u;
        goto L_102f8214;
    }
    eax = eax - 2u;
    COW_AT(102f81f8)
    if (eax == 1u)
    {
        of = eax == 0x80000000u;
        eax = eax - 1u;
        goto L_102f821d;
    }
    eax = eax - 1u;
    COW_AT(102f81fb)
    if (eax == 1u)
    {
        of = eax == 0x80000000u;
        eax = eax - 1u;
    COW_AT(102f820b)
        wr8(esi + 0x11au, 2u);
    }
    else
    {
        eax = eax - 1u;
    COW_AT(102f81fe)
        if (eax != 2u)
        {
            of = eax - 1u == 0x80000000u;
            eax = eax - 2u;
        }
        else
        {
            of = eax - 1u == 0x80000000u;
            eax = eax - 2u;
    COW_AT(102f8202)
            wr8(esi + 0x11au, 4u);
        }
    }
L_102f8224: ;
    COW_AT(102f8224)
    wr32(sp0 - 0x30u, loc_c);
    t19 = rd8(esi + 0x11au);
    eax = (eax & 0xffffff00u) | t19;
    cf = 0u;
    { /* imul bl */ { int32_t p = (int32_t)(int8_t)eax * (int32_t)(int8_t)(uint8_t)ebx; eax = (eax & 0xFFFF0000u) | ((uint32_t)p & 0xFFFFu); cf = of = p != (int32_t)(int8_t)p; } }
    wr32(sp0 - 0x34u, loc_10);
    wr8(esi + 0x119u, (uint8_t)eax);
    wr32(sp0 - 0x38u, loc_8);
    wr32(sp0 - 0x3cu, ecx);
    wr32(sp0 - 0x40u, ebx);
    wr32(sp0 - 0x44u, edx);
    wr32(sp0 - 0x48u, edi);
    wr32(sp0 - 0x4cu, arg2);
    wr32(sp0 - 0x50u, esi);
    t20 = ((uint8_t)eax * edi + 7u) >> 3u;
    wr32(esi + 0xc8u, t20);
    g->esp = sp0 - 0x2cu;
    cow_call_regs(g, COW_IMG(0x102f1e1cu), g->eax, ecx, edx, 1, 9, esi, arg2, edi, edx, ebx, ecx, loc_8, loc_10, loc_c);
    t21 = g->edx;
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x28u);
    g->edi = rd32(sp0 - 0x2cu);
    g->ebp = rd32(sp0 - 4u);
    g->edx = t21;
    return;
L_102f8214: ;
    COW_AT(102f8214)
    wr8(esi + 0x11au, 3u);
    goto L_102f8224;
L_102f821d: ;
    COW_AT(102f821d)
    wr8(esi + 0x11au, 1u);
    goto L_102f8224;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f806c(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f807eu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f808bu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f8091u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t self;
        uint32_t in_edx;
        unsigned of;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f809eu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t edi;
        uint32_t esi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        unsigned of;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        in_edi = rd32(sp0 - 0x2cu);
        in_esi = rd32(sp0 - 0x28u);
        in_ebx = rd32(sp0 - 0x24u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f80f4u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f80fdu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8103u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8108u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8115u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f811au:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f811fu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8124u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8129u:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f812eu:
    {
        unsigned cf;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->eax = 0x7fffffffu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f813bu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8142u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8147u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f814cu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8151u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f815eu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8166u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f816bu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8170u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8175u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f817au:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f817fu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f818cu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8192u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f819fu:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81a5u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81b2u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81b8u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81c5u:
    {
        unsigned cf;
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        cf = g->cf;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81f4u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81f8u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81fbu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f81feu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8202u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f820bu:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8214u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f821du:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    case 0x102f8224u:
    {
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        uint32_t loc_10;
        uint32_t loc_8;
        uint32_t loc_c;
        unsigned of;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        of = g->of;
        loc_10 = rd32(sp0 - 0x10u);
        loc_c = rd32(sp0 - 0xcu);
        loc_8 = rd32(sp0 - 8u);
        g->esp = sp0 - 0x2cu;
        g->ebp = sp0 - 4u;
        g->cf = (uint8_t)(0u);
        wr32(sp0 - 0x48u, sp0 - 0x1cu);
        wr32(sp0 - 0x44u, sp0 - 0x20u);
        wr32(sp0 - 0x34u, sp0 - 0x20u);
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_102f806c(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f806c(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
