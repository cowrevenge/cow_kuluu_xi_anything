/* f_0x101273c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=3 */
uint32_t cow_fn_101273c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t arg1 = rd32(sp0 + 0x4u);
    const uint32_t arg2 = rd32(sp0 + 0x8u);
    const uint32_t arg3 = rd32(sp0 + 0xcu);
    cow_frame(g, sp0, 328u);
#ifdef COW_BLOCK_ENTRY
    switch (cow_entry_at)
    {
    case 0x10127407u: ecx = g->ecx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); g->ebp = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_10127407;
    case 0x1012740du: ecx = g->ecx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); g->ebp = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_1012740d;
    case 0x10127411u: ecx = g->ecx; in_ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); g->ebp = rd32(sp0 - 0x128u); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_10127411;
    case 0x10127413u: ecx = g->ecx; ebx = g->ebx; self = g->esi; edi = g->edi; in_edi = rd32(sp0 - 0x130u); in_esi = rd32(sp0 - 0x12cu); in_ebp = rd32(sp0 - 0x128u); in_ebx = rd32(sp0 - 0x124u); g->ebp = rd32(sp0 - 0x128u); g->ebx = rd32(sp0 - 0x124u); g->edi = rd32(sp0 - 0x130u); g->esi = rd32(sp0 - 0x12cu); goto E_10127413;
    case 0x10127428u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127428;
    case 0x10127454u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127454;
    case 0x10127463u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127463;
    case 0x10127469u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127469;
    case 0x10127475u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127475;
    case 0x10127481u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127481;
    case 0x1012748eu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012748e;
    case 0x10127497u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127497;
    case 0x1012749du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012749d;
    case 0x101274a9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274a9;
    case 0x101274b3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274b3;
    case 0x101274c3u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101274c3;
    case 0x101274cbu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274cb;
    case 0x101274d1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274d1;
    case 0x101274ddu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274dd;
    case 0x101274e9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274e9;
    case 0x101274f6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101274f6;
    case 0x101274ffu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101274ff;
    case 0x10127505u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127505;
    case 0x10127511u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127511;
    case 0x1012751du: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012751d;
    case 0x1012752au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012752a;
    case 0x10127533u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127533;
    case 0x10127539u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127539;
    case 0x10127545u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127545;
    case 0x1012754fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012754f;
    case 0x1012755cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012755c;
    case 0x10127565u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127565;
    case 0x1012756bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012756b;
    case 0x10127577u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127577;
    case 0x10127583u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127583;
    case 0x10127592u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127592;
    case 0x1012759bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012759b;
    case 0x101275a1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275a1;
    case 0x101275adu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275ad;
    case 0x101275b9u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275b9;
    case 0x101275c6u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101275c6;
    case 0x101275cfu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101275cf;
    case 0x101275d8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275d8;
    case 0x101275e5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101275e5;
    case 0x101275eeu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275ee;
    case 0x101275f4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101275f4;
    case 0x10127600u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127600;
    case 0x1012760au: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_1012760a;
    case 0x10127618u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127618;
    case 0x10127621u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127621;
    case 0x1012762bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012762b;
    case 0x1012763bu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012763b;
    case 0x1012764cu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012764c;
    case 0x10127656u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127656;
    case 0x10127666u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127666;
    case 0x10127677u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127677;
    case 0x1012767fu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_1012767f;
    case 0x10127693u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127693;
    case 0x10127699u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_10127699;
    case 0x101276a5u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276a5;
    case 0x101276b1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276b1;
    case 0x101276bcu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101276bc;
    case 0x101276c2u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276c2;
    case 0x101276c8u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276c8;
    case 0x101276d4u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276d4;
    case 0x101276e0u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; self = g->esi; edi = g->edi; goto E_101276e0;
    case 0x101276ebu: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101276eb;
    case 0x101276f1u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_101276f1;
    case 0x10127706u: eax = g->eax; ecx = g->ecx; edx = g->edx; ebx = g->ebx; esi = g->esi; edi = g->edi; goto E_10127706;
    default: break;
    }
#endif

    COW_AT(101273c0)
    wr32(sp0 - 0x124u, in_ebx);
    wr32(sp0 - 0x128u, in_ebp);
    wr32(sp0 - 0x12cu, in_esi);
    wr32(sp0 - 0x130u, in_edi);
    t1 = rd32(self + 0xcu);
    wr32(arg2 + 8u, t1);
    wr16(arg2, rd16(arg3));
    t2 = rd8(arg3 + 2u);
    wr8(arg2 + 0x13u, 1u);
    wr8(arg2 + 2u, (uint8_t)t2);
    t3 = rd8(arg2);
    wr32(arg2 + 0x38u, 0u);
    wr8(arg2 + 0x15u, 0u);
    if ((uint8_t)t3 == 0xceu)
    {
        ecx = ((arg3 | t2) & 0xffffff00u) | t3;
        goto L_10127411;
    }
    ecx = ((arg3 | t2) & 0xffffff00u) | t3;
    COW_AT(10127407)
    if ((rd8(arg2 + 1u) & 0x40u) != 0u) goto L_10127411;
    COW_AT(1012740d)
    ebx = in_ebx & 0xffffff00u;
