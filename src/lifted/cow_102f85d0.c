/* f_0x102f85d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
void cow_fn_102f85d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_18;
    uint32_t loc_1c;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 48u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x102f85e4u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; goto E_102f85e4;
    case 0x102f85f1u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f85f1;
    case 0x102f8600u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8600;
    case 0x102f8609u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8609;
    case 0x102f8616u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8616;
    case 0x102f861au: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f861a;
    case 0x102f862bu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f862b;
    case 0x102f862fu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f862f;
    case 0x102f8636u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f8636;
    case 0x102f863au: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f863a;
    case 0x102f8640u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f8640;
    case 0x102f8645u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = g->edi; loc_18 = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->esi = rd32(sp0 - 0x14u); goto E_102f8645;
    case 0x102f865cu: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f865c;
    case 0x102f8667u: eax = g->eax; self = g->ecx; in_edx = g->edx; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8667;
    case 0x102f8678u: eax = g->eax; ecx = g->ecx; edx = g->edx; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8678;
    case 0x102f86a0u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f86a0;
    case 0x102f86a4u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f86a4;
    case 0x102f86aau: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f86aa;
    case 0x102f86fdu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f86fd;
    case 0x102f8701u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8701;
    case 0x102f8707u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8707;
    case 0x102f870eu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f870e;
    case 0x102f8733u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f8733;
    case 0x102f873cu: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f873c;
    case 0x102f874au: eax = g->eax; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f874a;
    case 0x102f876bu: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f876b;
    case 0x102f8770u: eax = g->eax; self = g->ecx; in_edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); in_edi = rd32(sp0 - 0x18u); in_esi = rd32(sp0 - 0x14u); in_ebx = rd32(sp0 - 0x10u); in_ebp = rd32(sp0 - 4u); g->ebp = rd32(sp0 - 4u); g->ebx = rd32(sp0 - 0x10u); g->edi = rd32(sp0 - 0x18u); g->esi = rd32(sp0 - 0x14u); goto E_102f8770;
    case 0x102f8779u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f8779;
    case 0x102f8782u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f8782;
    case 0x102f8783u: eax = g->eax; ecx = g->ecx; edx = g->edx; edi = g->edi; loc_1c = rd32(sp0 - 0x1cu); goto E_102f8783;
    default: break;
    }
#endif

    COW_AT(102f85d0)
    wr32(sp0 - 4u, in_ebp);
    wr32(sp0 - 8u, self);
    wr32(sp0 - 0xcu, self);
    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_esi);
    if (rd32(arg1 + 0x58u) & 1u)
    {
        eax = rd32(arg1 + 0x58u);
        goto L_102f862b;
    }
    eax = rd32(arg1 + 0x58u);
    COW_AT(102f85e4)
    wr32(sp0 - 0x18u, COW_IMG(0x10348dacu));
    wr32(sp0 - 0x1cu, arg1);
    g->esi = arg1;
    g->esp = sp0 - 0x14u;
    cow_fastcall(g, COW_IMG(0x102ef234u), self, in_edx, 2, arg1, COW_IMG(0x10348dacu));
    rt_fatal(g, COW_IMG(0x102f85eau), "no way on");
L_102f85f1: ;
    COW_AT(102f85f1)
    wr32(sp0 - 0x18u, in_edi);
    if (rd8(arg1 + 0x116u) != 3u)
    {
        eax = (eax & 0xffffff00u) | rd8(arg1 + 0x116u);
        goto L_102f86a0;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1 + 0x116u);
    COW_AT(102f8600)
    if ((rd8(arg1 + 0x58u) & 2u) != 0u) goto L_102f865c;
    COW_AT(102f8609)
    wr32(sp0 - 0x1cu, COW_IMG(0x10348d90u));
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0x18u;
    t5 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348d90u));
    t6 = g->edx;
    eax = t5;
    ecx = COW_IMG(0x10348d90u);
    edx = t6;
L_102f8616: ;
    COW_AT(102f8616)
    if (arg3 != 0u) goto L_102f8678;
    COW_AT(102f861a)
    wr32(sp0 - 0x1cu, COW_IMG(0x10348d78u));
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->esp = sp0 - 0x18u;
    t10 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, edx, 1, 2, arg1, COW_IMG(0x10348d78u));
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x24u, arg3);
    eax = t10;
    ecx = t11;
    edx = t12;
    loc_1c = COW_IMG(0x10348d78u);
L_102f8779: ;
    COW_AT(102f8779)
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x14u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, arg3, rd32(sp0 - 0x20u), loc_1c, rd32(sp0 - 0x18u));
    t34 = g->edx;
    edx = t34;
L_102f8782: ;
    COW_AT(102f8782)
    edi = rd32(sp0 - 0x18u);
L_102f8783: ;
    COW_AT(102f8783)
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x14u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return;
L_102f862b: ;
    COW_AT(102f862b)
    if ((eax & 4u) == 0u) goto L_102f8636;
    COW_AT(102f862f)
    wr32(sp0 - 0x18u, COW_IMG(0x10348d60u));
    loc_18 = COW_IMG(0x10348d60u);
L_102f8645: ;
    COW_AT(102f8645)
    wr32(sp0 - 0x1cu, arg1);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x14u;
    t1 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, loc_18);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x20u, arg3);
    wr32(sp0 - 0x24u, arg1);
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, t3, 1, 5, arg1, arg3, arg1, rd32(sp0 - 0x18u), in_esi);
    t4 = g->edx;
    edx = t4;
    edi = in_edi;
    goto L_102f8783;
L_102f8636: ;
    COW_AT(102f8636)
    if (arg2 == 0u) goto L_102f85f1;
    COW_AT(102f863a)
    if ((rd8(arg2 + 8u) & 0x10u) == 0u) goto L_102f85f1;
    COW_AT(102f8640)
    wr32(sp0 - 0x18u, COW_IMG(0x10348d48u));
    loc_18 = COW_IMG(0x10348d48u);
    goto L_102f8645;
L_102f865c: ;
    COW_AT(102f865c)
    if (arg3 <= rd16(arg1 + 0x108u))
    {
        eax = rd16(arg1 + 0x108u);
        ecx = self;
        edx = in_edx;
        goto L_102f8616;
    }
    eax = rd16(arg1 + 0x108u);
    COW_AT(102f8667)
    wr32(sp0 - 0x1cu, COW_IMG(0x10348d2cu));
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t7 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, COW_IMG(0x10348d2cu));
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x24u, arg3);
    eax = t7;
    ecx = t8;
    edx = t9;
    loc_1c = COW_IMG(0x10348d2cu);
    goto L_102f8779;
L_102f8678: ;
    COW_AT(102f8678)
    wr32(sp0 - 0x1cu, arg3);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t13 = cow_cdecl(g, COW_IMG(0x102f7637u), 2, arg1, arg3);
    t14 = g->ecx;
    t15 = g->edx;
    wr8(arg1 + 0x5du, rd8(arg1 + 0x5du) | 0x20u);
    wr32(sp0 - 0x24u, arg3);
    wr32(sp0 - 0x28u, t13);
    wr32(sp0 - 0x2cu, arg1);
    wr32(arg1 + 0x15cu, t13);
    g->ecx = t14;
    t16 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, t15, 1, 5, arg1, t13, arg3, arg1, arg3);
    t17 = g->ecx;
    t18 = g->edx;
    wr16(arg1 + 0x10au, (uint16_t)arg3);
    eax = t16;
    ecx = t17;
    edx = t18;
L_102f873c: ;
    COW_AT(102f873c)
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->esp = sp0 - 0xcu;
    t26 = cow_call_regs(g, COW_IMG(0x102f7fe0u), g->eax, g->ecx, edx, 1, 5, arg1, 0u, rd32(sp0 - 0x18u), rd32(sp0 - 0x14u), rd32(sp0 - 0x10u));
    t27 = g->edx;
    if (t26 != 0u)
    {
        edx = t27;
    }
    else
    {
        edx = t27;
    COW_AT(102f874a)
        wr32(sp0 - 0x1cu, arg1 + 0x160u);
        t28 = rd16(arg1 + 0x10au);
        wr32(sp0 - 0x20u, t28);
        t29 = rd32(arg1 + 0x15cu);
        wr32(sp0 - 0x24u, t29);
        wr32(sp0 - 0x28u, arg2);
        wr32(sp0 - 0x2cu, arg1);
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x102f1f35u), 5, arg1, arg2, t29, t28, arg1 + 0x160u);
        t30 = g->edx;
        edx = t30;
    }
    goto L_102f8782;
L_102f86a0: ;
    COW_AT(102f86a0)
    if ((uint8_t)eax != 2u) goto L_102f86fd;
    COW_AT(102f86a4)
    if (arg3 != 6u) goto L_102f8707;
    COW_AT(102f86aa)
    wr32(sp0 - 0x1cu, 6u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t19 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, in_edx, 1, 5, arg1, sp0 - 0xcu, 6u, in_edi, in_esi);
    t20 = g->ecx;
    t21 = g->edx;
    wr16(arg1 + 0x162u, (uint16_t)(((t19 & 0xffff0000u) | (uint8_t)self) * 0x100u + ((t20 & 0xffff0000u) | (uint8_t)(self >> 8u))));
    wr16(arg1 + 0x164u, (uint16_t)(((t20 & 0xffff0000u) | self >> 0x18u) + ((((t19 & 0xffff0000u) | (uint8_t)self) * 0x100u + ((t20 & 0xffff0000u) | (uint8_t)(self >> 8u)) & 0xffff0000u) | (uint8_t)(self >> 0x10u)) * 0x100u));
    t22 = ((t20 & 0xffff0000u) | (uint8_t)(self >> 8u)) + ((((t20 & 0xffff0000u) | self >> 0x18u) + ((((t19 & 0xffff0000u) | (uint8_t)self) * 0x100u + ((t20 & 0xffff0000u) | (uint8_t)(self >> 8u)) & 0xffff0000u) | (uint8_t)(self >> 0x10u)) * 0x100u & 0xffff0000u) | (uint8_t)self) * 0x100u;
    wr16(arg1 + 0x166u, (uint16_t)t22);
    eax = t22;
    ecx = (t20 & 0xffff0000u) | (uint8_t)(self >> 8u);
    edx = t21;
L_102f8733: ;
    COW_AT(102f8733)
    wr16(arg1 + 0x10au, 1u);
    goto L_102f873c;
L_102f86fd: ;
    COW_AT(102f86fd)
    if ((uint8_t)eax != 0u) goto L_102f876b;
    COW_AT(102f8701)
    if (arg3 == 2u) goto L_102f870e;
L_102f8707: ;
    COW_AT(102f8707)
    wr32(sp0 - 0x1cu, COW_IMG(0x10348d2cu));
    loc_1c = COW_IMG(0x10348d2cu);
L_102f8770: ;
    COW_AT(102f8770)
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->ecx = self;
    g->esp = sp0 - 0x18u;
    t31 = cow_call_regs(g, COW_IMG(0x102ef252u), g->eax, g->ecx, in_edx, 1, 2, arg1, loc_1c);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0x24u, arg3);
    eax = t31;
    ecx = t32;
    edx = t33;
    loc_1c = rd32(sp0 - 0x1cu);
    goto L_102f8779;
L_102f870e: ;
    COW_AT(102f870e)
    wr32(sp0 - 0x1cu, 2u);
    wr32(sp0 - 0x20u, sp0 - 0xcu);
    wr32(sp0 - 0x24u, arg1);
    g->eax = sp0 - 0xcu;
    g->ecx = self;
    g->esp = sp0 - 0x10u;
    t23 = cow_call_regs(g, COW_IMG(0x102f7710u), g->eax, g->ecx, in_edx, 1, 5, arg1, sp0 - 0xcu, 2u, in_edi, in_esi);
    t24 = g->ecx;
    t25 = g->edx;
    wr16(arg1 + 0x168u, (uint16_t)(((t23 & 0xffff0000u) | (uint8_t)self) * 0x100u + ((t24 & 0xffff0000u) | (uint8_t)(self >> 8u))));
    eax = ((t23 & 0xffff0000u) | (uint8_t)self) * 0x100u + ((t24 & 0xffff0000u) | (uint8_t)(self >> 8u));
    ecx = (t24 & 0xffff0000u) | (uint8_t)(self >> 8u);
    edx = t25;
    goto L_102f8733;
L_102f876b: ;
    COW_AT(102f876b)
    wr32(sp0 - 0x1cu, COW_IMG(0x10348d00u));
    loc_1c = COW_IMG(0x10348d00u);
    goto L_102f8770;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_102f85d0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x102f85e4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t self;
        uint32_t in_edx;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f85f1u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f8600u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8609u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f8616u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f861au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f862bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f862fu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8636u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f863au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f8640u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x14u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8645u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_18;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = g->edi;
        loc_18 = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f865cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f8667u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f8678u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edx;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t in_edi;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        g->edi = arg3;
        (void)sp0;
        return 1;
    }
    case 0x102f86a0u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f86a4u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f86aau:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        wr32(sp0 - 8u, self);
        (void)sp0;
        return 1;
    }
    case 0x102f86fdu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102f8701u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102f8707u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f870eu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0xcu, self);
        (void)sp0;
        return 1;
    }
    case 0x102f8733u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x20u, sp0 - 0xcu);
        (void)sp0;
        return 1;
    }
    case 0x102f873cu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f874au:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ecx = 0u;
        g->ebx = arg2;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f876bu:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8770u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        uint32_t eax;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_edx;
        uint32_t in_esi;
        uint32_t loc_1c;
        eax = g->eax;
        self = g->ecx;
        in_edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        in_edi = rd32(sp0 - 0x18u);
        in_esi = rd32(sp0 - 0x14u);
        in_ebx = rd32(sp0 - 0x10u);
        in_ebp = rd32(sp0 - 4u);
        g->esp = sp0 - 0x1cu;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        (void)sp0;
        return 1;
    }
    case 0x102f8779u:
    {
        const uint32_t arg1 = rd32(sp0 + 0x4u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x24u;
        g->ebp = sp0 - 4u;
        g->esi = arg1;
        wr32(sp0 - 0x24u, arg3);
        (void)sp0;
        return 1;
    }
    case 0x102f8782u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
        g->esp = sp0 - 0x18u;
        g->ebp = sp0 - 4u;
        (void)sp0;
        return 1;
    }
    case 0x102f8783u:
    {
        uint32_t eax;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t loc_1c;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        edi = g->edi;
        loc_1c = rd32(sp0 - 0x1cu);
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
void cow_adapter_102f85d0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    cow_fn_102f85d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