L_10127413: ;
    COW_AT(10127413)
    t4 = (arg2 & 0xffff0000u) | rd8(arg3);
    wr32(sp0 - 0x134u, t4);
    g->eax = arg3;
    g->ecx = ecx;
    g->esp = sp0 - 0x130u;
    t5 = cow_call_regs(g, COW_IMG(0x10129cd0u), g->eax, g->ecx, t4, 1, 1, t4);
    t6 = g->ecx;
    t7 = g->edx;
    if (t5 == 0u)
    {
        eax = t5;
        ecx = t6;
        edx = t7;
        goto L_101276f1;
    }
    eax = t5;
    ecx = t6;
    edx = t7;
    COW_AT(10127428)
    t8 = rd8(eax + 3u);
    wr8(arg2 + 0x14u, (uint8_t)t8);
    t9 = (edx & 0xffff0000u) | rd8(eax + 2u);
    wr32(sp0 - 0x134u, t9);
    g->edx = t9;
    g->esp = sp0 - 0x130u;
    t10 = cow_call_regs(g, COW_IMG(0x10129d00u), eax, g->ecx, g->edx, 1, 1, t9);
    t11 = g->edx;
    wr32(arg2 + 4u, t10);
    t12 = rd8(arg2);
    wr8(arg2 + 0x12u, 0u);
    if (t12 - 1u > 0xddu) goto L_10127706;
    eax = t12 - 1u;
    edx = t11;
    COW_AT(10127454)
    t13 = rd32(COW_IMG(0x10127748u) + rd8(COW_IMG(0x10127788u) + eax) * 4u);
    switch (t13 - RD)
    {
    case 0x10127463u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127463;
    case 0x10127497u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127497;
    case 0x101274cbu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101274cb;
    case 0x101274ffu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101274ff;
    case 0x10127533u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127533;
    case 0x10127565u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127565;
    case 0x1012759bu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_1012759b;
    case 0x101275cfu: goto L_101275cf;
    case 0x101275d8u: goto L_101275d8;
    case 0x101275eeu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101275ee;
    case 0x10127621u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127621;
    case 0x1012764cu: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_1012764c;
    case 0x10127677u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127677;
    case 0x10127693u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_10127693;
    case 0x101276c2u: ecx = rd8(COW_IMG(0x10127788u) + eax); goto L_101276c2;
    case 0x10127706u: goto L_10127706;
    default: rt_fatal(g, COW_IMG(0x1012745cu), "switch");
    }
    return 0;
L_10127411: ;
    COW_AT(10127411)
    ebx = (in_ebx & 0xffffff00u) | 1u;
    goto L_10127413;
L_10127463: ;
    COW_AT(10127463)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(10127469)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t37 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t38 = g->edx;
        wr32(arg2 + 0x38u, t37);
        if ((uint8_t)ebx == 0u)
        {
            edx = t38;
    COW_AT(10127475)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(10127481)
    if (rd8(self + 0x6404cu) & 1u)
    {
    COW_AT(1012748e)
        wr8(arg2 + 0x12u, 2u);
    }
L_10127706: ;
    COW_AT(10127706)
    wr32(sp0 - 0x134u, 0x20u);
    wr32(sp0 - 0x138u, sp0 - 0x120u);
    wr32(sp0 - 0x13cu, 0x80u);
    wr32(sp0 - 0x140u, sp0 - 0x100u);
    wr32(sp0 - 0x144u, arg1);
    g->eax = sp0 - 0x120u;
    g->edx = arg1;
    g->esp = sp0 - 0x130u;
    t40 = cow_cdecl(g, COW_IMG(0x101284f0u), 5, arg1, sp0 - 0x100u, 0x80u, sp0 - 0x120u, 0x20u);
    t41 = g->edx;
    esi = sp0 - 0x120u;
    edi = arg2 + 0x18u;
    ecx = 8u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t42 = rd32(sp0 - 0x130u);
    wr8(arg2 + 0x37u, 0u);
    g->ebx = rd32(sp0 - 0x124u);
    g->esi = rd32(sp0 - 0x12cu);
    g->edi = t42;
    g->ebp = rd32(sp0 - 0x128u);
    g->edx = t41;
    return t40;
L_10127497: ;
    COW_AT(10127497)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(1012749d)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t34 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t35 = g->ecx;
        wr32(arg2 + 0x38u, t34);
        if ((uint8_t)ebx != 0u)
        {
            eax = t34;
            ecx = t35;
        }
        else
        {
            eax = t34;
            ecx = t35;
    COW_AT(101274a9)
            t36 = rd8(arg2 + 0x15u);
            wr8(arg2 + 0x15u, (t36 & 0xf1u) | 1u);
            eax = (eax & 0xffffff00u) | (t36 & 0xf1u) | 1u;
        }
    }
    COW_AT(101274b3)
    if ((rd8(self + 0x6404cu) & 2u) != 0u)
    {
        eax = (eax & 0xffffff00u) | 2u;
    COW_AT(101274c3)
        wr8(arg2 + 0x12u, (uint8_t)eax);
    }
    goto L_10127706;
L_101274cb: ;
    COW_AT(101274cb)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(101274d1)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t32 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t33 = g->ecx;
        wr32(arg2 + 0x38u, t32);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t33;
    COW_AT(101274dd)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(101274e9)
    if ((rd8(self + 0x6404cu) & 4u) != 0u)
    {
    COW_AT(101274f6)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101274ff: ;
    COW_AT(101274ff)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(10127505)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t30 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t31 = g->edx;
        wr32(arg2 + 0x38u, t30);
        if ((uint8_t)ebx == 0u)
        {
            edx = t31;
    COW_AT(10127511)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(1012751d)
    if ((rd8(self + 0x6404cu) & 8u) != 0u)
    {
    COW_AT(1012752a)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127533: ;
    COW_AT(10127533)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(10127539)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t29 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t29);
        if ((uint8_t)ebx == 0u)
        {
            eax = t29;
    COW_AT(10127545)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(1012754f)
    if ((rd8(self + 0x6404cu) & 0x10u) != 0u)
    {
    COW_AT(1012755c)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127565: ;
    COW_AT(10127565)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(1012756b)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t27 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t28 = g->ecx;
        wr32(arg2 + 0x38u, t27);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t28;
    COW_AT(10127577)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(10127583)
    if (rd32(self + 0x6404cu) >> 8u & 1u)
    {
    COW_AT(10127592)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_1012759b: ;
    COW_AT(1012759b)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(101275a1)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t25 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t26 = g->edx;
        wr32(arg2 + 0x38u, t25);
        if ((uint8_t)ebx == 0u)
        {
            edx = t26;
    COW_AT(101275ad)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(101275b9)
    if ((rd8(self + 0x6404cu) & 0x20u) != 0u)
    {
    COW_AT(101275c6)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101275cf: ;
    COW_AT(101275cf)
    wr8(arg2 + 0x12u, 1u);
    goto L_10127706;
L_101275d8: ;
    COW_AT(101275d8)
    if ((rd8(self + 0x6404cu) & 0x40u) != 0u)
    {
    COW_AT(101275e5)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101275ee: ;
    COW_AT(101275ee)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(101275f4)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t23 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t23);
        if ((uint8_t)ebx != 0u)
        {
            eax = t23;
        }
        else
        {
            eax = t23;
    COW_AT(10127600)
            t24 = rd8(arg2 + 0x15u);
            wr8(arg2 + 0x15u, (t24 & 0xf1u) | 1u);
            eax = (eax & 0xffffff00u) | (t24 & 0xf1u) | 1u;
        }
    }
    COW_AT(1012760a)
    if ((int8_t)rd8(self + 0x6404cu) < 0)
    {
    COW_AT(10127618)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_10127621: ;
    COW_AT(10127621)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(1012762b)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t21 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t22 = g->ecx;
        wr32(arg2 + 0x38u, t21);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t22;
    COW_AT(1012763b)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    goto L_10127706;
L_1012764c: ;
    COW_AT(1012764c)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(10127656)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t19 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t20 = g->edx;
        wr32(arg2 + 0x38u, t19);
        if ((uint8_t)ebx == 0u)
        {
            edx = t20;
    COW_AT(10127666)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    goto L_10127706;
L_10127677: ;
    COW_AT(10127677)
    if ((uint8_t)ebx == 0u)
    {
    COW_AT(1012767f)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t18 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        wr32(arg2 + 0x38u, t18);
        wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
    }
    goto L_10127706;
L_10127693: ;
    COW_AT(10127693)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(10127699)
        g->eax = eax;
        g->esp = sp0 - 0x130u;
        t16 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t17 = g->ecx;
        wr32(arg2 + 0x38u, t16);
        if ((uint8_t)ebx == 0u)
        {
            ecx = t17;
    COW_AT(101276a5)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(101276b1)
    if ((rd32(self + 0x6404cu) >> 8u & 2u) != 0u)
    {
    COW_AT(101276bc)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101276c2: ;
    COW_AT(101276c2)
    if ((rd8(arg2 + 1u) & 0x1fu) == 0u)
    {
    COW_AT(101276c8)
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x130u;
        t14 = cow_thiscall(g, COW_IMG(0x100dbe10u), ecx, 0);
        t15 = g->edx;
        wr32(arg2 + 0x38u, t14);
        if ((uint8_t)ebx == 0u)
        {
            edx = t15;
    COW_AT(101276d4)
            wr8(arg2 + 0x15u, (rd8(arg2 + 0x15u) & 0xf1u) | 1u);
        }
    }
    COW_AT(101276e0)
    if ((rd32(self + 0x6404cu) >> 8u & 4u) != 0u)
    {
    COW_AT(101276eb)
        wr8(arg2 + 0x12u, 2u);
    }
    goto L_10127706;
L_101276f1: ;
    COW_AT(101276f1)
    wr32(sp0 - 0x134u, 0u);
    wr8(arg2 + 0x14u, 0u);
    g->esp = sp0 - 0x130u;
    t39 = cow_call_regs(g, COW_IMG(0x10129d00u), eax, g->ecx, g->edx, 1, 1, 0u);
    wr32(arg2 + 4u, t39);
    wr8(arg2 + 0x12u, 0u);
    goto L_10127706;
}

#ifdef COW_BLOCK_ENTRY
/* BLOCK ENTRY (judge 14): the guest made to agree with what the unit assumes at a block, before both
   sides start there (tools/cow/cowdiff.c, --pin-entry). 0: not a block the unit can start at. */
int cow_entry_fix_101273c0(Guest* g, uint32_t at)
{
    const uint32_t sp0 = g->esp;
    switch (at)
    {
    case 0x10127407u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x130u;
        g->eax = arg3;
        g->edx = arg2;
        g->ebp = arg2;
        wr32(sp0 - 0x124u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x1012740du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x130u;
        g->eax = arg3;
        g->edx = arg2;
        g->ebp = arg2;
        wr32(sp0 - 0x124u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10127411u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        in_ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        g->esp = sp0 - 0x130u;
        g->eax = arg3;
        g->edx = arg2;
        g->ebp = arg2;
        wr32(sp0 - 0x124u, in_ebx);
        (void)sp0;
        return 1;
    }
    case 0x10127413u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        const uint32_t arg3 = rd32(sp0 + 0xcu);
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t in_ebp;
        uint32_t in_ebx;
        uint32_t self;
        uint32_t in_edi;
        uint32_t in_esi;
        ecx = g->ecx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        in_edi = rd32(sp0 - 0x130u);
        in_esi = rd32(sp0 - 0x12cu);
        in_ebp = rd32(sp0 - 0x128u);
        in_ebx = rd32(sp0 - 0x124u);
        g->esp = sp0 - 0x130u;
        g->eax = arg3;
        g->edx = arg2;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127428u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127454u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127463u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127469u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127475u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127481u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012748eu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127497u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012749du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274a9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274b3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274c3u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274cbu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274d1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274ddu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274e9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274f6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101274ffu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127505u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127511u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012751du:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012752au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127533u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127539u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127545u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012754fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012755cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127565u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012756bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127577u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127583u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127592u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012759bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275a1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275adu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275b9u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275c6u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275cfu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275d8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275e5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275eeu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101275f4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127600u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012760au:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127618u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127621u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012762bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012763bu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012764cu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127656u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127666u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127677u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x1012767fu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127693u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127699u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276a5u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276b1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276bcu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276c2u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276c8u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276d4u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276e0u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t self;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        self = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276ebu:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x101276f1u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    case 0x10127706u:
    {
        const uint32_t arg2 = rd32(sp0 + 0x8u);
        uint32_t eax;
        uint32_t ebx;
        uint32_t ecx;
        uint32_t edi;
        uint32_t edx;
        uint32_t esi;
        eax = g->eax;
        ecx = g->ecx;
        edx = g->edx;
        ebx = g->ebx;
        esi = g->esi;
        edi = g->edi;
        g->esp = sp0 - 0x130u;
        g->ebp = arg2;
        (void)sp0;
        return 1;
    }
    }
    return 0;
}
#endif

/* COW_ADAPTER BEGIN */
void cow_adapter_101273c0(Guest* g)
{
    const uint32_t sp0 = COW_ENTRY_SP0(g);
    const uint32_t r = cow_fn_101273c0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
